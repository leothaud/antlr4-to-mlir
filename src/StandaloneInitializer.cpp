#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#include "StandaloneInitializer.hpp"

void initializeStandalone()
{
  std::string mlirStandalonePath = MLIR_STANDALONE_PATH;

  if (mlirStandalonePath.back() != '/')
    mlirStandalonePath += '/';

  std::string cmd = "cp -r ";
  cmd += AutoAstUtilsFolder;
  cmd +=+ "/* ";
  cmd += mlirStandalonePath;
  system(cmd.c_str());


  std::ofstream includeCMakeStream(mlirStandalonePath + "include/CMakeLists.txt", std::ios_base::app);
  includeCMakeStream << "add_subdirectory(AutoAstUtils)\n";
  includeCMakeStream.close();
  
  std::ofstream libCMakeStream(mlirStandalonePath + "lib/CMakeLists.txt", std::ios_base::app);
  libCMakeStream << "add_subdirectory(AutoAstUtils)\n";
  libCMakeStream.close();

  std::ifstream inStream(mlirStandalonePath + "standalone-opt/standalone-opt.cpp");
  std::vector<std::string> lines;
  int nLine = 1;
  std::string line;
  while (std::getline(inStream, line))
  {
    lines.push_back(line);
    if (nLine == 23)
    {
      lines.push_back("#include \"AutoAstUtils/AutoAstUtilsDialect.h\"");
      lines.push_back("#include \"AutoAstUtils/AutoAstUtilsDialect.cpp.inc\"");
      lines.push_back("//[antlr4-to-mlir] ADD INCLUDE HERE");
    }
    if (nLine == 33)
    {
      lines.push_back("  registry.insert<AutoAstUtils::AutoAstUtilsDialect>();");
      lines.push_back("//[antlr4-to-mlir] ADD REGISTERY INSERT HERE");
    }
    nLine++;
  }
  inStream.close();

  std::ofstream outStream(mlirStandalonePath + "standalone-opt/standalone-opt.cpp");
  for (auto& line: lines)
    outStream << line << '\n';
  outStream.close();
  
  // Add AstUtils into include
  // Add AstUtils into libs
  // Initialize opt
}
