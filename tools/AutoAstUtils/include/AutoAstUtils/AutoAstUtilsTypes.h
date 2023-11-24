//===- AutoAstUtilsTypes.h ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

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
