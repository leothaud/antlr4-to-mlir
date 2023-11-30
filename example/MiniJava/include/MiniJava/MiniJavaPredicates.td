#ifndef MiniJava_PREDICATES_TD__
#define MiniJava_PREDICATES_TD__

def MiniJava_affectArrayStatementPred : CPred<"$_self.isa<MiniJava_affectArrayStatementNodeType>()">;

def MiniJava_affectStatementPred : CPred<"$_self.isa<MiniJava_affectStatementNodeType>()">;

def MiniJava_andOperatorPred : CPred<"$_self.isa<MiniJava_andOperatorNodeType>()">;

def MiniJava_arrayIndexOperationPred : CPred<"$_self.isa<MiniJava_arrayIndexOperationNodeType>()">;

def MiniJava_constIntExpressionPred : CPred<"$_self.isa<MiniJava_constIntExpressionNodeType>()">;

def MiniJava_falseExpressionPred : CPred<"$_self.isa<MiniJava_falseExpressionNodeType>()">;

def MiniJava_negExpressionPred : CPred<"$_self.isa<MiniJava_negExpressionNodeType>()">;

def MiniJava_newArrayExpressionPred : CPred<"$_self.isa<MiniJava_newArrayExpressionNodeType>()">;

def MiniJava_newClassExpressionPred : CPred<"$_self.isa<MiniJava_newClassExpressionNodeType>()">;

def MiniJava_newExpressionPred : Or<[
	CPred<"$_self.isa<MiniJava_newExpressionNodeType>()">,
	MiniJava_newArrayExpressionPred,
	MiniJava_newClassExpressionPred
	]>;

def MiniJava_notExpressionPred : CPred<"$_self.isa<MiniJava_notExpressionNodeType>()">;

def MiniJava_parentExpressionPred : CPred<"$_self.isa<MiniJava_parentExpressionNodeType>()">;

def MiniJava_posExpressionPred : CPred<"$_self.isa<MiniJava_posExpressionNodeType>()">;

def MiniJava_thisExpressionPred : CPred<"$_self.isa<MiniJava_thisExpressionNodeType>()">;

def MiniJava_trueExpressionPred : CPred<"$_self.isa<MiniJava_trueExpressionNodeType>()">;

def MiniJava_varExpressionPred : CPred<"$_self.isa<MiniJava_varExpressionNodeType>()">;

def MiniJava_unaryExpressionPred : Or<[
	CPred<"$_self.isa<MiniJava_unaryExpressionNodeType>()">,
	MiniJava_constIntExpressionPred,
	MiniJava_falseExpressionPred,
	MiniJava_negExpressionPred,
	MiniJava_newExpressionPred,
	MiniJava_notExpressionPred,
	MiniJava_parentExpressionPred,
	MiniJava_posExpressionPred,
	MiniJava_thisExpressionPred,
	MiniJava_trueExpressionPred,
	MiniJava_varExpressionPred
	]>;

def MiniJava_postfixExpressionPred : Or<[
	CPred<"$_self.isa<MiniJava_postfixExpressionNodeType>()">,
	MiniJava_unaryExpressionPred
	]>;

def MiniJava_binOpExprPred : Or<[
	CPred<"$_self.isa<MiniJava_binOpExprNodeType>()">,
	MiniJava_postfixExpressionPred
	]>;

def MiniJava_booleanTypePred : CPred<"$_self.isa<MiniJava_booleanTypeNodeType>()">;

def MiniJava_classDeclarationPred : CPred<"$_self.isa<MiniJava_classDeclarationNodeType>()">;

def MiniJava_compoundStatementPred : CPred<"$_self.isa<MiniJava_compoundStatementNodeType>()">;

def MiniJava_expressionPred : Or<[
	CPred<"$_self.isa<MiniJava_expressionNodeType>()">,
	MiniJava_binOpExprPred
	]>;

def MiniJava_idTypePred : CPred<"$_self.isa<MiniJava_idTypeNodeType>()">;

def MiniJava_ifStatementPred : CPred<"$_self.isa<MiniJava_ifStatementNodeType>()">;

def MiniJava_intArrayTypePred : CPred<"$_self.isa<MiniJava_intArrayTypeNodeType>()">;

def MiniJava_intTypePred : CPred<"$_self.isa<MiniJava_intTypeNodeType>()">;

def MiniJava_lengthOperationPred : CPred<"$_self.isa<MiniJava_lengthOperationNodeType>()">;

def MiniJava_lessThanOperatorPred : CPred<"$_self.isa<MiniJava_lessThanOperatorNodeType>()">;

def MiniJava_mainClassPred : CPred<"$_self.isa<MiniJava_mainClassNodeType>()">;

def MiniJava_methodCallOperationPred : CPred<"$_self.isa<MiniJava_methodCallOperationNodeType>()">;

def MiniJava_methodDeclarationPred : CPred<"$_self.isa<MiniJava_methodDeclarationNodeType>()">;

def MiniJava_minusOperatorPred : CPred<"$_self.isa<MiniJava_minusOperatorNodeType>()">;

def MiniJava_multOperatorPred : CPred<"$_self.isa<MiniJava_multOperatorNodeType>()">;

def MiniJava_plusOperatorPred : CPred<"$_self.isa<MiniJava_plusOperatorNodeType>()">;

def MiniJava_operatorPred : Or<[
	CPred<"$_self.isa<MiniJava_operatorNodeType>()">,
	MiniJava_andOperatorPred,
	MiniJava_lessThanOperatorPred,
	MiniJava_minusOperatorPred,
	MiniJava_multOperatorPred,
	MiniJava_plusOperatorPred
	]>;

def MiniJava_postfixOperatorPred : Or<[
	CPred<"$_self.isa<MiniJava_postfixOperatorNodeType>()">,
	MiniJava_arrayIndexOperationPred,
	MiniJava_lengthOperationPred,
	MiniJava_methodCallOperationPred
	]>;

def MiniJava_printStatementPred : CPred<"$_self.isa<MiniJava_printStatementNodeType>()">;

def MiniJava_programPred : CPred<"$_self.isa<MiniJava_programNodeType>()">;

def MiniJava_whileStatementPred : CPred<"$_self.isa<MiniJava_whileStatementNodeType>()">;

def MiniJava_statementPred : Or<[
	CPred<"$_self.isa<MiniJava_statementNodeType>()">,
	MiniJava_affectArrayStatementPred,
	MiniJava_affectStatementPred,
	MiniJava_compoundStatementPred,
	MiniJava_ifStatementPred,
	MiniJava_printStatementPred,
	MiniJava_whileStatementPred
	]>;

def MiniJava_typePred : Or<[
	CPred<"$_self.isa<MiniJava_typeNodeType>()">,
	MiniJava_booleanTypePred,
	MiniJava_idTypePred,
	MiniJava_intArrayTypePred,
	MiniJava_intTypePred
	]>;

def MiniJava_varDeclarationPred : CPred<"$_self.isa<MiniJava_varDeclarationNodeType>()">;


#endif
