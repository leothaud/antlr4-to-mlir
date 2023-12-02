#ifndef MiniJava_OPS_TD__
#define MiniJava_OPS_TD__

include "MiniJavaDialect.td"
include "MiniJavaTypes.td"
include "MiniJavaPredicates.td"
include "mlir/IR/BuiltinAttributes.td"
include "mlir/IR/BuiltinTypes.td"
include "mlir/Interfaces/InferTypeOpInterface.td"
include "mlir/Interfaces/SideEffectInterfaces.td"
include "AutoAstUtils/AutoAstUtilsTypes.td"
include "AutoAstUtils/AutoAstUtilsAttrDefs.td"

def MiniJava_affectArrayStatementOp: MiniJava_Op<"affectArrayStatement">
{
  let arguments = (ins  AutoAstUtils_IDType:$array,
 Type<MiniJava_expressionPred>:$index,
 Type<MiniJava_expressionPred>:$value, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_affectArrayStatementNodeType:$res);
}

def MiniJava_affectStatementOp: MiniJava_Op<"affectStatement">
{
  let arguments = (ins  AutoAstUtils_IDType:$lValue,
 Type<MiniJava_expressionPred>:$rValue, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_affectStatementNodeType:$res);
}

def MiniJava_andOperatorOp: MiniJava_Op<"andOperator">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_andOperatorNodeType:$res);
}

def MiniJava_arrayIndexOperationOp: MiniJava_Op<"arrayIndexOperation">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$index, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_arrayIndexOperationNodeType:$res);
}

def MiniJava_binOpExprOp: MiniJava_Op<"binOpExpr">
{
  let arguments = (ins  Type<MiniJava_binOpExprPred>:$loperand,
 Type<MiniJava_operatorPred>:$op,
 Type<MiniJava_postfixExpressionPred>:$roperand, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_binOpExprNodeType:$res);
}

def MiniJava_booleanTypeOp: MiniJava_Op<"booleanType">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_booleanTypeNodeType:$res);
}

def MiniJava_classDeclarationOp: MiniJava_Op<"classDeclaration", [AttrSizedOperandSegments]>
{
  let arguments = (ins  Variadic<Type<MiniJava_methodDeclarationPred>>:$methodDecl,
 AutoAstUtils_IDType:$name,
 Optional<AutoAstUtils_IDType>:$parentClass,
 Variadic<Type<MiniJava_varDeclarationPred>>:$varDecl, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_classDeclarationNodeType:$res);
}

def MiniJava_compoundStatementOp: MiniJava_Op<"compoundStatement">
{
  let arguments = (ins  Variadic<Type<MiniJava_statementPred>>:$body, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_compoundStatementNodeType:$res);
}

def MiniJava_constIntExpressionOp: MiniJava_Op<"constIntExpression">
{
  let arguments = (ins  AutoAstUtils_IntType:$value, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_constIntExpressionNodeType:$res);
}

def MiniJava_falseExpressionOp: MiniJava_Op<"falseExpression">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_falseExpressionNodeType:$res);
}

def MiniJava_idTypeOp: MiniJava_Op<"idType">
{
  let arguments = (ins  AutoAstUtils_IDType:$typeName, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_idTypeNodeType:$res);
}

def MiniJava_ifStatementOp: MiniJava_Op<"ifStatement">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$cond,
 Type<MiniJava_statementPred>:$elsePart,
 Type<MiniJava_statementPred>:$thenPart, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_ifStatementNodeType:$res);
}

def MiniJava_intArrayTypeOp: MiniJava_Op<"intArrayType">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_intArrayTypeNodeType:$res);
}

def MiniJava_intTypeOp: MiniJava_Op<"intType">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_intTypeNodeType:$res);
}

def MiniJava_lengthOperationOp: MiniJava_Op<"lengthOperation">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_lengthOperationNodeType:$res);
}

def MiniJava_lessThanOperatorOp: MiniJava_Op<"lessThanOperator">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_lessThanOperatorNodeType:$res);
}

def MiniJava_mainClassOp: MiniJava_Op<"mainClass">
{
  let arguments = (ins  AutoAstUtils_IDType:$argName,
 Type<MiniJava_statementPred>:$body,
 AutoAstUtils_IDType:$name, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_mainClassNodeType:$res);
}

