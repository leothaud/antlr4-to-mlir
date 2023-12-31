//===- GrammarInfos.hpp ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

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
  bool variadic = false;
  bool optional = false;
  std::string name = "";

public:
  TerminalRuleOptions(std::string name) { this->name = name;}
  TerminalRuleOptions(std::string name, bool variadic, bool optional);

  TerminalRuleOptions(const TerminalRuleOptions& other);

  TerminalRuleOptions& operator=(const TerminalRuleOptions& other);

  bool isVariadic();
  void setVariadic();
  bool isOptional();
  void setOptional();
  std::string getName();
};


class GrammarRule
{
private:
  std::string name = "";
  bool predicateGenerated = false;
  GrammarInfos* parent = nullptr;
  std::map<std::string, TerminalRuleOptions*> bodyElt;
  std::set<std::string> children;
  bool terminal = false;
  bool needVisitor = true;
  
public:
  GrammarRule(GrammarInfos* parent)
  {
    this->parent = parent;
  }

  void setTerminal(bool value);
  bool getTerminal();

  void addBodyElt(std::string name, TerminalRuleOptions* options);
  void setBodyElt(std::map<std::string, TerminalRuleOptions*> bodyElt);
  void addChild(std::string child);

  void setNoVisitor();
  bool getNeedVisitor();

  void setName(std::string name);
  std::string getName();
  std::string toDot();
  std::string generateTypes(std::string dialectName);
  std::string generatePredicates(std::string dialectName);
  std::string generateOps(std::string dialectName);
  std::string generateVisitorCpp(std::string dialectName);

  void resetPredicates();
};

/*class TerminalGrammarRule : public GrammarRule
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
  virtual std::string generateVisitorCpp(std::string dialectName) override;
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
  virtual std::string generateVisitorCpp(std::string dialectName) override;
};
*/

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

  void generateAntlr(std::string g4File, std::string path, std::string startRule);
  std::string generateVisitorHppBase();
  std::string generateVisitorCppBase();
  std::string generateVisitorHpp();
  std::string generateVisitorCpp();
  std::string generateMain(std::string startRule);
  std::string generateAntlrCMakeLists();
};

#endif
