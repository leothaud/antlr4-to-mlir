//===- AutoAstUtilsAttrDefs.td---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef AUTOASTUTILS_ATTR
#define AUTOASTUTILS_ATTR

include "AutoAstUtils/AutoAstUtilsDialect.td"
include "mlir/IR/BuiltinAttributes.td"



class AutoAstUtils_Attr<string name, string attrMnemonic, list<Trait> traits = []> : AttrDef<AutoAstUtils_Dialect, name, traits>
{
  let mnemonic = attrMnemonic;
}

def AutoAstUtils_PositionAttr : AutoAstUtils_Attr<"AutoAstUtils_Position", "position">
{
  let parameters = (ins Builtin_IntegerAttr:$start_line,
                        Builtin_IntegerAttr:$start_column,
                        Builtin_IntegerAttr:$end_line,
                        Builtin_IntegerAttr:$end_column);
  
  let assemblyFormat = "`<` $start_line`,` $start_column`,` $end_line`,` $end_column `>`";
}

#endif
