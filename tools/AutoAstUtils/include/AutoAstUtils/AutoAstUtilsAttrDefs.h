//===- AutoAstUtilsAttrDefs.h ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef AUTOASTUTILSATTRDEF_H__
#define AUTOASTUTILSATTRDEF_H__

#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Types.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Support/StorageUniquer.h"
#include "mlir/IR/AttributeSupport.h"
#include "llvm/ADT/TypeSwitch.h"
#include "mlir/IR/DialectImplementation.h"

#include "AutoAstUtils/AutoAstUtilsDialect.h"



#define GET_ATTRDEF_CLASSES
#include "AutoAstUtils/AutoAstUtilsAttrDefs.h.inc"
#undef GET_ATTRDEF_CLASSES

#endif
