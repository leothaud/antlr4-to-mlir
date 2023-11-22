#include <iostream>
#include <errno.h>

#include "grammarVisitor.hpp"
#include "Antlr4GrammarParser.h"
#include "Antlr4GrammarLexer.h"


int main(int argc, const char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " [filename].";
    exit(1);
  }

  std::ifstream stream(argv[1]);
  if (!stream.is_open())
  {
    std::cerr << "Can't open file " << argv[1] << ": " << strerror(errno);
    exit(1);
  }

  antlr4::ANTLRInputStream input(stream);
  Antlr4GrammarLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  Antlr4GrammarParser parser(&tokens);
  Antlr4GrammarParser::GrammarFileContext* tree = parser.grammarFile();
  GrammarVisitor visitor;
  visitor.visitGrammarFile(tree);

  std::ofstream ostream("result.dot");
  ostream << visitor.toDot();
  ostream.close();

  std::ofstream typesStream("resultTypes.td");
  typesStream << visitor.generateTypes();
  typesStream.close();

  std::ofstream dialectStream("resultDialect.td");
  dialectStream << visitor.generateDialect();
  dialectStream.close();

  std::ofstream predicatesStream("resultPredicates.td");
  predicatesStream << visitor.generatePredicates();
  predicatesStream.close();

  std::ofstream opsStream("result.td");
  opsStream << visitor.generateOps();
  opsStream.close();
  
  std::cout << "Ok." << std::endl;
  stream.close();

  
  return 0;
}
