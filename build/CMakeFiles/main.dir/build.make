# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Work\Programming\VSCode-projects\Lab\Rays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Work\Programming\VSCode-projects\Lab\Rays\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/main.cpp.obj: D:/Work/Programming/VSCode-projects/Lab/Rays/main.cpp
CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.obj -MF CMakeFiles\main.dir\main.cpp.obj.d -o CMakeFiles\main.dir\main.cpp.obj -c D:\Work\Programming\VSCode-projects\Lab\Rays\main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\Programming\VSCode-projects\Lab\Rays\main.cpp > CMakeFiles\main.dir\main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\Programming\VSCode-projects\Lab\Rays\main.cpp -o CMakeFiles\main.dir\main.cpp.s

CMakeFiles/main.dir/src/utils.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/utils.cpp.obj: D:/Work/Programming/VSCode-projects/Lab/Rays/src/utils.cpp
CMakeFiles/main.dir/src/utils.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/utils.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/utils.cpp.obj -MF CMakeFiles\main.dir\src\utils.cpp.obj.d -o CMakeFiles\main.dir\src\utils.cpp.obj -c D:\Work\Programming\VSCode-projects\Lab\Rays\src\utils.cpp

CMakeFiles/main.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\Programming\VSCode-projects\Lab\Rays\src\utils.cpp > CMakeFiles\main.dir\src\utils.cpp.i

CMakeFiles/main.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\Programming\VSCode-projects\Lab\Rays\src\utils.cpp -o CMakeFiles\main.dir\src\utils.cpp.s

CMakeFiles/main.dir/src/vec.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/vec.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/vec.cpp.obj: D:/Work/Programming/VSCode-projects/Lab/Rays/src/vec.cpp
CMakeFiles/main.dir/src/vec.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/vec.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/vec.cpp.obj -MF CMakeFiles\main.dir\src\vec.cpp.obj.d -o CMakeFiles\main.dir\src\vec.cpp.obj -c D:\Work\Programming\VSCode-projects\Lab\Rays\src\vec.cpp

CMakeFiles/main.dir/src/vec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/vec.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\Programming\VSCode-projects\Lab\Rays\src\vec.cpp > CMakeFiles\main.dir\src\vec.cpp.i

CMakeFiles/main.dir/src/vec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/vec.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\Programming\VSCode-projects\Lab\Rays\src\vec.cpp -o CMakeFiles\main.dir\src\vec.cpp.s

CMakeFiles/main.dir/src/ray.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/ray.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/ray.cpp.obj: D:/Work/Programming/VSCode-projects/Lab/Rays/src/ray.cpp
CMakeFiles/main.dir/src/ray.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/ray.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/ray.cpp.obj -MF CMakeFiles\main.dir\src\ray.cpp.obj.d -o CMakeFiles\main.dir\src\ray.cpp.obj -c D:\Work\Programming\VSCode-projects\Lab\Rays\src\ray.cpp

CMakeFiles/main.dir/src/ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/ray.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\Programming\VSCode-projects\Lab\Rays\src\ray.cpp > CMakeFiles\main.dir\src\ray.cpp.i

CMakeFiles/main.dir/src/ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/ray.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\Programming\VSCode-projects\Lab\Rays\src\ray.cpp -o CMakeFiles\main.dir\src\ray.cpp.s

CMakeFiles/main.dir/src/viewport.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/viewport.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/viewport.cpp.obj: D:/Work/Programming/VSCode-projects/Lab/Rays/src/viewport.cpp
CMakeFiles/main.dir/src/viewport.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/viewport.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/viewport.cpp.obj -MF CMakeFiles\main.dir\src\viewport.cpp.obj.d -o CMakeFiles\main.dir\src\viewport.cpp.obj -c D:\Work\Programming\VSCode-projects\Lab\Rays\src\viewport.cpp

CMakeFiles/main.dir/src/viewport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/viewport.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\Programming\VSCode-projects\Lab\Rays\src\viewport.cpp > CMakeFiles\main.dir\src\viewport.cpp.i

CMakeFiles/main.dir/src/viewport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/viewport.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\Programming\VSCode-projects\Lab\Rays\src\viewport.cpp -o CMakeFiles\main.dir\src\viewport.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.obj" \
"CMakeFiles/main.dir/src/utils.cpp.obj" \
"CMakeFiles/main.dir/src/vec.cpp.obj" \
"CMakeFiles/main.dir/src/ray.cpp.obj" \
"CMakeFiles/main.dir/src/viewport.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/main.cpp.obj
main.exe: CMakeFiles/main.dir/src/utils.cpp.obj
main.exe: CMakeFiles/main.dir/src/vec.cpp.obj
main.exe: CMakeFiles/main.dir/src/ray.cpp.obj
main.exe: CMakeFiles/main.dir/src/viewport.cpp.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linkLibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Work\Programming\VSCode-projects\Lab\Rays D:\Work\Programming\VSCode-projects\Lab\Rays D:\Work\Programming\VSCode-projects\Lab\Rays\build D:\Work\Programming\VSCode-projects\Lab\Rays\build D:\Work\Programming\VSCode-projects\Lab\Rays\build\CMakeFiles\main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

