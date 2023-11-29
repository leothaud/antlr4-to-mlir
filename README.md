
# antlr4-to-mlir

## Description

This project aims to compile a antlr4 grammar into an mlir dialect representing its AST and a lexer/parser compiling into this dialect made with antlr4.

Generated mlir project is built inside a [mlir-standalone-template by jmgorius](https://github.com/jmgorius/mlir-standalone-template/) project.

Antlr4 build system is inspired by [antlr-cpp](https://github.com/gabriele-tomassetti/antlr-cpp) by gabriele-tomassetti, `tools/antlr-4.13.0-complete.jar` and `cmake` folder come from this repository.

The Antlr4 Antlr4 grmmar is inspired from [grammars-v4](https://github.com/antlr/grammars-v4) but is customized..

## How to build and use

### How to build and use antlr4-to-mlir

To build and use this tool, you need to have a non-modified version of [mlir-standalone-template](https://github.com/jmgorius/mlir-standalone-template/) in `$STANDALONE_DIR`. `$ANTLR_GENERATION_FOLDER` represent a folder in which you want to generate antlr-generated project. To build, run
```bash
mkdir build && cd build
cmake .. -DMLIR_STANDALONE_PATH=$STANDALONE_DIR -DANTLR_GENERATION_PATH=$ANTLR_GENERATION_FOLDER
make
```
This will create an executable `Antlr4ToMlir` that can be used either to initialize the mlir-standalone-project to be usable by antlr4-to-mlir or to generate AST dialects and frontends.

#### Initialization

To initialize the mlir-standalone-project, run `./Antlr4ToMlir --init`, this will add markers to make it easier to add new dialects and a dialect called `AutoAstUtils`. AutoAstUtils dialect is used to have a common base for every generated AST dialect and it represents base common element such as INT or STRING values.
Once the mlir-standalone-project is initialized it can be manually modified without breaking how antlr4-to-mlir works as long as markers are not removed. the mlir-standalone-project with be automatically initialized if not done manually during the first use.

#### AST dialect and frontend generation

To generate the AST dialect and the ANTLR project for an antlr-grammar `MyGrammar` with a starting rule `startingRule`, run `./Antlr4ToMlir /path/to/MyGrammar.g4 startingRule`. This will create an ANTLR project in folder `$ANTLR_GENERATION_FOLDER/MyGrammar` and a `MyGrammar` dialect in the mlir-standalone-project.


### How to build and use the generated ANTLR project

To build the generated ANTLR project for a grammar `MyGrammar` run
```bash
mkdir $ANTLR_GENERATION_FOLDER/MyGrammar/build && cd $ANTLR_GENERATION_FOLDER/MyGrammar/build
cmake ..
make
```
This will create an executable called `MyGrammar` usable to compile a MyGrammar program into an mlir program using the generated AST and the AutoAstUtils dialects. 
To use it, run `./MyGrammar [input file] [output file]`.


### How to build and use mlir-standalone-project

To build and use the mlir-standalone-project, refers to the original git project, [here](https://github.com/jmgorius/mlir-standalone-template/).

## License

This frontend generator is made available under the Apache License 2.0 with LLVM Exceptions. See the `LICENSE.txt` file for more details.

