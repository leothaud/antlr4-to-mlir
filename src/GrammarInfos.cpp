//===- GrammarInfos.cpp ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "GrammarInfos.hpp"
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <filesystem>

int lastIndex = 0;


TerminalRuleOptions::TerminalRuleOptions(std::string name, bool variadic, bool optionnal)
{
  this->name = name;
  this->variadic = variadic;
  this->optionnal = optionnal;
}

TerminalRuleOptions::TerminalRuleOptions(const TerminalRuleOptions& other)
{
  this->variadic = other.variadic;
  this->optionnal = other.optionnal;
}

TerminalRuleOptions& TerminalRuleOptions::operator=(const TerminalRuleOptions& other)
{
  this->variadic = other.variadic;
  this->optionnal = other.optionnal;
  return *this;
}

bool TerminalRuleOptions::isVariadic()
{
  return this->variadic;
}

bool TerminalRuleOptions::isOptional()
{
  return this->optionnal;
}
  
void TerminalRuleOptions::setOptional()
{
  this->optionnal = true;
}

std::string TerminalRuleOptions::getName()
{
  return this->name;
}



void GrammarRule::setName(std::string name)
{
  this->name = name;
}

std::string GrammarRule::getName()
{
  return this->name;
}

std::string GrammarRule::generateTypes(std::string dialectName)
{
  return "def " + dialectName + "_" +
    this->name + "NodeType : " + dialectName +
    "_AstNodeType<\"" + dialectName + "_" + this->name + "Node\",\"" + this->name + "Node\">{}\n\n";
}

void GrammarRule::resetPredicates()
{
  this->predicateGenerated = false;
}




void TerminalGrammarRule::addBodyElt(std::string name, TerminalRuleOptions* options)
{
  this->bodyElt.emplace(name, options);
}
  
void TerminalGrammarRule::setBodyElt(std::map<std::string, TerminalRuleOptions*> bodyElt)
{
  this->bodyElt = bodyElt;
}

std::string TerminalGrammarRule::toDot()
{
  std::string res = "";
  for (auto& [name, options]: bodyElt)
  {
    std::string color = options->isVariadic() ? "blue" : (options->isOptional() ? "green" : "red");
    res += this->name + "->" + options->getName() + "[color=" + color + "];\n";
  }
  return res;
}

std::string TerminalGrammarRule::generatePredicates(std::string dialectName)
{
  if (this->predicateGenerated)
    return "";
  this->predicateGenerated = true;
  return "def " + dialectName + "_" + this->name + "Pred : CPred<\"$_self.isa<" +
    dialectName + "_" + this->name + "NodeType>()\">;\n\n";
}

std::string TerminalGrammarRule::generateOps(std::string dialectName)
{
  std::vector<std::string> baseTypes = {"INT", "FLOAT", "CHAR", "STRING", "ID"};
  std::map<std::string, std::string> baseTypesMap = {
    {"INT", "AutoAstUtils_IntType"},
    {"FLOAT", "AutoAstUtils_FloatType"},
    {"CHAR", "AutoAstUtils_CharType"},
    {"STRING", "AutoAstUtils_StringType"},
    {"ID", "AutoAstUtils_IdType"}
  };

  int nVariadic = 0;
    
  std::string start = "def " + dialectName + "_" + this->name + "Op: " +
    dialectName + "_Op<\"" + this->name + "\"";
  std::string res = ">\n{\n  let arguments = (ins";
  bool first = true;
  for (auto& [name, options]: bodyElt) {
    res += first ? " " : ",\n ";
    first = false;
    if (options->isVariadic())
    {
      ++nVariadic;
      res += "Variadic<";
    }
    else
    {
      if (options->isOptional())
      {
	++nVariadic;
	res += "Optional<";
      }
    }
    if (std::find(baseTypes.begin(), baseTypes.end(), options->getName()) != baseTypes.end())
    {
      res += baseTypesMap[options->getName()];
    }
    else
    {
      res += "Type<" + dialectName + "_" + options->getName() + "Pred>";
    }
    if (options->isVariadic() || options->isOptional())
      res += ">";
    res += ":$" + name;
  }
  res = res + ");\n" +
    "  let results = (outs " + dialectName + "_" + this->name + "NodeType:$res);\n}\n\n";
  if (nVariadic > 1)
    return start + ", [AttrSizedOperandSegments]" + res;
  else
    return start + res;
}


