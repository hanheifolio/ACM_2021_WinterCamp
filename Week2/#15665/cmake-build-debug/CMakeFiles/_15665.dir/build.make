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
CMAKE_SOURCE_DIR = "C:\Users\abc\CLionProjects\ACM\Week2\#15665"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/_15665.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_15665.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_15665.dir/flags.make

CMakeFiles/_15665.dir/main.cpp.obj: CMakeFiles/_15665.dir/flags.make
CMakeFiles/_15665.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_15665.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\_15665.dir\main.cpp.obj -c "C:\Users\abc\CLionProjects\ACM\Week2\#15665\main.cpp"

CMakeFiles/_15665.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_15665.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\abc\CLionProjects\ACM\Week2\#15665\main.cpp" > CMakeFiles\_15665.dir\main.cpp.i

CMakeFiles/_15665.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_15665.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\abc\CLionProjects\ACM\Week2\#15665\main.cpp" -o CMakeFiles\_15665.dir\main.cpp.s

# Object files for target _15665
_15665_OBJECTS = \
"CMakeFiles/_15665.dir/main.cpp.obj"

# External object files for target _15665
_15665_EXTERNAL_OBJECTS =

_15665.exe: CMakeFiles/_15665.dir/main.cpp.obj
_15665.exe: CMakeFiles/_15665.dir/build.make
_15665.exe: CMakeFiles/_15665.dir/linklibs.rsp
_15665.exe: CMakeFiles/_15665.dir/objects1.rsp
_15665.exe: CMakeFiles/_15665.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _15665.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_15665.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_15665.dir/build: _15665.exe

.PHONY : CMakeFiles/_15665.dir/build

CMakeFiles/_15665.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_15665.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_15665.dir/clean

CMakeFiles/_15665.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\abc\CLionProjects\ACM\Week2\#15665" "C:\Users\abc\CLionProjects\ACM\Week2\#15665" "C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug" "C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug" "C:\Users\abc\CLionProjects\ACM\Week2\#15665\cmake-build-debug\CMakeFiles\_15665.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/_15665.dir/depend

