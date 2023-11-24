
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/InferTypeOpInterface.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#include "mlir/Bytecode/BytecodeOpInterface.h"
#include "AutoAstUtils/AutoAstUtils.h"

#include "AutoAstUtils/AutoAstUtilsDialect.h"
#include "AutoAstUtils/AutoAstUtilsTypes.h"

#define GET_OP_CLASSES
#include "AutoAstUtils/AutoAstUtils.cpp.inc"
