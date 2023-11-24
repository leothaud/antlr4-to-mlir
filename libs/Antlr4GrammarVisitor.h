
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Antlr4GrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Antlr4GrammarParser.
 */
class  Antlr4GrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Antlr4GrammarParser.
   */
    virtual std::any visitGrammarFile(Antlr4GrammarParser::GrammarFileContext *context) = 0;

    virtual std::any visitRules(Antlr4GrammarParser::RulesContext *context) = 0;

    virtual std::any visitNonTerminalRule(Antlr4GrammarParser::NonTerminalRuleContext *context) = 0;

    virtual std::any visitTerminalRule(Antlr4GrammarParser::TerminalRuleContext *context) = 0;

    virtual std::any visitRuleBody(Antlr4GrammarParser::RuleBodyContext *context) = 0;

    virtual std::any visitTerminalRuleBody(Antlr4GrammarParser::TerminalRuleBodyContext *context) = 0;

    virtual std::any visitStarOperator(Antlr4GrammarParser::StarOperatorContext *context) = 0;

    virtual std::any visitPlusOperator(Antlr4GrammarParser::PlusOperatorContext *context) = 0;

    virtual std::any visitQuestionMarkOperator(Antlr4GrammarParser::QuestionMarkOperatorContext *context) = 0;

    virtual std::any visitOperator(Antlr4GrammarParser::OperatorContext *context) = 0;

    virtual std::any visitParentRuleBody(Antlr4GrammarParser::ParentRuleBodyContext *context) = 0;

    virtual std::any visitStringRuleBody(Antlr4GrammarParser::StringRuleBodyContext *context) = 0;

    virtual std::any visitAffectRuleBody(Antlr4GrammarParser::AffectRuleBodyContext *context) = 0;

    virtual std::any visitROperand(Antlr4GrammarParser::ROperandContext *context) = 0;

    virtual std::any visitAffectOp(Antlr4GrammarParser::AffectOpContext *context) = 0;

    virtual std::any visitEqOp(Antlr4GrammarParser::EqOpContext *context) = 0;

    virtual std::any visitPlusEqOp(Antlr4GrammarParser::PlusEqOpContext *context) = 0;

    virtual std::any visitBaseRules(Antlr4GrammarParser::BaseRulesContext *context) = 0;

    virtual std::any visitIntBaseRule(Antlr4GrammarParser::IntBaseRuleContext *context) = 0;

    virtual std::any visitFloatBaseRule(Antlr4GrammarParser::FloatBaseRuleContext *context) = 0;

    virtual std::any visitCharBaseRule(Antlr4GrammarParser::CharBaseRuleContext *context) = 0;

    virtual std::any visitStringBaseRule(Antlr4GrammarParser::StringBaseRuleContext *context) = 0;

    virtual std::any visitIdBaseRule(Antlr4GrammarParser::IdBaseRuleContext *context) = 0;

    virtual std::any visitWsBaseRule(Antlr4GrammarParser::WsBaseRuleContext *context) = 0;


};

