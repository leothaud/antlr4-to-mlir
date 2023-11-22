#include "Antlr4GrammarVisitor.h"
#include "GrammarInfos.hpp"

#ifndef GRAMMARVISITOR_HPP__
#define GRAMMARVISITOR_HPP__

class GrammarVisitor: public Antlr4GrammarVisitor {
  GrammarInfos infos;
public:
  GrammarVisitor(){}

  std::string toDot();

  virtual std::any visitGrammarFile(Antlr4GrammarParser::GrammarFileContext *context) override;

  virtual std::any visitRules(Antlr4GrammarParser::RulesContext *context) override;

  virtual std::any visitNonTerminalRule(Antlr4GrammarParser::NonTerminalRuleContext *context) override;

  virtual std::any visitTerminalRule(Antlr4GrammarParser::TerminalRuleContext *context) override;

  virtual std::any visitRuleBody(Antlr4GrammarParser::RuleBodyContext *context) override;

  virtual std::any visitTerminalRuleBody(Antlr4GrammarParser::TerminalRuleBodyContext *context) override;

  virtual std::any visitStarOperator(Antlr4GrammarParser::StarOperatorContext *context) override;

  virtual std::any visitPlusOperator(Antlr4GrammarParser::PlusOperatorContext *context) override;

  virtual std::any visitQuestionMarkOperator(Antlr4GrammarParser::QuestionMarkOperatorContext *context) override;

  virtual std::any visitOperator(Antlr4GrammarParser::OperatorContext *context) override;

  virtual std::any visitParentRuleBody(Antlr4GrammarParser::ParentRuleBodyContext *context) override;

  virtual std::any visitStringRuleBody(Antlr4GrammarParser::StringRuleBodyContext *context) override;

  virtual std::any visitAffectRuleBody(Antlr4GrammarParser::AffectRuleBodyContext *context) override;

  virtual std::any visitAffectOp(Antlr4GrammarParser::AffectOpContext *context) override;

  virtual std::any visitEqOp(Antlr4GrammarParser::EqOpContext *context) override;

  virtual std::any visitPlusEqOp(Antlr4GrammarParser::PlusEqOpContext *context) override;
};

#endif
