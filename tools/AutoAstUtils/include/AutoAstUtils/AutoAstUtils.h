//===- AutoAstUtils.h ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#ifndef AUTOASTUTILS_H__
#define AUTOASTUTILS_H__

#include "mlir/IR/Types.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/BuiltinAttributes.h"
#include "mlir/IR/Attributes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/InferTypeOpInterface.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#include "mlir/Bytecode/BytecodeOpInterface.h"

#include "AutoAstUtils/AutoAstUtilsTypes.h"
#include "AutoAstUtils/AutoAstUtilsAttrDefs.h"
#include "AutoAstUtils/AutoAstUtilsDialect.h"




#define GET_OP_CLASSES
#include "AutoAstUtils/AutoAstUtils.h.inc"


#endif
