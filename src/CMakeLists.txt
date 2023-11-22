cmake_minimum_required(VERSION 3.10)
project(Antlr4ToMlir)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)

add_definitions(-DANTLR4CPP_STATIC)
set(ANTLR4_WITH_STATIC_CRT OFF)
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/tools/antlr-4.13.0-complete.jar)
find_package(ANTLR REQUIRED)

antlr_target(Antlr4Grammar Antlr4Grammar.g4 VISITOR OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/)
include_directories(${PROJECT_SOURCE_DIR}
					 ${PROJECT_SOURCE_DIR}/libs/
  )
add_executable(AntlrToMlir main.cpp grammarVisitor.cpp GrammarInfos.cpp             
               ${ANTLR_Antlr4Grammar_CXX_OUTPUTS})
target_link_libraries(AntlrToMlir antlr4_static ${SYSTEM_LIBS})