def MiniJava_methodCallOperationOp: MiniJava_Op<"methodCallOperation">
{
  let arguments = (ins  Variadic<Type<MiniJava_expressionPred>>:$args,
 AutoAstUtils_IDType:$methodName, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_methodCallOperationNodeType:$res);
}

def MiniJava_methodDeclarationOp: MiniJava_Op<"methodDeclaration", [AttrSizedOperandSegments]>
{
  let arguments = (ins  Variadic<AutoAstUtils_IDType>:$argName,
 Variadic<Type<MiniJava_typePred>>:$argType,
 Variadic<Type<MiniJava_statementPred>>:$body,
 AutoAstUtils_IDType:$methodName,
 Type<MiniJava_expressionPred>:$returnExpr,
 Type<MiniJava_typePred>:$returnType,
 Variadic<Type<MiniJava_varDeclarationPred>>:$varDecl, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_methodDeclarationNodeType:$res);
}

def MiniJava_minusOperatorOp: MiniJava_Op<"minusOperator">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_minusOperatorNodeType:$res);
}

def MiniJava_multOperatorOp: MiniJava_Op<"multOperator">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_multOperatorNodeType:$res);
}

def MiniJava_negExpressionOp: MiniJava_Op<"negExpression">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$baseExpr, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_negExpressionNodeType:$res);
}

def MiniJava_newArrayExpressionOp: MiniJava_Op<"newArrayExpression">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$size, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_newArrayExpressionNodeType:$res);
}

def MiniJava_newClassExpressionOp: MiniJava_Op<"newClassExpression">
{
  let arguments = (ins  AutoAstUtils_IDType:$name, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_newClassExpressionNodeType:$res);
}

def MiniJava_notExpressionOp: MiniJava_Op<"notExpression">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$baseExpr, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_notExpressionNodeType:$res);
}

def MiniJava_parentExpressionOp: MiniJava_Op<"parentExpression">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$baseExpr, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_parentExpressionNodeType:$res);
}

def MiniJava_plusOperatorOp: MiniJava_Op<"plusOperator">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_plusOperatorNodeType:$res);
}

def MiniJava_posExpressionOp: MiniJava_Op<"posExpression">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$baseExpr, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_posExpressionNodeType:$res);
}

def MiniJava_postfixExpressionOp: MiniJava_Op<"postfixExpression">
{
  let arguments = (ins  Type<MiniJava_postfixExpressionPred>:$baseExpr,
 Type<MiniJava_postfixOperatorPred>:$op, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_postfixExpressionNodeType:$res);
}

def MiniJava_printStatementOp: MiniJava_Op<"printStatement">
{
  let arguments = (ins  Type<MiniJava_expressionPred>:$printExpr, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_printStatementNodeType:$res);
}

def MiniJava_programOp: MiniJava_Op<"program">
{
  let arguments = (ins  Variadic<Type<MiniJava_classDeclarationPred>>:$classDecl,
 Type<MiniJava_mainClassPred>:$mainCls, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_programNodeType:$res);
}

def MiniJava_thisExpressionOp: MiniJava_Op<"thisExpression">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_thisExpressionNodeType:$res);
}

def MiniJava_trueExpressionOp: MiniJava_Op<"trueExpression">
{
  let arguments = (ins OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_trueExpressionNodeType:$res);
}

def MiniJava_varDeclarationOp: MiniJava_Op<"varDeclaration">
{
  let arguments = (ins  AutoAstUtils_IDType:$varName,
 Type<MiniJava_typePred>:$varType, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_varDeclarationNodeType:$res);
}

def MiniJava_varExpressionOp: MiniJava_Op<"varExpression">
{
  let arguments = (ins  AutoAstUtils_IDType:$varName, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_varExpressionNodeType:$res);
}

def MiniJava_whileStatementOp: MiniJava_Op<"whileStatement">
{
  let arguments = (ins  Type<MiniJava_statementPred>:$body,
 Type<MiniJava_expressionPred>:$cond, OptionalAttr<AutoAstUtils_PositionAttr>:$debug_position);
  let results = (outs MiniJava_whileStatementNodeType:$res);
}


#endif
