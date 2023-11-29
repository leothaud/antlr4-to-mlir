
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0


#include "Antlr4GrammarVisitor.h"

#include "Antlr4GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Antlr4GrammarParserStaticData final {
  Antlr4GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Antlr4GrammarParserStaticData(const Antlr4GrammarParserStaticData&) = delete;
  Antlr4GrammarParserStaticData(Antlr4GrammarParserStaticData&&) = delete;
  Antlr4GrammarParserStaticData& operator=(const Antlr4GrammarParserStaticData&) = delete;
  Antlr4GrammarParserStaticData& operator=(Antlr4GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag antlr4grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Antlr4GrammarParserStaticData *antlr4grammarParserStaticData = nullptr;

void antlr4grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (antlr4grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(antlr4grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Antlr4GrammarParserStaticData>(
    std::vector<std::string>{
      "grammar_file", "rule_", "rule_body", "terminal_rule_body", "operator", 
      "affect_op"
    },
    std::vector<std::string>{
      "", "''.''", "''\"''", "''\\'''", "'grammar'", "';'", "':'", "'|'", 
      "'EOF'", "'*'", "'+'", "'-'", "'\\u003F'", "'('", "')'", "'.'", "'''", 
      "'\"'", "'\\'", "'skip'", "'['", "']'", "'='", "'+='", "'fragment'", 
      "'#'"
    },
    std::vector<std::string>{
      "", "QUOTED_DOT", "QUOTED_DOUBLE_QUOTE", "QUOTED_QUOTE", "GRAMMAR", 
      "SEMI", "COLON", "PIPE", "EOF_TOKEN", "STAR", "PLUS", "MINUS", "QUESTION_MARK", 
      "L_PARENT", "R_PARENT", "DOT", "QUOTE", "DOUBLE_QUOTE", "BACKSLASH", 
      "SKIP_TOKEN", "L_SBRACKET", "R_SBRACKET", "EQ", "PLUS_EQ", "FRAGMENT_TOKEN", 
      "POUND", "UNDERSCORE", "L_ID", "U_ID", "STRING", "WS", "COMMENT", 
      "LINE_COMMENT", "ANY"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,125,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,1,
  	0,1,0,4,0,17,8,0,11,0,12,0,18,1,0,1,0,1,1,3,1,24,8,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,5,1,33,8,1,10,1,12,1,36,9,1,1,1,1,1,1,1,1,1,5,1,42,8,1,10,
  	1,12,1,45,9,1,1,1,1,1,5,1,49,8,1,10,1,12,1,52,9,1,1,1,5,1,55,8,1,10,1,
  	12,1,58,9,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,66,8,1,10,1,12,1,69,9,1,1,1,1,
  	1,3,1,73,8,1,1,2,4,2,76,8,2,11,2,12,2,77,1,2,1,2,3,2,82,8,2,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,99,8,3,10,3,12,
  	3,102,9,3,1,3,1,3,1,3,3,3,107,8,3,1,3,1,3,5,3,111,8,3,10,3,12,3,114,9,
  	3,1,4,1,4,1,4,3,4,119,8,4,1,5,1,5,3,5,123,8,5,1,5,5,34,43,50,56,100,1,
  	6,6,0,2,4,6,8,10,0,6,1,0,27,28,3,0,5,5,16,16,20,20,1,0,16,16,1,0,20,20,
  	2,0,1,3,29,29,1,0,21,21,144,0,12,1,0,0,0,2,72,1,0,0,0,4,75,1,0,0,0,6,
  	106,1,0,0,0,8,118,1,0,0,0,10,122,1,0,0,0,12,13,5,4,0,0,13,14,7,0,0,0,
  	14,16,5,5,0,0,15,17,3,2,1,0,16,15,1,0,0,0,17,18,1,0,0,0,18,16,1,0,0,0,
  	18,19,1,0,0,0,19,20,1,0,0,0,20,21,5,0,0,1,21,1,1,0,0,0,22,24,5,24,0,0,
  	23,22,1,0,0,0,23,24,1,0,0,0,24,25,1,0,0,0,25,26,5,28,0,0,26,56,5,6,0,
  	0,27,55,8,1,0,0,28,34,5,16,0,0,29,33,8,2,0,0,30,31,5,18,0,0,31,33,5,16,
  	0,0,32,29,1,0,0,0,32,30,1,0,0,0,33,36,1,0,0,0,34,35,1,0,0,0,34,32,1,0,
  	0,0,35,37,1,0,0,0,36,34,1,0,0,0,37,43,5,5,0,0,38,42,8,2,0,0,39,40,5,18,
  	0,0,40,42,5,16,0,0,41,38,1,0,0,0,41,39,1,0,0,0,42,45,1,0,0,0,43,44,1,
  	0,0,0,43,41,1,0,0,0,44,55,1,0,0,0,45,43,1,0,0,0,46,50,5,20,0,0,47,49,
  	8,3,0,0,48,47,1,0,0,0,49,52,1,0,0,0,50,51,1,0,0,0,50,48,1,0,0,0,51,53,
  	1,0,0,0,52,50,1,0,0,0,53,55,5,21,0,0,54,27,1,0,0,0,54,28,1,0,0,0,54,46,
  	1,0,0,0,55,58,1,0,0,0,56,57,1,0,0,0,56,54,1,0,0,0,57,59,1,0,0,0,58,56,
  	1,0,0,0,59,73,5,5,0,0,60,61,5,27,0,0,61,62,5,6,0,0,62,67,3,4,2,0,63,64,
  	5,7,0,0,64,66,3,4,2,0,65,63,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,
  	1,0,0,0,68,70,1,0,0,0,69,67,1,0,0,0,70,71,5,5,0,0,71,73,1,0,0,0,72,23,
  	1,0,0,0,72,60,1,0,0,0,73,3,1,0,0,0,74,76,3,6,3,0,75,74,1,0,0,0,76,77,
  	1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,81,1,0,0,0,79,80,5,25,0,0,80,82,
  	5,27,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,5,1,0,0,0,83,84,6,3,-1,0,84,85,
  	5,13,0,0,85,86,3,4,2,0,86,87,5,14,0,0,87,107,1,0,0,0,88,107,7,4,0,0,89,
  	90,5,27,0,0,90,91,3,10,5,0,91,92,7,0,0,0,92,107,1,0,0,0,93,107,7,0,0,
  	0,94,100,5,20,0,0,95,99,8,5,0,0,96,97,5,18,0,0,97,99,5,21,0,0,98,95,1,
  	0,0,0,98,96,1,0,0,0,99,102,1,0,0,0,100,101,1,0,0,0,100,98,1,0,0,0,101,
  	103,1,0,0,0,102,100,1,0,0,0,103,107,5,21,0,0,104,107,5,15,0,0,105,107,
  	5,8,0,0,106,83,1,0,0,0,106,88,1,0,0,0,106,89,1,0,0,0,106,93,1,0,0,0,106,
  	94,1,0,0,0,106,104,1,0,0,0,106,105,1,0,0,0,107,112,1,0,0,0,108,109,10,
  	8,0,0,109,111,3,8,4,0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,
  	112,113,1,0,0,0,113,7,1,0,0,0,114,112,1,0,0,0,115,119,5,9,0,0,116,119,
  	5,10,0,0,117,119,5,12,0,0,118,115,1,0,0,0,118,116,1,0,0,0,118,117,1,0,
  	0,0,119,9,1,0,0,0,120,123,5,22,0,0,121,123,5,23,0,0,122,120,1,0,0,0,122,
  	121,1,0,0,0,123,11,1,0,0,0,19,18,23,32,34,41,43,50,54,56,67,72,77,81,
  	98,100,106,112,118,122
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  antlr4grammarParserStaticData = staticData.release();
}

}

Antlr4GrammarParser::Antlr4GrammarParser(TokenStream *input) : Antlr4GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Antlr4GrammarParser::Antlr4GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Antlr4GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *antlr4grammarParserStaticData->atn, antlr4grammarParserStaticData->decisionToDFA, antlr4grammarParserStaticData->sharedContextCache, options);
}

Antlr4GrammarParser::~Antlr4GrammarParser() {
  delete _interpreter;
}

const atn::ATN& Antlr4GrammarParser::getATN() const {
  return *antlr4grammarParserStaticData->atn;
}

std::string Antlr4GrammarParser::getGrammarFileName() const {
  return "Antlr4Grammar.g4";
}

const std::vector<std::string>& Antlr4GrammarParser::getRuleNames() const {
  return antlr4grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& Antlr4GrammarParser::getVocabulary() const {
  return antlr4grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Antlr4GrammarParser::getSerializedATN() const {
  return antlr4grammarParserStaticData->serializedATN;
}


//----------------- Grammar_fileContext ------------------------------------------------------------------

Antlr4GrammarParser::Grammar_fileContext::Grammar_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::Grammar_fileContext::GRAMMAR() {
  return getToken(Antlr4GrammarParser::GRAMMAR, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Grammar_fileContext::SEMI() {
  return getToken(Antlr4GrammarParser::SEMI, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Grammar_fileContext::EOF() {
  return getToken(Antlr4GrammarParser::EOF, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Grammar_fileContext::L_ID() {
  return getToken(Antlr4GrammarParser::L_ID, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Grammar_fileContext::U_ID() {
  return getToken(Antlr4GrammarParser::U_ID, 0);
}

std::vector<Antlr4GrammarParser::Rule_Context *> Antlr4GrammarParser::Grammar_fileContext::rule_() {
  return getRuleContexts<Antlr4GrammarParser::Rule_Context>();
}

Antlr4GrammarParser::Rule_Context* Antlr4GrammarParser::Grammar_fileContext::rule_(size_t i) {
  return getRuleContext<Antlr4GrammarParser::Rule_Context>(i);
}


size_t Antlr4GrammarParser::Grammar_fileContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleGrammar_file;
}


std::any Antlr4GrammarParser::Grammar_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitGrammar_file(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::Grammar_fileContext* Antlr4GrammarParser::grammar_file() {
  Grammar_fileContext *_localctx = _tracker.createInstance<Grammar_fileContext>(_ctx, getState());
  enterRule(_localctx, 0, Antlr4GrammarParser::RuleGrammar_file);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    match(Antlr4GrammarParser::GRAMMAR);
    setState(13);
    antlrcpp::downCast<Grammar_fileContext *>(_localctx)->grammar_name = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == Antlr4GrammarParser::L_ID

    || _la == Antlr4GrammarParser::U_ID)) {
      antlrcpp::downCast<Grammar_fileContext *>(_localctx)->grammar_name = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(14);
    match(Antlr4GrammarParser::SEMI);
    setState(16); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(15);
      antlrcpp::downCast<Grammar_fileContext *>(_localctx)->rule_Context = rule_();
      antlrcpp::downCast<Grammar_fileContext *>(_localctx)->grammar_rules.push_back(antlrcpp::downCast<Grammar_fileContext *>(_localctx)->rule_Context);
      setState(18); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 419430400) != 0));
    setState(20);
    match(Antlr4GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule_Context ------------------------------------------------------------------

Antlr4GrammarParser::Rule_Context::Rule_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::Rule_Context::getRuleIndex() const {
  return Antlr4GrammarParser::RuleRule_;
}

void Antlr4GrammarParser::Rule_Context::copyFrom(Rule_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Lexer_ruleContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::COLON() {
  return getToken(Antlr4GrammarParser::COLON, 0);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Lexer_ruleContext::SEMI() {
  return getTokens(Antlr4GrammarParser::SEMI);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::SEMI(size_t i) {
  return getToken(Antlr4GrammarParser::SEMI, i);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::U_ID() {
  return getToken(Antlr4GrammarParser::U_ID, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::FRAGMENT_TOKEN() {
  return getToken(Antlr4GrammarParser::FRAGMENT_TOKEN, 0);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Lexer_ruleContext::QUOTE() {
  return getTokens(Antlr4GrammarParser::QUOTE);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::QUOTE(size_t i) {
  return getToken(Antlr4GrammarParser::QUOTE, i);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Lexer_ruleContext::L_SBRACKET() {
  return getTokens(Antlr4GrammarParser::L_SBRACKET);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::L_SBRACKET(size_t i) {
  return getToken(Antlr4GrammarParser::L_SBRACKET, i);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Lexer_ruleContext::R_SBRACKET() {
  return getTokens(Antlr4GrammarParser::R_SBRACKET);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::R_SBRACKET(size_t i) {
  return getToken(Antlr4GrammarParser::R_SBRACKET, i);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Lexer_ruleContext::BACKSLASH() {
  return getTokens(Antlr4GrammarParser::BACKSLASH);
}

tree::TerminalNode* Antlr4GrammarParser::Lexer_ruleContext::BACKSLASH(size_t i) {
  return getToken(Antlr4GrammarParser::BACKSLASH, i);
}

Antlr4GrammarParser::Lexer_ruleContext::Lexer_ruleContext(Rule_Context *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Lexer_ruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitLexer_rule(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parser_ruleContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Parser_ruleContext::COLON() {
  return getToken(Antlr4GrammarParser::COLON, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Parser_ruleContext::SEMI() {
  return getToken(Antlr4GrammarParser::SEMI, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Parser_ruleContext::L_ID() {
  return getToken(Antlr4GrammarParser::L_ID, 0);
}

std::vector<Antlr4GrammarParser::Rule_bodyContext *> Antlr4GrammarParser::Parser_ruleContext::rule_body() {
  return getRuleContexts<Antlr4GrammarParser::Rule_bodyContext>();
}

Antlr4GrammarParser::Rule_bodyContext* Antlr4GrammarParser::Parser_ruleContext::rule_body(size_t i) {
  return getRuleContext<Antlr4GrammarParser::Rule_bodyContext>(i);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Parser_ruleContext::PIPE() {
  return getTokens(Antlr4GrammarParser::PIPE);
}

tree::TerminalNode* Antlr4GrammarParser::Parser_ruleContext::PIPE(size_t i) {
  return getToken(Antlr4GrammarParser::PIPE, i);
}

Antlr4GrammarParser::Parser_ruleContext::Parser_ruleContext(Rule_Context *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Parser_ruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitParser_rule(this);
  else
    return visitor->visitChildren(this);
}
Antlr4GrammarParser::Rule_Context* Antlr4GrammarParser::rule_() {
  Rule_Context *_localctx = _tracker.createInstance<Rule_Context>(_ctx, getState());
  enterRule(_localctx, 2, Antlr4GrammarParser::RuleRule_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::FRAGMENT_TOKEN:
      case Antlr4GrammarParser::U_ID: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Lexer_ruleContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(23);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Antlr4GrammarParser::FRAGMENT_TOKEN) {
          setState(22);
          match(Antlr4GrammarParser::FRAGMENT_TOKEN);
        }
        setState(25);
        antlrcpp::downCast<Lexer_ruleContext *>(_localctx)->name = match(Antlr4GrammarParser::U_ID);
        setState(26);
        match(Antlr4GrammarParser::COLON);
        setState(56);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(54);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case Antlr4GrammarParser::QUOTED_DOT:
              case Antlr4GrammarParser::QUOTED_DOUBLE_QUOTE:
              case Antlr4GrammarParser::QUOTED_QUOTE:
              case Antlr4GrammarParser::GRAMMAR:
              case Antlr4GrammarParser::COLON:
              case Antlr4GrammarParser::PIPE:
              case Antlr4GrammarParser::EOF_TOKEN:
              case Antlr4GrammarParser::STAR:
              case Antlr4GrammarParser::PLUS:
              case Antlr4GrammarParser::MINUS:
              case Antlr4GrammarParser::QUESTION_MARK:
              case Antlr4GrammarParser::L_PARENT:
              case Antlr4GrammarParser::R_PARENT:
              case Antlr4GrammarParser::DOT:
              case Antlr4GrammarParser::DOUBLE_QUOTE:
              case Antlr4GrammarParser::BACKSLASH:
              case Antlr4GrammarParser::SKIP_TOKEN:
              case Antlr4GrammarParser::R_SBRACKET:
              case Antlr4GrammarParser::EQ:
              case Antlr4GrammarParser::PLUS_EQ:
              case Antlr4GrammarParser::FRAGMENT_TOKEN:
              case Antlr4GrammarParser::POUND:
              case Antlr4GrammarParser::UNDERSCORE:
              case Antlr4GrammarParser::L_ID:
              case Antlr4GrammarParser::U_ID:
              case Antlr4GrammarParser::STRING:
              case Antlr4GrammarParser::WS:
              case Antlr4GrammarParser::COMMENT:
              case Antlr4GrammarParser::LINE_COMMENT:
              case Antlr4GrammarParser::ANY: {
                setState(27);
                _la = _input->LA(1);
                if (_la == 0 || _la == Token::EOF || ((((_la & ~ 0x3fULL) == 0) &&
                  ((1ULL << _la) & 1114144) != 0))) {
                _errHandler->recoverInline(this);
                }
                else {
                  _errHandler->reportMatch(this);
                  consume();
                }
                break;
              }

              case Antlr4GrammarParser::QUOTE: {
                setState(28);
                match(Antlr4GrammarParser::QUOTE);
                setState(34);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
                while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                  if (alt == 1 + 1) {
                    setState(32);
                    _errHandler->sync(this);
                    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
                    case 1: {
                      setState(29);
                      _la = _input->LA(1);
                      if (_la == 0 || _la == Token::EOF || (_la == Antlr4GrammarParser::QUOTE)) {
                      _errHandler->recoverInline(this);
                      }
                      else {
                        _errHandler->reportMatch(this);
                        consume();
                      }
                      break;
                    }

                    case 2: {
                      setState(30);
                      match(Antlr4GrammarParser::BACKSLASH);
                      setState(31);
                      match(Antlr4GrammarParser::QUOTE);
                      break;
                    }

                    default:
                      break;
                    } 
                  }
                  setState(36);
                  _errHandler->sync(this);
                  alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
                }
                setState(37);
                match(Antlr4GrammarParser::SEMI);
                setState(43);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
                while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                  if (alt == 1 + 1) {
                    setState(41);
                    _errHandler->sync(this);
                    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
                    case 1: {
                      setState(38);
                      _la = _input->LA(1);
                      if (_la == 0 || _la == Token::EOF || (_la == Antlr4GrammarParser::QUOTE)) {
                      _errHandler->recoverInline(this);
                      }
                      else {
                        _errHandler->reportMatch(this);
                        consume();
                      }
                      break;
                    }

                    case 2: {
                      setState(39);
                      match(Antlr4GrammarParser::BACKSLASH);
                      setState(40);
                      match(Antlr4GrammarParser::QUOTE);
                      break;
                    }

                    default:
                      break;
                    } 
                  }
                  setState(45);
                  _errHandler->sync(this);
                  alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
                }
                break;
              }

              case Antlr4GrammarParser::L_SBRACKET: {
                setState(46);
                match(Antlr4GrammarParser::L_SBRACKET);
                setState(50);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
                while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                  if (alt == 1 + 1) {
                    setState(47);
                    _la = _input->LA(1);
                    if (_la == 0 || _la == Token::EOF || (_la == Antlr4GrammarParser::L_SBRACKET)) {
                    _errHandler->recoverInline(this);
                    }
                    else {
                      _errHandler->reportMatch(this);
                      consume();
                    } 
                  }
                  setState(52);
                  _errHandler->sync(this);
                  alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
                }
                setState(53);
                match(Antlr4GrammarParser::R_SBRACKET);
                break;
              }

            default:
              throw NoViableAltException(this);
            } 
          }
          setState(58);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        }
        setState(59);
        match(Antlr4GrammarParser::SEMI);
        break;
      }

      case Antlr4GrammarParser::L_ID: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Parser_ruleContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(60);
        antlrcpp::downCast<Parser_ruleContext *>(_localctx)->name = match(Antlr4GrammarParser::L_ID);
        setState(61);
        match(Antlr4GrammarParser::COLON);
        setState(62);
        antlrcpp::downCast<Parser_ruleContext *>(_localctx)->rule_bodyContext = rule_body();
        antlrcpp::downCast<Parser_ruleContext *>(_localctx)->bodies.push_back(antlrcpp::downCast<Parser_ruleContext *>(_localctx)->rule_bodyContext);
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Antlr4GrammarParser::PIPE) {
          setState(63);
          match(Antlr4GrammarParser::PIPE);
          setState(64);
          antlrcpp::downCast<Parser_ruleContext *>(_localctx)->rule_bodyContext = rule_body();
          antlrcpp::downCast<Parser_ruleContext *>(_localctx)->bodies.push_back(antlrcpp::downCast<Parser_ruleContext *>(_localctx)->rule_bodyContext);
          setState(69);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(70);
        match(Antlr4GrammarParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule_bodyContext ------------------------------------------------------------------

Antlr4GrammarParser::Rule_bodyContext::Rule_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::Rule_bodyContext::POUND() {
  return getToken(Antlr4GrammarParser::POUND, 0);
}

std::vector<Antlr4GrammarParser::Terminal_rule_bodyContext *> Antlr4GrammarParser::Rule_bodyContext::terminal_rule_body() {
  return getRuleContexts<Antlr4GrammarParser::Terminal_rule_bodyContext>();
}

Antlr4GrammarParser::Terminal_rule_bodyContext* Antlr4GrammarParser::Rule_bodyContext::terminal_rule_body(size_t i) {
  return getRuleContext<Antlr4GrammarParser::Terminal_rule_bodyContext>(i);
}

tree::TerminalNode* Antlr4GrammarParser::Rule_bodyContext::L_ID() {
  return getToken(Antlr4GrammarParser::L_ID, 0);
}


size_t Antlr4GrammarParser::Rule_bodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleRule_body;
}


std::any Antlr4GrammarParser::Rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitRule_body(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::Rule_bodyContext* Antlr4GrammarParser::rule_body() {
  Rule_bodyContext *_localctx = _tracker.createInstance<Rule_bodyContext>(_ctx, getState());
  enterRule(_localctx, 4, Antlr4GrammarParser::RuleRule_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(74);
      antlrcpp::downCast<Rule_bodyContext *>(_localctx)->terminal_rule_bodyContext = terminal_rule_body(0);
      antlrcpp::downCast<Rule_bodyContext *>(_localctx)->rule_fragment.push_back(antlrcpp::downCast<Rule_bodyContext *>(_localctx)->terminal_rule_bodyContext);
      setState(77); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 940613902) != 0));
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Antlr4GrammarParser::POUND) {
      setState(79);
      match(Antlr4GrammarParser::POUND);
      setState(80);
      antlrcpp::downCast<Rule_bodyContext *>(_localctx)->ruleName = match(Antlr4GrammarParser::L_ID);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Terminal_rule_bodyContext ------------------------------------------------------------------

Antlr4GrammarParser::Terminal_rule_bodyContext::Terminal_rule_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::Terminal_rule_bodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleTerminal_rule_body;
}

void Antlr4GrammarParser::Terminal_rule_bodyContext::copyFrom(Terminal_rule_bodyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Dot_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Dot_rule_bodyContext::DOT() {
  return getToken(Antlr4GrammarParser::DOT, 0);
}

Antlr4GrammarParser::Dot_rule_bodyContext::Dot_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Dot_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitDot_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- String_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::String_rule_bodyContext::STRING() {
  return getToken(Antlr4GrammarParser::STRING, 0);
}

tree::TerminalNode* Antlr4GrammarParser::String_rule_bodyContext::QUOTED_DOT() {
  return getToken(Antlr4GrammarParser::QUOTED_DOT, 0);
}

tree::TerminalNode* Antlr4GrammarParser::String_rule_bodyContext::QUOTED_DOUBLE_QUOTE() {
  return getToken(Antlr4GrammarParser::QUOTED_DOUBLE_QUOTE, 0);
}

tree::TerminalNode* Antlr4GrammarParser::String_rule_bodyContext::QUOTED_QUOTE() {
  return getToken(Antlr4GrammarParser::QUOTED_QUOTE, 0);
}

Antlr4GrammarParser::String_rule_bodyContext::String_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::String_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitString_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Sbracket_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Sbracket_rule_bodyContext::L_SBRACKET() {
  return getToken(Antlr4GrammarParser::L_SBRACKET, 0);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Sbracket_rule_bodyContext::R_SBRACKET() {
  return getTokens(Antlr4GrammarParser::R_SBRACKET);
}

tree::TerminalNode* Antlr4GrammarParser::Sbracket_rule_bodyContext::R_SBRACKET(size_t i) {
  return getToken(Antlr4GrammarParser::R_SBRACKET, i);
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Sbracket_rule_bodyContext::BACKSLASH() {
  return getTokens(Antlr4GrammarParser::BACKSLASH);
}

tree::TerminalNode* Antlr4GrammarParser::Sbracket_rule_bodyContext::BACKSLASH(size_t i) {
  return getToken(Antlr4GrammarParser::BACKSLASH, i);
}

Antlr4GrammarParser::Sbracket_rule_bodyContext::Sbracket_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Sbracket_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitSbracket_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parent_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Parent_rule_bodyContext::L_PARENT() {
  return getToken(Antlr4GrammarParser::L_PARENT, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Parent_rule_bodyContext::R_PARENT() {
  return getToken(Antlr4GrammarParser::R_PARENT, 0);
}

Antlr4GrammarParser::Rule_bodyContext* Antlr4GrammarParser::Parent_rule_bodyContext::rule_body() {
  return getRuleContext<Antlr4GrammarParser::Rule_bodyContext>(0);
}

Antlr4GrammarParser::Parent_rule_bodyContext::Parent_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Parent_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitParent_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affect_rule_bodyContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> Antlr4GrammarParser::Affect_rule_bodyContext::L_ID() {
  return getTokens(Antlr4GrammarParser::L_ID);
}

tree::TerminalNode* Antlr4GrammarParser::Affect_rule_bodyContext::L_ID(size_t i) {
  return getToken(Antlr4GrammarParser::L_ID, i);
}

Antlr4GrammarParser::Affect_opContext* Antlr4GrammarParser::Affect_rule_bodyContext::affect_op() {
  return getRuleContext<Antlr4GrammarParser::Affect_opContext>(0);
}

tree::TerminalNode* Antlr4GrammarParser::Affect_rule_bodyContext::U_ID() {
  return getToken(Antlr4GrammarParser::U_ID, 0);
}

Antlr4GrammarParser::Affect_rule_bodyContext::Affect_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Affect_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitAffect_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Postfix_rule_bodyContext ------------------------------------------------------------------

Antlr4GrammarParser::Terminal_rule_bodyContext* Antlr4GrammarParser::Postfix_rule_bodyContext::terminal_rule_body() {
  return getRuleContext<Antlr4GrammarParser::Terminal_rule_bodyContext>(0);
}

Antlr4GrammarParser::OperatorContext* Antlr4GrammarParser::Postfix_rule_bodyContext::operator_() {
  return getRuleContext<Antlr4GrammarParser::OperatorContext>(0);
}

Antlr4GrammarParser::Postfix_rule_bodyContext::Postfix_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Postfix_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitPostfix_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Id_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Id_rule_bodyContext::L_ID() {
  return getToken(Antlr4GrammarParser::L_ID, 0);
}

tree::TerminalNode* Antlr4GrammarParser::Id_rule_bodyContext::U_ID() {
  return getToken(Antlr4GrammarParser::U_ID, 0);
}

Antlr4GrammarParser::Id_rule_bodyContext::Id_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Id_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitId_rule_body(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Eof_rule_bodyContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Eof_rule_bodyContext::EOF_TOKEN() {
  return getToken(Antlr4GrammarParser::EOF_TOKEN, 0);
}

Antlr4GrammarParser::Eof_rule_bodyContext::Eof_rule_bodyContext(Terminal_rule_bodyContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Eof_rule_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitEof_rule_body(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::Terminal_rule_bodyContext* Antlr4GrammarParser::terminal_rule_body() {
   return terminal_rule_body(0);
}

Antlr4GrammarParser::Terminal_rule_bodyContext* Antlr4GrammarParser::terminal_rule_body(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Antlr4GrammarParser::Terminal_rule_bodyContext *_localctx = _tracker.createInstance<Terminal_rule_bodyContext>(_ctx, parentState);
  Antlr4GrammarParser::Terminal_rule_bodyContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, Antlr4GrammarParser::RuleTerminal_rule_body, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Parent_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(84);
      match(Antlr4GrammarParser::L_PARENT);
      setState(85);
      antlrcpp::downCast<Parent_rule_bodyContext *>(_localctx)->body = rule_body();
      setState(86);
      match(Antlr4GrammarParser::R_PARENT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<String_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(88);
      antlrcpp::downCast<String_rule_bodyContext *>(_localctx)->body = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 536870926) != 0))) {
        antlrcpp::downCast<String_rule_bodyContext *>(_localctx)->body = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Affect_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(89);
      antlrcpp::downCast<Affect_rule_bodyContext *>(_localctx)->varName = match(Antlr4GrammarParser::L_ID);
      setState(90);
      antlrcpp::downCast<Affect_rule_bodyContext *>(_localctx)->op = affect_op();
      setState(91);
      antlrcpp::downCast<Affect_rule_bodyContext *>(_localctx)->value = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == Antlr4GrammarParser::L_ID

      || _la == Antlr4GrammarParser::U_ID)) {
        antlrcpp::downCast<Affect_rule_bodyContext *>(_localctx)->value = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Id_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(93);
      antlrcpp::downCast<Id_rule_bodyContext *>(_localctx)->name = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == Antlr4GrammarParser::L_ID

      || _la == Antlr4GrammarParser::U_ID)) {
        antlrcpp::downCast<Id_rule_bodyContext *>(_localctx)->name = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Sbracket_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(94);
      match(Antlr4GrammarParser::L_SBRACKET);
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(98);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
          case 1: {
            setState(95);
            _la = _input->LA(1);
            if (_la == 0 || _la == Token::EOF || (_la == Antlr4GrammarParser::R_SBRACKET)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            break;
          }

          case 2: {
            setState(96);
            match(Antlr4GrammarParser::BACKSLASH);
            setState(97);
            match(Antlr4GrammarParser::R_SBRACKET);
            break;
          }

          default:
            break;
          } 
        }
        setState(102);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      }
      setState(103);
      match(Antlr4GrammarParser::R_SBRACKET);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Dot_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(104);
      match(Antlr4GrammarParser::DOT);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Eof_rule_bodyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(105);
      match(Antlr4GrammarParser::EOF_TOKEN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(112);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Postfix_rule_bodyContext>(_tracker.createInstance<Terminal_rule_bodyContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->body = previousContext;
        pushNewRecursionContext(newContext, startState, RuleTerminal_rule_body);
        setState(108);

        if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
        setState(109);
        antlrcpp::downCast<Postfix_rule_bodyContext *>(_localctx)->op = operator_(); 
      }
      setState(114);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OperatorContext ------------------------------------------------------------------

Antlr4GrammarParser::OperatorContext::OperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::OperatorContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleOperator;
}

void Antlr4GrammarParser::OperatorContext::copyFrom(OperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Star_operatorContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Star_operatorContext::STAR() {
  return getToken(Antlr4GrammarParser::STAR, 0);
}

Antlr4GrammarParser::Star_operatorContext::Star_operatorContext(OperatorContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Star_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitStar_operator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Question_mark_operatorContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Question_mark_operatorContext::QUESTION_MARK() {
  return getToken(Antlr4GrammarParser::QUESTION_MARK, 0);
}

Antlr4GrammarParser::Question_mark_operatorContext::Question_mark_operatorContext(OperatorContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Question_mark_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitQuestion_mark_operator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Plus_operatorContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Plus_operatorContext::PLUS() {
  return getToken(Antlr4GrammarParser::PLUS, 0);
}

Antlr4GrammarParser::Plus_operatorContext::Plus_operatorContext(OperatorContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Plus_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitPlus_operator(this);
  else
    return visitor->visitChildren(this);
}
Antlr4GrammarParser::OperatorContext* Antlr4GrammarParser::operator_() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 8, Antlr4GrammarParser::RuleOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::STAR: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Star_operatorContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(115);
        match(Antlr4GrammarParser::STAR);
        break;
      }

      case Antlr4GrammarParser::PLUS: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Plus_operatorContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(116);
        match(Antlr4GrammarParser::PLUS);
        break;
      }

      case Antlr4GrammarParser::QUESTION_MARK: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Question_mark_operatorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(117);
        match(Antlr4GrammarParser::QUESTION_MARK);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Affect_opContext ------------------------------------------------------------------

Antlr4GrammarParser::Affect_opContext::Affect_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::Affect_opContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleAffect_op;
}

void Antlr4GrammarParser::Affect_opContext::copyFrom(Affect_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Eq_operatorContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Eq_operatorContext::EQ() {
  return getToken(Antlr4GrammarParser::EQ, 0);
}

Antlr4GrammarParser::Eq_operatorContext::Eq_operatorContext(Affect_opContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Eq_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitEq_operator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Plus_eq_operatorContext ------------------------------------------------------------------

tree::TerminalNode* Antlr4GrammarParser::Plus_eq_operatorContext::PLUS_EQ() {
  return getToken(Antlr4GrammarParser::PLUS_EQ, 0);
}

Antlr4GrammarParser::Plus_eq_operatorContext::Plus_eq_operatorContext(Affect_opContext *ctx) { copyFrom(ctx); }


std::any Antlr4GrammarParser::Plus_eq_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitPlus_eq_operator(this);
  else
    return visitor->visitChildren(this);
}
Antlr4GrammarParser::Affect_opContext* Antlr4GrammarParser::affect_op() {
  Affect_opContext *_localctx = _tracker.createInstance<Affect_opContext>(_ctx, getState());
  enterRule(_localctx, 10, Antlr4GrammarParser::RuleAffect_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::EQ: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Eq_operatorContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(120);
        match(Antlr4GrammarParser::EQ);
        break;
      }

      case Antlr4GrammarParser::PLUS_EQ: {
        _localctx = _tracker.createInstance<Antlr4GrammarParser::Plus_eq_operatorContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(121);
        match(Antlr4GrammarParser::PLUS_EQ);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Antlr4GrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return terminal_rule_bodySempred(antlrcpp::downCast<Terminal_rule_bodyContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Antlr4GrammarParser::terminal_rule_bodySempred(Terminal_rule_bodyContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void Antlr4GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  antlr4grammarParserInitialize();
#else
  ::antlr4::internal::call_once(antlr4grammarParserOnceFlag, antlr4grammarParserInitialize);
#endif
}
