
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Antlr4GrammarVisitor.h"


/**
 * This class provides an empty implementation of Antlr4GrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Antlr4GrammarBaseVisitor : public Antlr4GrammarVisitor {
public:

  virtual std::any visitGrammar_file(Antlr4GrammarParser::Grammar_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLexer_rule(Antlr4GrammarParser::Lexer_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParser_rule(Antlr4GrammarParser::Parser_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRule_body(Antlr4GrammarParser::Rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDot_rule_body(Antlr4GrammarParser::Dot_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_rule_body(Antlr4GrammarParser::String_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSbracket_rule_body(Antlr4GrammarParser::Sbracket_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent_rule_body(Antlr4GrammarParser::Parent_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAffect_rule_body(Antlr4GrammarParser::Affect_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_rule_body(Antlr4GrammarParser::Postfix_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_rule_body(Antlr4GrammarParser::Id_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEof_rule_body(Antlr4GrammarParser::Eof_rule_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStar_operator(Antlr4GrammarParser::Star_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlus_operator(Antlr4GrammarParser::Plus_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuestion_mark_operator(Antlr4GrammarParser::Question_mark_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEq_operator(Antlr4GrammarParser::Eq_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlus_eq_operator(Antlr4GrammarParser::Plus_eq_operatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

