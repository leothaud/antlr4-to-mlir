grammar MaGrammaire;

rule1: rule2 | rule4;

rule2: 'e' | rule3 | rule5;

rule3: 'a';

rule4: 'b' (x+=rule2)* (y+=rule6)*;

rule5: 'c' (x=rule3)? v=STRING;

rule6: 'd';

INT: '-'?[0-9]+;
FLOAT: '-'?[0-9]+ '.' [0-9]*;
CHAR: '\'' ('\\'|.) '\'';
STRING: '"' ('\\'|.)*? '"';
ID: [a-zA-Z_] [a-zA-Z_0-9]*;
WS: [ \t\r\n] -> skip ;

