//===- AutoAstUtilsTypes.cpp ----------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "mlir/IR/BuiltinTypes.h"

#include "mlir/IR/OpImplementation.h"
#include "mlir/Parser/Parser.h"
#include "AutoAstUtils/AutoAstUtilsDialect.h"
#include "AutoAstUtils/AutoAstUtilsTypes.h"
#include "llvm/ADT/TypeSwitch.h"
#include "mlir/Support/TypeID.h"
#include "mlir/IR/DialectImplementation.h"


#define GET_TYPEDEF_CLASSES
#include "AutoAstUtils/AutoAstUtilsTypes.cpp.inc"
#undef GET_TYPEDEF_CLASSES
