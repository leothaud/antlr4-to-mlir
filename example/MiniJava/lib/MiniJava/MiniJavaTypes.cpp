#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/OpImplementation.h"
#include "mlir/Parser/Parser.h"
#include "llvm/ADT/TypeSwitch.h"
#include "mlir/Support/TypeID.h"
#include "mlir/IR/DialectImplementation.h"

#include "MiniJava/MiniJavaDialect.h"
#include "MiniJava/MiniJavaTypes.h"

#define GET_TYPEDEF_CLASSES
#include "MiniJava/MiniJavaTypes.cpp.inc"
#undef GET_TYPEDEF_CLASSES
