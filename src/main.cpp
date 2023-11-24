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

#include "grammarVisitor.hpp"
#include "Antlr4GrammarParser.h"
#include "Antlr4GrammarLexer.h"
#include "StandaloneInitializer.hpp"

int main(int argc, const char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " [filename] or " << argv[0] << "--init to initialize mlir-standalone project (must be already cloned).";
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
  Antlr4GrammarParser::GrammarFileContext* tree = parser.grammarFile();
  GrammarVisitor visitor;
  visitor.visitGrammarFile(tree);

  
  std::string antlrGenerationPath = ANTLR_GENERATION_PATH;
  if (antlrGenerationPath.back() != '/')
    antlrGenerationPath += '/';
  
  visitor.generateAntlr(argv[1], antlrGenerationPath);
  
  visitor.generateFiles(mlirStandalonePath);
  
  std::cout << "Ok." << std::endl;
  stream.close();


  
  return 0;
}
