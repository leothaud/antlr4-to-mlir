
// Generated from Antlr4Grammar.g4 by ANTLR 4.13.0


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
      "grammarFile", "rules", "nonTerminalRule", "terminalRule", "ruleBody", 
      "terminalRuleBody", "starOperator", "plusOperator", "questionMarkOperator", 
      "operator", "parentRuleBody", "stringRuleBody", "affectRuleBody", 
      "rOperand", "affectOp", "eqOp", "plusEqOp", "baseRules", "intBaseRule", 
      "floatBaseRule", "charBaseRule", "stringBaseRule", "idBaseRule", "wsBaseRule"
    },
    std::vector<std::string>{
      "", "'grammar'", "';'", "':'", "'|'", "'*'", "'+'", "'\\u003F'", "'('", 
      "')'", "'INT'", "'FLOAT'", "'CHAR'", "'STRING'", "'ID'", "'='", "'+='", 
      "''-'\\u003F[0-9]+'", "''.''", "'[0-9]*'", "''\\'''", "'('\\\\'|.)'", 
      "''\"''", "'('\\\\'|.)*\\u003F'", "'[a-zA-Z_]'", "'[a-zA-Z_0-9]*'", 
      "'WS'", "'[ \\t\\r\\n]'", "'->'", "'skip'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,198,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,5,0,53,8,0,10,0,12,0,56,9,0,1,
  	0,5,0,59,8,0,10,0,12,0,62,9,0,1,0,1,0,1,1,1,1,3,1,68,8,1,1,2,1,2,1,2,
  	1,2,1,2,5,2,75,8,2,10,2,12,2,78,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,5,4,92,8,4,10,4,12,4,95,9,4,1,5,1,5,1,5,1,5,3,5,101,8,5,
  	1,5,1,5,5,5,105,8,5,10,5,12,5,108,9,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,
  	1,9,3,9,119,8,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,13,1,13,1,13,3,13,137,8,13,1,14,1,14,3,14,141,8,14,1,15,1,
  	15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,153,8,17,1,18,1,18,1,
  	18,1,18,1,18,1,19,1,19,1,19,1,19,4,19,164,8,19,11,19,12,19,165,1,19,1,
  	19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,0,2,8,10,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,0,0,195,0,48,1,0,0,0,2,67,1,0,0,0,4,69,1,0,0,0,6,81,
  	1,0,0,0,8,86,1,0,0,0,10,100,1,0,0,0,12,109,1,0,0,0,14,111,1,0,0,0,16,
  	113,1,0,0,0,18,118,1,0,0,0,20,120,1,0,0,0,22,124,1,0,0,0,24,126,1,0,0,
  	0,26,136,1,0,0,0,28,140,1,0,0,0,30,142,1,0,0,0,32,144,1,0,0,0,34,152,
  	1,0,0,0,36,154,1,0,0,0,38,159,1,0,0,0,40,170,1,0,0,0,42,177,1,0,0,0,44,
  	184,1,0,0,0,46,190,1,0,0,0,48,49,5,1,0,0,49,50,5,30,0,0,50,54,5,2,0,0,
  	51,53,3,2,1,0,52,51,1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,
  	55,60,1,0,0,0,56,54,1,0,0,0,57,59,3,34,17,0,58,57,1,0,0,0,59,62,1,0,0,
  	0,60,58,1,0,0,0,60,61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,0,0,
  	1,64,1,1,0,0,0,65,68,3,4,2,0,66,68,3,6,3,0,67,65,1,0,0,0,67,66,1,0,0,
  	0,68,3,1,0,0,0,69,70,5,30,0,0,70,71,5,3,0,0,71,76,5,30,0,0,72,73,5,4,
  	0,0,73,75,5,30,0,0,74,72,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,
  	0,0,0,77,79,1,0,0,0,78,76,1,0,0,0,79,80,5,2,0,0,80,5,1,0,0,0,81,82,5,
  	30,0,0,82,83,5,3,0,0,83,84,3,8,4,0,84,85,5,2,0,0,85,7,1,0,0,0,86,87,6,
  	4,-1,0,87,88,3,10,5,0,88,93,1,0,0,0,89,90,10,2,0,0,90,92,3,10,5,0,91,
  	89,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,9,1,0,0,0,95,
  	93,1,0,0,0,96,97,6,5,-1,0,97,101,3,20,10,0,98,101,3,22,11,0,99,101,3,
  	24,12,0,100,96,1,0,0,0,100,98,1,0,0,0,100,99,1,0,0,0,101,106,1,0,0,0,
  	102,103,10,4,0,0,103,105,3,18,9,0,104,102,1,0,0,0,105,108,1,0,0,0,106,
  	104,1,0,0,0,106,107,1,0,0,0,107,11,1,0,0,0,108,106,1,0,0,0,109,110,5,
  	5,0,0,110,13,1,0,0,0,111,112,5,6,0,0,112,15,1,0,0,0,113,114,5,7,0,0,114,
  	17,1,0,0,0,115,119,3,12,6,0,116,119,3,14,7,0,117,119,3,16,8,0,118,115,
  	1,0,0,0,118,116,1,0,0,0,118,117,1,0,0,0,119,19,1,0,0,0,120,121,5,8,0,
  	0,121,122,3,8,4,0,122,123,5,9,0,0,123,21,1,0,0,0,124,125,5,31,0,0,125,
  	23,1,0,0,0,126,127,5,30,0,0,127,128,3,28,14,0,128,129,3,26,13,0,129,25,
  	1,0,0,0,130,137,5,30,0,0,131,137,5,10,0,0,132,137,5,11,0,0,133,137,5,
  	12,0,0,134,137,5,13,0,0,135,137,5,14,0,0,136,130,1,0,0,0,136,131,1,0,
  	0,0,136,132,1,0,0,0,136,133,1,0,0,0,136,134,1,0,0,0,136,135,1,0,0,0,137,
  	27,1,0,0,0,138,141,3,30,15,0,139,141,3,32,16,0,140,138,1,0,0,0,140,139,
  	1,0,0,0,141,29,1,0,0,0,142,143,5,15,0,0,143,31,1,0,0,0,144,145,5,16,0,
  	0,145,33,1,0,0,0,146,153,3,36,18,0,147,153,3,38,19,0,148,153,3,40,20,
  	0,149,153,3,42,21,0,150,153,3,44,22,0,151,153,3,46,23,0,152,146,1,0,0,
  	0,152,147,1,0,0,0,152,148,1,0,0,0,152,149,1,0,0,0,152,150,1,0,0,0,152,
  	151,1,0,0,0,153,35,1,0,0,0,154,155,5,10,0,0,155,156,5,3,0,0,156,157,5,
  	17,0,0,157,158,5,2,0,0,158,37,1,0,0,0,159,160,5,11,0,0,160,161,5,3,0,
  	0,161,163,5,17,0,0,162,164,5,18,0,0,163,162,1,0,0,0,164,165,1,0,0,0,165,
  	163,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,167,168,5,19,0,0,168,169,
  	5,2,0,0,169,39,1,0,0,0,170,171,5,12,0,0,171,172,5,3,0,0,172,173,5,20,
  	0,0,173,174,5,21,0,0,174,175,5,20,0,0,175,176,5,2,0,0,176,41,1,0,0,0,
  	177,178,5,13,0,0,178,179,5,3,0,0,179,180,5,22,0,0,180,181,5,23,0,0,181,
  	182,5,22,0,0,182,183,5,2,0,0,183,43,1,0,0,0,184,185,5,14,0,0,185,186,
  	5,3,0,0,186,187,5,24,0,0,187,188,5,25,0,0,188,189,5,2,0,0,189,45,1,0,
  	0,0,190,191,5,26,0,0,191,192,5,3,0,0,192,193,5,27,0,0,193,194,5,28,0,
  	0,194,195,5,29,0,0,195,196,5,2,0,0,196,47,1,0,0,0,12,54,60,67,76,93,100,
  	106,118,136,140,152,165
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


//----------------- GrammarFileContext ------------------------------------------------------------------

Antlr4GrammarParser::GrammarFileContext::GrammarFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::GrammarFileContext::EOF() {
  return getToken(Antlr4GrammarParser::EOF, 0);
}

tree::TerminalNode* Antlr4GrammarParser::GrammarFileContext::ID() {
  return getToken(Antlr4GrammarParser::ID, 0);
}

std::vector<Antlr4GrammarParser::BaseRulesContext *> Antlr4GrammarParser::GrammarFileContext::baseRules() {
  return getRuleContexts<Antlr4GrammarParser::BaseRulesContext>();
}

Antlr4GrammarParser::BaseRulesContext* Antlr4GrammarParser::GrammarFileContext::baseRules(size_t i) {
  return getRuleContext<Antlr4GrammarParser::BaseRulesContext>(i);
}

std::vector<Antlr4GrammarParser::RulesContext *> Antlr4GrammarParser::GrammarFileContext::rules() {
  return getRuleContexts<Antlr4GrammarParser::RulesContext>();
}

Antlr4GrammarParser::RulesContext* Antlr4GrammarParser::GrammarFileContext::rules(size_t i) {
  return getRuleContext<Antlr4GrammarParser::RulesContext>(i);
}


size_t Antlr4GrammarParser::GrammarFileContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleGrammarFile;
}


