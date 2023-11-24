#ifndef AUTOASTUTILSTYPES_H__
#define AUTOASTUTILSTYPES_H__


#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Types.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"


#define GET_TYPEDEF_CLASSES
#include "AutoAstUtils/AutoAstUtilsTypes.h.inc"
#undef GET_TYPEDEF_CLASSES

#endif
