cmake_minimum_required(VERSION 3.10)
project(Antlr4ToMlir)

option(MLIR_STANDALONE_PATH "path to mlir-standalone-template project" "")

if(NOT MLIR_STANDALONE_PATH)
	message(FATAL_ERROR "you should define \"MLIR_STANDALONE_PATH\" path.")
endif()

option(ANTLR_GENERATION_PATH "path to antlr generated project" "")

if(NOT ANTLR_GENERATION_PATH)
       message(FATAL_ERROR "you should define \"ANTLR_GENERATION_PATH\" path.")
endif()

add_definitions(-DMLIR_STANDALONE_PATH="${MLIR_STANDALONE_PATH}")
add_definitions(-DANTLR_GENERATION_PATH="${ANTLR_GENERATION_PATH}")
add_definitions(-DCMAKE_PROJ_DIR="${CMAKE_CURRENT_SOURCE_DIR}/")
add_definitions(-DAutoAstUtilsFolder="${CMAKE_CURRENT_SOURCE_DIR}/tools/AutoAstUtils/")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

file(GLOB CPP_SRC "src/*.cpp")
file(GLOB G4_SRC "src/*.g4")


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)

add_definitions(-DANTLR4CPP_STATIC)
set(ANTLR4_WITH_STATIC_CRT OFF)
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/tools/antlr-4.13.0-complete.jar)
find_package(ANTLR REQUIRED)

antlr_target(Antlr4Grammar ${G4_SRC} VISITOR NOLISTENER OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/)
include_directories(${PROJECT_SOURCE_DIR}
					 ${PROJECT_SOURCE_DIR}/libs/
  )
add_executable(Antlr4ToMlir ${CPP_SRC}             
               ${ANTLR_Antlr4Grammar_CXX_OUTPUTS})
target_link_libraries(Antlr4ToMlir antlr4_static ${SYSTEM_LIBS})