std::any Antlr4GrammarParser::GrammarFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitGrammarFile(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::GrammarFileContext* Antlr4GrammarParser::grammarFile() {
  GrammarFileContext *_localctx = _tracker.createInstance<GrammarFileContext>(_ctx, getState());
  enterRule(_localctx, 0, Antlr4GrammarParser::RuleGrammarFile);
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
    setState(48);
    match(Antlr4GrammarParser::T__0);
    setState(49);
    antlrcpp::downCast<GrammarFileContext *>(_localctx)->grammarName = match(Antlr4GrammarParser::ID);
    setState(50);
    match(Antlr4GrammarParser::T__1);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Antlr4GrammarParser::ID) {
      setState(51);
      antlrcpp::downCast<GrammarFileContext *>(_localctx)->rulesContext = rules();
      antlrcpp::downCast<GrammarFileContext *>(_localctx)->grammarRules.push_back(antlrcpp::downCast<GrammarFileContext *>(_localctx)->rulesContext);
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67140608) != 0)) {
      setState(57);
      baseRules();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    match(Antlr4GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulesContext ------------------------------------------------------------------

Antlr4GrammarParser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::NonTerminalRuleContext* Antlr4GrammarParser::RulesContext::nonTerminalRule() {
  return getRuleContext<Antlr4GrammarParser::NonTerminalRuleContext>(0);
}

Antlr4GrammarParser::TerminalRuleContext* Antlr4GrammarParser::RulesContext::terminalRule() {
  return getRuleContext<Antlr4GrammarParser::TerminalRuleContext>(0);
}


size_t Antlr4GrammarParser::RulesContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleRules;
}


std::any Antlr4GrammarParser::RulesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitRules(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::RulesContext* Antlr4GrammarParser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 2, Antlr4GrammarParser::RuleRules);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      nonTerminalRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      terminalRule();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonTerminalRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::NonTerminalRuleContext::NonTerminalRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Antlr4GrammarParser::NonTerminalRuleContext::ID() {
  return getTokens(Antlr4GrammarParser::ID);
}

tree::TerminalNode* Antlr4GrammarParser::NonTerminalRuleContext::ID(size_t i) {
  return getToken(Antlr4GrammarParser::ID, i);
}


size_t Antlr4GrammarParser::NonTerminalRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleNonTerminalRule;
}


