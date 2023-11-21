# antlr4-to-mlir

This project aims to compile a antlr4 grammar into an mlir dialect representing its AST and a lexer/parser compiling into this dialect made with antlr4.

Generated mlir project is built inside a [mlir-standalone-template by jmgorius](https://github.com/jmgorius/mlir-standalone-template/) project.

Antlr4 build system is inspired by [antlr-cpp](https://github.com/gabriele-tomassetti/antlr-cpp) by gabriele-tomassetti, `tools` and `cmake` folders come from this repository.

The Antlr4 Antlr4 grmmar is taken from [grammars-v4](https://github.com/antlr/grammars-v4)