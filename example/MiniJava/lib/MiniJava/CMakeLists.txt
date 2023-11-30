add_mlir_dialect_library(MiniJava

        MiniJavaDialect.cpp
        MiniJava.cpp
        MiniJavaTypes.cpp

        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/include/MiniJava

        DEPENDS
        MLIRMiniJavaIncGen

	LINK_LIBS PUBLIC
	MLIRIR
        MLIRInferTypeOpInterface
)