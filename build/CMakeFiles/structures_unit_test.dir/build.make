# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/acoville/Desktop/structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/acoville/Desktop/structures/build

# Include any dependencies generated for this target.
include CMakeFiles/structures_unit_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/structures_unit_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structures_unit_test.dir/flags.make

CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o: CMakeFiles/structures_unit_test.dir/flags.make
CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o: ../test/src/list_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/acoville/Desktop/structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o -c /home/acoville/Desktop/structures/test/src/list_test.cpp

CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/acoville/Desktop/structures/test/src/list_test.cpp > CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.i

CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/acoville/Desktop/structures/test/src/list_test.cpp -o CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.s

CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o: CMakeFiles/structures_unit_test.dir/flags.make
CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o: ../test/src/testrunner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/acoville/Desktop/structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o -c /home/acoville/Desktop/structures/test/src/testrunner.cpp

CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/acoville/Desktop/structures/test/src/testrunner.cpp > CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.i

CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/acoville/Desktop/structures/test/src/testrunner.cpp -o CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.s

# Object files for target structures_unit_test
structures_unit_test_OBJECTS = \
"CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o" \
"CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o"

# External object files for target structures_unit_test
structures_unit_test_EXTERNAL_OBJECTS =

structures_unit_test: CMakeFiles/structures_unit_test.dir/test/src/list_test.cpp.o
structures_unit_test: CMakeFiles/structures_unit_test.dir/test/src/testrunner.cpp.o
structures_unit_test: CMakeFiles/structures_unit_test.dir/build.make
structures_unit_test: CMakeFiles/structures_unit_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/acoville/Desktop/structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable structures_unit_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/structures_unit_test.dir/link.txt --verbose=$(VERBOSE)
	/usr/local/bin/cmake -D TEST_TARGET=structures_unit_test -D TEST_EXECUTABLE=/home/acoville/Desktop/structures/build/structures_unit_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/acoville/Desktop/structures/build -D TEST_SPEC= -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_LIST=structures_unit_test_TESTS -D CTEST_FILE=/home/acoville/Desktop/structures/build/structures_unit_test_tests-b858cb2.cmake -P /usr/local/lib/cmake/Catch2/CatchAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/structures_unit_test.dir/build: structures_unit_test

.PHONY : CMakeFiles/structures_unit_test.dir/build

CMakeFiles/structures_unit_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/structures_unit_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/structures_unit_test.dir/clean

CMakeFiles/structures_unit_test.dir/depend:
	cd /home/acoville/Desktop/structures/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/acoville/Desktop/structures /home/acoville/Desktop/structures /home/acoville/Desktop/structures/build /home/acoville/Desktop/structures/build /home/acoville/Desktop/structures/build/CMakeFiles/structures_unit_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/structures_unit_test.dir/depend

