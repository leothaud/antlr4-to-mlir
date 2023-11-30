#ifndef MiniJava_DIALECT_TD__
#define MiniJava_DIALECT_TD__

include "mlir/IR/OpBase.td"
include "mlir/Interfaces/InferTypeOpInterface.td"
include "mlir/Interfaces/SideEffectInterfaces.td"

def MiniJava_Dialect : Dialect {
  let name = "MiniJava";
  let cppNamespace = "::MiniJava";
  let useDefaultTypePrinterParser = 1;
}

class MiniJava_Op<string mnemonic, list<Trait> traits = []> : Op<MiniJava_Dialect, mnemonic, traits>;

#endif
