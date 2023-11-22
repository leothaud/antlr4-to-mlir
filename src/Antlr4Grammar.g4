grammar Antlr4Grammar;

grammarFile: 'grammar' grammarName=ID ';' (grammarRules+=rules)* EOF;

rules: nonTerminalRule | terminalRule;

nonTerminalRule: name=ID ':' children+=ID ('|' children+=ID)* ';' ;

terminalRule: name=ID ':' body=ruleBody ';' ;

ruleBody: lbody=ruleBody rbody=ruleBody | terminalRuleBody;

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
    name=ID op=affectOp value=ID;

affectOp: eqOp | plusEqOp;

eqOp: '=';

plusEqOp: '+=';

ID: [a-zA-Z_] [a-zA-Z_0-9]*;
STRING: '\'' .*? '\'';
WS: [ \t\r\n]+ -> skip;