// fonction qui renvoie une paire <string string> qui est (variable, code) du mlir
std::string TerminalGrammarRule::generateVisitorCpp(std::string dialectName)
{
  std::string capitalized = this->name;
  capitalized[0] = toupper(capitalized[0]);
  std::string res = "std::any " + dialectName + "TransformVisitor::visit" + capitalized +
    "(" + dialectName + "Parser::" + capitalized + "Context* context)\n{\n";
  res += "  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n";
  res += "  std::string res = returnVar + \" = \\\"" + dialectName +
    "." + this->name + "\\\" (\";\n\
  std::string types = \"\";\n\
  std::string args = \"\";\n\
  bool first = true;\n";
  bool hasVector = false;
  for (auto& elt: bodyElt)
    hasVector |= elt.second->isVariadic();
  if (hasVector)
  {
    res += "  std::string variadicSizes = ";
    bool first = true;
    for (auto& elt: bodyElt)
    {
      if (elt.second->isVariadic())
      {
	if (!first)
	  res += " + \",\" + ";
	first = false;
	res += "std::to_string(context->" + elt.first + ".size())";
      }	
    }
    res += ";\n";
  }

  for (auto& elt: bodyElt)
  {
    auto capitalizedType = elt.second->getName();
    capitalizedType[0] = toupper(capitalizedType[0]);
    if (elt.second->isVariadic())
    {
      res += "  for(auto& elt: context->" + elt.first + ")\n  {\n";
      res += "    std::string eltVarName, eltCode, eltType;\n";
      res += "    std::tie(eltVarName, eltCode, eltType) = \
std::any_cast<std::tuple<std::string, std::string, std::string>>(this->visit" +
	capitalizedType + "(elt));\n";
      res += "    if (!first)\n\
    {\n\
      types += \", \";\n\
      args += \", \";\n\
    }\n";
      res += "    first = false;\n";
      res += "    res = eltCode + res;\n";
      res += "    types += eltType;\n";
      res += "    args += eltVarName;\n";
      res += "  }\n";
    }
    else
    {
      if (elt.second->isOptional())
      {
	res += "  if(context->" + elt.first + " != 0)\n  {\n";
      }
	res += "    std::string " + elt.first + "VarName, " + elt.first + "Code, " + elt.first + "Type;\n";
	res += "    std::tie(" + elt.first + "VarName, " + elt.first + "Code, " + elt.first + "Type) = std::any_cast<std::tuple<std::string, std::string, std::string>>(this->visit" + capitalizedType + "(context->" + elt.first + "));\n";
	res += "    if (!first)\n\
    {\n\
      types += \", \";\n\
      args += \", \";\n\
    }\n";
      res += "    first = false;\n";
      res += "    res = " + elt.first + "Code + res;\n";
      res += "    types += " + elt.first + "Type;\n";
      res += "    args += " + elt.first + "VarName;\n";
      if (elt.second->isOptional())
      {
	res += "  }\n";
      }

    }
  }
//  std::map<std::string, TerminalRuleOptions*> bodyElt;
// variadic -> vecteur de ptr ; optionnal -> pointeur; sinon -> pointeur

// générer les arguments + les tailles des vecteurs + les types des arguments  


  res += "  res += args + \") ";
  if (hasVector)
    res += "{operandSegmentSizes=array<i32:\" + variadicSizes + \">} ";
  res += ": (\" + types + \") -> !" + dialectName + "." + this->name + "Node\\n\";\n";
  res += "  return std::make_tuple(returnVar, res , std::string(\"!" + dialectName + "." + this->name + "Node\"));\n";
  
  res += "}\n\n";
  
  
  return res;
}




void NonTerminalGrammarRule::addChild(std::string child)
{
  this->children.insert(child);
}

std::string NonTerminalGrammarRule::toDot()
{
  std::string res = "";
  for (const auto& child: children)
    res += this->name + "->" + child + ";\n";
  return res;
}

