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
include CMakeFiles/NUSMV_SHELL_LIB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NUSMV_SHELL_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NUSMV_SHELL_LIB.dir/flags.make

# Object files for target NUSMV_SHELL_LIB
NUSMV_SHELL_LIB_OBJECTS =

# External object files for target NUSMV_SHELL_LIB
NUSMV_SHELL_LIB_EXTERNAL_OBJECTS = \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/parser/CMakeFiles/code_nusmv_shell_parser.dir/parserCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/enc/CMakeFiles/code_nusmv_shell_enc.dir/encCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/ltl/CMakeFiles/code_nusmv_shell_ltl.dir/ltlCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/opt/CMakeFiles/code_nusmv_shell_opt.dir/optCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/prop/CMakeFiles/code_nusmv_shell_prop.dir/propCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/simulate/CMakeFiles/code_nusmv_shell_simulate.dir/simulateCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/trace/CMakeFiles/code_nusmv_shell_trace.dir/traceCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/bmc/CMakeFiles/code_nusmv_shell_bmc.dir/bmcCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/bmc/CMakeFiles/code_nusmv_shell_bmc.dir/sbmc/sbmcCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/compile/CMakeFiles/code_nusmv_shell_compile.dir/compileCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/dd/CMakeFiles/code_nusmv_shell_dd.dir/ddCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cinit/CMakeFiles/code_nusmv_shell_cinit.dir/cinit.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cinit/CMakeFiles/code_nusmv_shell_cinit.dir/cinitCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/utils/CMakeFiles/code_nusmv_shell_utils.dir/utilsCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/hrc/CMakeFiles/code_nusmv_shell_hrc.dir/hrcCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdCmd.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdFile.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdMisc.c.o" \
"/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdHelp.c.o"

lib/libnusmvshell.a: code/nusmv/shell/parser/CMakeFiles/code_nusmv_shell_parser.dir/parserCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/enc/CMakeFiles/code_nusmv_shell_enc.dir/encCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/ltl/CMakeFiles/code_nusmv_shell_ltl.dir/ltlCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/opt/CMakeFiles/code_nusmv_shell_opt.dir/optCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/prop/CMakeFiles/code_nusmv_shell_prop.dir/propCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/simulate/CMakeFiles/code_nusmv_shell_simulate.dir/simulateCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/trace/CMakeFiles/code_nusmv_shell_trace.dir/traceCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/bmc/CMakeFiles/code_nusmv_shell_bmc.dir/bmcCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/bmc/CMakeFiles/code_nusmv_shell_bmc.dir/sbmc/sbmcCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/compile/CMakeFiles/code_nusmv_shell_compile.dir/compileCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/dd/CMakeFiles/code_nusmv_shell_dd.dir/ddCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/fsm/CMakeFiles/code_nusmv_shell_fsm.dir/bdd/bddCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/cinit/CMakeFiles/code_nusmv_shell_cinit.dir/cinit.c.o
lib/libnusmvshell.a: code/nusmv/shell/cinit/CMakeFiles/code_nusmv_shell_cinit.dir/cinitCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/utils/CMakeFiles/code_nusmv_shell_utils.dir/utilsCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/hrc/CMakeFiles/code_nusmv_shell_hrc.dir/hrcCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdCmd.c.o
lib/libnusmvshell.a: code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdFile.c.o
lib/libnusmvshell.a: code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdMisc.c.o
lib/libnusmvshell.a: code/nusmv/shell/cmd/CMakeFiles/code_nusmv_shell_cmd.dir/cmdHelp.c.o
lib/libnusmvshell.a: CMakeFiles/NUSMV_SHELL_LIB.dir/build.make
lib/libnusmvshell.a: CMakeFiles/NUSMV_SHELL_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking C static library lib/libnusmvshell.a"
	$(CMAKE_COMMAND) -P CMakeFiles/NUSMV_SHELL_LIB.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NUSMV_SHELL_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NUSMV_SHELL_LIB.dir/build: lib/libnusmvshell.a

.PHONY : CMakeFiles/NUSMV_SHELL_LIB.dir/build

CMakeFiles/NUSMV_SHELL_LIB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NUSMV_SHELL_LIB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NUSMV_SHELL_LIB.dir/clean

CMakeFiles/NUSMV_SHELL_LIB.dir/depend:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles/NUSMV_SHELL_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NUSMV_SHELL_LIB.dir/depend

