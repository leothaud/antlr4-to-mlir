#include "GrammarInfos.hpp"
#include <map>
#include <vector>
#include <algorithm>

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

bool TerminalRuleOptions::isOptionnal()
{
  return this->optionnal;
}
  
void TerminalRuleOptions::setOptionnal()
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
    std::string color = options->isVariadic() ? "blue" : (options->isOptionnal() ? "green" : "red");
    res += this->name + "->" + options->getName() + "[color=" + color + "];\n";
  }
  return res;
}

std::string TerminalGrammarRule::generatePredicates(std::string dialectName)
{
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
    "let arguments = (ins";
  bool first = true;
  for (auto& [name, options]: bodyElt) {
    res += first ? " " : "\n, ";
    first = false;
    if (options->isVariadic())
      res += "Variadic<";
    else if (options->isOptionnal())
      res += "Optionnal<";
    if (std::find(baseTypes.begin(), baseTypes.end(), options->getName()) != baseTypes.end())
    {
      res += baseTypesMap[options->getName()];
    }
    else
    {
      res += "Type<" + dialectName + "_" + options->getName() + "Pred>";
    }
    if (options->isVariadic() || options->isOptionnal())
      res += ">";
    res += ":$" + name;
  }
  res = res + ");\n" +
    "let results = (outs " + dialectName + "_" + this->name + "NodeType:$res);\n}\n\n";

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
  std::string res = "def " + dialectName + "_" + this->name + "Pred : Or<[\n" +
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
  std::string res = "digraph G {\n";
  for (auto& elt: rules)
    res += elt.second->toDot();
  res += "\n}";
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
    "let mnemonic = typeMnemonic;\n}\n\n";

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
    "let name = \"" + dialectName + "\";\n" +
    "let cppNamespace = \"::" + dialectName + "\";\n" +
    "let useDefaultTypePrinterParser = 1;\n}\n\n" +
    "class " + dialectName + "_Op<string mnemonic, list<Trait> traits = []> : Op<" +
    dialectName + "_Dialect, mnemonic, traits>;\n\n#endif\n";
  return res;
}


std::string GrammarInfos::generatePredicates()
{
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
    "include \"../AutoAstUtils/AutoAstUtilsTypes.td\"\n\n"
    ;

  for (auto& elt: this->rules)
    res += elt.second->generateOps(dialectName);
  res += "\n#endif\n";
  return res;
}
