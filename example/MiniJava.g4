grammar MiniJava;


program: mainCls=mainClass ( classDecl+=classDeclaration )*;

mainClass: CLASS name=ID L_BRACKET PUBLIC STATIC VOID MAIN L_PARENT STRING_TOKEN L_SBRACKET R_SBRACKET argName=ID R_PARENT L_BRACKET body=statement R_BRACKET R_BRACKET;

classDeclaration: CLASS name=ID (EXTENDS parentClass=ID)? L_BRACKET (varDecl+=varDeclaration)* (methodDecl+=methodDeclaration)* R_BRACKET;

varDeclaration: varType=type varName=ID SEMI;

methodDeclaration: PUBLIC returnType=type methodName=ID L_PARENT (argType+=type argName+=ID (COMA argType+=type argName+=ID)* )? R_PARENT L_BRACKET (varDecl+=varDeclaration)* (body+=statement)* RETURN returnExpr=expression SEMI R_BRACKET;

type: intArrayType | booleanType | intType | idType;

intArrayType: INT_TOKEN L_SBRACKET R_SBRACKET;

booleanType: BOOLEAN_TOKEN;

intType: INT_TOKEN;

idType: typeName=ID;

statement: compoundStatement | ifStatement | whileStatement | printStatement | affectStatement | affectArrayStatement;

compoundStatement: L_BRACKET (body+=statement)*? R_BRACKET;

ifStatement: IF L_PARENT cond=expression R_PARENT thenPart=statement ELSE elsePart=statement;

whileStatement: WHILE L_PARENT cond=expression R_PARENT body=statement;

printStatement: PRINTLN L_PARENT printExpr=expression R_PARENT SEMI;

affectStatement: lValue=ID EQ rValue=expression SEMI;

affectArrayStatement: array=ID L_SBRACKET index=expression R_SBRACKET EQ value=expression SEMI ;

expression: binOpExpr;

binOpExpr: loperand=binOpExpr op=operator roperand=postfixExpression | postfixExpression;

operator: andOperator | lessThanOperator | plusOperator | minusOperator | multOperator;

andOperator: AND;

lessThanOperator: LT;

plusOperator: PLUS;

minusOperator: MINUS;

multOperator: MULT;

postfixExpression: baseExpr=postfixExpression op=postfixOperator | unaryExpression ;

postfixOperator: arrayIndexOperation | lengthOperation | methodCallOperation;

arrayIndexOperation:  L_SBRACKET index=expression R_SBRACKET;

lengthOperation: DOT LENGTH;

methodCallOperation: DOT methodName=ID L_PARENT (args+=expression (COMA args+=expression)*)? R_PARENT;

unaryExpression: constIntExpression | trueExpression | falseExpression | varExpression | thisExpression | newExpression | notExpression | negExpression | posExpression | parentExpression;

constIntExpression: value=INT;

trueExpression: TRUE;

falseExpression: FALSE;

varExpression: varName=ID;

thisExpression: THIS;

newExpression: newClassExpression | newArrayExpression;

newClassExpression: NEW name=ID L_PARENT R_PARENT;
newArrayExpression: NEW INT_TOKEN L_SBRACKET size=expression R_SBRACKET;


notExpression: BANG baseExpr=expression;

negExpression: MINUS baseExpr=expression;

posExpression: PLUS baseExpr=expression;

parentExpression: L_PARENT baseExpr=expression R_PARENT;


CLASS: 'class' ;
L_BRACKET: '{' ;
R_BRACKET: '}' ;
PUBLIC: 'public';
STATIC: 'static';
VOID: 'void';
MAIN: 'main';
L_PARENT: '(';
R_PARENT: ')';
STRING_TOKEN: 'String';
L_SBRACKET: '[';
R_SBRACKET: ']';
EXTENDS:'extends';
SEMI:';';
COMA:',';
RETURN:'return';
INT_TOKEN:'int';
BOOLEAN_TOKEN:'boolean';
IF:'if';
ELSE:'else';
WHILE:'while';
PRINTLN:'System.out.println';
EQ:'=';
AND:'&&';
LT:'<';
PLUS:'+';
fragment MINUS_:'-';
MULT:'*';
DOT:'.';
LENGTH:'length';
TRUE:'true';
FALSE:'false';
THIS:'this';
NEW:'new';
BANG:'!';

MINUS:MINUS_;
fragment DIGIT:[0-9];

INT: DIGIT+;
FLOAT: DIGIT+ DOT DIGIT*;
CHAR: '\'' ('\\'|.) '\'';
STRING: '"' ('\\'|.)*? '"';
ID: [a-zA-Z_] [a-zA-Z_0-9]*;
WS: [ \t\r\n] -> skip ;       