std::string NonTerminalGrammarRule::generatePredicates(std::string dialectName)
{
  if (this->predicateGenerated)
    return "";
  std::string res = "";
  for (const auto& child: this->children)
    res += this->parent->getRule(child)->generatePredicates(dialectName);
  this->predicateGenerated = true;
  res += "def " + dialectName + "_" + this->name + "Pred : Or<[\n" +
    "\tCPred<\"$_self.isa<" + dialectName + "_" + this->name + "NodeType>()\">";
  for (const auto& child: this->children)
    res += ",\n\t" + dialectName + "_" + child + "Pred";
  res += "\n\t]>;\n\n";
  return res;
}

std::string NonTerminalGrammarRule::generateOps(std::string dialectName)
{
  return "";
}


std::string NonTerminalGrammarRule::generateVisitorCpp(std::string dialectName)
{
  std::string capitalized = this->name;
  capitalized[0] = toupper(capitalized[0]);
  std::string res = "std::any " + dialectName + "TransformVisitor::visit" + capitalized +
    "(" + dialectName + "Parser::" + capitalized + "Context* context)\n{\n";
  for (auto& child: children)
  {
    std::string capitalizedChild = child;
    capitalizedChild[0] = toupper(capitalizedChild[0]);
    res += "  if (context->" + child + "() != 0)\n    return visit" +
      capitalizedChild + "(context->" + child + "());\n";
  }
  res += "  return false;\n";
  res += "}\n\n";
    return res;
}


void GrammarInfos::addRule(GrammarRule* rule)
{
  this->rules[rule->getName()] = rule;
}

void GrammarInfos::setName(std::string name)
{
  this->grammarName = name;
}

std::string GrammarInfos::toDot()
{
  std::string res = "digraph G {\nrankdir=LR;\n";
  for (auto& elt: rules)
    res += elt.second->toDot();
  res += "\nsubgraph cluster {\n\
node [shape=plaintext, height=0.0001, margin=0];\n\
label=\"legend\";\n\
x1[label=\"\"];\n\
y1[label=\"contains\"];\n\
x1 -> y1 [color=red];\n\
x2[label=\"\"];\n\
y2[label=\"contains variadic\"];\n\
x2 -> y2 [color=blue];\n\
x3[label=\"\"];\n\
y3[label=\"contains optionnal\"];\n\
x3 -> y3 [color=green];\n\
x4[label=\"\"];\n\
y4[label=\"child\"];\n\
x4 -> y4 [color=black];\n\
}\n}";
  return res;
}


std::string GrammarInfos::generateTypes()
{
  std::string dialectName = this->grammarName;
  std::string res = "#ifndef " + dialectName + "_TYPES_TD__\n" +
    "#define " + dialectName + "_TYPES_TD__\n\n" +
    "include \"" + dialectName + "Dialect.td\"\n" +
    "include \"mlir/IR/AttrTypeBase.td\"\n\n" +
    "class " + dialectName +"_AstNodeType<string name, string typeMnemonic, list<Trait> traits = []>\n" +
    ": TypeDef<" + dialectName + "_Dialect, name, traits>\n{\n" +
    "  let mnemonic = typeMnemonic;\n}\n\n";

  for (const auto& elt: rules)
    res += elt.second->generateTypes(dialectName);

  res += "#endif\n";
  return res;
}


std::string GrammarInfos::getGrammarName()
{
  return this->grammarName;
}


std::string GrammarInfos::generateDialect()
{
  std::string dialectName = this->grammarName;
  std::string res = "#ifndef " + dialectName + "_DIALECT_TD__\n" +
    "#define " + dialectName + "_DIALECT_TD__\n\n" +
    "include \"mlir/IR/OpBase.td\"\n" +
    "include \"mlir/Interfaces/InferTypeOpInterface.td\"\n" +
    "include \"mlir/Interfaces/SideEffectInterfaces.td\"\n\n" +
    "def " + dialectName + "_Dialect : Dialect {\n" +
    "  let name = \"" + dialectName + "\";\n" +
    "  let cppNamespace = \"::" + dialectName + "\";\n" +
    "  let useDefaultTypePrinterParser = 1;\n}\n\n" +
    "class " + dialectName + "_Op<string mnemonic, list<Trait> traits = []> : Op<" +
    dialectName + "_Dialect, mnemonic, traits>;\n\n#endif\n";
  return res;
}


