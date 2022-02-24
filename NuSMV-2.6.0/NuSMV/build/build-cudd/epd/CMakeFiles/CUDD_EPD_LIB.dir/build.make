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
include build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/depend.make

# Include the progress variables for this target.
include build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/flags.make

build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o: build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/flags.make
build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o: /home/summer/research/NuSMV-2.6.0/cudd-2.4.1.1/epd/epd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o -c /home/summer/research/NuSMV-2.6.0/cudd-2.4.1.1/epd/epd.c

build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CUDD_EPD_LIB.dir/epd.c.i"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/summer/research/NuSMV-2.6.0/cudd-2.4.1.1/epd/epd.c > CMakeFiles/CUDD_EPD_LIB.dir/epd.c.i

build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CUDD_EPD_LIB.dir/epd.c.s"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/summer/research/NuSMV-2.6.0/cudd-2.4.1.1/epd/epd.c -o CMakeFiles/CUDD_EPD_LIB.dir/epd.c.s

# Object files for target CUDD_EPD_LIB
CUDD_EPD_LIB_OBJECTS = \
"CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o"

# External object files for target CUDD_EPD_LIB
CUDD_EPD_LIB_EXTERNAL_OBJECTS =

build-cudd/lib/libepd.a: build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/epd.c.o
build-cudd/lib/libepd.a: build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/build.make
build-cudd/lib/libepd.a: build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../lib/libepd.a"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && $(CMAKE_COMMAND) -P CMakeFiles/CUDD_EPD_LIB.dir/cmake_clean_target.cmake
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CUDD_EPD_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/build: build-cudd/lib/libepd.a

.PHONY : build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/build

build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/clean:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd && $(CMAKE_COMMAND) -P CMakeFiles/CUDD_EPD_LIB.dir/cmake_clean.cmake
.PHONY : build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/clean

build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/depend:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/cudd-2.4.1.1/epd /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd /home/summer/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : build-cudd/epd/CMakeFiles/CUDD_EPD_LIB.dir/depend

