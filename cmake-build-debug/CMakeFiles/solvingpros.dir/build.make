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
CMAKE_COMMAND = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yassatamer/CLionProjects/solvingpros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yassatamer/CLionProjects/solvingpros/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/solvingpros.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/solvingpros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/solvingpros.dir/flags.make

CMakeFiles/solvingpros.dir/main.cpp.o: CMakeFiles/solvingpros.dir/flags.make
CMakeFiles/solvingpros.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yassatamer/CLionProjects/solvingpros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/solvingpros.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solvingpros.dir/main.cpp.o -c /home/yassatamer/CLionProjects/solvingpros/main.cpp

CMakeFiles/solvingpros.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solvingpros.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yassatamer/CLionProjects/solvingpros/main.cpp > CMakeFiles/solvingpros.dir/main.cpp.i

CMakeFiles/solvingpros.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solvingpros.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yassatamer/CLionProjects/solvingpros/main.cpp -o CMakeFiles/solvingpros.dir/main.cpp.s

# Object files for target solvingpros
solvingpros_OBJECTS = \
"CMakeFiles/solvingpros.dir/main.cpp.o"

# External object files for target solvingpros
solvingpros_EXTERNAL_OBJECTS =

solvingpros: CMakeFiles/solvingpros.dir/main.cpp.o
solvingpros: CMakeFiles/solvingpros.dir/build.make
solvingpros: CMakeFiles/solvingpros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yassatamer/CLionProjects/solvingpros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable solvingpros"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/solvingpros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/solvingpros.dir/build: solvingpros

.PHONY : CMakeFiles/solvingpros.dir/build

CMakeFiles/solvingpros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/solvingpros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/solvingpros.dir/clean

CMakeFiles/solvingpros.dir/depend:
	cd /home/yassatamer/CLionProjects/solvingpros/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yassatamer/CLionProjects/solvingpros /home/yassatamer/CLionProjects/solvingpros /home/yassatamer/CLionProjects/solvingpros/cmake-build-debug /home/yassatamer/CLionProjects/solvingpros/cmake-build-debug /home/yassatamer/CLionProjects/solvingpros/cmake-build-debug/CMakeFiles/solvingpros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/solvingpros.dir/depend

