
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
      "QUOTED_DOT", "QUOTED_DOUBLE_QUOTE", "QUOTED_QUOTE", "GRAMMAR", "SEMI", 
      "COLON", "PIPE", "EOF_TOKEN", "STAR", "PLUS", "MINUS", "QUESTION_MARK", 
      "L_PARENT", "R_PARENT", "DOT", "QUOTE", "DOUBLE_QUOTE", "BACKSLASH", 
      "SKIP_TOKEN", "L_SBRACKET", "R_SBRACKET", "EQ", "PLUS_EQ", "FRAGMENT_TOKEN", 
      "POUND", "DIGIT", "LOWERCASE_LETTER", "UPPERCASE_LETTER", "UNDERSCORE_F", 
      "UNDERSCORE", "L_ID", "U_ID", "STRING", "WS", "COMMENT", "LINE_COMMENT", 
      "ANY"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,33,226,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,
  	1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,
  	1,30,1,30,1,30,5,30,167,8,30,10,30,12,30,170,9,30,1,31,1,31,1,31,1,31,
  	1,31,5,31,177,8,31,10,31,12,31,180,9,31,1,32,1,32,1,32,1,32,5,32,186,
  	8,32,10,32,12,32,189,9,32,1,32,1,32,1,33,4,33,194,8,33,11,33,12,33,195,
  	1,33,1,33,1,34,1,34,1,34,1,34,5,34,204,8,34,10,34,12,34,207,9,34,1,34,
  	1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,5,35,218,8,35,10,35,12,35,221,
  	9,35,1,35,1,35,1,36,1,36,2,187,205,0,37,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,
  	39,20,41,21,43,22,45,23,47,24,49,25,51,0,53,0,55,0,57,0,59,26,61,27,63,
  	28,65,29,67,30,69,31,71,32,73,33,1,0,6,1,0,48,57,1,0,97,122,1,0,65,90,
  	1,0,39,39,3,0,9,10,13,13,32,32,2,0,10,10,13,13,234,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,
  	0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,
  	47,1,0,0,0,0,49,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,1,75,1,0,0,
  	0,3,79,1,0,0,0,5,83,1,0,0,0,7,88,1,0,0,0,9,96,1,0,0,0,11,98,1,0,0,0,13,
  	100,1,0,0,0,15,102,1,0,0,0,17,106,1,0,0,0,19,108,1,0,0,0,21,110,1,0,0,
  	0,23,112,1,0,0,0,25,114,1,0,0,0,27,116,1,0,0,0,29,118,1,0,0,0,31,120,
  	1,0,0,0,33,122,1,0,0,0,35,124,1,0,0,0,37,126,1,0,0,0,39,131,1,0,0,0,41,
  	133,1,0,0,0,43,135,1,0,0,0,45,137,1,0,0,0,47,140,1,0,0,0,49,149,1,0,0,
  	0,51,151,1,0,0,0,53,153,1,0,0,0,55,155,1,0,0,0,57,157,1,0,0,0,59,159,
  	1,0,0,0,61,161,1,0,0,0,63,171,1,0,0,0,65,181,1,0,0,0,67,193,1,0,0,0,69,
  	199,1,0,0,0,71,213,1,0,0,0,73,224,1,0,0,0,75,76,5,39,0,0,76,77,5,46,0,
  	0,77,78,5,39,0,0,78,2,1,0,0,0,79,80,5,39,0,0,80,81,5,34,0,0,81,82,5,39,
  	0,0,82,4,1,0,0,0,83,84,5,39,0,0,84,85,5,92,0,0,85,86,5,39,0,0,86,87,5,
  	39,0,0,87,6,1,0,0,0,88,89,5,103,0,0,89,90,5,114,0,0,90,91,5,97,0,0,91,
  	92,5,109,0,0,92,93,5,109,0,0,93,94,5,97,0,0,94,95,5,114,0,0,95,8,1,0,
  	0,0,96,97,5,59,0,0,97,10,1,0,0,0,98,99,5,58,0,0,99,12,1,0,0,0,100,101,
  	5,124,0,0,101,14,1,0,0,0,102,103,5,69,0,0,103,104,5,79,0,0,104,105,5,
  	70,0,0,105,16,1,0,0,0,106,107,5,42,0,0,107,18,1,0,0,0,108,109,5,43,0,
  	0,109,20,1,0,0,0,110,111,5,45,0,0,111,22,1,0,0,0,112,113,5,63,0,0,113,
  	24,1,0,0,0,114,115,5,40,0,0,115,26,1,0,0,0,116,117,5,41,0,0,117,28,1,
  	0,0,0,118,119,5,46,0,0,119,30,1,0,0,0,120,121,5,39,0,0,121,32,1,0,0,0,
  	122,123,5,34,0,0,123,34,1,0,0,0,124,125,5,92,0,0,125,36,1,0,0,0,126,127,
  	5,115,0,0,127,128,5,107,0,0,128,129,5,105,0,0,129,130,5,112,0,0,130,38,
  	1,0,0,0,131,132,5,91,0,0,132,40,1,0,0,0,133,134,5,93,0,0,134,42,1,0,0,
  	0,135,136,5,61,0,0,136,44,1,0,0,0,137,138,5,43,0,0,138,139,5,61,0,0,139,
  	46,1,0,0,0,140,141,5,102,0,0,141,142,5,114,0,0,142,143,5,97,0,0,143,144,
  	5,103,0,0,144,145,5,109,0,0,145,146,5,101,0,0,146,147,5,110,0,0,147,148,
  	5,116,0,0,148,48,1,0,0,0,149,150,5,35,0,0,150,50,1,0,0,0,151,152,7,0,
  	0,0,152,52,1,0,0,0,153,154,7,1,0,0,154,54,1,0,0,0,155,156,7,2,0,0,156,
  	56,1,0,0,0,157,158,5,95,0,0,158,58,1,0,0,0,159,160,3,57,28,0,160,60,1,
  	0,0,0,161,168,3,53,26,0,162,167,3,53,26,0,163,167,3,55,27,0,164,167,3,
  	51,25,0,165,167,3,57,28,0,166,162,1,0,0,0,166,163,1,0,0,0,166,164,1,0,
  	0,0,166,165,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,169,1,0,0,0,169,
  	62,1,0,0,0,170,168,1,0,0,0,171,178,3,55,27,0,172,177,3,53,26,0,173,177,
  	3,55,27,0,174,177,3,51,25,0,175,177,3,57,28,0,176,172,1,0,0,0,176,173,
  	1,0,0,0,176,174,1,0,0,0,176,175,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,
  	0,178,179,1,0,0,0,179,64,1,0,0,0,180,178,1,0,0,0,181,187,5,39,0,0,182,
  	186,8,3,0,0,183,184,5,92,0,0,184,186,5,39,0,0,185,182,1,0,0,0,185,183,
  	1,0,0,0,186,189,1,0,0,0,187,188,1,0,0,0,187,185,1,0,0,0,188,190,1,0,0,
  	0,189,187,1,0,0,0,190,191,5,39,0,0,191,66,1,0,0,0,192,194,7,4,0,0,193,
  	192,1,0,0,0,194,195,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,197,1,
  	0,0,0,197,198,6,33,0,0,198,68,1,0,0,0,199,200,5,47,0,0,200,201,5,42,0,
  	0,201,205,1,0,0,0,202,204,9,0,0,0,203,202,1,0,0,0,204,207,1,0,0,0,205,
  	206,1,0,0,0,205,203,1,0,0,0,206,208,1,0,0,0,207,205,1,0,0,0,208,209,5,
  	42,0,0,209,210,5,47,0,0,210,211,1,0,0,0,211,212,6,34,0,0,212,70,1,0,0,
  	0,213,214,5,47,0,0,214,215,5,47,0,0,215,219,1,0,0,0,216,218,8,5,0,0,217,
  	216,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,222,1,
  	0,0,0,221,219,1,0,0,0,222,223,6,35,0,0,223,72,1,0,0,0,224,225,9,0,0,0,
  	225,74,1,0,0,0,10,0,166,168,176,178,185,187,195,205,219,1,6,0,0
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
