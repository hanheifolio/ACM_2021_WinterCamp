# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\abc\CLionProjects\ACM\week1_#2847"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/week1__2847.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week1__2847.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week1__2847.dir/flags.make

CMakeFiles/week1__2847.dir/main.cpp.obj: CMakeFiles/week1__2847.dir/flags.make
CMakeFiles/week1__2847.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week1__2847.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\week1__2847.dir\main.cpp.obj -c "C:\Users\abc\CLionProjects\ACM\week1_#2847\main.cpp"

CMakeFiles/week1__2847.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week1__2847.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\abc\CLionProjects\ACM\week1_#2847\main.cpp" > CMakeFiles\week1__2847.dir\main.cpp.i

CMakeFiles/week1__2847.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week1__2847.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\abc\CLionProjects\ACM\week1_#2847\main.cpp" -o CMakeFiles\week1__2847.dir\main.cpp.s

# Object files for target week1__2847
week1__2847_OBJECTS = \
"CMakeFiles/week1__2847.dir/main.cpp.obj"

# External object files for target week1__2847
week1__2847_EXTERNAL_OBJECTS =

week1__2847.exe: CMakeFiles/week1__2847.dir/main.cpp.obj
week1__2847.exe: CMakeFiles/week1__2847.dir/build.make
week1__2847.exe: CMakeFiles/week1__2847.dir/linklibs.rsp
week1__2847.exe: CMakeFiles/week1__2847.dir/objects1.rsp
week1__2847.exe: CMakeFiles/week1__2847.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week1__2847.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\week1__2847.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week1__2847.dir/build: week1__2847.exe

.PHONY : CMakeFiles/week1__2847.dir/build

CMakeFiles/week1__2847.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\week1__2847.dir\cmake_clean.cmake
.PHONY : CMakeFiles/week1__2847.dir/clean

CMakeFiles/week1__2847.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\abc\CLionProjects\ACM\week1_#2847" "C:\Users\abc\CLionProjects\ACM\week1_#2847" "C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug" "C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug" "C:\Users\abc\CLionProjects\ACM\week1_#2847\cmake-build-debug\CMakeFiles\week1__2847.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/week1__2847.dir/depend

