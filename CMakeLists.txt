cmake_minimum_required(VERSION 3.5)
project (STRUCTURES LANGUAGES CXX VERSION 2.0)

add_compile_options (-Wall -Wextra -g -std=c++1z)

# CMake policy 79 allows targets to scope source files outside
# this directory

cmake_policy (SET CMP0079 NEW)

find_package(Catch2 REQUIRED)

add_executable(structures_unit_test
                test/testrunner.cpp
                test/SLLNodeTest.cpp
                test/SLLTest.cpp)

target_link_libraries(structures_unit_test Catch2::Catch2)

include (CTest)
include (Catch)
catch_discover_tests(structures_unit_test)