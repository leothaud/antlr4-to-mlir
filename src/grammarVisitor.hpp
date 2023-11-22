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

  virtual std::any visitBaseRules(Antlr4GrammarParser::BaseRulesContext *context) override;

  virtual std::any visitIntBaseRule(Antlr4GrammarParser::IntBaseRuleContext *context) override;

  virtual std::any visitFloatBaseRule(Antlr4GrammarParser::FloatBaseRuleContext *context) override;

  virtual std::any visitCharBaseRule(Antlr4GrammarParser::CharBaseRuleContext *context) override;

  virtual std::any visitStringBaseRule(Antlr4GrammarParser::StringBaseRuleContext *context) override;

  virtual std::any visitIdBaseRule(Antlr4GrammarParser::IdBaseRuleContext *context) override;

  virtual std::any visitWsBaseRule(Antlr4GrammarParser::WsBaseRuleContext *context) override;

  virtual std::any visitROperand(Antlr4GrammarParser::ROperandContext *context) override;
};

#endif
