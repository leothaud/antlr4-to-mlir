//===- AutoAstUtilsDialect.td ---------------------------------------------------===//
//
// Copyright 2023 Dylan Leothaud
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef AUTOASTUTILS_DIALECT
#define AUTOASTUTILS_DIALECT

include "mlir/IR/OpBase.td"
include "mlir/Interfaces/InferTypeOpInterface.td"
include "mlir/Interfaces/SideEffectInterfaces.td"

def AutoAstUtils_Dialect : Dialect {
    let name = "AutoAstUtils";
    let cppNamespace = "::AutoAstUtils";
    let useDefaultTypePrinterParser = 1;
    let useDefaultAttributePrinterParser = 1;
}

class AutoAstUtils_Op<string mnemonic, list<Trait> traits = []> : Op<AutoAstUtils_Dialect, mnemonic, traits>;

#endif
