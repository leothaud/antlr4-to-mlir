#ifndef MiniJava_OPS_H__
#define MiniJava_OPS_H__

#include "mlir/IR/Types.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/BuiltinAttributes.h"
#include "mlir/IR/Attributes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/InferTypeOpInterface.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#include "mlir/Bytecode/BytecodeOpInterface.h"

#include "MiniJavaTypes.h"
#include "MiniJavaDialect.h"

#include "AutoAstUtils/AutoAstUtilsTypes.h"
#include "AutoAstUtils/AutoAstUtilsAttrDefs.h"

#define GET_OP_CLASSES
#include "MiniJava/MiniJava.h.inc"

#endif
