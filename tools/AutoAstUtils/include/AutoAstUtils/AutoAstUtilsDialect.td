#ifndef AUTOASTUTILS_DIALECT
#define AUTOASTUTILS_DIALECT

include "mlir/IR/OpBase.td"
include "mlir/Interfaces/InferTypeOpInterface.td"
include "mlir/Interfaces/SideEffectInterfaces.td"

def AutoAstUtils_Dialect : Dialect {
    let name = "AutoAstUtils";
    let cppNamespace = "::AutoAstUtils";
    let useDefaultTypePrinterParser = 1;
}

class AutoAstUtils_Op<string mnemonic, list<Trait> traits = []> : Op<AutoAstUtils_Dialect, mnemonic, traits>;

#endif
