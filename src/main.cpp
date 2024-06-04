//===- main.cpp ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include <iostream>
#include <errno.h>
#include <filesystem>
#include <string.h>

#include "grammarVisitor.hpp"
#include "Antlr4GrammarParser.h"
#include "Antlr4GrammarLexer.h"
#include "StandaloneInitializer.hpp"

int main(int argc, const char** argv)
{
  if (!((argc == 3) || ((argc == 2) && (strcmp(argv[1],"--init") == 0))))
  {
    std::cerr << "Usage: " << argv[0] << " [filename] [startRule] or " << argv[0] << " --init to initialize mlir-standalone project (must be already cloned).";
    exit(1);
  }

  std::string cmakeProjDir = CMAKE_PROJ_DIR;
  if (cmakeProjDir.back() != '/')
    cmakeProjDir += '/';
  
  std::string mlirStandalonePath = MLIR_STANDALONE_PATH;
  if (mlirStandalonePath.back() != '/')
    mlirStandalonePath += '/';



  if ((strcmp(argv[1], "--init") == 0) || (!std::filesystem::exists(mlirStandalonePath + ".initialized")))
  {
    std::cout << "initialization" << std::endl;
    initializeStandalone();
    system(("touch " + mlirStandalonePath + ".initialized").c_str());
    if (strcmp(argv[1], "--init") == 0)
      exit(0);
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

  Antlr4GrammarParser::Grammar_fileContext* tree = parser.grammar_file();
  GrammarVisitor visitor;

  visitor.visitGrammar_file(tree);

  std::string antlrGenerationPath = ANTLR_GENERATION_PATH;
  if (antlrGenerationPath.back() != '/')
    antlrGenerationPath += '/';
  
  visitor.generateAntlr(argv[1], antlrGenerationPath, argv[2]);
  
  visitor.generateFiles(mlirStandalonePath);
  
  std::cout << "Ok." << std::endl;
  stream.close();


  
  return 0;
}
