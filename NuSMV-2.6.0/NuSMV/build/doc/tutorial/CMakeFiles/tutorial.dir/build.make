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

# Utility rule file for tutorial.

# Include the progress variables for this target.
include doc/tutorial/CMakeFiles/tutorial.dir/progress.make

doc/tutorial/CMakeFiles/tutorial: doc/tutorial/tutorial.pdf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Built tutorial in /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial/tutorial.pdf"

doc/tutorial/tutorial.pdf: ../doc/tutorial/bmc.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/citeall.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/ctl_mc.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/examples.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/intro.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/ltl_mc.tex
doc/tutorial/tutorial.pdf: doc/tutorial/main.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/nusmv.ist
doc/tutorial/tutorial.pdf: doc/tutorial/nusmvtut.sty
doc/tutorial/tutorial.pdf: ../doc/tutorial/simulation.tex
doc/tutorial/tutorial.pdf: ../doc/tutorial/title.tex
doc/tutorial/tutorial.pdf: doc/tutorial/main.bbl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating tutorial.pdf"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/pdflatex main
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/cmake -E rename main.pdf tutorial.pdf

doc/tutorial/main.bbl:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/summer/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating main.bbl"
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/pdflatex main
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/bibtex main
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/pdflatex main
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/makeindex -l -c -s /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial/nusmv.ist main
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/makeindex -o main.and main.adx
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/makeindex -o main.nnd main.ndx
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && /usr/bin/python /home/summer/research/NuSMV-2.6.0/NuSMV/doc/../cmake/run_with_latex_env.py /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /usr/bin/pdflatex main

tutorial: doc/tutorial/CMakeFiles/tutorial
tutorial: doc/tutorial/tutorial.pdf
tutorial: doc/tutorial/main.bbl
tutorial: doc/tutorial/CMakeFiles/tutorial.dir/build.make

.PHONY : tutorial

# Rule to build all files generated by this target.
doc/tutorial/CMakeFiles/tutorial.dir/build: tutorial

.PHONY : doc/tutorial/CMakeFiles/tutorial.dir/build

doc/tutorial/CMakeFiles/tutorial.dir/clean:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial && $(CMAKE_COMMAND) -P CMakeFiles/tutorial.dir/cmake_clean.cmake
.PHONY : doc/tutorial/CMakeFiles/tutorial.dir/clean

doc/tutorial/CMakeFiles/tutorial.dir/depend:
	cd /home/summer/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/summer/research/NuSMV-2.6.0/NuSMV /home/summer/research/NuSMV-2.6.0/NuSMV/doc/tutorial /home/summer/research/NuSMV-2.6.0/NuSMV/build /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial /home/summer/research/NuSMV-2.6.0/NuSMV/build/doc/tutorial/CMakeFiles/tutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/tutorial/CMakeFiles/tutorial.dir/depend

