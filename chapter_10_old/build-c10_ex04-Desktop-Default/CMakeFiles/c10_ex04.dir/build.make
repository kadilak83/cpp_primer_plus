# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default

# Include any dependencies generated for this target.
include CMakeFiles/c10_ex04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c10_ex04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c10_ex04.dir/flags.make

CMakeFiles/c10_ex04.dir/main.cpp.o: CMakeFiles/c10_ex04.dir/flags.make
CMakeFiles/c10_ex04.dir/main.cpp.o: /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c10_ex04.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c10_ex04.dir/main.cpp.o -c /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/main.cpp

CMakeFiles/c10_ex04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c10_ex04.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/main.cpp > CMakeFiles/c10_ex04.dir/main.cpp.i

CMakeFiles/c10_ex04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c10_ex04.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/main.cpp -o CMakeFiles/c10_ex04.dir/main.cpp.s

CMakeFiles/c10_ex04.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/c10_ex04.dir/main.cpp.o.requires

CMakeFiles/c10_ex04.dir/main.cpp.o.provides: CMakeFiles/c10_ex04.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/c10_ex04.dir/build.make CMakeFiles/c10_ex04.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/c10_ex04.dir/main.cpp.o.provides

CMakeFiles/c10_ex04.dir/main.cpp.o.provides.build: CMakeFiles/c10_ex04.dir/main.cpp.o


CMakeFiles/c10_ex04.dir/sales.cxx.o: CMakeFiles/c10_ex04.dir/flags.make
CMakeFiles/c10_ex04.dir/sales.cxx.o: /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/sales.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/c10_ex04.dir/sales.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c10_ex04.dir/sales.cxx.o -c /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/sales.cxx

CMakeFiles/c10_ex04.dir/sales.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c10_ex04.dir/sales.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/sales.cxx > CMakeFiles/c10_ex04.dir/sales.cxx.i

CMakeFiles/c10_ex04.dir/sales.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c10_ex04.dir/sales.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04/sales.cxx -o CMakeFiles/c10_ex04.dir/sales.cxx.s

CMakeFiles/c10_ex04.dir/sales.cxx.o.requires:

.PHONY : CMakeFiles/c10_ex04.dir/sales.cxx.o.requires

CMakeFiles/c10_ex04.dir/sales.cxx.o.provides: CMakeFiles/c10_ex04.dir/sales.cxx.o.requires
	$(MAKE) -f CMakeFiles/c10_ex04.dir/build.make CMakeFiles/c10_ex04.dir/sales.cxx.o.provides.build
.PHONY : CMakeFiles/c10_ex04.dir/sales.cxx.o.provides

CMakeFiles/c10_ex04.dir/sales.cxx.o.provides.build: CMakeFiles/c10_ex04.dir/sales.cxx.o


# Object files for target c10_ex04
c10_ex04_OBJECTS = \
"CMakeFiles/c10_ex04.dir/main.cpp.o" \
"CMakeFiles/c10_ex04.dir/sales.cxx.o"

# External object files for target c10_ex04
c10_ex04_EXTERNAL_OBJECTS =

c10_ex04: CMakeFiles/c10_ex04.dir/main.cpp.o
c10_ex04: CMakeFiles/c10_ex04.dir/sales.cxx.o
c10_ex04: CMakeFiles/c10_ex04.dir/build.make
c10_ex04: CMakeFiles/c10_ex04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable c10_ex04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c10_ex04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c10_ex04.dir/build: c10_ex04

.PHONY : CMakeFiles/c10_ex04.dir/build

CMakeFiles/c10_ex04.dir/requires: CMakeFiles/c10_ex04.dir/main.cpp.o.requires
CMakeFiles/c10_ex04.dir/requires: CMakeFiles/c10_ex04.dir/sales.cxx.o.requires

.PHONY : CMakeFiles/c10_ex04.dir/requires

CMakeFiles/c10_ex04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c10_ex04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c10_ex04.dir/clean

CMakeFiles/c10_ex04.dir/depend:
	cd /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04 /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/c10_ex04 /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default /home/kadzimar/cpp_competence/devcomp_cpp_junior/kadzimar/chapter_10/build-c10_ex04-Desktop-Default/CMakeFiles/c10_ex04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c10_ex04.dir/depend