std::any Antlr4GrammarParser::NonTerminalRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitNonTerminalRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::NonTerminalRuleContext* Antlr4GrammarParser::nonTerminalRule() {
  NonTerminalRuleContext *_localctx = _tracker.createInstance<NonTerminalRuleContext>(_ctx, getState());
  enterRule(_localctx, 4, Antlr4GrammarParser::RuleNonTerminalRule);
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
    setState(69);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(70);
    match(Antlr4GrammarParser::T__2);
    setState(71);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Antlr4GrammarParser::T__3) {
      setState(72);
      match(Antlr4GrammarParser::T__3);
      setState(73);
      antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
      antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminalRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::TerminalRuleContext::TerminalRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::TerminalRuleContext::ID() {
  return getToken(Antlr4GrammarParser::ID, 0);
}

Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::TerminalRuleContext::ruleBody() {
  return getRuleContext<Antlr4GrammarParser::RuleBodyContext>(0);
}


size_t Antlr4GrammarParser::TerminalRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleTerminalRule;
}


std::any Antlr4GrammarParser::TerminalRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitTerminalRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::TerminalRuleContext* Antlr4GrammarParser::terminalRule() {
  TerminalRuleContext *_localctx = _tracker.createInstance<TerminalRuleContext>(_ctx, getState());
  enterRule(_localctx, 6, Antlr4GrammarParser::RuleTerminalRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(82);
    match(Antlr4GrammarParser::T__2);
    setState(83);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->body = ruleBody(0);
    setState(84);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleBodyContext ------------------------------------------------------------------

Antlr4GrammarParser::RuleBodyContext::RuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::TerminalRuleBodyContext* Antlr4GrammarParser::RuleBodyContext::terminalRuleBody() {
  return getRuleContext<Antlr4GrammarParser::TerminalRuleBodyContext>(0);
}

Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::RuleBodyContext::ruleBody() {
  return getRuleContext<Antlr4GrammarParser::RuleBodyContext>(0);
}


size_t Antlr4GrammarParser::RuleBodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleRuleBody;
}


std::any Antlr4GrammarParser::RuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitRuleBody(this);
  else
    return visitor->visitChildren(this);
}


Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::ruleBody() {
   return ruleBody(0);
}

Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::ruleBody(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Antlr4GrammarParser::RuleBodyContext *_localctx = _tracker.createInstance<RuleBodyContext>(_ctx, parentState);
  Antlr4GrammarParser::RuleBodyContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, Antlr4GrammarParser::RuleRuleBody, precedence);

    

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
    setState(87);
    terminalRuleBody(0);
    _ctx->stop = _input->LT(-1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RuleBodyContext>(parentContext, parentState);
        _localctx->lbody = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleRuleBody);
        setState(89);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(90);
        antlrcpp::downCast<RuleBodyContext *>(_localctx)->rbody = terminalRuleBody(0); 
      }
      setState(95);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TerminalRuleBodyContext ------------------------------------------------------------------

