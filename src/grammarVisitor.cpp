#include "grammarVisitor.hpp"

#include <iostream>

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

std::any GrammarVisitor::visitGrammarFile(Antlr4GrammarParser::GrammarFileContext *context)
{
  std::cout << "entering GrammarFile " << context << std::endl;
  this->infos.setName(context->grammarName->getText());
  for (const auto& rule: context->grammarRules)
    visitRules(rule);
  std::cout << "quiting GrammarFile " << context << std::endl;
  return true;
}

std::any GrammarVisitor::visitRules(Antlr4GrammarParser::RulesContext *context)
{
  if (context->nonTerminalRule() != 0)
    return visitNonTerminalRule(context->nonTerminalRule());
  else
    return visitTerminalRule(context->terminalRule());
}

std::any GrammarVisitor::visitNonTerminalRule(Antlr4GrammarParser::NonTerminalRuleContext *context)
{
  std::cout << "entering NonTerminalRule " << context << std::endl;
  NonTerminalGrammarRule* newRule = new NonTerminalGrammarRule();
  newRule->setName(context->name->getText());
  for (const auto& child: context->children)
    newRule->addChild(child->getText());
  this->infos.addRule(newRule);
  std::cout << "quitting NonTerminalRule " << context << std::endl;
  return true;
}

std::any GrammarVisitor::visitTerminalRule(Antlr4GrammarParser::TerminalRuleContext *context)
{
  std::cout << "entering TerminalRule " << context << std::endl;
  TerminalGrammarRule* newRule = new TerminalGrammarRule();
  newRule->setName(context->name->getText());
  newRule->setBodyElt(
    std::any_cast<std::map<std::string, TerminalRuleOptions*>>(visitRuleBody(context->body))
    );
  this->infos.addRule(newRule);
  std::cout << "quitting TerminalRule " << context << std::endl;
  return true;
}

std::any GrammarVisitor::visitRuleBody(Antlr4GrammarParser::RuleBodyContext *context)
{
  std::cout << "entering ruleBody " << context << std::endl;

  std::map<std::string, TerminalRuleOptions*> baseMap;

  for (const auto& body: context->bodies)
  {
    auto map = std::any_cast<std::map<std::string, TerminalRuleOptions*>>
      (visitTerminalRuleBody(body));
    for (const auto& elt: map)
      baseMap.emplace(elt.first, elt.second);
  }
 
  std::cout << "quitting RuleBody " << context << std::endl;
  return baseMap;
}

std::any GrammarVisitor::visitTerminalRuleBody(Antlr4GrammarParser::TerminalRuleBodyContext *context)
{
  if (context->parentRuleBody() != 0)
    return visitParentRuleBody(context->parentRuleBody());
  if (context->stringRuleBody() != 0)
  {
    std::map<std::string, TerminalRuleOptions*> resMap;
    return resMap;
  }
  if (context->affectRuleBody() != 0)
    return visitAffectRuleBody(context->affectRuleBody());
  std::cout << "entering TerminalRuleBody " << context << std::endl;
  
  auto baseMap = std::any_cast<std::map<std::string, TerminalRuleOptions*>>(
    visitTerminalRuleBody(context->body)
    );

  if (context->op->questionMarkOperator() != 0)
  {
    for (auto& elt: baseMap)
      elt.second->setOptionnal();
  }

  std::cout << "quitting TerminalRuleBody " << context << std::endl;
  return baseMap;
}

std::any GrammarVisitor::visitStarOperator(Antlr4GrammarParser::StarOperatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitPlusOperator(Antlr4GrammarParser::PlusOperatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitQuestionMarkOperator(Antlr4GrammarParser::QuestionMarkOperatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitOperator(Antlr4GrammarParser::OperatorContext *context)
{
  return false;
}

std::any GrammarVisitor::visitParentRuleBody(Antlr4GrammarParser::ParentRuleBodyContext *context)
{
  
  std::cout << "visiting parent" << std::endl;
  return visitRuleBody(context->body);
}

std::any GrammarVisitor::visitStringRuleBody(Antlr4GrammarParser::StringRuleBodyContext *context)
{
  return false;
}

std::any GrammarVisitor::visitAffectRuleBody(Antlr4GrammarParser::AffectRuleBodyContext *context)
{

  std::cout << "entering affectRuleBody " << context << std::endl;  std::string name = context->name->getText();
  std::string value = context->value->val->getText();


  TerminalRuleOptions* options = new TerminalRuleOptions(
    value,
    (context->op->plusEqOp() != 0),
    false);
  std::map<std::string, TerminalRuleOptions*> resMap;
  resMap.emplace(name, options);

  std::cout << "qutting affectRuleBody " << context << std::endl;
  return resMap;
}


std::any GrammarVisitor::visitROperand(Antlr4GrammarParser::ROperandContext *context)
{
  return false;
}

std::any GrammarVisitor::visitAffectOp(Antlr4GrammarParser::AffectOpContext *context)
{
  return false;
}

std::any GrammarVisitor::visitEqOp(Antlr4GrammarParser::EqOpContext *context)
{
  return false;
}

std::any GrammarVisitor::visitPlusEqOp(Antlr4GrammarParser::PlusEqOpContext *context)
{
  return false;
}


std::any GrammarVisitor::visitBaseRules(Antlr4GrammarParser::BaseRulesContext *context)
{
  return false;
}

std::any GrammarVisitor::visitIntBaseRule(Antlr4GrammarParser::IntBaseRuleContext *context)
{
  return false;
}

std::any GrammarVisitor::visitFloatBaseRule(Antlr4GrammarParser::FloatBaseRuleContext *context)
{
  return false;
}

std::any GrammarVisitor::visitCharBaseRule(Antlr4GrammarParser::CharBaseRuleContext *context)
{
  return false;
}

std::any GrammarVisitor::visitStringBaseRule(Antlr4GrammarParser::StringBaseRuleContext *context)
{
  return false;
}

std::any GrammarVisitor::visitIdBaseRule(Antlr4GrammarParser::IdBaseRuleContext *context)
{
  return false;
}

std::any GrammarVisitor::visitWsBaseRule(Antlr4GrammarParser::WsBaseRuleContext *context)
{
  return false;
}
