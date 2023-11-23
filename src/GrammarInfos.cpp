#include "GrammarInfos.hpp"
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <filesystem>

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
    
  std::string res = "def " + dialectName + "_" + this->name + "Op: " +
    dialectName + "_Op<\"" + this->name + "\">\n{\n" +
    "  let arguments = (ins";
  bool first = true;
  for (auto& [name, options]: bodyElt) {
    res += first ? " " : ",\n ";
    first = false;
    if (options->isVariadic())
      res += "Variadic<";
    else if (options->isOptional())
      res += "Optional<";
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

std::string GrammarRule::generateTypes(std::string dialectName)
{
  return "def " + dialectName + "_" +
    this->name + "NodeType : " + dialectName +
    "_AstNodeType<\"" + dialectName + "_" + this->name + "Node\",\"" + this->name + "Node\">{}\n\n";
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
  
  std::ofstream dotStream(path + this->grammarName + ".dot");
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

void GrammarRule::resetPredicates()
{
  this->predicateGenerated = false;
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
