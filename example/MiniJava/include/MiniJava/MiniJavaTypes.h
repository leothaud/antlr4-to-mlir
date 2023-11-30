#ifndef MiniJava_TYPES_H__
#define MiniJava_TYPES_H__

#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Types.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"

#define GET_TYPEDEF_CLASSES
#include "MiniJava/MiniJavaTypes.h.inc"
#undef GET_TYPEDEF_CLASSES


#endif
