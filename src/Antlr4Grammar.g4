//===- Antlr4Grammar.g4 ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

grammar Antlr4Grammar;

grammarFile: 'grammar' grammarName=ID ';' (grammarRules+=rules)* baseRules* EOF;

rules: nonTerminalRule | terminalRule;

nonTerminalRule: name=ID ':' ( ('(' children+=ID ')') | children+=ID) ('|' (('(' children+=ID ')') | children+=ID))* ';' ;

terminalRule: name=ID ':' body=ruleBody ';' ;

ruleBody: (bodies+=terminalRuleBody)+;

terminalRuleBody:
  body=terminalRuleBody (op=operator)
  | parentRuleBody
  | stringRuleBody
  | affectRuleBody 
  ;


starOperator: '*';

plusOperator: '+';

questionMarkOperator: '?';

operator: starOperator | plusOperator | questionMarkOperator;

parentRuleBody:
    '(' body=ruleBody ')';

stringRuleBody:
    body=STRING ;

affectRuleBody:
    name=ID op=affectOp value=rOperand;

rOperand:
    val=ID | val='INT' | val='FLOAT' | val='CHAR' | val='STRING' | val='ID' ;

affectOp: eqOp | plusEqOp;

eqOp: '=';

plusEqOp: '+=';

baseRules:
	intBaseRule | floatBaseRule | charBaseRule | stringBaseRule | idBaseRule | wsBaseRule;

intBaseRule: 'INT' ':' '\'-\'?[0-9]+' ';';

floatBaseRule: 'FLOAT' ':' '\'-\'?[0-9]+' '\'.\'' + '[0-9]*' ';' ;

charBaseRule: 'CHAR' ':' '\'\\\'\'' '(\'\\\\\'|.)' '\'\\\'\'' ';' ;

stringBaseRule: 'STRING' ':' '\'"\'' '(\'\\\\\'|.)*?' '\'"\'' ';';

idBaseRule: 'ID' ':' '[a-zA-Z_]' '[a-zA-Z_0-9]*' ';' ;

wsBaseRule: 'WS' ':' '[ \\t\\r\\n]' '->' 'skip' ';' ;

ID: [a-zA-Z_] [a-zA-Z_0-9]*;
STRING: '\'' .*? '\'';
WS: [ \t\r\n]+ -> skip;