Antlr4GrammarParser::TerminalRuleBodyContext::TerminalRuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::ParentRuleBodyContext* Antlr4GrammarParser::TerminalRuleBodyContext::parentRuleBody() {
  return getRuleContext<Antlr4GrammarParser::ParentRuleBodyContext>(0);
}

Antlr4GrammarParser::StringRuleBodyContext* Antlr4GrammarParser::TerminalRuleBodyContext::stringRuleBody() {
  return getRuleContext<Antlr4GrammarParser::StringRuleBodyContext>(0);
}

Antlr4GrammarParser::AffectRuleBodyContext* Antlr4GrammarParser::TerminalRuleBodyContext::affectRuleBody() {
  return getRuleContext<Antlr4GrammarParser::AffectRuleBodyContext>(0);
}

Antlr4GrammarParser::TerminalRuleBodyContext* Antlr4GrammarParser::TerminalRuleBodyContext::terminalRuleBody() {
  return getRuleContext<Antlr4GrammarParser::TerminalRuleBodyContext>(0);
}

Antlr4GrammarParser::OperatorContext* Antlr4GrammarParser::TerminalRuleBodyContext::operator_() {
  return getRuleContext<Antlr4GrammarParser::OperatorContext>(0);
}


size_t Antlr4GrammarParser::TerminalRuleBodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleTerminalRuleBody;
}


std::any Antlr4GrammarParser::TerminalRuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitTerminalRuleBody(this);
  else
    return visitor->visitChildren(this);
}


Antlr4GrammarParser::TerminalRuleBodyContext* Antlr4GrammarParser::terminalRuleBody() {
   return terminalRuleBody(0);
}