std::string GrammarInfos::generatePredicates()
{
  for (auto& elt: this->rules)
    elt.second->resetPredicates();
  std::string dialectName = this->grammarName;
  std::string res = "#ifndef " + dialectName + "_PREDICATES_TD__\n" +
    "#define " + dialectName + "_PREDICATES_TD__\n\n";
  for (auto& elt: this->rules)
    res += elt.second->generatePredicates(dialectName);
  res += "\n#endif\n";
  return res;
}

std::string GrammarInfos::generateOps()
{
  std::string dialectName = this->grammarName;
  std::string res = "#ifndef " + dialectName + "_OPS_TD__\n" +
    "#define " + dialectName + "_OPS_TD__\n\n" +
    "include \"" + dialectName + "Dialect.td\"\n" +
    "include \"" + dialectName + "Types.td\"\n" +
    "include \"" + dialectName + "Predicates.td\"\n" +
    "include \"mlir/IR/BuiltinAttributes.td\"\n" +
    "include \"mlir/IR/BuiltinTypes.td\"\n" +
    "include \"mlir/Interfaces/InferTypeOpInterface.td\"\n" +
    "include \"mlir/Interfaces/SideEffectInterfaces.td\"\n" +
    "include \"AutoAstUtils/AutoAstUtilsTypes.td\"\n\n"
    ;

  for (auto& elt: this->rules)
    res += elt.second->generateOps(dialectName);
  res += "\n#endif\n";
  return res;
}


std::string GrammarInfos::generateTypesH()
{
  std::string dialectName = this->grammarName;
  return "#ifndef " + dialectName + "_TYPES_H__\n" +
    "#define " + dialectName + "_TYPES_H__\n\n" +
    "#include \"mlir/IR/BuiltinTypes.h\"\n" +
    "#include \"mlir/IR/Types.h\"\n" +
    "#include \"mlir/IR/Dialect.h\"\n" +
    "#include \"mlir/IR/OpDefinition.h\"\n\n" +
    "#define GET_TYPEDEF_CLASSES\n" +
    "#include \"" + dialectName + "/" + dialectName + "Types.h.inc\"\n" +
    "#undef GET_TYPEDEF_CLASSES\n\n" +
    "\n#endif\n";
}

std::string GrammarInfos::generateDialectH()
{
  std::string dialectName = this->grammarName;
  return "#ifndef " + dialectName + "_DIALECT_H__\n" +
    "#define " + dialectName + "_DIALECT_H__\n\n" +
    "#include \"mlir/IR/Dialect.h\"\n"
    "#include \"" + dialectName + "/" + dialectName + "Dialect.h.inc\"\n\n" +
    "#endif\n";
}


std::string GrammarInfos::generateOpsH()
{
  std::string dialectName = this->grammarName;
  return "#ifndef " + dialectName + "_OPS_H__\n" +
    "#define " + dialectName + "_OPS_H__\n\n" +
    "#include \"mlir/IR/Types.h\"\n" +
    "#include \"mlir/IR/BuiltinTypes.h\"\n" +
    "#include \"mlir/IR/BuiltinAttributes.h\"\n" +
    "#include \"mlir/IR/Attributes.h\"\n" +
    "#include \"mlir/IR/Dialect.h\"\n" +
    "#include \"mlir/IR/OpDefinition.h\"\n" +
    "#include \"mlir/Interfaces/InferTypeOpInterface.h\"\n" +
    "#include \"mlir/Interfaces/SideEffectInterfaces.h\"\n" +
    "#include \"mlir/Bytecode/BytecodeOpInterface.h\"\n\n" +
    "#include \"" + dialectName + "Types.h\"\n" +
    "#include \"" + dialectName + "Dialect.h\"\n\n" +
    "#include \"AutoAstUtils/AutoAstUtilsTypes.h\"\n\n" +
    "#define GET_OP_CLASSES\n" +
    "#include \"" + dialectName + "/" + dialectName + ".h.inc\"\n\n" +
    "#endif\n";
}

