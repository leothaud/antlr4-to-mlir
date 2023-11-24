add_mlir_dialect_library(AutoAstUtils
	AutoAstUtilsDialect.cpp
	AutoAstUtilsTypes.cpp
	AutoAstUtils.cpp
	
        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/include/AutoAstUtils

	DEPENDS
		MLIRAutoAstUtilsIncGen

	LINK_LIBS PUBLIC
	MLIRIR
        MLIRInferTypeOpInterface
	)
