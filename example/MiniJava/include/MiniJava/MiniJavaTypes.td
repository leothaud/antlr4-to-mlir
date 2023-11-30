#ifndef MiniJava_TYPES_TD__
#define MiniJava_TYPES_TD__

include "MiniJavaDialect.td"
include "mlir/IR/AttrTypeBase.td"

class MiniJava_AstNodeType<string name, string typeMnemonic, list<Trait> traits = []>
: TypeDef<MiniJava_Dialect, name, traits>
{
  let mnemonic = typeMnemonic;
}

def MiniJava_affectArrayStatementNodeType : MiniJava_AstNodeType<"MiniJava_affectArrayStatementNode","affectArrayStatementNode">{}

def MiniJava_affectStatementNodeType : MiniJava_AstNodeType<"MiniJava_affectStatementNode","affectStatementNode">{}

def MiniJava_andOperatorNodeType : MiniJava_AstNodeType<"MiniJava_andOperatorNode","andOperatorNode">{}

def MiniJava_arrayIndexOperationNodeType : MiniJava_AstNodeType<"MiniJava_arrayIndexOperationNode","arrayIndexOperationNode">{}

def MiniJava_binOpExprNodeType : MiniJava_AstNodeType<"MiniJava_binOpExprNode","binOpExprNode">{}

def MiniJava_booleanTypeNodeType : MiniJava_AstNodeType<"MiniJava_booleanTypeNode","booleanTypeNode">{}

def MiniJava_classDeclarationNodeType : MiniJava_AstNodeType<"MiniJava_classDeclarationNode","classDeclarationNode">{}

def MiniJava_compoundStatementNodeType : MiniJava_AstNodeType<"MiniJava_compoundStatementNode","compoundStatementNode">{}

def MiniJava_constIntExpressionNodeType : MiniJava_AstNodeType<"MiniJava_constIntExpressionNode","constIntExpressionNode">{}

def MiniJava_expressionNodeType : MiniJava_AstNodeType<"MiniJava_expressionNode","expressionNode">{}

def MiniJava_falseExpressionNodeType : MiniJava_AstNodeType<"MiniJava_falseExpressionNode","falseExpressionNode">{}

def MiniJava_idTypeNodeType : MiniJava_AstNodeType<"MiniJava_idTypeNode","idTypeNode">{}

def MiniJava_ifStatementNodeType : MiniJava_AstNodeType<"MiniJava_ifStatementNode","ifStatementNode">{}

def MiniJava_intArrayTypeNodeType : MiniJava_AstNodeType<"MiniJava_intArrayTypeNode","intArrayTypeNode">{}

def MiniJava_intTypeNodeType : MiniJava_AstNodeType<"MiniJava_intTypeNode","intTypeNode">{}

def MiniJava_lengthOperationNodeType : MiniJava_AstNodeType<"MiniJava_lengthOperationNode","lengthOperationNode">{}

def MiniJava_lessThanOperatorNodeType : MiniJava_AstNodeType<"MiniJava_lessThanOperatorNode","lessThanOperatorNode">{}

def MiniJava_mainClassNodeType : MiniJava_AstNodeType<"MiniJava_mainClassNode","mainClassNode">{}

def MiniJava_methodCallOperationNodeType : MiniJava_AstNodeType<"MiniJava_methodCallOperationNode","methodCallOperationNode">{}

def MiniJava_methodDeclarationNodeType : MiniJava_AstNodeType<"MiniJava_methodDeclarationNode","methodDeclarationNode">{}

def MiniJava_minusOperatorNodeType : MiniJava_AstNodeType<"MiniJava_minusOperatorNode","minusOperatorNode">{}

def MiniJava_multOperatorNodeType : MiniJava_AstNodeType<"MiniJava_multOperatorNode","multOperatorNode">{}

def MiniJava_negExpressionNodeType : MiniJava_AstNodeType<"MiniJava_negExpressionNode","negExpressionNode">{}

def MiniJava_newArrayExpressionNodeType : MiniJava_AstNodeType<"MiniJava_newArrayExpressionNode","newArrayExpressionNode">{}

def MiniJava_newClassExpressionNodeType : MiniJava_AstNodeType<"MiniJava_newClassExpressionNode","newClassExpressionNode">{}

def MiniJava_newExpressionNodeType : MiniJava_AstNodeType<"MiniJava_newExpressionNode","newExpressionNode">{}

def MiniJava_notExpressionNodeType : MiniJava_AstNodeType<"MiniJava_notExpressionNode","notExpressionNode">{}

def MiniJava_operatorNodeType : MiniJava_AstNodeType<"MiniJava_operatorNode","operatorNode">{}

def MiniJava_parentExpressionNodeType : MiniJava_AstNodeType<"MiniJava_parentExpressionNode","parentExpressionNode">{}

def MiniJava_plusOperatorNodeType : MiniJava_AstNodeType<"MiniJava_plusOperatorNode","plusOperatorNode">{}

def MiniJava_posExpressionNodeType : MiniJava_AstNodeType<"MiniJava_posExpressionNode","posExpressionNode">{}

def MiniJava_postfixExpressionNodeType : MiniJava_AstNodeType<"MiniJava_postfixExpressionNode","postfixExpressionNode">{}

def MiniJava_postfixOperatorNodeType : MiniJava_AstNodeType<"MiniJava_postfixOperatorNode","postfixOperatorNode">{}

def MiniJava_printStatementNodeType : MiniJava_AstNodeType<"MiniJava_printStatementNode","printStatementNode">{}

def MiniJava_programNodeType : MiniJava_AstNodeType<"MiniJava_programNode","programNode">{}

def MiniJava_statementNodeType : MiniJava_AstNodeType<"MiniJava_statementNode","statementNode">{}

def MiniJava_thisExpressionNodeType : MiniJava_AstNodeType<"MiniJava_thisExpressionNode","thisExpressionNode">{}

def MiniJava_trueExpressionNodeType : MiniJava_AstNodeType<"MiniJava_trueExpressionNode","trueExpressionNode">{}

def MiniJava_typeNodeType : MiniJava_AstNodeType<"MiniJava_typeNode","typeNode">{}

def MiniJava_unaryExpressionNodeType : MiniJava_AstNodeType<"MiniJava_unaryExpressionNode","unaryExpressionNode">{}

def MiniJava_varDeclarationNodeType : MiniJava_AstNodeType<"MiniJava_varDeclarationNode","varDeclarationNode">{}

def MiniJava_varExpressionNodeType : MiniJava_AstNodeType<"MiniJava_varExpressionNode","varExpressionNode">{}

def MiniJava_whileStatementNodeType : MiniJava_AstNodeType<"MiniJava_whileStatementNode","whileStatementNode">{}

#endif