std::string GrammarInfos::generateTypesCpp()
{
  std::string dialectName = this->grammarName;
  return "#include \"mlir/IR/BuiltinTypes.h\"\n\
#include \"mlir/IR/OpImplementation.h\"\n\
#include \"mlir/Parser/Parser.h\"\n\
#include \"llvm/ADT/TypeSwitch.h\"\n\
#include \"mlir/Support/TypeID.h\"\n\
#include \"mlir/IR/DialectImplementation.h\"\n\n\
#include \"" + dialectName + "/" + dialectName + "Dialect.h\"\n" +
    "#include \"" + dialectName + "/" + dialectName + "Types.h\"\n\n" +
    "#define GET_TYPEDEF_CLASSES\n" +
    "#include \"" + dialectName + "/" + dialectName + "Types.cpp.inc\"\n" +
    "#undef GET_TYPEDEF_CLASSES\n";
}


std::string GrammarInfos::generateDialectCpp()
{
  std::string dialectName = this->grammarName;
  return "#include \"mlir/IR/Dialect.h\"\n\
#include \"" + dialectName + "/" + dialectName + "Dialect.h\"\n" +
    "#include \"" + dialectName + "/" + dialectName + ".h\"\n\n" +
    "namespace " + dialectName + " {\n\n" +
    "void " + dialectName + "Dialect::initialize() {\n" +
    "  " + dialectName + "Dialect::addTypes<\n" +
    "#define GET_TYPEDEF_LIST\n" +
    "#include \"" + dialectName + "/" + dialectName + "Types.cpp.inc\"\n" +
    "      >();\n" +
    "  " + dialectName + "Dialect::addOperations<\n" +
    "#define GET_OP_LIST\n" +
    "#include \"" + dialectName + "/" + dialectName + ".cpp.inc\"\n" +
    "      >();\n}\n\n}\n";
}

std::string GrammarInfos::generateOpsCpp()
{
  std::string dialectName = this->grammarName;
  return "#include \"mlir/IR/BuiltinTypes.h\"\n\
#include \"mlir/IR/Dialect.h\"\n\
#include \"mlir/IR/OpDefinition.h\"\n\
#include \"mlir/Interfaces/InferTypeOpInterface.h\"\n\
#include \"mlir/Interfaces/SideEffectInterfaces.h\"\n\
#include \"mlir/Bytecode/BytecodeOpInterface.h\"\n\
#include \"" + dialectName + "/" + dialectName + ".h\"\n\n" +
    "#include \"" + dialectName + "/" + dialectName + "Dialect.h\"\n" +
    "#include \"" + dialectName + "/" + dialectName + "Types.h\"\n\n" +
    "#define GET_OP_CLASSES\n" +
    "#include \"" + dialectName + "/" + dialectName + ".cpp.inc\"\n";
}


