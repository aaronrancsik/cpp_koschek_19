# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/oopgyak.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oopgyak.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oopgyak.dir/flags.make

CMakeFiles/oopgyak.dir/main.cpp.o: CMakeFiles/oopgyak.dir/flags.make
CMakeFiles/oopgyak.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oopgyak.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oopgyak.dir/main.cpp.o -c /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/main.cpp

CMakeFiles/oopgyak.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oopgyak.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/main.cpp > CMakeFiles/oopgyak.dir/main.cpp.i

CMakeFiles/oopgyak.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oopgyak.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/main.cpp -o CMakeFiles/oopgyak.dir/main.cpp.s

CMakeFiles/oopgyak.dir/CDatum.cpp.o: CMakeFiles/oopgyak.dir/flags.make
CMakeFiles/oopgyak.dir/CDatum.cpp.o: ../CDatum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/oopgyak.dir/CDatum.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oopgyak.dir/CDatum.cpp.o -c /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/CDatum.cpp

CMakeFiles/oopgyak.dir/CDatum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oopgyak.dir/CDatum.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/CDatum.cpp > CMakeFiles/oopgyak.dir/CDatum.cpp.i

CMakeFiles/oopgyak.dir/CDatum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oopgyak.dir/CDatum.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/CDatum.cpp -o CMakeFiles/oopgyak.dir/CDatum.cpp.s

# Object files for target oopgyak
oopgyak_OBJECTS = \
"CMakeFiles/oopgyak.dir/main.cpp.o" \
"CMakeFiles/oopgyak.dir/CDatum.cpp.o"

# External object files for target oopgyak
oopgyak_EXTERNAL_OBJECTS =

oopgyak: CMakeFiles/oopgyak.dir/main.cpp.o
oopgyak: CMakeFiles/oopgyak.dir/CDatum.cpp.o
oopgyak: CMakeFiles/oopgyak.dir/build.make
oopgyak: CMakeFiles/oopgyak.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable oopgyak"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oopgyak.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oopgyak.dir/build: oopgyak

.PHONY : CMakeFiles/oopgyak.dir/build

CMakeFiles/oopgyak.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oopgyak.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oopgyak.dir/clean

CMakeFiles/oopgyak.dir/depend:
	cd /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug /home/aaron/Documents/OE/Cpp/kodok/08het_oopCDatum/cmake-build-debug/CMakeFiles/oopgyak.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oopgyak.dir/depend
