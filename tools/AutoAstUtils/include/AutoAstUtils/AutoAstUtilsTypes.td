#ifndef AUTOASTUTILS_TYPES
#define AUTOASTUTILS_TYPES

include "AutoAstUtils/AutoAstUtilsDialect.td"
include "mlir/IR/AttrTypeBase.td"

class AutoAstUtils_Type<string name, string TypeMnemonic, list<Trait> traits = []>
: TypeDef<AutoAstUtils_Dialect, name, traits>
{
  let mnemonic = TypeMnemonic;
}

def AutoAstUtils_IdType : AutoAstUtils_Type<"AutoAstUtils_Id", "id">;

def AutoAstUtils_IntType : AutoAstUtils_Type<"AutoAstUtils_Int", "int">;

def AutoAstUtils_StringType : AutoAstUtils_Type<"AutoAstUtils_String","string">;

def AutoAstUtils_CharType : AutoAstUtils_Type<"AutoAstUtils_Char","char">;

def AutoAstUtils_FloatType : AutoAstUtils_Type<"AutoAstUtils_Float","float">;

#endif