Antlr4GrammarParser::TerminalRuleBodyContext* Antlr4GrammarParser::terminalRuleBody(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Antlr4GrammarParser::TerminalRuleBodyContext *_localctx = _tracker.createInstance<TerminalRuleBodyContext>(_ctx, parentState);
  Antlr4GrammarParser::TerminalRuleBodyContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, Antlr4GrammarParser::RuleTerminalRuleBody, precedence);

    

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
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__7: {
        setState(97);
        parentRuleBody();
        break;
      }

      case Antlr4GrammarParser::STRING: {
        setState(98);
        stringRuleBody();
        break;
      }

      case Antlr4GrammarParser::ID: {
        setState(99);
        affectRuleBody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TerminalRuleBodyContext>(parentContext, parentState);
        _localctx->body = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerminalRuleBody);
        setState(102);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");

        setState(103);
        antlrcpp::downCast<TerminalRuleBodyContext *>(_localctx)->op = operator_(); 
      }
      setState(108);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StarOperatorContext ------------------------------------------------------------------

Antlr4GrammarParser::StarOperatorContext::StarOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::StarOperatorContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleStarOperator;
}


std::any Antlr4GrammarParser::StarOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitStarOperator(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::StarOperatorContext* Antlr4GrammarParser::starOperator() {
  StarOperatorContext *_localctx = _tracker.createInstance<StarOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, Antlr4GrammarParser::RuleStarOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(Antlr4GrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusOperatorContext ------------------------------------------------------------------

Antlr4GrammarParser::PlusOperatorContext::PlusOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::PlusOperatorContext::getRuleIndex() const {
  return Antlr4GrammarParser::RulePlusOperator;
}


std::any Antlr4GrammarParser::PlusOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitPlusOperator(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::PlusOperatorContext* Antlr4GrammarParser::plusOperator() {
  PlusOperatorContext *_localctx = _tracker.createInstance<PlusOperatorContext>(_ctx, getState());
  enterRule(_localctx, 14, Antlr4GrammarParser::RulePlusOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(Antlr4GrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuestionMarkOperatorContext ------------------------------------------------------------------

Antlr4GrammarParser::QuestionMarkOperatorContext::QuestionMarkOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::QuestionMarkOperatorContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleQuestionMarkOperator;
}


std::any Antlr4GrammarParser::QuestionMarkOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitQuestionMarkOperator(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::QuestionMarkOperatorContext* Antlr4GrammarParser::questionMarkOperator() {
  QuestionMarkOperatorContext *_localctx = _tracker.createInstance<QuestionMarkOperatorContext>(_ctx, getState());
  enterRule(_localctx, 16, Antlr4GrammarParser::RuleQuestionMarkOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(Antlr4GrammarParser::T__6);
   
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

Antlr4GrammarParser::StarOperatorContext* Antlr4GrammarParser::OperatorContext::starOperator() {
  return getRuleContext<Antlr4GrammarParser::StarOperatorContext>(0);
}

Antlr4GrammarParser::PlusOperatorContext* Antlr4GrammarParser::OperatorContext::plusOperator() {
  return getRuleContext<Antlr4GrammarParser::PlusOperatorContext>(0);
}

Antlr4GrammarParser::QuestionMarkOperatorContext* Antlr4GrammarParser::OperatorContext::questionMarkOperator() {
  return getRuleContext<Antlr4GrammarParser::QuestionMarkOperatorContext>(0);
}


size_t Antlr4GrammarParser::OperatorContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleOperator;
}


std::any Antlr4GrammarParser::OperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitOperator(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::OperatorContext* Antlr4GrammarParser::operator_() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, Antlr4GrammarParser::RuleOperator);

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
      case Antlr4GrammarParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(115);
        starOperator();
        break;
      }

      case Antlr4GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(116);
        plusOperator();
        break;
      }

      case Antlr4GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(117);
        questionMarkOperator();
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

//----------------- ParentRuleBodyContext ------------------------------------------------------------------

Antlr4GrammarParser::ParentRuleBodyContext::ParentRuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::ParentRuleBodyContext::ruleBody() {
  return getRuleContext<Antlr4GrammarParser::RuleBodyContext>(0);
}


size_t Antlr4GrammarParser::ParentRuleBodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleParentRuleBody;
}


std::any Antlr4GrammarParser::ParentRuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitParentRuleBody(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::ParentRuleBodyContext* Antlr4GrammarParser::parentRuleBody() {
  ParentRuleBodyContext *_localctx = _tracker.createInstance<ParentRuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, Antlr4GrammarParser::RuleParentRuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(Antlr4GrammarParser::T__7);
    setState(121);
    antlrcpp::downCast<ParentRuleBodyContext *>(_localctx)->body = ruleBody(0);
    setState(122);
    match(Antlr4GrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringRuleBodyContext ------------------------------------------------------------------

Antlr4GrammarParser::StringRuleBodyContext::StringRuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::StringRuleBodyContext::STRING() {
  return getToken(Antlr4GrammarParser::STRING, 0);
}


size_t Antlr4GrammarParser::StringRuleBodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleStringRuleBody;
}


std::any Antlr4GrammarParser::StringRuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitStringRuleBody(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::StringRuleBodyContext* Antlr4GrammarParser::stringRuleBody() {
  StringRuleBodyContext *_localctx = _tracker.createInstance<StringRuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 22, Antlr4GrammarParser::RuleStringRuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    antlrcpp::downCast<StringRuleBodyContext *>(_localctx)->body = match(Antlr4GrammarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectRuleBodyContext ------------------------------------------------------------------

Antlr4GrammarParser::AffectRuleBodyContext::AffectRuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::AffectRuleBodyContext::ID() {
  return getToken(Antlr4GrammarParser::ID, 0);
}

Antlr4GrammarParser::AffectOpContext* Antlr4GrammarParser::AffectRuleBodyContext::affectOp() {
  return getRuleContext<Antlr4GrammarParser::AffectOpContext>(0);
}

Antlr4GrammarParser::ROperandContext* Antlr4GrammarParser::AffectRuleBodyContext::rOperand() {
  return getRuleContext<Antlr4GrammarParser::ROperandContext>(0);
}


size_t Antlr4GrammarParser::AffectRuleBodyContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleAffectRuleBody;
}


std::any Antlr4GrammarParser::AffectRuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitAffectRuleBody(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::AffectRuleBodyContext* Antlr4GrammarParser::affectRuleBody() {
  AffectRuleBodyContext *_localctx = _tracker.createInstance<AffectRuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, Antlr4GrammarParser::RuleAffectRuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(127);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->op = affectOp();
    setState(128);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->value = rOperand();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ROperandContext ------------------------------------------------------------------

Antlr4GrammarParser::ROperandContext::ROperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Antlr4GrammarParser::ROperandContext::ID() {
  return getToken(Antlr4GrammarParser::ID, 0);
}


size_t Antlr4GrammarParser::ROperandContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleROperand;
}


std::any Antlr4GrammarParser::ROperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitROperand(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::ROperandContext* Antlr4GrammarParser::rOperand() {
  ROperandContext *_localctx = _tracker.createInstance<ROperandContext>(_ctx, getState());
  enterRule(_localctx, 26, Antlr4GrammarParser::RuleROperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(130);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::ID);
        break;
      }

      case Antlr4GrammarParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__9);
        break;
      }

      case Antlr4GrammarParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(132);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__10);
        break;
      }

      case Antlr4GrammarParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(133);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__11);
        break;
      }

      case Antlr4GrammarParser::T__12: {
        enterOuterAlt(_localctx, 5);
        setState(134);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__12);
        break;
      }

      case Antlr4GrammarParser::T__13: {
        enterOuterAlt(_localctx, 6);
        setState(135);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__13);
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

//----------------- AffectOpContext ------------------------------------------------------------------

Antlr4GrammarParser::AffectOpContext::AffectOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::EqOpContext* Antlr4GrammarParser::AffectOpContext::eqOp() {
  return getRuleContext<Antlr4GrammarParser::EqOpContext>(0);
}

Antlr4GrammarParser::PlusEqOpContext* Antlr4GrammarParser::AffectOpContext::plusEqOp() {
  return getRuleContext<Antlr4GrammarParser::PlusEqOpContext>(0);
}


size_t Antlr4GrammarParser::AffectOpContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleAffectOp;
}


std::any Antlr4GrammarParser::AffectOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitAffectOp(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::AffectOpContext* Antlr4GrammarParser::affectOp() {
  AffectOpContext *_localctx = _tracker.createInstance<AffectOpContext>(_ctx, getState());
  enterRule(_localctx, 28, Antlr4GrammarParser::RuleAffectOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        eqOp();
        break;
      }

      case Antlr4GrammarParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        plusEqOp();
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

//----------------- EqOpContext ------------------------------------------------------------------

Antlr4GrammarParser::EqOpContext::EqOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::EqOpContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleEqOp;
}


std::any Antlr4GrammarParser::EqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitEqOp(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::EqOpContext* Antlr4GrammarParser::eqOp() {
  EqOpContext *_localctx = _tracker.createInstance<EqOpContext>(_ctx, getState());
  enterRule(_localctx, 30, Antlr4GrammarParser::RuleEqOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(Antlr4GrammarParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusEqOpContext ------------------------------------------------------------------

Antlr4GrammarParser::PlusEqOpContext::PlusEqOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::PlusEqOpContext::getRuleIndex() const {
  return Antlr4GrammarParser::RulePlusEqOp;
}


std::any Antlr4GrammarParser::PlusEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitPlusEqOp(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::PlusEqOpContext* Antlr4GrammarParser::plusEqOp() {
  PlusEqOpContext *_localctx = _tracker.createInstance<PlusEqOpContext>(_ctx, getState());
  enterRule(_localctx, 32, Antlr4GrammarParser::RulePlusEqOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(Antlr4GrammarParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseRulesContext ------------------------------------------------------------------

Antlr4GrammarParser::BaseRulesContext::BaseRulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Antlr4GrammarParser::IntBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::intBaseRule() {
  return getRuleContext<Antlr4GrammarParser::IntBaseRuleContext>(0);
}

Antlr4GrammarParser::FloatBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::floatBaseRule() {
  return getRuleContext<Antlr4GrammarParser::FloatBaseRuleContext>(0);
}

Antlr4GrammarParser::CharBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::charBaseRule() {
  return getRuleContext<Antlr4GrammarParser::CharBaseRuleContext>(0);
}

Antlr4GrammarParser::StringBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::stringBaseRule() {
  return getRuleContext<Antlr4GrammarParser::StringBaseRuleContext>(0);
}

Antlr4GrammarParser::IdBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::idBaseRule() {
  return getRuleContext<Antlr4GrammarParser::IdBaseRuleContext>(0);
}

Antlr4GrammarParser::WsBaseRuleContext* Antlr4GrammarParser::BaseRulesContext::wsBaseRule() {
  return getRuleContext<Antlr4GrammarParser::WsBaseRuleContext>(0);
}


size_t Antlr4GrammarParser::BaseRulesContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleBaseRules;
}


std::any Antlr4GrammarParser::BaseRulesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitBaseRules(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::BaseRulesContext* Antlr4GrammarParser::baseRules() {
  BaseRulesContext *_localctx = _tracker.createInstance<BaseRulesContext>(_ctx, getState());
  enterRule(_localctx, 34, Antlr4GrammarParser::RuleBaseRules);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        intBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(147);
        floatBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(148);
        charBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(149);
        stringBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__13: {
        enterOuterAlt(_localctx, 5);
        setState(150);
        idBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__25: {
        enterOuterAlt(_localctx, 6);
        setState(151);
        wsBaseRule();
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

//----------------- IntBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::IntBaseRuleContext::IntBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::IntBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleIntBaseRule;
}


std::any Antlr4GrammarParser::IntBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitIntBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::IntBaseRuleContext* Antlr4GrammarParser::intBaseRule() {
  IntBaseRuleContext *_localctx = _tracker.createInstance<IntBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 36, Antlr4GrammarParser::RuleIntBaseRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(Antlr4GrammarParser::T__9);
    setState(155);
    match(Antlr4GrammarParser::T__2);
    setState(156);
    match(Antlr4GrammarParser::T__16);
    setState(157);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::FloatBaseRuleContext::FloatBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::FloatBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleFloatBaseRule;
}


std::any Antlr4GrammarParser::FloatBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitFloatBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::FloatBaseRuleContext* Antlr4GrammarParser::floatBaseRule() {
  FloatBaseRuleContext *_localctx = _tracker.createInstance<FloatBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 38, Antlr4GrammarParser::RuleFloatBaseRule);
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
    setState(159);
    match(Antlr4GrammarParser::T__10);
    setState(160);
    match(Antlr4GrammarParser::T__2);
    setState(161);
    match(Antlr4GrammarParser::T__16);
    setState(163); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(162);
      match(Antlr4GrammarParser::T__17);
      setState(165); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == Antlr4GrammarParser::T__17);
    setState(167);
    match(Antlr4GrammarParser::T__18);
    setState(168);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::CharBaseRuleContext::CharBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::CharBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleCharBaseRule;
}


std::any Antlr4GrammarParser::CharBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitCharBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::CharBaseRuleContext* Antlr4GrammarParser::charBaseRule() {
  CharBaseRuleContext *_localctx = _tracker.createInstance<CharBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 40, Antlr4GrammarParser::RuleCharBaseRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(Antlr4GrammarParser::T__11);
    setState(171);
    match(Antlr4GrammarParser::T__2);
    setState(172);
    match(Antlr4GrammarParser::T__19);
    setState(173);
    match(Antlr4GrammarParser::T__20);
    setState(174);
    match(Antlr4GrammarParser::T__19);
    setState(175);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::StringBaseRuleContext::StringBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::StringBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleStringBaseRule;
}


std::any Antlr4GrammarParser::StringBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitStringBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::StringBaseRuleContext* Antlr4GrammarParser::stringBaseRule() {
  StringBaseRuleContext *_localctx = _tracker.createInstance<StringBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 42, Antlr4GrammarParser::RuleStringBaseRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(Antlr4GrammarParser::T__12);
    setState(178);
    match(Antlr4GrammarParser::T__2);
    setState(179);
    match(Antlr4GrammarParser::T__21);
    setState(180);
    match(Antlr4GrammarParser::T__22);
    setState(181);
    match(Antlr4GrammarParser::T__21);
    setState(182);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::IdBaseRuleContext::IdBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::IdBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleIdBaseRule;
}


std::any Antlr4GrammarParser::IdBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitIdBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::IdBaseRuleContext* Antlr4GrammarParser::idBaseRule() {
  IdBaseRuleContext *_localctx = _tracker.createInstance<IdBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 44, Antlr4GrammarParser::RuleIdBaseRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(Antlr4GrammarParser::T__13);
    setState(185);
    match(Antlr4GrammarParser::T__2);
    setState(186);
    match(Antlr4GrammarParser::T__23);
    setState(187);
    match(Antlr4GrammarParser::T__24);
    setState(188);
    match(Antlr4GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WsBaseRuleContext ------------------------------------------------------------------

Antlr4GrammarParser::WsBaseRuleContext::WsBaseRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Antlr4GrammarParser::WsBaseRuleContext::getRuleIndex() const {
  return Antlr4GrammarParser::RuleWsBaseRule;
}


std::any Antlr4GrammarParser::WsBaseRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Antlr4GrammarVisitor*>(visitor))
    return parserVisitor->visitWsBaseRule(this);
  else
    return visitor->visitChildren(this);
}

Antlr4GrammarParser::WsBaseRuleContext* Antlr4GrammarParser::wsBaseRule() {
  WsBaseRuleContext *_localctx = _tracker.createInstance<WsBaseRuleContext>(_ctx, getState());
  enterRule(_localctx, 46, Antlr4GrammarParser::RuleWsBaseRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(Antlr4GrammarParser::T__25);
    setState(191);
    match(Antlr4GrammarParser::T__2);
    setState(192);
    match(Antlr4GrammarParser::T__26);
    setState(193);
    match(Antlr4GrammarParser::T__27);
    setState(194);
    match(Antlr4GrammarParser::T__28);
    setState(195);
    match(Antlr4GrammarParser::T__1);
   
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
    case 4: return ruleBodySempred(antlrcpp::downCast<RuleBodyContext *>(context), predicateIndex);
    case 5: return terminalRuleBodySempred(antlrcpp::downCast<TerminalRuleBodyContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Antlr4GrammarParser::ruleBodySempred(RuleBodyContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool Antlr4GrammarParser::terminalRuleBodySempred(TerminalRuleBodyContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 4);

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
