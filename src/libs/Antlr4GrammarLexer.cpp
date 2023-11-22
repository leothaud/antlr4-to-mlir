
// Generated from Antlr4Grammar.g4 by ANTLR 4.13.0


#include "Antlr4GrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Antlr4GrammarLexerStaticData final {
  Antlr4GrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Antlr4GrammarLexerStaticData(const Antlr4GrammarLexerStaticData&) = delete;
  Antlr4GrammarLexerStaticData(Antlr4GrammarLexerStaticData&&) = delete;
  Antlr4GrammarLexerStaticData& operator=(const Antlr4GrammarLexerStaticData&) = delete;
  Antlr4GrammarLexerStaticData& operator=(Antlr4GrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag antlr4grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Antlr4GrammarLexerStaticData *antlr4grammarlexerLexerStaticData = nullptr;

void antlr4grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (antlr4grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(antlr4grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Antlr4GrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "ID", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,14,81,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,
  	6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,11,1,11,5,11,61,8,11,10,
  	11,12,11,64,9,11,1,12,1,12,5,12,68,8,12,10,12,12,12,71,9,12,1,12,1,12,
  	1,13,4,13,76,8,13,11,13,12,13,77,1,13,1,13,1,69,0,14,1,1,3,2,5,3,7,4,
  	9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,1,0,3,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,83,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,37,1,0,0,0,5,39,1,0,
  	0,0,7,41,1,0,0,0,9,43,1,0,0,0,11,45,1,0,0,0,13,47,1,0,0,0,15,49,1,0,0,
  	0,17,51,1,0,0,0,19,53,1,0,0,0,21,55,1,0,0,0,23,58,1,0,0,0,25,65,1,0,0,
  	0,27,75,1,0,0,0,29,30,5,103,0,0,30,31,5,114,0,0,31,32,5,97,0,0,32,33,
  	5,109,0,0,33,34,5,109,0,0,34,35,5,97,0,0,35,36,5,114,0,0,36,2,1,0,0,0,
  	37,38,5,59,0,0,38,4,1,0,0,0,39,40,5,58,0,0,40,6,1,0,0,0,41,42,5,124,0,
  	0,42,8,1,0,0,0,43,44,5,42,0,0,44,10,1,0,0,0,45,46,5,43,0,0,46,12,1,0,
  	0,0,47,48,5,63,0,0,48,14,1,0,0,0,49,50,5,40,0,0,50,16,1,0,0,0,51,52,5,
  	41,0,0,52,18,1,0,0,0,53,54,5,61,0,0,54,20,1,0,0,0,55,56,5,43,0,0,56,57,
  	5,61,0,0,57,22,1,0,0,0,58,62,7,0,0,0,59,61,7,1,0,0,60,59,1,0,0,0,61,64,
  	1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,24,1,0,0,0,64,62,1,0,0,0,65,69,
  	5,39,0,0,66,68,9,0,0,0,67,66,1,0,0,0,68,71,1,0,0,0,69,70,1,0,0,0,69,67,
  	1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,73,5,39,0,0,73,26,1,0,0,0,74,76,
  	7,2,0,0,75,74,1,0,0,0,76,77,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,79,
  	1,0,0,0,79,80,6,13,0,0,80,28,1,0,0,0,4,0,62,69,77,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  antlr4grammarlexerLexerStaticData = staticData.release();
}

}

Antlr4GrammarLexer::Antlr4GrammarLexer(CharStream *input) : Lexer(input) {
  Antlr4GrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *antlr4grammarlexerLexerStaticData->atn, antlr4grammarlexerLexerStaticData->decisionToDFA, antlr4grammarlexerLexerStaticData->sharedContextCache);
}

Antlr4GrammarLexer::~Antlr4GrammarLexer() {
  delete _interpreter;
}

std::string Antlr4GrammarLexer::getGrammarFileName() const {
  return "Antlr4Grammar.g4";
}

const std::vector<std::string>& Antlr4GrammarLexer::getRuleNames() const {
  return antlr4grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& Antlr4GrammarLexer::getChannelNames() const {
  return antlr4grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& Antlr4GrammarLexer::getModeNames() const {
  return antlr4grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& Antlr4GrammarLexer::getVocabulary() const {
  return antlr4grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Antlr4GrammarLexer::getSerializedATN() const {
  return antlr4grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& Antlr4GrammarLexer::getATN() const {
  return *antlr4grammarlexerLexerStaticData->atn;
}




void Antlr4GrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  antlr4grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(antlr4grammarlexerLexerOnceFlag, antlr4grammarlexerLexerInitialize);
#endif
}
