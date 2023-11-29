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

grammar_file: GRAMMAR grammar_name=(L_ID | U_ID) SEMI (grammar_rules+=rule_)+ EOF;

rule_:
    FRAGMENT_TOKEN? name=U_ID COLON (~(SEMI | QUOTE | L_SBRACKET) | QUOTE (~QUOTE | BACKSLASH QUOTE)*? SEMI (~QUOTE | BACKSLASH QUOTE)*? | L_SBRACKET ~L_SBRACKET*? R_SBRACKET)*? SEMI #lexer_rule
  | name=L_ID COLON bodies+=rule_body (PIPE bodies+=rule_body)* SEMI #parser_rule;

rule_body:
    (rule_fragment+=terminal_rule_body)+ (POUND ruleName=L_ID)?;

terminal_rule_body:
    body=terminal_rule_body op=operator #postfix_rule_body
  | L_PARENT body=rule_body R_PARENT #parent_rule_body
  | body=(STRING | QUOTED_DOT | QUOTED_DOUBLE_QUOTE | QUOTED_QUOTE) #string_rule_body
  | varName=L_ID op=affect_op value=(L_ID | U_ID) #affect_rule_body
  | name=(L_ID | U_ID) #id_rule_body
  | L_SBRACKET (~R_SBRACKET | BACKSLASH R_SBRACKET)*? R_SBRACKET #sbracket_rule_body
  | DOT #dot_rule_body
  | EOF_TOKEN #eof_rule_body
  ;


operator:
    STAR #star_operator
  | PLUS #plus_operator
  | QUESTION_MARK #question_mark_operator
  ;

affect_op:
    EQ #eq_operator
  | PLUS_EQ #plus_eq_operator
  ;
      

QUOTED_DOT:'\'.\'';
QUOTED_DOUBLE_QUOTE: '\'"\'';
QUOTED_QUOTE: '\'\\\'\'';

GRAMMAR: 'grammar';
SEMI: ';';
COLON: ':';
PIPE: '|';
EOF_TOKEN: 'EOF';
STAR: '*';
PLUS: '+';
MINUS:'-';
QUESTION_MARK: '?';
L_PARENT: '(';
R_PARENT: ')';
DOT: '.';
QUOTE: '\'';
DOUBLE_QUOTE:'"';
BACKSLASH:'\\';
SKIP_TOKEN:'skip';
L_SBRACKET:'[';
R_SBRACKET:']';
EQ:'=';
PLUS_EQ:'+=';
FRAGMENT_TOKEN:'fragment';
POUND:'#';


fragment DIGIT:[0-9];
fragment LOWERCASE_LETTER:[a-z];
fragment UPPERCASE_LETTER:[A-Z];
fragment UNDERSCORE_F:'_';

UNDERSCORE: UNDERSCORE_F;

L_ID: LOWERCASE_LETTER (LOWERCASE_LETTER | UPPERCASE_LETTER | DIGIT | UNDERSCORE_F)*;
U_ID: UPPERCASE_LETTER (LOWERCASE_LETTER | UPPERCASE_LETTER | DIGIT | UNDERSCORE_F)*;

STRING: '\'' (~'\'' | '\\\'')*? '\'';
WS: [ \t\r\n]+ -> skip;
COMMENT: '/*' .*? '*/' -> skip;
LINE_COMMENT: '//' ~[\r\n]* -> skip;

ANY: .;
