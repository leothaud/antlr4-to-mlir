
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
    virtual std::any visitGrammar_file(Antlr4GrammarParser::Grammar_fileContext *context) = 0;

    virtual std::any visitLexer_rule(Antlr4GrammarParser::Lexer_ruleContext *context) = 0;

    virtual std::any visitParser_rule(Antlr4GrammarParser::Parser_ruleContext *context) = 0;

    virtual std::any visitRule_body(Antlr4GrammarParser::Rule_bodyContext *context) = 0;

    virtual std::any visitDot_rule_body(Antlr4GrammarParser::Dot_rule_bodyContext *context) = 0;

    virtual std::any visitString_rule_body(Antlr4GrammarParser::String_rule_bodyContext *context) = 0;

    virtual std::any visitSbracket_rule_body(Antlr4GrammarParser::Sbracket_rule_bodyContext *context) = 0;

    virtual std::any visitParent_rule_body(Antlr4GrammarParser::Parent_rule_bodyContext *context) = 0;

    virtual std::any visitAffect_rule_body(Antlr4GrammarParser::Affect_rule_bodyContext *context) = 0;

    virtual std::any visitPostfix_rule_body(Antlr4GrammarParser::Postfix_rule_bodyContext *context) = 0;

    virtual std::any visitId_rule_body(Antlr4GrammarParser::Id_rule_bodyContext *context) = 0;

    virtual std::any visitEof_rule_body(Antlr4GrammarParser::Eof_rule_bodyContext *context) = 0;

    virtual std::any visitStar_operator(Antlr4GrammarParser::Star_operatorContext *context) = 0;

    virtual std::any visitPlus_operator(Antlr4GrammarParser::Plus_operatorContext *context) = 0;

    virtual std::any visitQuestion_mark_operator(Antlr4GrammarParser::Question_mark_operatorContext *context) = 0;

    virtual std::any visitEq_operator(Antlr4GrammarParser::Eq_operatorContext *context) = 0;

    virtual std::any visitPlus_eq_operator(Antlr4GrammarParser::Plus_eq_operatorContext *context) = 0;


};

