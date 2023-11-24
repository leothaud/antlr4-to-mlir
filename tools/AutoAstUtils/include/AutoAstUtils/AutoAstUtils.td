//===- AutoAstUtils.td ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef AUTOASTUTILS_OPS
#define AUTOASTUTILS_OPS

include "AutoAstUtils/AutoAstUtilsDialect.td"
include "AutoAstUtils/AutoAstUtilsTypes.td"
include "mlir/IR/BuiltinAttributes.td"

def AutoAstUtils_IdOp: AutoAstUtils_Op<"id">
{
  let arguments = (ins Builtin_StringAttr:$value);
  let results = (outs AutoAstUtils_IdType:$res);
}

def AutoAstUtils_IntOp: AutoAstUtils_Op<"int">
{
  let arguments = (ins Builtin_IntegerAttr:$value);
  let results = (outs AutoAstUtils_IntType:$res);
}

def AutoAstUtils_StringOp: AutoAstUtils_Op<"string">
{
  let arguments = (ins Builtin_StringAttr:$value);
  let results = (outs AutoAstUtils_StringType:$res);
}

def AutoAstUtils_CharOp: AutoAstUtils_Op<"char">
{
  let arguments = (ins I8Attr:$value);
  let results = (outs AutoAstUtils_StringType:$res);
}

def AutoAstUtils_FloatOp: AutoAstUtils_Op<"float">
{
  let arguments = (ins Builtin_FloatAttr:$value);
  let results = (outs AutoAstUtils_StringType:$res);
}


#endif
