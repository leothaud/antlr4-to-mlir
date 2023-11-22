
// Generated from Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Antlr4GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, ID = 12, STRING = 13, WS = 14
  };

  enum {
    RuleGrammarFile = 0, RuleRules = 1, RuleNonTerminalRule = 2, RuleTerminalRule = 3, 
    RuleRuleBody = 4, RuleTerminalRuleBody = 5, RuleStarOperator = 6, RulePlusOperator = 7, 
    RuleQuestionMarkOperator = 8, RuleOperator = 9, RuleParentRuleBody = 10, 
    RuleStringRuleBody = 11, RuleAffectRuleBody = 12, RuleAffectOp = 13, 
    RuleEqOp = 14, RulePlusEqOp = 15
  };

  explicit Antlr4GrammarParser(antlr4::TokenStream *input);

  Antlr4GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Antlr4GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class GrammarFileContext;
  class RulesContext;
  class NonTerminalRuleContext;
  class TerminalRuleContext;
  class RuleBodyContext;
  class TerminalRuleBodyContext;
  class StarOperatorContext;
  class PlusOperatorContext;
  class QuestionMarkOperatorContext;
  class OperatorContext;
  class ParentRuleBodyContext;
  class StringRuleBodyContext;
  class AffectRuleBodyContext;
  class AffectOpContext;
  class EqOpContext;
  class PlusEqOpContext; 

  class  GrammarFileContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *grammarName = nullptr;
    Antlr4GrammarParser::RulesContext *rulesContext = nullptr;
    std::vector<RulesContext *> grammarRules;
    GrammarFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    std::vector<RulesContext *> rules();
    RulesContext* rules(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrammarFileContext* grammarFile();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonTerminalRuleContext *nonTerminalRule();
    TerminalRuleContext *terminalRule();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RulesContext* rules();

  class  NonTerminalRuleContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *idToken = nullptr;
    std::vector<antlr4::Token *> children;
    NonTerminalRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonTerminalRuleContext* nonTerminalRule();

  class  TerminalRuleContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    Antlr4GrammarParser::RuleBodyContext *body = nullptr;
    TerminalRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    RuleBodyContext *ruleBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminalRuleContext* terminalRule();

  class  RuleBodyContext : public antlr4::ParserRuleContext {
  public:
    Antlr4GrammarParser::RuleBodyContext *lbody = nullptr;
    Antlr4GrammarParser::RuleBodyContext *rbody = nullptr;
    RuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminalRuleBodyContext *terminalRuleBody();
    std::vector<RuleBodyContext *> ruleBody();
    RuleBodyContext* ruleBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleBodyContext* ruleBody();
  RuleBodyContext* ruleBody(int precedence);
  class  TerminalRuleBodyContext : public antlr4::ParserRuleContext {
  public:
    Antlr4GrammarParser::TerminalRuleBodyContext *body = nullptr;
    Antlr4GrammarParser::OperatorContext *op = nullptr;
    TerminalRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParentRuleBodyContext *parentRuleBody();
    StringRuleBodyContext *stringRuleBody();
    AffectRuleBodyContext *affectRuleBody();
    TerminalRuleBodyContext *terminalRuleBody();
    OperatorContext *operator_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminalRuleBodyContext* terminalRuleBody();
  TerminalRuleBodyContext* terminalRuleBody(int precedence);
  class  StarOperatorContext : public antlr4::ParserRuleContext {
  public:
    StarOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StarOperatorContext* starOperator();

  class  PlusOperatorContext : public antlr4::ParserRuleContext {
  public:
    PlusOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlusOperatorContext* plusOperator();

  class  QuestionMarkOperatorContext : public antlr4::ParserRuleContext {
  public:
    QuestionMarkOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuestionMarkOperatorContext* questionMarkOperator();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StarOperatorContext *starOperator();
    PlusOperatorContext *plusOperator();
    QuestionMarkOperatorContext *questionMarkOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator_();

  class  ParentRuleBodyContext : public antlr4::ParserRuleContext {
  public:
    Antlr4GrammarParser::RuleBodyContext *body = nullptr;
    ParentRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RuleBodyContext *ruleBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParentRuleBodyContext* parentRuleBody();

  class  StringRuleBodyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *body = nullptr;
    StringRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringRuleBodyContext* stringRuleBody();

  class  AffectRuleBodyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    Antlr4GrammarParser::AffectOpContext *op = nullptr;
    antlr4::Token *value = nullptr;
    AffectRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    AffectOpContext *affectOp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectRuleBodyContext* affectRuleBody();

  class  AffectOpContext : public antlr4::ParserRuleContext {
  public:
    AffectOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqOpContext *eqOp();
    PlusEqOpContext *plusEqOp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectOpContext* affectOp();

  class  EqOpContext : public antlr4::ParserRuleContext {
  public:
    EqOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqOpContext* eqOp();

  class  PlusEqOpContext : public antlr4::ParserRuleContext {
  public:
    PlusEqOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlusEqOpContext* plusEqOp();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool ruleBodySempred(RuleBodyContext *_localctx, size_t predicateIndex);
  bool terminalRuleBodySempred(TerminalRuleBodyContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

