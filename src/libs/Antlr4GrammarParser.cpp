
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
      "affectOp", "eqOp", "plusEqOp"
    },
    std::vector<std::string>{
      "", "'grammar'", "';'", "':'", "'|'", "'*'", "'+'", "'\\u003F'", "'('", 
      "')'", "'='", "'+='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "ID", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,117,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,0,1,0,5,0,37,8,0,10,0,12,0,40,9,0,1,0,1,0,1,1,
  	1,1,3,1,46,8,1,1,2,1,2,1,2,1,2,1,2,5,2,53,8,2,10,2,12,2,56,9,2,1,2,1,
  	2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,70,8,4,10,4,12,4,73,9,4,
  	1,5,1,5,1,5,1,5,3,5,79,8,5,1,5,1,5,5,5,83,8,5,10,5,12,5,86,9,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,3,9,97,8,9,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,13,1,13,3,13,111,8,13,1,14,1,14,1,15,1,15,1,15,
  	0,2,8,10,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,0,110,0,32,1,
  	0,0,0,2,45,1,0,0,0,4,47,1,0,0,0,6,59,1,0,0,0,8,64,1,0,0,0,10,78,1,0,0,
  	0,12,87,1,0,0,0,14,89,1,0,0,0,16,91,1,0,0,0,18,96,1,0,0,0,20,98,1,0,0,
  	0,22,102,1,0,0,0,24,104,1,0,0,0,26,110,1,0,0,0,28,112,1,0,0,0,30,114,
  	1,0,0,0,32,33,5,1,0,0,33,34,5,12,0,0,34,38,5,2,0,0,35,37,3,2,1,0,36,35,
  	1,0,0,0,37,40,1,0,0,0,38,36,1,0,0,0,38,39,1,0,0,0,39,41,1,0,0,0,40,38,
  	1,0,0,0,41,42,5,0,0,1,42,1,1,0,0,0,43,46,3,4,2,0,44,46,3,6,3,0,45,43,
  	1,0,0,0,45,44,1,0,0,0,46,3,1,0,0,0,47,48,5,12,0,0,48,49,5,3,0,0,49,54,
  	5,12,0,0,50,51,5,4,0,0,51,53,5,12,0,0,52,50,1,0,0,0,53,56,1,0,0,0,54,
  	52,1,0,0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,54,1,0,0,0,57,58,5,2,0,0,58,
  	5,1,0,0,0,59,60,5,12,0,0,60,61,5,3,0,0,61,62,3,8,4,0,62,63,5,2,0,0,63,
  	7,1,0,0,0,64,65,6,4,-1,0,65,66,3,10,5,0,66,71,1,0,0,0,67,68,10,2,0,0,
  	68,70,3,8,4,3,69,67,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,
  	72,9,1,0,0,0,73,71,1,0,0,0,74,75,6,5,-1,0,75,79,3,20,10,0,76,79,3,22,
  	11,0,77,79,3,24,12,0,78,74,1,0,0,0,78,76,1,0,0,0,78,77,1,0,0,0,79,84,
  	1,0,0,0,80,81,10,4,0,0,81,83,3,18,9,0,82,80,1,0,0,0,83,86,1,0,0,0,84,
  	82,1,0,0,0,84,85,1,0,0,0,85,11,1,0,0,0,86,84,1,0,0,0,87,88,5,5,0,0,88,
  	13,1,0,0,0,89,90,5,6,0,0,90,15,1,0,0,0,91,92,5,7,0,0,92,17,1,0,0,0,93,
  	97,3,12,6,0,94,97,3,14,7,0,95,97,3,16,8,0,96,93,1,0,0,0,96,94,1,0,0,0,
  	96,95,1,0,0,0,97,19,1,0,0,0,98,99,5,8,0,0,99,100,3,8,4,0,100,101,5,9,
  	0,0,101,21,1,0,0,0,102,103,5,13,0,0,103,23,1,0,0,0,104,105,5,12,0,0,105,
  	106,3,26,13,0,106,107,5,12,0,0,107,25,1,0,0,0,108,111,3,28,14,0,109,111,
  	3,30,15,0,110,108,1,0,0,0,110,109,1,0,0,0,111,27,1,0,0,0,112,113,5,10,
  	0,0,113,29,1,0,0,0,114,115,5,11,0,0,115,31,1,0,0,0,8,38,45,54,71,78,84,
  	96,110
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
    setState(32);
    match(Antlr4GrammarParser::T__0);
    setState(33);
    antlrcpp::downCast<GrammarFileContext *>(_localctx)->grammarName = match(Antlr4GrammarParser::ID);
    setState(34);
    match(Antlr4GrammarParser::T__1);
    setState(38);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Antlr4GrammarParser::ID) {
      setState(35);
      antlrcpp::downCast<GrammarFileContext *>(_localctx)->rulesContext = rules();
      antlrcpp::downCast<GrammarFileContext *>(_localctx)->grammarRules.push_back(antlrcpp::downCast<GrammarFileContext *>(_localctx)->rulesContext);
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(41);
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
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(43);
      nonTerminalRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(44);
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
    setState(47);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(48);
    match(Antlr4GrammarParser::T__2);
    setState(49);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
    antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Antlr4GrammarParser::T__3) {
      setState(50);
      match(Antlr4GrammarParser::T__3);
      setState(51);
      antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken = match(Antlr4GrammarParser::ID);
      antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->children.push_back(antlrcpp::downCast<NonTerminalRuleContext *>(_localctx)->idToken);
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(57);
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
    setState(59);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(60);
    match(Antlr4GrammarParser::T__2);
    setState(61);
    antlrcpp::downCast<TerminalRuleContext *>(_localctx)->body = ruleBody(0);
    setState(62);
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

std::vector<Antlr4GrammarParser::RuleBodyContext *> Antlr4GrammarParser::RuleBodyContext::ruleBody() {
  return getRuleContexts<Antlr4GrammarParser::RuleBodyContext>();
}

Antlr4GrammarParser::RuleBodyContext* Antlr4GrammarParser::RuleBodyContext::ruleBody(size_t i) {
  return getRuleContext<Antlr4GrammarParser::RuleBodyContext>(i);
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
    setState(65);
    terminalRuleBody(0);
    _ctx->stop = _input->LT(-1);
    setState(71);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RuleBodyContext>(parentContext, parentState);
        _localctx->lbody = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleRuleBody);
        setState(67);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(68);
        antlrcpp::downCast<RuleBodyContext *>(_localctx)->rbody = ruleBody(3); 
      }
      setState(73);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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
    setState(78);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__7: {
        setState(75);
        parentRuleBody();
        break;
      }

      case Antlr4GrammarParser::STRING: {
        setState(76);
        stringRuleBody();
        break;
      }

      case Antlr4GrammarParser::ID: {
        setState(77);
        affectRuleBody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(84);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TerminalRuleBodyContext>(parentContext, parentState);
        _localctx->body = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerminalRuleBody);
        setState(80);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");

        setState(81);
        antlrcpp::downCast<TerminalRuleBodyContext *>(_localctx)->op = operator_(); 
      }
      setState(86);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
    setState(87);
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
    setState(89);
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
    setState(91);
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
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        starOperator();
        break;
      }

      case Antlr4GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(94);
        plusOperator();
        break;
      }

      case Antlr4GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(95);
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
    setState(98);
    match(Antlr4GrammarParser::T__7);
    setState(99);
    antlrcpp::downCast<ParentRuleBodyContext *>(_localctx)->body = ruleBody(0);
    setState(100);
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
    setState(102);
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

