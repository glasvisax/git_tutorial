cmake_minimum_required(VERSION 3.20)
project(Algos)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCES "src/main.cpp" "src/test_class.cpp" "src/test_class.h")

add_executable(main ${SOURCES})


