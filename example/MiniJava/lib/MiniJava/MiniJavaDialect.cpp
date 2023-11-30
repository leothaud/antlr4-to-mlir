#include "mlir/IR/Dialect.h"
#include "MiniJava/MiniJavaDialect.h"
#include "MiniJava/MiniJava.h"

namespace MiniJava {

void MiniJavaDialect::initialize() {
  MiniJavaDialect::addTypes<
#define GET_TYPEDEF_LIST
#include "MiniJava/MiniJavaTypes.cpp.inc"
      >();
  MiniJavaDialect::addOperations<
#define GET_OP_LIST
#include "MiniJava/MiniJava.cpp.inc"
      >();
}

}