std::vector<tree::TerminalNode *> Antlr4GrammarParser::AffectRuleBodyContext::ID() {
  return getTokens(Antlr4GrammarParser::ID);
}

tree::TerminalNode* Antlr4GrammarParser::AffectRuleBodyContext::ID(size_t i) {
  return getToken(Antlr4GrammarParser::ID, i);
}

Antlr4GrammarParser::AffectOpContext* Antlr4GrammarParser::AffectRuleBodyContext::affectOp() {
  return getRuleContext<Antlr4GrammarParser::AffectOpContext>(0);
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
    setState(104);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->name = match(Antlr4GrammarParser::ID);
    setState(105);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->op = affectOp();
    setState(106);
    antlrcpp::downCast<AffectRuleBodyContext *>(_localctx)->value = match(Antlr4GrammarParser::ID);
   
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
  enterRule(_localctx, 26, Antlr4GrammarParser::RuleAffectOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Antlr4GrammarParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(108);
        eqOp();
        break;
      }

      case Antlr4GrammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(109);
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
  enterRule(_localctx, 28, Antlr4GrammarParser::RuleEqOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(Antlr4GrammarParser::T__9);
   
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
  enterRule(_localctx, 30, Antlr4GrammarParser::RulePlusEqOp);

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
    match(Antlr4GrammarParser::T__10);
   
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
