//===- grammarVisitor.hpp ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Antlr4GrammarVisitor.h"
#include "GrammarInfos.hpp"

#ifndef GRAMMARVISITOR_HPP__
#define GRAMMARVISITOR_HPP__

class GrammarVisitor: public Antlr4GrammarVisitor {
  GrammarInfos infos;
public:
  GrammarVisitor(){}

  std::string toDot();
  std::string generateTypes();
  std::string generateDialect();
  std::string generatePredicates();
  std::string generateOps();
  void generateFiles(std::string path);
  void generateAntlr(std::string g4File, std::string path, std::string startRule);

  virtual std::any visitGrammar_file(Antlr4GrammarParser::Grammar_fileContext *context) override;

  virtual std::any visitLexer_rule(Antlr4GrammarParser::Lexer_ruleContext *context) override;

  virtual std::any visitParser_rule(Antlr4GrammarParser::Parser_ruleContext *context) override;

  virtual std::any visitRule_body(Antlr4GrammarParser::Rule_bodyContext *context) override;

  virtual std::any visitString_rule_body(Antlr4GrammarParser::String_rule_bodyContext *context) override;

  virtual std::any visitSbracket_rule_body(Antlr4GrammarParser::Sbracket_rule_bodyContext *context) override;

  virtual std::any visitParent_rule_body(Antlr4GrammarParser::Parent_rule_bodyContext *context) override;

  virtual std::any visitAffect_rule_body(Antlr4GrammarParser::Affect_rule_bodyContext *context) override;

  virtual std::any visitPostfix_rule_body(Antlr4GrammarParser::Postfix_rule_bodyContext *context) override;

  virtual std::any visitId_rule_body(Antlr4GrammarParser::Id_rule_bodyContext *context) override;

  virtual std::any visitDot_rule_body(Antlr4GrammarParser::Dot_rule_bodyContext *context) override;
  
  virtual std::any visitEof_rule_body(Antlr4GrammarParser::Eof_rule_bodyContext *context) override;
  
  virtual std::any visitStar_operator(Antlr4GrammarParser::Star_operatorContext *context) override;

  virtual std::any visitPlus_operator(Antlr4GrammarParser::Plus_operatorContext *context) override;

  virtual std::any visitQuestion_mark_operator(Antlr4GrammarParser::Question_mark_operatorContext *context) override;

  virtual std::any visitEq_operator(Antlr4GrammarParser::Eq_operatorContext *context) override;

  virtual std::any visitPlus_eq_operator(Antlr4GrammarParser::Plus_eq_operatorContext *context) override;

};

#endif
