
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Antlr4GrammarParser : public antlr4::Parser {
public:
  enum {
    QUOTED_DOT = 1, QUOTED_DOUBLE_QUOTE = 2, QUOTED_QUOTE = 3, GRAMMAR = 4, 
    SEMI = 5, COLON = 6, PIPE = 7, EOF_TOKEN = 8, STAR = 9, PLUS = 10, MINUS = 11, 
    QUESTION_MARK = 12, L_PARENT = 13, R_PARENT = 14, DOT = 15, QUOTE = 16, 
    DOUBLE_QUOTE = 17, BACKSLASH = 18, SKIP_TOKEN = 19, L_SBRACKET = 20, 
    R_SBRACKET = 21, EQ = 22, PLUS_EQ = 23, FRAGMENT_TOKEN = 24, POUND = 25, 
    UNDERSCORE = 26, L_ID = 27, U_ID = 28, STRING = 29, WS = 30, COMMENT = 31, 
    LINE_COMMENT = 32, ANY = 33
  };

  enum {
    RuleGrammar_file = 0, RuleRule_ = 1, RuleRule_body = 2, RuleTerminal_rule_body = 3, 
    RuleOperator = 4, RuleAffect_op = 5
  };

  explicit Antlr4GrammarParser(antlr4::TokenStream *input);

  Antlr4GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Antlr4GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Grammar_fileContext;
  class Rule_Context;
  class Rule_bodyContext;
  class Terminal_rule_bodyContext;
  class OperatorContext;
  class Affect_opContext; 

  class  Grammar_fileContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *grammar_name = nullptr;
    Antlr4GrammarParser::Rule_Context *rule_Context = nullptr;
    std::vector<Rule_Context *> grammar_rules;
    Grammar_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRAMMAR();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *U_ID();
    std::vector<Rule_Context *> rule_();
    Rule_Context* rule_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grammar_fileContext* grammar_file();

  class  Rule_Context : public antlr4::ParserRuleContext {
  public:
    Rule_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Rule_Context() = default;
    void copyFrom(Rule_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Lexer_ruleContext : public Rule_Context {
  public:
    Lexer_ruleContext(Rule_Context *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *U_ID();
    antlr4::tree::TerminalNode *FRAGMENT_TOKEN();
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_SBRACKET();
    antlr4::tree::TerminalNode* L_SBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R_SBRACKET();
    antlr4::tree::TerminalNode* R_SBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BACKSLASH();
    antlr4::tree::TerminalNode* BACKSLASH(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parser_ruleContext : public Rule_Context {
  public:
    Parser_ruleContext(Rule_Context *ctx);

    antlr4::Token *name = nullptr;
    Antlr4GrammarParser::Rule_bodyContext *rule_bodyContext = nullptr;
    std::vector<Rule_bodyContext *> bodies;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *L_ID();
    std::vector<Rule_bodyContext *> rule_body();
    Rule_bodyContext* rule_body(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Rule_Context* rule_();

  class  Rule_bodyContext : public antlr4::ParserRuleContext {
  public:
    Antlr4GrammarParser::Terminal_rule_bodyContext *terminal_rule_bodyContext = nullptr;
    std::vector<Terminal_rule_bodyContext *> rule_fragment;
    antlr4::Token *ruleName = nullptr;
    Rule_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    std::vector<Terminal_rule_bodyContext *> terminal_rule_body();
    Terminal_rule_bodyContext* terminal_rule_body(size_t i);
    antlr4::tree::TerminalNode *L_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_bodyContext* rule_body();

  class  Terminal_rule_bodyContext : public antlr4::ParserRuleContext {
  public:
    Terminal_rule_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Terminal_rule_bodyContext() = default;
    void copyFrom(Terminal_rule_bodyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Dot_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Dot_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::tree::TerminalNode *DOT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  String_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    String_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::Token *body = nullptr;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *QUOTED_DOT();
    antlr4::tree::TerminalNode *QUOTED_DOUBLE_QUOTE();
    antlr4::tree::TerminalNode *QUOTED_QUOTE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Sbracket_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Sbracket_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::tree::TerminalNode *L_SBRACKET();
    std::vector<antlr4::tree::TerminalNode *> R_SBRACKET();
    antlr4::tree::TerminalNode* R_SBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BACKSLASH();
    antlr4::tree::TerminalNode* BACKSLASH(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parent_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Parent_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    Antlr4GrammarParser::Rule_bodyContext *body = nullptr;
    antlr4::tree::TerminalNode *L_PARENT();
    antlr4::tree::TerminalNode *R_PARENT();
    Rule_bodyContext *rule_body();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affect_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Affect_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::Token *varName = nullptr;
    Antlr4GrammarParser::Affect_opContext *op = nullptr;
    antlr4::Token *value = nullptr;
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    Affect_opContext *affect_op();
    antlr4::tree::TerminalNode *U_ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Postfix_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Postfix_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    Antlr4GrammarParser::Terminal_rule_bodyContext *body = nullptr;
    Antlr4GrammarParser::OperatorContext *op = nullptr;
    Terminal_rule_bodyContext *terminal_rule_body();
    OperatorContext *operator_();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Id_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Id_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *U_ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Eof_rule_bodyContext : public Terminal_rule_bodyContext {
  public:
    Eof_rule_bodyContext(Terminal_rule_bodyContext *ctx);

    antlr4::tree::TerminalNode *EOF_TOKEN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Terminal_rule_bodyContext* terminal_rule_body();
  Terminal_rule_bodyContext* terminal_rule_body(int precedence);
  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OperatorContext() = default;
    void copyFrom(OperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Star_operatorContext : public OperatorContext {
  public:
    Star_operatorContext(OperatorContext *ctx);

    antlr4::tree::TerminalNode *STAR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Question_mark_operatorContext : public OperatorContext {
  public:
    Question_mark_operatorContext(OperatorContext *ctx);

    antlr4::tree::TerminalNode *QUESTION_MARK();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Plus_operatorContext : public OperatorContext {
  public:
    Plus_operatorContext(OperatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OperatorContext* operator_();

  class  Affect_opContext : public antlr4::ParserRuleContext {
  public:
    Affect_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Affect_opContext() = default;
    void copyFrom(Affect_opContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Eq_operatorContext : public Affect_opContext {
  public:
    Eq_operatorContext(Affect_opContext *ctx);

    antlr4::tree::TerminalNode *EQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Plus_eq_operatorContext : public Affect_opContext {
  public:
    Plus_eq_operatorContext(Affect_opContext *ctx);

    antlr4::tree::TerminalNode *PLUS_EQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Affect_opContext* affect_op();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool terminal_rule_bodySempred(Terminal_rule_bodyContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

