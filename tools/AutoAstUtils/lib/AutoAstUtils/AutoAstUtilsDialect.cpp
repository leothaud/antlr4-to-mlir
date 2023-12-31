//===- AutoAstUtilsDialect.cpp --------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#include "mlir/IR/Dialect.h"
#include "AutoAstUtils/AutoAstUtilsDialect.h"
#include "AutoAstUtils/AutoAstUtils.h"

#define GET_ATTRDEF_CLASSES
#include "AutoAstUtils/AutoAstUtilsAttrDefs.cpp.inc"
#undef GET_ATTRDEF_CLASSES

namespace AutoAstUtils {

  void AutoAstUtilsDialect::initialize() {
  AutoAstUtilsDialect::addTypes<
#define GET_TYPEDEF_LIST
#include "AutoAstUtils/AutoAstUtilsTypes.cpp.inc"
      >();
  AutoAstUtilsDialect::addAttributes<
#define GET_ATTRDEF_LIST
#include "AutoAstUtils/AutoAstUtilsAttrDefs.cpp.inc"
      >();
  AutoAstUtilsDialect::addOperations<
#define GET_OP_LIST
#include "AutoAstUtils/AutoAstUtils.cpp.inc"
      >();
}

}
