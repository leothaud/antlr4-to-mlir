//===- grammarVisitor.cpp ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "grammarVisitor.hpp"
#include "GrammarInfos.hpp"


#ifdef VERBOSE
#define DEBUG(msg) DEBUG(msg )
#else
#define DEBUG(msg)
#endif

std::string GrammarVisitor::toDot()
{
  return this->infos.toDot();
}

std::string GrammarVisitor::generateTypes()
{
  return this->infos.generateTypes();
}

std::string GrammarVisitor::generateDialect()
{
  return this->infos.generateDialect();
}

std::string GrammarVisitor::generatePredicates()
{
  return this->infos.generatePredicates();
}

std::string GrammarVisitor::generateOps()
{
  return this->infos.generateOps();
}


void GrammarVisitor::generateFiles(std::string path)
{
  this->infos.generateFiles(path);
}

void GrammarVisitor::generateAntlr(std::string g4File, std::string path, std::string startRule)
{
  this->infos.generateAntlr(g4File, path, startRule);
}





std::any GrammarVisitor::visitGrammar_file(Antlr4GrammarParser::Grammar_fileContext *context)
{
  this->infos.setName(context->grammar_name->getText());
  for (auto& rule: context->grammar_rules)
  {
    visit(rule);
  }
  
  return true;
}

std::any GrammarVisitor::visitLexer_rule(Antlr4GrammarParser::Lexer_ruleContext *context)
{
  return true;
}

std::string current_name;
GrammarRule* current_grammar_rule;
bool can_be_child;

std::any GrammarVisitor::visitParser_rule(Antlr4GrammarParser::Parser_ruleContext *context)
{
  current_name = context->name->getText();
  current_grammar_rule = new GrammarRule(&this->infos);
  current_grammar_rule->setName(current_name);
  can_be_child = true;
  for (auto& elt: context->bodies)
    visit(elt);
  return false;
}

std::any GrammarVisitor::visitRule_body(Antlr4GrammarParser::Rule_bodyContext *context)
{
  if (can_be_child)
  {
    GrammarRule* rule;
    if (context->ruleName != 0)
    {
      current_grammar_rule->addChild(context->ruleName->getText());
      this->infos.addRule(current_grammar_rule);
      rule = new GrammarRule(&this->infos);
      rule->setName(context->ruleName->getText());
    }
    else
    {
      rule = current_grammar_rule;
    }
    if (context->rule_fragment.size() == 1)
      if (Antlr4GrammarParser::Id_rule_bodyContext* childRule = dynamic_cast<Antlr4GrammarParser::Id_rule_bodyContext*>(context->rule_fragment.front()))
      {
	auto childRuleName = childRule->name->getText();
	if (childRuleName[0] == tolower(childRuleName[0]))
	{
	  rule->addChild(childRuleName);
	  this->infos.addRule(rule);
	  return true;
	}
      }
    rule->setTerminal(true);
    for (auto fragment: context->rule_fragment)
    {
      auto bodyElt = std::any_cast<std::map<std::string, TerminalRuleOptions*>>(visit(fragment));
      for (auto [k,v]: bodyElt)
	rule->addBodyElt(k,v);
    }
    this->infos.addRule(rule);
    return false;
  }
  else
  {
    std::map<std::string, TerminalRuleOptions*> res;
    for (auto& fragment: context->rule_fragment)
      for (auto& elt: std::any_cast<std::map<std::string, TerminalRuleOptions*>>(visit(fragment)))
	res.emplace(elt.first, elt.second);
    return res;
  }
}

std::any GrammarVisitor::visitString_rule_body(Antlr4GrammarParser::String_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  return res;
}

std::any GrammarVisitor::visitSbracket_rule_body(Antlr4GrammarParser::Sbracket_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  return res;
}

std::any GrammarVisitor::visitParent_rule_body(Antlr4GrammarParser::Parent_rule_bodyContext *context)
{
  bool old_can_be_child = can_be_child;
  can_be_child = false;
  std::any visited = visit(context->body);
  can_be_child = old_can_be_child;
  try
  {
    std::map<std::string, TerminalRuleOptions*> v = std::any_cast<std::map<std::string, TerminalRuleOptions*>>(visited);
    return v;
  }
  catch (const std::bad_any_cast& e)
  {
    std::map<std::string, TerminalRuleOptions*> res;
    return res;
  }
}

std::any GrammarVisitor::visitAffect_rule_body(Antlr4GrammarParser::Affect_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  TerminalRuleOptions* options = new TerminalRuleOptions(context->value->getText());
  if (Antlr4GrammarParser::Plus_eq_operatorContext* v = dynamic_cast<Antlr4GrammarParser::Plus_eq_operatorContext*>(context->op))
  {
    options->setVariadic();
  }
  res.emplace(context->varName->getText(), options);
  return res;
}

std::any GrammarVisitor::visitPostfix_rule_body(Antlr4GrammarParser::Postfix_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res = std::any_cast<std::map<std::string, TerminalRuleOptions*>>(visit(context->body));
  //for (std::pair<std::string, TerminalRuleOptions*> elt: res)
  for (auto& [k,v]: res)
    /*elt.second*/ v->setOptional();
  return res;
}

std::any GrammarVisitor::visitId_rule_body(Antlr4GrammarParser::Id_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  return res;
}

std::any GrammarVisitor::visitDot_rule_body(Antlr4GrammarParser::Dot_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  return res;
}

std::any GrammarVisitor::visitEof_rule_body(Antlr4GrammarParser::Eof_rule_bodyContext *context)
{
  std::map<std::string, TerminalRuleOptions*> res;
  return res;
}

std::any GrammarVisitor::visitStar_operator(Antlr4GrammarParser::Star_operatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitPlus_operator(Antlr4GrammarParser::Plus_operatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitQuestion_mark_operator(Antlr4GrammarParser::Question_mark_operatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitEq_operator(Antlr4GrammarParser::Eq_operatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitPlus_eq_operator(Antlr4GrammarParser::Plus_eq_operatorContext *context)
{
  return false;
}
