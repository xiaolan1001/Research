# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/summer/research/NuSMV-2.6.0/NuSMV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/summer/research/NuSMV-2.6.0/NuSMV/build

# Include any dependencies generated for this target.
include code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/flags.make

code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o: code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/flags.make
code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o: ../code/nusmv/shell/fsm/bdd/bddCmd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o -c /home/summer/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/fsm/bdd/bddCmd.c

code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.i"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/summer/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/fsm/bdd/bddCmd.c > CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.i

code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.s"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/summer/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/fsm/bdd/bddCmd.c -o CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.s

code_nusmv_shell_fsm: code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o
code_nusmv_shell_fsm: code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/build.make

.PHONY : code_nusmv_shell_fsm

# Rule to build all files generated by this target.
code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/build: code_nusmv_shell_fsm

.PHONY : code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/build

code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/clean:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_shell_fsm.dir/cmake_clean.cmake
.PHONY : code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/clean

code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/depend:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/fsm /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm /home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/depend

