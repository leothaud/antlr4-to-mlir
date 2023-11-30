#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/InferTypeOpInterface.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#include "mlir/Bytecode/BytecodeOpInterface.h"
#include "MiniJava/MiniJava.h"

#include "MiniJava/MiniJavaDialect.h"
#include "MiniJava/MiniJavaTypes.h"

#define GET_OP_CLASSES
#include "MiniJava/MiniJava.cpp.inc"
