#include "GrammarInfos.hpp"
#include <map>

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
