
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
      "grammarFile", "rules", "nonTerminalRule", "terminalRule", "ruleBody", 
      "terminalRuleBody", "starOperator", "plusOperator", "questionMarkOperator", 
      "operator", "parentRuleBody", "stringRuleBody", "affectRuleBody", 
      "rOperand", "affectOp", "eqOp", "plusEqOp", "baseRules", "intBaseRule", 
      "floatBaseRule", "charBaseRule", "stringBaseRule", "idBaseRule", "wsBaseRule"
    },
    std::vector<std::string>{
      "", "'grammar'", "';'", "':'", "'('", "')'", "'|'", "'*'", "'+'", 
      "'\\u003F'", "'INT'", "'FLOAT'", "'CHAR'", "'STRING'", "'ID'", "'='", 
      "'+='", "''-'\\u003F[0-9]+'", "''.''", "'[0-9]*'", "''\\'''", "'('\\\\'|.)'", 
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
  	4,1,32,203,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,5,0,53,8,0,10,0,12,0,56,9,0,1,
  	0,5,0,59,8,0,10,0,12,0,62,9,0,1,0,1,0,1,1,1,1,3,1,68,8,1,1,2,1,2,1,2,
  	1,2,1,2,1,2,3,2,76,8,2,1,2,1,2,1,2,1,2,1,2,3,2,83,8,2,5,2,85,8,2,10,2,
  	12,2,88,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,4,4,98,8,4,11,4,12,4,99,1,
  	5,1,5,1,5,1,5,3,5,106,8,5,1,5,1,5,5,5,110,8,5,10,5,12,5,113,9,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,3,9,124,8,9,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,142,8,13,1,
  	14,1,14,3,14,146,8,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,3,17,158,8,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,4,19,169,
  	8,19,11,19,12,19,170,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,0,1,10,24,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,0,0,202,0,48,1,0,0,0,2,67,1,
  	0,0,0,4,69,1,0,0,0,6,91,1,0,0,0,8,97,1,0,0,0,10,105,1,0,0,0,12,114,1,
  	0,0,0,14,116,1,0,0,0,16,118,1,0,0,0,18,123,1,0,0,0,20,125,1,0,0,0,22,
  	129,1,0,0,0,24,131,1,0,0,0,26,141,1,0,0,0,28,145,1,0,0,0,30,147,1,0,0,
  	0,32,149,1,0,0,0,34,157,1,0,0,0,36,159,1,0,0,0,38,164,1,0,0,0,40,175,
  	1,0,0,0,42,182,1,0,0,0,44,189,1,0,0,0,46,195,1,0,0,0,48,49,5,1,0,0,49,
  	50,5,30,0,0,50,54,5,2,0,0,51,53,3,2,1,0,52,51,1,0,0,0,53,56,1,0,0,0,54,
  	52,1,0,0,0,54,55,1,0,0,0,55,60,1,0,0,0,56,54,1,0,0,0,57,59,3,34,17,0,
  	58,57,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,63,1,0,0,0,
  	62,60,1,0,0,0,63,64,5,0,0,1,64,1,1,0,0,0,65,68,3,4,2,0,66,68,3,6,3,0,
  	67,65,1,0,0,0,67,66,1,0,0,0,68,3,1,0,0,0,69,70,5,30,0,0,70,75,5,3,0,0,
  	71,72,5,4,0,0,72,73,5,30,0,0,73,76,5,5,0,0,74,76,5,30,0,0,75,71,1,0,0,
  	0,75,74,1,0,0,0,76,86,1,0,0,0,77,82,5,6,0,0,78,79,5,4,0,0,79,80,5,30,
  	0,0,80,83,5,5,0,0,81,83,5,30,0,0,82,78,1,0,0,0,82,81,1,0,0,0,83,85,1,
  	0,0,0,84,77,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,89,1,
  	0,0,0,88,86,1,0,0,0,89,90,5,2,0,0,90,5,1,0,0,0,91,92,5,30,0,0,92,93,5,
  	3,0,0,93,94,3,8,4,0,94,95,5,2,0,0,95,7,1,0,0,0,96,98,3,10,5,0,97,96,1,
  	0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,9,1,0,0,0,101,102,
  	6,5,-1,0,102,106,3,20,10,0,103,106,3,22,11,0,104,106,3,24,12,0,105,101,
  	1,0,0,0,105,103,1,0,0,0,105,104,1,0,0,0,106,111,1,0,0,0,107,108,10,4,
  	0,0,108,110,3,18,9,0,109,107,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,
  	111,112,1,0,0,0,112,11,1,0,0,0,113,111,1,0,0,0,114,115,5,7,0,0,115,13,
  	1,0,0,0,116,117,5,8,0,0,117,15,1,0,0,0,118,119,5,9,0,0,119,17,1,0,0,0,
  	120,124,3,12,6,0,121,124,3,14,7,0,122,124,3,16,8,0,123,120,1,0,0,0,123,
  	121,1,0,0,0,123,122,1,0,0,0,124,19,1,0,0,0,125,126,5,4,0,0,126,127,3,
  	8,4,0,127,128,5,5,0,0,128,21,1,0,0,0,129,130,5,31,0,0,130,23,1,0,0,0,
  	131,132,5,30,0,0,132,133,3,28,14,0,133,134,3,26,13,0,134,25,1,0,0,0,135,
  	142,5,30,0,0,136,142,5,10,0,0,137,142,5,11,0,0,138,142,5,12,0,0,139,142,
  	5,13,0,0,140,142,5,14,0,0,141,135,1,0,0,0,141,136,1,0,0,0,141,137,1,0,
  	0,0,141,138,1,0,0,0,141,139,1,0,0,0,141,140,1,0,0,0,142,27,1,0,0,0,143,
  	146,3,30,15,0,144,146,3,32,16,0,145,143,1,0,0,0,145,144,1,0,0,0,146,29,
  	1,0,0,0,147,148,5,15,0,0,148,31,1,0,0,0,149,150,5,16,0,0,150,33,1,0,0,
  	0,151,158,3,36,18,0,152,158,3,38,19,0,153,158,3,40,20,0,154,158,3,42,
  	21,0,155,158,3,44,22,0,156,158,3,46,23,0,157,151,1,0,0,0,157,152,1,0,
  	0,0,157,153,1,0,0,0,157,154,1,0,0,0,157,155,1,0,0,0,157,156,1,0,0,0,158,
  	35,1,0,0,0,159,160,5,10,0,0,160,161,5,3,0,0,161,162,5,17,0,0,162,163,
  	5,2,0,0,163,37,1,0,0,0,164,165,5,11,0,0,165,166,5,3,0,0,166,168,5,17,
  	0,0,167,169,5,18,0,0,168,167,1,0,0,0,169,170,1,0,0,0,170,168,1,0,0,0,
  	170,171,1,0,0,0,171,172,1,0,0,0,172,173,5,19,0,0,173,174,5,2,0,0,174,
  	39,1,0,0,0,175,176,5,12,0,0,176,177,5,3,0,0,177,178,5,20,0,0,178,179,
  	5,21,0,0,179,180,5,20,0,0,180,181,5,2,0,0,181,41,1,0,0,0,182,183,5,13,
  	0,0,183,184,5,3,0,0,184,185,5,22,0,0,185,186,5,23,0,0,186,187,5,22,0,
  	0,187,188,5,2,0,0,188,43,1,0,0,0,189,190,5,14,0,0,190,191,5,3,0,0,191,
  	192,5,24,0,0,192,193,5,25,0,0,193,194,5,2,0,0,194,45,1,0,0,0,195,196,
  	5,26,0,0,196,197,5,3,0,0,197,198,5,27,0,0,198,199,5,28,0,0,199,200,5,
  	29,0,0,200,201,5,2,0,0,201,47,1,0,0,0,14,54,60,67,75,82,86,99,105,111,
  	123,141,145,157,170
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
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__3: {
        setState(71);
        match(Antlr4GrammarParser::T__3);
        setState(72);
        antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
        antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
        setState(73);
        match(Antlr4GrammarParser::T__4);
        break;
      }

      case Antlr4GrammarParser::ID: {
        setState(74);
        antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
        antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Antlr4GrammarParser::T__5) {
      setState(77);
      match(Antlr4GrammarParser::T__5);
      setState(82);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Antlr4GrammarParser::T__3: {
          setState(78);
          match(Antlr4GrammarParser::T__3);
          setState(79);
          antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
          antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
          setState(80);
          match(Antlr4GrammarParser::T__4);
          break;
        }

        case Antlr4GrammarParser::ID: {
          setState(81);
          antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
          antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
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
    setState(91);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(92);
    match(Antlr4GrammarParser::T__2);
    setState(93);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->body = ruleBody();
    setState(94);
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

std::vector<Antlr4GrammarParser::TerminalRuleBodyContext *> Antlr4GrammarParser::RuleBodyContext::terminalRuleBody() {
  return getRuleContexts<Antlr4GrammarParser::TerminalRuleBodyContext>();
}

Antlr4GrammarParser::TerminalRuleBodyContext* Antlr4GrammarParser::RuleBodyContext::terminalRuleBody(size_t i) {
  return getRuleContext<Antlr4GrammarParser::TerminalRuleBodyContext>(i);
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
  RuleBodyContext *_localctx = _tracker.createInstance<RuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 8, Antlr4GrammarParser::RuleRuleBody);
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
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(96);
      antlrcpp::downCast<RuleBodyContext *>(_localctx)->terminalRuleBodyContext = terminalRuleBody(0);
      antlrcpp::downCast<RuleBodyContext *>(_localctx)->bodies.push_back(antlrcpp::downCast<RuleBodyContext *>(_localctx)->terminalRuleBodyContext);
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221225488) != 0));
   
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
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__3: {
        setState(102);
        parentRuleBody();
        break;
      }

      case Antlr4GrammarParser::STRING: {
        setState(103);
        stringRuleBody();
        break;
      }

      case Antlr4GrammarParser::ID: {
        setState(104);
        affectRuleBody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TerminalRuleBodyContext>(parentContext, parentState);
        _localctx->body = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerminalRuleBody);
        setState(107);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");

        setState(108);
        antlrcpp::downCast<TerminalRuleBodyContext *>(_localctx)->op = operator_(); 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
    setState(114);
    match(Antlr4GrammarParser::T__6);
   
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
    setState(116);
    match(Antlr4GrammarParser::T__7);
   
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
    setState(118);
    match(Antlr4GrammarParser::T__8);
   
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
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(120);
        starOperator();
        break;
      }

      case Antlr4GrammarParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(121);
        plusOperator();
        break;
      }

      case Antlr4GrammarParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(122);
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
    setState(125);
    match(Antlr4GrammarParser::T__3);
    setState(126);
    antlrcpp::downCast<ParentRuleBodyContext *>(_localctx)->body = ruleBody();
    setState(127);
    match(Antlr4GrammarParser::T__4);
   
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
    setState(129);
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
    setState(131);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(132);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->op = affectOp();
    setState(133);
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
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::ID);
        break;
      }

      case Antlr4GrammarParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(136);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__9);
        break;
      }

      case Antlr4GrammarParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(137);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__10);
        break;
      }

      case Antlr4GrammarParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(138);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__11);
        break;
      }

      case Antlr4GrammarParser::T__12: {
        enterOuterAlt(_localctx, 5);
        setState(139);
        antlrcpp::downCast<ROperandContext *>(_localctx)->val = match(Antlr4GrammarParser::T__12);
        break;
      }

      case Antlr4GrammarParser::T__13: {
        enterOuterAlt(_localctx, 6);
        setState(140);
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
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(143);
        eqOp();
        break;
      }

      case Antlr4GrammarParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(144);
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
    setState(147);
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
    setState(149);
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
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(151);
        intBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        floatBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(153);
        charBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(154);
        stringBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__13: {
        enterOuterAlt(_localctx, 5);
        setState(155);
        idBaseRule();
        break;
      }

      case Antlr4GrammarParser::T__25: {
        enterOuterAlt(_localctx, 6);
        setState(156);
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
    setState(159);
    match(Antlr4GrammarParser::T__9);
    setState(160);
    match(Antlr4GrammarParser::T__2);
    setState(161);
    match(Antlr4GrammarParser::T__16);
    setState(162);
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
    setState(164);
    match(Antlr4GrammarParser::T__10);
    setState(165);
    match(Antlr4GrammarParser::T__2);
    setState(166);
    match(Antlr4GrammarParser::T__16);
    setState(168); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(167);
      match(Antlr4GrammarParser::T__17);
      setState(170); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == Antlr4GrammarParser::T__17);
    setState(172);
    match(Antlr4GrammarParser::T__18);
    setState(173);
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
    setState(175);
    match(Antlr4GrammarParser::T__11);
    setState(176);
    match(Antlr4GrammarParser::T__2);
    setState(177);
    match(Antlr4GrammarParser::T__19);
    setState(178);
    match(Antlr4GrammarParser::T__20);
    setState(179);
    match(Antlr4GrammarParser::T__19);
    setState(180);
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
    setState(182);
    match(Antlr4GrammarParser::T__12);
    setState(183);
    match(Antlr4GrammarParser::T__2);
    setState(184);
    match(Antlr4GrammarParser::T__21);
    setState(185);
    match(Antlr4GrammarParser::T__22);
    setState(186);
    match(Antlr4GrammarParser::T__21);
    setState(187);
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
    setState(189);
    match(Antlr4GrammarParser::T__13);
    setState(190);
    match(Antlr4GrammarParser::T__2);
    setState(191);
    match(Antlr4GrammarParser::T__23);
    setState(192);
    match(Antlr4GrammarParser::T__24);
    setState(193);
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
    setState(195);
    match(Antlr4GrammarParser::T__25);
    setState(196);
    match(Antlr4GrammarParser::T__2);
    setState(197);
    match(Antlr4GrammarParser::T__26);
    setState(198);
    match(Antlr4GrammarParser::T__27);
    setState(199);
    match(Antlr4GrammarParser::T__28);
    setState(200);
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
    case 5: return terminalRuleBodySempred(antlrcpp::downCast<TerminalRuleBodyContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Antlr4GrammarParser::terminalRuleBodySempred(TerminalRuleBodyContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

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