void GrammarInfos::generateFiles(std::string path)
{
  std::filesystem::create_directories(path + "include/" + this->grammarName + "/");
  std::filesystem::create_directories(path + "lib/" + this->grammarName + "/");
  std::filesystem::create_directories(path + "dot/");

  
  std::ifstream optStreamR(path + "standalone-opt/standalone-opt.cpp");
  std::vector<std::string> optLines;
  std::string line;
  while (std::getline(optStreamR, line))
  {
    optLines.push_back(line);
    if (line == "//[antlr4-to-mlir] ADD INCLUDE HERE")
    {
      optLines.push_back("#include \"" + this->grammarName + "/" + this->grammarName + "Dialect.h\"\n\
#include \"" + this->grammarName + "/" + this->grammarName + "Dialect.cpp.inc\"");
    }
    else if (line == "//[antlr4-to-mlir] ADD REGISTERY INSERT HERE")
      optLines.push_back("  registry.insert<" + this->grammarName + "::" + this->grammarName + "Dialect>();");
  }
  std::ofstream optStream(path + "standalone-opt/standalone-opt.cpp");
  for (auto& line: optLines)
    optStream << line << '\n';
  optStream.close();

  
  std::ofstream includeGrammarStream(path + "include/" + this->grammarName + "/CMakeLists.txt");
  includeGrammarStream << this->generateIncludeCMakeList();
  includeGrammarStream.close();
  
  std::ofstream libGrammarStream(path + "lib/" + this->grammarName + "/CMakeLists.txt");
  libGrammarStream << this->generateLibCMakeList();
  libGrammarStream.close();

  std::ofstream includeCMakeStream(path + "include/CMakeLists.txt", std::ios_base::app);
  includeCMakeStream << "add_subdirectory(" + this->grammarName + ")\n";
  includeCMakeStream.close();
  
  std::ofstream libCMakeStream(path + "lib/CMakeLists.txt", std::ios_base::app);
  libCMakeStream << "add_subdirectory(" + this->grammarName + ")\n";
  libCMakeStream.close();
  
  std::ofstream dotStream(path + "dot/" + this->grammarName + ".dot");
  dotStream << this->toDot();
  dotStream.close();

  std::ofstream typesStream(path + "include/" + this->grammarName + "/" + this->grammarName + "Types.td");
  typesStream << this->generateTypes();
  typesStream.close();

  std::ofstream dialectStream(path + "include/" + this->grammarName + "/" + this->grammarName + "Dialect.td");
  dialectStream << this->generateDialect();
  dialectStream.close();

  std::ofstream predicatesStream(path + "include/" + this->grammarName + "/" + this->grammarName + "Predicates.td");
  predicatesStream << this->generatePredicates();
  predicatesStream.close();

  std::ofstream opsStream(path + "include/" + this->grammarName + "/" + this->grammarName + ".td");
  opsStream << this->generateOps();
  opsStream.close();

  std::ofstream typesHStream(path + "include/" + this->grammarName + "/" + this->grammarName + "Types.h");
  typesHStream << this->generateTypesH();
  typesHStream.close();

  std::ofstream dialectHStream(path + "include/" + this->grammarName + "/" + this->grammarName + "Dialect.h");
    dialectHStream << this->generateDialectH();
  dialectHStream.close();

  std::ofstream opsHStream(path + "include/" + this->grammarName + "/" + this->grammarName + ".h");
  opsHStream << this->generateOpsH();
  opsHStream.close();

  std::ofstream typesCppStream(path + "lib/" + this->grammarName + "/" + this->grammarName + "Types.cpp");
  typesCppStream << this->generateTypesCpp();
  typesCppStream.close();

  std::ofstream dialectCppStream(path + "lib/" + this->grammarName + "/" + this->grammarName + "Dialect.cpp");
  dialectCppStream << this->generateDialectCpp();
  dialectCppStream.close();

  std::ofstream opsCppStream(path + "lib/" + this->grammarName + "/" + this->grammarName + ".cpp");
  opsCppStream << this->generateOpsCpp();
  opsCppStream.close();
}




GrammarRule* GrammarInfos::getRule(std::string name)
{
  return this->rules[name];
}


std::string GrammarInfos::generateIncludeCMakeList()
{
  std::string dialectName = this->grammarName;
  return "add_mlir_dialect(" + dialectName + " " + dialectName + ")\n";
}

std::string GrammarInfos::generateLibCMakeList()
{
  std::string dialectName = this->grammarName;
  return "add_mlir_dialect_library(" + dialectName + "\n\n\
        " + dialectName + "Dialect.cpp\n\
        " + dialectName + ".cpp\n\
        " + dialectName + "Types.cpp\n\n\
        ADDITIONAL_HEADER_DIRS\n\
        ${PROJECT_SOURCE_DIR}/include/" + dialectName + "\n\n\
        DEPENDS\n\
        MLIR" + dialectName + "IncGen\n\n\
	LINK_LIBS PUBLIC\n\
	MLIRIR\n\
        MLIRInferTypeOpInterface\n)";
}


