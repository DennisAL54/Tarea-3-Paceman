# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Server.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Server.dir/flags.make

CMakeFiles/Server.dir/main.c.obj: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Server.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Server.dir\main.c.obj -c "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\main.c"

CMakeFiles/Server.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Server.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\main.c" > CMakeFiles\Server.dir\main.c.i

CMakeFiles/Server.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Server.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\main.c" -o CMakeFiles\Server.dir\main.c.s

# Object files for target Server
Server_OBJECTS = \
"CMakeFiles/Server.dir/main.c.obj"

# External object files for target Server
Server_EXTERNAL_OBJECTS =

Server.exe: CMakeFiles/Server.dir/main.c.obj
Server.exe: CMakeFiles/Server.dir/build.make
Server.exe: CMakeFiles/Server.dir/linklibs.rsp
Server.exe: CMakeFiles/Server.dir/objects1.rsp
Server.exe: CMakeFiles/Server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Server.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Server.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Server.dir/build: Server.exe
.PHONY : CMakeFiles/Server.dir/build

CMakeFiles/Server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Server.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Server.dir/clean

CMakeFiles/Server.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server" "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server" "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug" "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug" "C:\Users\aleji\Desktop\Documentos Tec\Semestre 2 2021\Lenguajes, Compiladores e Interpretes\Tarea 3\Tarea-3-Paceman\Server\cmake-build-debug\CMakeFiles\Server.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Server.dir/depend

