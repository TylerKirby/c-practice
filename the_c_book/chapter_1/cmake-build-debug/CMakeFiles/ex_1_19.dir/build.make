# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tyler/Projects/c-practice/the_c_book/chapter_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex_1_19.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex_1_19.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex_1_19.dir/flags.make

CMakeFiles/ex_1_19.dir/ex_1_19.c.o: CMakeFiles/ex_1_19.dir/flags.make
CMakeFiles/ex_1_19.dir/ex_1_19.c.o: ../ex_1_19.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex_1_19.dir/ex_1_19.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex_1_19.dir/ex_1_19.c.o   -c /Users/tyler/Projects/c-practice/the_c_book/chapter_1/ex_1_19.c

CMakeFiles/ex_1_19.dir/ex_1_19.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex_1_19.dir/ex_1_19.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/tyler/Projects/c-practice/the_c_book/chapter_1/ex_1_19.c > CMakeFiles/ex_1_19.dir/ex_1_19.c.i

CMakeFiles/ex_1_19.dir/ex_1_19.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex_1_19.dir/ex_1_19.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/tyler/Projects/c-practice/the_c_book/chapter_1/ex_1_19.c -o CMakeFiles/ex_1_19.dir/ex_1_19.c.s

# Object files for target ex_1_19
ex_1_19_OBJECTS = \
"CMakeFiles/ex_1_19.dir/ex_1_19.c.o"

# External object files for target ex_1_19
ex_1_19_EXTERNAL_OBJECTS =

ex_1_19: CMakeFiles/ex_1_19.dir/ex_1_19.c.o
ex_1_19: CMakeFiles/ex_1_19.dir/build.make
ex_1_19: CMakeFiles/ex_1_19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex_1_19"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_1_19.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex_1_19.dir/build: ex_1_19

.PHONY : CMakeFiles/ex_1_19.dir/build

CMakeFiles/ex_1_19.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex_1_19.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex_1_19.dir/clean

CMakeFiles/ex_1_19.dir/depend:
	cd /Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tyler/Projects/c-practice/the_c_book/chapter_1 /Users/tyler/Projects/c-practice/the_c_book/chapter_1 /Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug /Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug /Users/tyler/Projects/c-practice/the_c_book/chapter_1/cmake-build-debug/CMakeFiles/ex_1_19.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex_1_19.dir/depend

