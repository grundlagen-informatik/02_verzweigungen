# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\Desktop\02_verzweigungen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/02_verzweigungen.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/02_verzweigungen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/02_verzweigungen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02_verzweigungen.dir/flags.make

CMakeFiles/02_verzweigungen.dir/main.c.obj: CMakeFiles/02_verzweigungen.dir/flags.make
CMakeFiles/02_verzweigungen.dir/main.c.obj: C:/Users/Admin/Desktop/02_verzweigungen/main.c
CMakeFiles/02_verzweigungen.dir/main.c.obj: CMakeFiles/02_verzweigungen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/02_verzweigungen.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/02_verzweigungen.dir/main.c.obj -MF CMakeFiles\02_verzweigungen.dir\main.c.obj.d -o CMakeFiles\02_verzweigungen.dir\main.c.obj -c C:\Users\Admin\Desktop\02_verzweigungen\main.c

CMakeFiles/02_verzweigungen.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/02_verzweigungen.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\Desktop\02_verzweigungen\main.c > CMakeFiles\02_verzweigungen.dir\main.c.i

CMakeFiles/02_verzweigungen.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/02_verzweigungen.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\Desktop\02_verzweigungen\main.c -o CMakeFiles\02_verzweigungen.dir\main.c.s

# Object files for target 02_verzweigungen
02_verzweigungen_OBJECTS = \
"CMakeFiles/02_verzweigungen.dir/main.c.obj"

# External object files for target 02_verzweigungen
02_verzweigungen_EXTERNAL_OBJECTS =

02_verzweigungen.exe: CMakeFiles/02_verzweigungen.dir/main.c.obj
02_verzweigungen.exe: CMakeFiles/02_verzweigungen.dir/build.make
02_verzweigungen.exe: CMakeFiles/02_verzweigungen.dir/linkLibs.rsp
02_verzweigungen.exe: CMakeFiles/02_verzweigungen.dir/objects1.rsp
02_verzweigungen.exe: CMakeFiles/02_verzweigungen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 02_verzweigungen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\02_verzweigungen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02_verzweigungen.dir/build: 02_verzweigungen.exe
.PHONY : CMakeFiles/02_verzweigungen.dir/build

CMakeFiles/02_verzweigungen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\02_verzweigungen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/02_verzweigungen.dir/clean

CMakeFiles/02_verzweigungen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\Desktop\02_verzweigungen C:\Users\Admin\Desktop\02_verzweigungen C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug C:\Users\Admin\Desktop\02_verzweigungen\cmake-build-debug\CMakeFiles\02_verzweigungen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/02_verzweigungen.dir/depend
