
#include "mlir/IR/Dialect.h"
#include "AutoAstUtils/AutoAstUtilsDialect.h"
#include "AutoAstUtils/AutoAstUtils.h"



namespace AutoAstUtils {

  void AutoAstUtilsDialect::initialize() {
  AutoAstUtilsDialect::addTypes<
#define GET_TYPEDEF_LIST
#include "AutoAstUtils/AutoAstUtilsTypes.cpp.inc"
      >();
  AutoAstUtilsDialect::addOperations<
#define GET_OP_LIST
#include "AutoAstUtils/AutoAstUtils.cpp.inc"
      >();
}

}
