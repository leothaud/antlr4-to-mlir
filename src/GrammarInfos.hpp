#include <string>
#include <map>
#include <set>
#include <list>

#ifndef GRAMMAR_INFOS_HPP
#define GRAMMAR_INFOS_HPP

class TerminalRuleOptions
{
private:
  bool variadic, optionnal;
  std::string name;
public:
  TerminalRuleOptions(std::string name, bool variadic, bool optionnal)
  {
    this->name = name;
    this->variadic = variadic;
    this->optionnal = optionnal;
  }

  TerminalRuleOptions(const TerminalRuleOptions& other)
  {
    this->variadic = other.variadic;
    this->optionnal = other.optionnal;
  }

  TerminalRuleOptions& operator=(const TerminalRuleOptions& other)
  {
    this->variadic = other.variadic;
    this->optionnal = other.optionnal;
    return *this;
  }

  bool isVariadic()
  {
    return this->variadic;
  }

  bool isOptionnal()
  {
    return this->optionnal;
  }
  
  void setOptionnal()
  {
    this->optionnal = true;
  }

  std::string getName()
  {
    return this->name;
  }
};

class GrammarRule
{
protected:
  std::string name;
public:
  void setName(std::string name)
  {
    this->name = name;
  }

  std::string getName()
  {
    return this->name;
  }

  virtual std::string toDot() = 0;
};

class TerminalGrammarRule : public GrammarRule
{
private:
  std::map<std::string, TerminalRuleOptions*> bodyElt;

public:
  TerminalGrammarRule(){}
  
  void addBodyElt(std::string name, TerminalRuleOptions* options)
  {
    this->bodyElt.emplace(name, options);
  }
  
  void setBodyElt(std::map<std::string, TerminalRuleOptions*> bodyElt)
  {
    this->bodyElt = bodyElt;
  }

  virtual std::string toDot() override
  {
    std::string res = "";
    for (auto& [name, options]: bodyElt)
    {
      std::string color = options->isVariadic() ? "blue" : (options->isOptionnal() ? "green" : "red");
      res += this->name + "->" + options->getName() + "[color=" + color + "];\n";
    }
    return res;
  }
};

class NonTerminalGrammarRule : public GrammarRule
{
private:
  std::set<std::string> children;
  
public:
  NonTerminalGrammarRule(){}
  
  void addChild(std::string child)
  {
    this->children.insert(child);
  }

  virtual std::string toDot() override
  {
    std::string res = "";
    for (const auto& child: children)
      res += this->name + "->" + child + ";\n";
    return res;
  }
};

class GrammarInfos
{
private:
  std::string grammarName;
  std::map<std::string, GrammarRule*> rules;

public:
  GrammarInfos()
  {
  }
  
  GrammarInfos(std::string name)
  {
    this->grammarName = name;
  }

  void addRule(GrammarRule* rule)
  {
    this->rules[rule->getName()] = rule;
  }

  void setName(std::string name)
  {
    this->grammarName = name;
  }

  std::string toDot()
  {
    std::string res = "digraph G {\n";
    for (auto& elt: rules)
      res += elt.second->toDot();
    res += "\n}";
    return res;
  }
};

#endif
