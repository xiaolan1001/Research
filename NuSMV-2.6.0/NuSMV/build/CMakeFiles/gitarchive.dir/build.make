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

# Utility rule file for gitarchive.

# Include the progress variables for this target.
include CMakeFiles/gitarchive.dir/progress.make

CMakeFiles/gitarchive:
	cd /home/summer/research/NuSMV-2.6.0 && git archive --worktree-attributes --format=tar --prefix=NuSMV-2.6.0/ --output=/home/summer/research/NuSMV-2.6.0/NuSMV/build/NuSMV-2.6.0.tar HEAD NuSMV/ MiniSat/ zchaff/ cudd-2.4.1.1/

gitarchive: CMakeFiles/gitarchive
gitarchive: CMakeFiles/gitarchive.dir/build.make

.PHONY : gitarchive

# Rule to build all files generated by this target.
CMakeFiles/gitarchive.dir/build: gitarchive

.PHONY : CMakeFiles/gitarchive.dir/build

CMakeFiles/gitarchive.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gitarchive.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gitarchive.dir/clean

CMakeFiles/gitarchive.dir/depend:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles/gitarchive.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gitarchive.dir/depend

