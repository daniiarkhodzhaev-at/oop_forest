if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  if(NOT DEFINED IN_SOURCE_BUILD)
    message(FATAL_ERROR
        "In-source build aren't allowed. Please, remove \"CMakeCache.txt\" and \"CMakeFiles/\" directory."
        "\n Or define IN_SOURCE_BUILD to force this option (not recommended!)"
    )
  endif()
endif()

cmake_minimum_required(VERSION 3.17)
project(oop_forest)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

add_compile_options(
  "-Wall;-Wextra;-O2"
  "$<$<CONFIG:DEBUG>:-O0;-g3;-ggdb;-Werror>"
)

set(LIB_OBJ
    source/animal.cpp
    source/predator.cpp
    source/herbivore.cpp
    source/wolf.cpp
    source/fox.cpp
    source/bear.cpp
    source/human.cpp
    source/rabbit.cpp
    source/horse.cpp
    source/beaver.cpp
    source/squirrel.cpp)

add_library(animal SHARED ${LIB_OBJ})
add_library(forest SHARED source/forest.cpp)
target_link_libraries(forest animal)

add_executable(main main.cpp)

target_link_libraries(main forest)

enable_testing()

add_test(test valgrind ./main)
