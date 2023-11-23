#include <string>
#include <map>
#include <set>
#include <list>

#ifndef GRAMMAR_INFOS_HPP
#define GRAMMAR_INFOS_HPP

class GrammarInfos;

class TerminalRuleOptions
{
private:
  bool variadic, optionnal;
  std::string name;

public:
  TerminalRuleOptions(std::string name, bool variadic, bool optionnal);

  TerminalRuleOptions(const TerminalRuleOptions& other);

  TerminalRuleOptions& operator=(const TerminalRuleOptions& other);

  bool isVariadic();
  bool isOptional();
  void setOptional();
  std::string getName();
};

class GrammarRule
{
protected:
  std::string name;
  bool predicateGenerated;
  GrammarInfos* parent;
public:
  void setName(std::string name);
  std::string getName();
  virtual std::string toDot() = 0;
  std::string generateTypes(std::string dialectName);
  virtual std::string generatePredicates(std::string dialectName) = 0;
  virtual std::string generateOps(std::string dialectName) = 0;

  void resetPredicates();
};

class TerminalGrammarRule : public GrammarRule
{
private:
  std::map<std::string, TerminalRuleOptions*> bodyElt;

public:
  TerminalGrammarRule(GrammarInfos* parent)
  {
    this->parent = parent;
  }

  void addBodyElt(std::string name, TerminalRuleOptions* options);
  void setBodyElt(std::map<std::string, TerminalRuleOptions*> bodyElt);

  virtual std::string toDot() override;
  virtual std::string generatePredicates(std::string dialectName) override;
  virtual std::string generateOps(std::string dialectName) override;
};

class NonTerminalGrammarRule : public GrammarRule
{
private:
  std::set<std::string> children;
  
public:
  NonTerminalGrammarRule(GrammarInfos* parent)
  {
    this->parent = parent;
  }
  
  void addChild(std::string child);
  virtual std::string toDot() override;
  virtual std::string generatePredicates(std::string dialectName) override;
  virtual std::string generateOps(std::string dialectName) override;
};


class GrammarInfos
{
private:
  std::string grammarName;
  std::map<std::string, GrammarRule*> rules;

public:
  GrammarInfos(){}

  GrammarInfos(std::string name){ this->grammarName = name; }

  std::string getGrammarName();
  
  void addRule(GrammarRule* rule);
  GrammarRule* getRule(std::string name);
  void setName(std::string name);
  std::string toDot();
  std::string generateTypes();
  std::string generateDialect();
  std::string generatePredicates();
  std::string generateOps();

  
  std::string generateTypesH();
  std::string generateDialectH();
  std::string generateOpsH();

  std::string generateTypesCpp();
  std::string generateDialectCpp();
  std::string generateOpsCpp();

  std::string generateIncludeCMakeList();
  std::string generateLibCMakeList();
  
  void generateFiles(std::string path);
};

#endif