std::string GrammarInfos::generateAntlrCMakeLists()
{
  std::string dialectName = this->grammarName;
  return "cmake_minimum_required(VERSION 3.10)\n\
project(" + dialectName + ")\n\n\
set(CMAKE_BUILD_TYPE Release)\n\n\
file(GLOB CPP_SRC \"src/*.cpp\")\n\
file(GLOB G4_SRC \"*.g4\")\n\
add_definitions(-g)\n\n\n									\
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)\n\
set(CMAKE_CXX_STANDARD 17)\n\n\
add_definitions(-DANTLR4CPP_STATIC)\n\
set(ANTLR4_WITH_STATIC_CRT OFF)\n\
include(ExternalAntlr4Cpp)\n\
include_directories(${ANTLR4_INCLUDE_DIRS})\n\
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/antlr-4.13.0-complete.jar)\n\
find_package(ANTLR REQUIRED)\n\n\
antlr_target(Antlr4Grammar ${G4_SRC} VISITOR OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/)\n\
include_directories(${PROJECT_SOURCE_DIR}\n\
					 ${PROJECT_SOURCE_DIR}/libs/\n\
  )\n\
add_executable(" + dialectName + " ${CPP_SRC}             \n\
               ${ANTLR_Antlr4Grammar_CXX_OUTPUTS})\n\
target_link_libraries(" + dialectName + " antlr4_static ${SYSTEM_LIBS})";
}

std::string GrammarInfos::generateVisitorCppBase()
{
  return "std::any " + this->grammarName + "TransformVisitor::visitINT(antlr4::Token* context)\n\
{\n\
  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n\
  std::string returnType = \"!AutoAstUtils.int\";\n\
  std::string returnCode = returnVar + \" = \\\"AutoAstUtils.int\\\" () {value=\" + context->getText() + \"} : () -> !AutoAstUtils.int\\n\";\n\
		  return std::make_tuple(returnVar, returnCode, returnType);\n\
}\n\
\n\
std::any " + this->grammarName + "TransformVisitor::visitFLOAT(antlr4::Token* context)\n\
{\n\
  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n\
  std::string returnType = \"!AutoAstUtils.float\";\n\
  std::string returnCode = returnVar + \" = \\\"AutoAstUtils.float\\\" () {value=\" + context->getText() + \"} : () -> !AutoAstUtils.float\\n\";\n\
		  return std::make_tuple(returnVar, returnCode, returnType);\n\
}\n\
\n\
std::any " + this->grammarName + "TransformVisitor::visitCHAR(antlr4::Token* context)\n\
{\n\
  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n\
  std::string returnType = \"!AutoAstUtils.char\";\n\
  std::string returnCode = returnVar + \" = \\\"AutoAstUtils.char\\\" () {value=\" + context->getText() + \"} : () -> !AutoAstUtils.char\\n\";\n\
		  return std::make_tuple(returnVar, returnCode, returnType);\n\
}\n\
\n\
std::any " + this->grammarName + "TransformVisitor::visitID(antlr4::Token* context)\n\
{\n\
  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n\
  std::string returnType = \"!AutoAstUtils.ID\";\n\
  std::string returnCode = returnVar + \" = \\\"AutoAstUtils.ID\\\" () {value=\\\"\" + context->getText() + \"\\\"} : () -> !AutoAstUtils.ID\\n\";\n\
		  return std::make_tuple(returnVar, returnCode, returnType);\n\
}\n\
\n\
std::any " + this->grammarName + "TransformVisitor::visitSTRING(antlr4::Token* context)\n\
{\n\
  std::string returnVar = \"%\" + std::to_string(lastIndex++);\n\
  std::string returnType = \"!AutoAstUtils.string\";\n\
  std::string returnCode = returnVar + \" = \\\"AutoAstUtils.string\\\" () {value=\" + context->getText() + \"} : () -> !AutoAstUtils.string\\n\";\n\
		  return std::make_tuple(returnVar, returnCode, returnType);\n\
}\n";
}

std::string GrammarInfos::generateVisitorHppBase()
{
  return "std::any visitINT(antlr4::Token* context);\n\
\n\
std::any visitFLOAT(antlr4::Token* context);\n\
\n\
std::any visitCHAR(antlr4::Token* context);\n\
\n\
std::any visitID(antlr4::Token* context);\n\
\n\
std::any visitSTRING(antlr4::Token* context);\n\
\n\
";
}

