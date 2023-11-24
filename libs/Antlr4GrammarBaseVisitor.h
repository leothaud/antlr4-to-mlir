
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

  virtual std::any visitGrammarFile(Antlr4GrammarParser::GrammarFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRules(Antlr4GrammarParser::RulesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonTerminalRule(Antlr4GrammarParser::NonTerminalRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerminalRule(Antlr4GrammarParser::TerminalRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleBody(Antlr4GrammarParser::RuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerminalRuleBody(Antlr4GrammarParser::TerminalRuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStarOperator(Antlr4GrammarParser::StarOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusOperator(Antlr4GrammarParser::PlusOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuestionMarkOperator(Antlr4GrammarParser::QuestionMarkOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(Antlr4GrammarParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentRuleBody(Antlr4GrammarParser::ParentRuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringRuleBody(Antlr4GrammarParser::StringRuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAffectRuleBody(Antlr4GrammarParser::AffectRuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitROperand(Antlr4GrammarParser::ROperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAffectOp(Antlr4GrammarParser::AffectOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqOp(Antlr4GrammarParser::EqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusEqOp(Antlr4GrammarParser::PlusEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseRules(Antlr4GrammarParser::BaseRulesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntBaseRule(Antlr4GrammarParser::IntBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatBaseRule(Antlr4GrammarParser::FloatBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharBaseRule(Antlr4GrammarParser::CharBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringBaseRule(Antlr4GrammarParser::StringBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdBaseRule(Antlr4GrammarParser::IdBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWsBaseRule(Antlr4GrammarParser::WsBaseRuleContext *ctx) override {
    return visitChildren(ctx);
  }


};

