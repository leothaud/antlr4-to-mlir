grammar MaGrammaire;

rule1: rule2 | rule3 | rule4;

rule2: rule3 | rule5;

rule3: 'a';

rule4: 'b' (x+=rule2)*;

rule5: 'c' (x=rule3)? v=STRING;

INT: '-'?[0-9]+;
FLOAT: '-'?[0-9]+ '.' [0-9]*;
CHAR: '\'' ('\\'|.) '\'';
STRING: '"' ('\\'|.)*? '"';
ID: [a-zA-Z_] [a-zA-Z_0-9]*;
WS: [ \t\r\n] -> skip ;

