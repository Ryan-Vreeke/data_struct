# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ryan/Source/data_struct/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ryan/Source/data_struct/tests/build

# Include any dependencies generated for this target.
include CMakeFiles/DSTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DSTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DSTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DSTest.dir/flags.make

CMakeFiles/DSTest.dir/test.cpp.o: CMakeFiles/DSTest.dir/flags.make
CMakeFiles/DSTest.dir/test.cpp.o: /home/ryan/Source/data_struct/tests/test.cpp
CMakeFiles/DSTest.dir/test.cpp.o: CMakeFiles/DSTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ryan/Source/data_struct/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DSTest.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DSTest.dir/test.cpp.o -MF CMakeFiles/DSTest.dir/test.cpp.o.d -o CMakeFiles/DSTest.dir/test.cpp.o -c /home/ryan/Source/data_struct/tests/test.cpp

CMakeFiles/DSTest.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DSTest.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ryan/Source/data_struct/tests/test.cpp > CMakeFiles/DSTest.dir/test.cpp.i

CMakeFiles/DSTest.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DSTest.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ryan/Source/data_struct/tests/test.cpp -o CMakeFiles/DSTest.dir/test.cpp.s

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o: CMakeFiles/DSTest.dir/flags.make
CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o: /home/ryan/Source/data_struct/QuadTree/boundry.cpp
CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o: CMakeFiles/DSTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ryan/Source/data_struct/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o -MF CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o.d -o CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o -c /home/ryan/Source/data_struct/QuadTree/boundry.cpp

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ryan/Source/data_struct/QuadTree/boundry.cpp > CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.i

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ryan/Source/data_struct/QuadTree/boundry.cpp -o CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.s

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o: CMakeFiles/DSTest.dir/flags.make
CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o: /home/ryan/Source/data_struct/QuadTree/quad_tree.cpp
CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o: CMakeFiles/DSTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ryan/Source/data_struct/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o -MF CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o.d -o CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o -c /home/ryan/Source/data_struct/QuadTree/quad_tree.cpp

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ryan/Source/data_struct/QuadTree/quad_tree.cpp > CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.i

CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ryan/Source/data_struct/QuadTree/quad_tree.cpp -o CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.s

# Object files for target DSTest
DSTest_OBJECTS = \
"CMakeFiles/DSTest.dir/test.cpp.o" \
"CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o" \
"CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o"

# External object files for target DSTest
DSTest_EXTERNAL_OBJECTS =

DSTest: CMakeFiles/DSTest.dir/test.cpp.o
DSTest: CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/boundry.cpp.o
DSTest: CMakeFiles/DSTest.dir/home/ryan/Source/data_struct/QuadTree/quad_tree.cpp.o
DSTest: CMakeFiles/DSTest.dir/build.make
DSTest: /usr/local/lib/libgtest.a
DSTest: CMakeFiles/DSTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ryan/Source/data_struct/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable DSTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DSTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DSTest.dir/build: DSTest
.PHONY : CMakeFiles/DSTest.dir/build

CMakeFiles/DSTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DSTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DSTest.dir/clean

CMakeFiles/DSTest.dir/depend:
	cd /home/ryan/Source/data_struct/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ryan/Source/data_struct/tests /home/ryan/Source/data_struct/tests /home/ryan/Source/data_struct/tests/build /home/ryan/Source/data_struct/tests/build /home/ryan/Source/data_struct/tests/build/CMakeFiles/DSTest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DSTest.dir/depend

