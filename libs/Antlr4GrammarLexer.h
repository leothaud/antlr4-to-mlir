
// Generated from /home/dylan/antlr4-to-mlir/src/Antlr4Grammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Antlr4GrammarLexer : public antlr4::Lexer {
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

  explicit Antlr4GrammarLexer(antlr4::CharStream *input);

  ~Antlr4GrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

