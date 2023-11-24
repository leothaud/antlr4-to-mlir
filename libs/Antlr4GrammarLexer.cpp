
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0


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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "ID", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,32,238,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,29,1,29,5,
  	29,218,8,29,10,29,12,29,221,9,29,1,30,1,30,5,30,225,8,30,10,30,12,30,
  	228,9,30,1,30,1,30,1,31,4,31,233,8,31,11,31,12,31,234,1,31,1,31,1,226,
  	0,32,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,1,0,3,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,240,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,73,
  	1,0,0,0,5,75,1,0,0,0,7,77,1,0,0,0,9,79,1,0,0,0,11,81,1,0,0,0,13,83,1,
  	0,0,0,15,85,1,0,0,0,17,87,1,0,0,0,19,89,1,0,0,0,21,93,1,0,0,0,23,99,1,
  	0,0,0,25,104,1,0,0,0,27,111,1,0,0,0,29,114,1,0,0,0,31,116,1,0,0,0,33,
  	119,1,0,0,0,35,130,1,0,0,0,37,134,1,0,0,0,39,141,1,0,0,0,41,146,1,0,0,
  	0,43,155,1,0,0,0,45,159,1,0,0,0,47,170,1,0,0,0,49,180,1,0,0,0,51,194,
  	1,0,0,0,53,197,1,0,0,0,55,207,1,0,0,0,57,210,1,0,0,0,59,215,1,0,0,0,61,
  	222,1,0,0,0,63,232,1,0,0,0,65,66,5,103,0,0,66,67,5,114,0,0,67,68,5,97,
  	0,0,68,69,5,109,0,0,69,70,5,109,0,0,70,71,5,97,0,0,71,72,5,114,0,0,72,
  	2,1,0,0,0,73,74,5,59,0,0,74,4,1,0,0,0,75,76,5,58,0,0,76,6,1,0,0,0,77,
  	78,5,124,0,0,78,8,1,0,0,0,79,80,5,42,0,0,80,10,1,0,0,0,81,82,5,43,0,0,
  	82,12,1,0,0,0,83,84,5,63,0,0,84,14,1,0,0,0,85,86,5,40,0,0,86,16,1,0,0,
  	0,87,88,5,41,0,0,88,18,1,0,0,0,89,90,5,73,0,0,90,91,5,78,0,0,91,92,5,
  	84,0,0,92,20,1,0,0,0,93,94,5,70,0,0,94,95,5,76,0,0,95,96,5,79,0,0,96,
  	97,5,65,0,0,97,98,5,84,0,0,98,22,1,0,0,0,99,100,5,67,0,0,100,101,5,72,
  	0,0,101,102,5,65,0,0,102,103,5,82,0,0,103,24,1,0,0,0,104,105,5,83,0,0,
  	105,106,5,84,0,0,106,107,5,82,0,0,107,108,5,73,0,0,108,109,5,78,0,0,109,
  	110,5,71,0,0,110,26,1,0,0,0,111,112,5,73,0,0,112,113,5,68,0,0,113,28,
  	1,0,0,0,114,115,5,61,0,0,115,30,1,0,0,0,116,117,5,43,0,0,117,118,5,61,
  	0,0,118,32,1,0,0,0,119,120,5,39,0,0,120,121,5,45,0,0,121,122,5,39,0,0,
  	122,123,5,63,0,0,123,124,5,91,0,0,124,125,5,48,0,0,125,126,5,45,0,0,126,
  	127,5,57,0,0,127,128,5,93,0,0,128,129,5,43,0,0,129,34,1,0,0,0,130,131,
  	5,39,0,0,131,132,5,46,0,0,132,133,5,39,0,0,133,36,1,0,0,0,134,135,5,91,
  	0,0,135,136,5,48,0,0,136,137,5,45,0,0,137,138,5,57,0,0,138,139,5,93,0,
  	0,139,140,5,42,0,0,140,38,1,0,0,0,141,142,5,39,0,0,142,143,5,92,0,0,143,
  	144,5,39,0,0,144,145,5,39,0,0,145,40,1,0,0,0,146,147,5,40,0,0,147,148,
  	5,39,0,0,148,149,5,92,0,0,149,150,5,92,0,0,150,151,5,39,0,0,151,152,5,
  	124,0,0,152,153,5,46,0,0,153,154,5,41,0,0,154,42,1,0,0,0,155,156,5,39,
  	0,0,156,157,5,34,0,0,157,158,5,39,0,0,158,44,1,0,0,0,159,160,5,40,0,0,
  	160,161,5,39,0,0,161,162,5,92,0,0,162,163,5,92,0,0,163,164,5,39,0,0,164,
  	165,5,124,0,0,165,166,5,46,0,0,166,167,5,41,0,0,167,168,5,42,0,0,168,
  	169,5,63,0,0,169,46,1,0,0,0,170,171,5,91,0,0,171,172,5,97,0,0,172,173,
  	5,45,0,0,173,174,5,122,0,0,174,175,5,65,0,0,175,176,5,45,0,0,176,177,
  	5,90,0,0,177,178,5,95,0,0,178,179,5,93,0,0,179,48,1,0,0,0,180,181,5,91,
  	0,0,181,182,5,97,0,0,182,183,5,45,0,0,183,184,5,122,0,0,184,185,5,65,
  	0,0,185,186,5,45,0,0,186,187,5,90,0,0,187,188,5,95,0,0,188,189,5,48,0,
  	0,189,190,5,45,0,0,190,191,5,57,0,0,191,192,5,93,0,0,192,193,5,42,0,0,
  	193,50,1,0,0,0,194,195,5,87,0,0,195,196,5,83,0,0,196,52,1,0,0,0,197,198,
  	5,91,0,0,198,199,5,32,0,0,199,200,5,92,0,0,200,201,5,116,0,0,201,202,
  	5,92,0,0,202,203,5,114,0,0,203,204,5,92,0,0,204,205,5,110,0,0,205,206,
  	5,93,0,0,206,54,1,0,0,0,207,208,5,45,0,0,208,209,5,62,0,0,209,56,1,0,
  	0,0,210,211,5,115,0,0,211,212,5,107,0,0,212,213,5,105,0,0,213,214,5,112,
  	0,0,214,58,1,0,0,0,215,219,7,0,0,0,216,218,7,1,0,0,217,216,1,0,0,0,218,
  	221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,60,1,0,0,0,221,219,1,
  	0,0,0,222,226,5,39,0,0,223,225,9,0,0,0,224,223,1,0,0,0,225,228,1,0,0,
  	0,226,227,1,0,0,0,226,224,1,0,0,0,227,229,1,0,0,0,228,226,1,0,0,0,229,
  	230,5,39,0,0,230,62,1,0,0,0,231,233,7,2,0,0,232,231,1,0,0,0,233,234,1,
  	0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,236,1,0,0,0,236,237,6,31,0,
  	0,237,64,1,0,0,0,4,0,219,226,234,1,6,0,0
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
