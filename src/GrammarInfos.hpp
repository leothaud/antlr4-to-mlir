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
  TerminalRuleOptions(bool variadic, bool optionnal)
  {
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
};

class TerminalGrammarRule : public GrammarRule
{
private:
  std::map<std::string, TerminalRuleOptions> bodyElt;
  
public:
  TerminalGrammarRule(){}
  
  void addBodyElt(std::string name, TerminalRuleOptions& options)
  {
    this->bodyElt.emplace(name, options);
  }
  
  void setBodyElt(std::map<std::string, TerminalRuleOptions> bodyElt)
  {
    this->bodyElt = bodyElt;
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
};

class GrammarInfos
{
private:
  std::string grammarName;
  std::map<std::string, GrammarRule> rules;

public:
  GrammarInfos()
  {
  }
  
  GrammarInfos(std::string name)
  {
    this->grammarName = name;
  }

  void addRule(GrammarRule rule)
  {
    this->rules[rule.getName()] = rule;
  }

  void setName(std::string name)
  {
    this->grammarName = name;
  }
};

#endif