std::string GrammarInfos::generateVisitorHpp()
{
  std::string dialectName = this->grammarName;
  std::string res = "#include \"" + dialectName + "Visitor.h\"\n\n\
#ifndef " + dialectName + "_TRANSFORMVISITOR_HPP_\n\
#define " + dialectName + "_TRANSFORMVISITOR_HPP_\n\n\
class " + dialectName + "TransformVisitor : public " + dialectName + "Visitor {\n\
  int lastIndex = 0;\n\
public:\n\n";
  for (auto& [child,rule]: this->rules) {
    std::string capitalized = child;
    capitalized[0] = toupper(capitalized[0]);
    res += "virtual std::any visit" + capitalized + "(" + dialectName + "Parser::" + capitalized + "Context *context) override;\n\n";
  }
  res += generateVisitorHppBase();
  res += "};\n\n#endif\n";
  return res;
}

std::string GrammarInfos::generateVisitorCpp()
{
  lastIndex = 0;
  std::string dialectName = this->grammarName;
  std::string res = "#include \"" + dialectName + "TransformVisitor.hpp\"\n\n";
  for (auto& [name, rule]: this->rules)
    res += rule->generateVisitorCpp(dialectName);
  res += generateVisitorCppBase();
  return res;
}

std::string GrammarInfos::generateMain(std::string startRule)
{
  std::string capitalized = startRule;
  capitalized[0] = toupper(capitalized[0]);
  return "#include <iostream>\n#include <fstream>\n\
#include \"" + this->grammarName + "TransformVisitor.hpp\"\n\
#include \"" + this->grammarName + "Lexer.h\"\n\n\
int main(int argc, char** argv) {\n\
  if (argc != 3) {\n\
    std::cerr << \"Usage : \" << argv[0] << \" [input filename] [output filename].\";\n\
    exit(1);\n\
  }\n\
  std::ifstream inStream(argv[1]);\n\
  if (!inStream.is_open()) {\n\
    std::cerr << \"Can't open file \" << argv[1] << \".\";\n\
    exit(1);\n\
  }\n\n\
  antlr4::ANTLRInputStream input(inStream);\n  " +
    this->grammarName + "Lexer lexer(&input);\
  antlr4::CommonTokenStream tokens(&lexer);\n  " +
    this->grammarName + "Parser parser(&tokens);\n  " +
    this->grammarName + "Parser::" + capitalized + "Context* tree = parser." + startRule + "();\n  " +
    this->grammarName + "TransformVisitor visitor;\n\
  auto transformed = std::any_cast<std::tuple<std::string, std::string, std::string>>(visitor.visit" + capitalized + "(tree));\n\
  std::string res = \"module \{\\n\\n\" + std::get<1>(transformed) + \"\\n}\\n\";\n \
  std::ofstream outStream(argv[2]);\n\
  outStream << res;\n\
  inStream.close();\n\
  outStream.close();\n\
  return 0;\n}\n";
}

void GrammarInfos::generateAntlr(std::string g4File, std::string path, std::string startRule)
{
  std::string cmakeProjDir = CMAKE_PROJ_DIR;
  if (cmakeProjDir.back() != '/')
    cmakeProjDir += '/';
  
  std::filesystem::create_directories(path + "/" + this->grammarName + "/src/");
  std::string cmd = "cp " + g4File + " " + path + "/" + this->grammarName + "/";
  system(cmd.c_str());
  cmd = "cp " + cmakeProjDir + "tools/antlr-4.13.0-complete.jar " + path + "/" + this->grammarName + "/";
  system(cmd.c_str());
  cmd = "cp -R " + cmakeProjDir + "cmake " + path + "/" + this->grammarName + "/";
  system(cmd.c_str());

  std::ofstream cmakeStream(path + "/" + this->grammarName + "/CMakeLists.txt");
  cmakeStream << generateAntlrCMakeLists();
  cmakeStream.close();

  std::ofstream visitorHppStream(path + "/" + this->grammarName + "/src/" + this->grammarName + "TransformVisitor.hpp");
  visitorHppStream << generateVisitorHpp();
  visitorHppStream.close();

  std::ofstream visitorCppStream(path + "/" + this->grammarName + "/src/" + this->grammarName + "TransformVisitor.cpp");
  visitorCppStream << generateVisitorCpp();
  visitorCppStream.close();

  std::ofstream mainStream(path + "/" + this->grammarName + "/src/main.cpp");
  mainStream << generateMain(startRule);
  mainStream.close();
}
