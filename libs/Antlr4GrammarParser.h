
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Antlr4GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, ID = 30, STRING = 31, WS = 32
  };

  enum {
    RuleGrammarFile = 0, RuleRules = 1, RuleRuleBody = 2, RuleTerminalRuleBody = 3, 
    RuleStarOperator = 4, RulePlusOperator = 5, RuleQuestionMarkOperator = 6, 
    RuleOperator = 7, RuleParentRuleBody = 8, RuleStringRuleBody = 9, RuleAffectRuleBody = 10, 
    RuleROperand = 11, RuleAffectOp = 12, RuleEqOp = 13, RulePlusEqOp = 14, 
    RuleBaseRules = 15, RuleIntBaseRule = 16, RuleFloatBaseRule = 17, RuleCharBaseRule = 18, 
    RuleStringBaseRule = 19, RuleIdBaseRule = 20, RuleWsBaseRule = 21
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
  class RuleBodyContext;
  class TerminalRuleBodyContext;
  class StarOperatorContext;
  class PlusOperatorContext;
  class QuestionMarkOperatorContext;
  class OperatorContext;
  class ParentRuleBodyContext;
  class StringRuleBodyContext;
  class AffectRuleBodyContext;
  class ROperandContext;
  class AffectOpContext;
  class EqOpContext;
  class PlusEqOpContext;
  class BaseRulesContext;
  class IntBaseRuleContext;
  class FloatBaseRuleContext;
  class CharBaseRuleContext;
  class StringBaseRuleContext;
  class IdBaseRuleContext;
  class WsBaseRuleContext; 

  class  GrammarFileContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *grammarName = nullptr;
    Antlr4GrammarParser::RulesContext *rulesContext = nullptr;
    std::vector<RulesContext *> grammarRules;
    GrammarFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    std::vector<BaseRulesContext *> baseRules();
    BaseRulesContext* baseRules(size_t i);
    std::vector<RulesContext *> rules();
    RulesContext* rules(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrammarFileContext* grammarFile();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    Antlr4GrammarParser::RuleBodyContext *body = nullptr;
    antlr4::Token *idToken = nullptr;
    std::vector<antlr4::Token *> children;
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<RuleBodyContext *> ruleBody();
    RuleBodyContext* ruleBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RulesContext* rules();

  class  RuleBodyContext : public antlr4::ParserRuleContext {
  public:
    Antlr4GrammarParser::TerminalRuleBodyContext *terminalRuleBodyContext = nullptr;
    std::vector<TerminalRuleBodyContext *> bodies;
    RuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TerminalRuleBodyContext *> terminalRuleBody();
    TerminalRuleBodyContext* terminalRuleBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleBodyContext* ruleBody();

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
    Antlr4GrammarParser::ROperandContext *value = nullptr;
    AffectRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    AffectOpContext *affectOp();
    ROperandContext *rOperand();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectRuleBodyContext* affectRuleBody();

  class  ROperandContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *val = nullptr;
    ROperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ROperandContext* rOperand();

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

  class  BaseRulesContext : public antlr4::ParserRuleContext {
  public:
    BaseRulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntBaseRuleContext *intBaseRule();
    FloatBaseRuleContext *floatBaseRule();
    CharBaseRuleContext *charBaseRule();
    StringBaseRuleContext *stringBaseRule();
    IdBaseRuleContext *idBaseRule();
    WsBaseRuleContext *wsBaseRule();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseRulesContext* baseRules();

  class  IntBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    IntBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntBaseRuleContext* intBaseRule();

  class  FloatBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    FloatBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatBaseRuleContext* floatBaseRule();

  class  CharBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    CharBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharBaseRuleContext* charBaseRule();

  class  StringBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    StringBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringBaseRuleContext* stringBaseRule();

  class  IdBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    IdBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdBaseRuleContext* idBaseRule();

  class  WsBaseRuleContext : public antlr4::ParserRuleContext {
  public:
    WsBaseRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WsBaseRuleContext* wsBaseRule();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool terminalRuleBodySempred(TerminalRuleBodyContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

