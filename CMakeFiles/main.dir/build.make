# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/samuel/Documents/C/Opengl_cube

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/samuel/Documents/C/Opengl_cube

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.c.o: src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/src/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/main.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/main.c

CMakeFiles/main.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/main.c > CMakeFiles/main.dir/src/main.c.i

CMakeFiles/main.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/main.c -o CMakeFiles/main.dir/src/main.c.s

CMakeFiles/main.dir/src/pixel.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/pixel.c.o: src/pixel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/src/pixel.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/pixel.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/pixel.c

CMakeFiles/main.dir/src/pixel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/pixel.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/pixel.c > CMakeFiles/main.dir/src/pixel.c.i

CMakeFiles/main.dir/src/pixel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/pixel.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/pixel.c -o CMakeFiles/main.dir/src/pixel.c.s

CMakeFiles/main.dir/src/processing/calc.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/processing/calc.c.o: src/processing/calc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/src/processing/calc.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/processing/calc.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/processing/calc.c

CMakeFiles/main.dir/src/processing/calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/processing/calc.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/processing/calc.c > CMakeFiles/main.dir/src/processing/calc.c.i

CMakeFiles/main.dir/src/processing/calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/processing/calc.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/processing/calc.c -o CMakeFiles/main.dir/src/processing/calc.c.s

CMakeFiles/main.dir/src/processing/cube.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/processing/cube.c.o: src/processing/cube.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/src/processing/cube.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/processing/cube.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/processing/cube.c

CMakeFiles/main.dir/src/processing/cube.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/processing/cube.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/processing/cube.c > CMakeFiles/main.dir/src/processing/cube.c.i

CMakeFiles/main.dir/src/processing/cube.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/processing/cube.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/processing/cube.c -o CMakeFiles/main.dir/src/processing/cube.c.s

CMakeFiles/main.dir/src/processing/dynamic_array.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/processing/dynamic_array.c.o: src/processing/dynamic_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/src/processing/dynamic_array.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/processing/dynamic_array.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/processing/dynamic_array.c

CMakeFiles/main.dir/src/processing/dynamic_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/processing/dynamic_array.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/processing/dynamic_array.c > CMakeFiles/main.dir/src/processing/dynamic_array.c.i

CMakeFiles/main.dir/src/processing/dynamic_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/processing/dynamic_array.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/processing/dynamic_array.c -o CMakeFiles/main.dir/src/processing/dynamic_array.c.s

CMakeFiles/main.dir/src/processing/vert.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/processing/vert.c.o: src/processing/vert.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/main.dir/src/processing/vert.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/processing/vert.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/processing/vert.c

CMakeFiles/main.dir/src/processing/vert.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/processing/vert.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/processing/vert.c > CMakeFiles/main.dir/src/processing/vert.c.i

CMakeFiles/main.dir/src/processing/vert.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/processing/vert.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/processing/vert.c -o CMakeFiles/main.dir/src/processing/vert.c.s

CMakeFiles/main.dir/src/util/hashlist.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/util/hashlist.c.o: src/util/hashlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/main.dir/src/util/hashlist.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/util/hashlist.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/util/hashlist.c

CMakeFiles/main.dir/src/util/hashlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/util/hashlist.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/util/hashlist.c > CMakeFiles/main.dir/src/util/hashlist.c.i

CMakeFiles/main.dir/src/util/hashlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/util/hashlist.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/util/hashlist.c -o CMakeFiles/main.dir/src/util/hashlist.c.s

CMakeFiles/main.dir/src/util/list.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/util/list.c.o: src/util/list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/main.dir/src/util/list.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/util/list.c.o -c /Users/samuel/Documents/C/Opengl_cube/src/util/list.c

CMakeFiles/main.dir/src/util/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/util/list.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/src/util/list.c > CMakeFiles/main.dir/src/util/list.c.i

CMakeFiles/main.dir/src/util/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/util/list.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/src/util/list.c -o CMakeFiles/main.dir/src/util/list.c.s

CMakeFiles/main.dir/deps/glew/src/glew.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/deps/glew/src/glew.c.o: deps/glew/src/glew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/main.dir/deps/glew/src/glew.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/deps/glew/src/glew.c.o -c /Users/samuel/Documents/C/Opengl_cube/deps/glew/src/glew.c

CMakeFiles/main.dir/deps/glew/src/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/deps/glew/src/glew.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/deps/glew/src/glew.c > CMakeFiles/main.dir/deps/glew/src/glew.c.i

CMakeFiles/main.dir/deps/glew/src/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/deps/glew/src/glew.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/deps/glew/src/glew.c -o CMakeFiles/main.dir/deps/glew/src/glew.c.s

CMakeFiles/main.dir/deps/lodepng/lodepng.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/deps/lodepng/lodepng.c.o: deps/lodepng/lodepng.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/main.dir/deps/lodepng/lodepng.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/deps/lodepng/lodepng.c.o -c /Users/samuel/Documents/C/Opengl_cube/deps/lodepng/lodepng.c

CMakeFiles/main.dir/deps/lodepng/lodepng.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/deps/lodepng/lodepng.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/deps/lodepng/lodepng.c > CMakeFiles/main.dir/deps/lodepng/lodepng.c.i

CMakeFiles/main.dir/deps/lodepng/lodepng.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/deps/lodepng/lodepng.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/deps/lodepng/lodepng.c -o CMakeFiles/main.dir/deps/lodepng/lodepng.c.s

CMakeFiles/main.dir/deps/noise/noise.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/deps/noise/noise.c.o: deps/noise/noise.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/main.dir/deps/noise/noise.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/deps/noise/noise.c.o -c /Users/samuel/Documents/C/Opengl_cube/deps/noise/noise.c

CMakeFiles/main.dir/deps/noise/noise.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/deps/noise/noise.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/deps/noise/noise.c > CMakeFiles/main.dir/deps/noise/noise.c.i

CMakeFiles/main.dir/deps/noise/noise.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/deps/noise/noise.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/deps/noise/noise.c -o CMakeFiles/main.dir/deps/noise/noise.c.s

CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o: deps/sqlite/sqlite3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o -c /Users/samuel/Documents/C/Opengl_cube/deps/sqlite/sqlite3.c

CMakeFiles/main.dir/deps/sqlite/sqlite3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/deps/sqlite/sqlite3.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/deps/sqlite/sqlite3.c > CMakeFiles/main.dir/deps/sqlite/sqlite3.c.i

CMakeFiles/main.dir/deps/sqlite/sqlite3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/deps/sqlite/sqlite3.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/deps/sqlite/sqlite3.c -o CMakeFiles/main.dir/deps/sqlite/sqlite3.c.s

CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o: deps/tinycthread/tinycthread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o -c /Users/samuel/Documents/C/Opengl_cube/deps/tinycthread/tinycthread.c

CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/samuel/Documents/C/Opengl_cube/deps/tinycthread/tinycthread.c > CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.i

CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/samuel/Documents/C/Opengl_cube/deps/tinycthread/tinycthread.c -o CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.c.o" \
"CMakeFiles/main.dir/src/pixel.c.o" \
"CMakeFiles/main.dir/src/processing/calc.c.o" \
"CMakeFiles/main.dir/src/processing/cube.c.o" \
"CMakeFiles/main.dir/src/processing/dynamic_array.c.o" \
"CMakeFiles/main.dir/src/processing/vert.c.o" \
"CMakeFiles/main.dir/src/util/hashlist.c.o" \
"CMakeFiles/main.dir/src/util/list.c.o" \
"CMakeFiles/main.dir/deps/glew/src/glew.c.o" \
"CMakeFiles/main.dir/deps/lodepng/lodepng.c.o" \
"CMakeFiles/main.dir/deps/noise/noise.c.o" \
"CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o" \
"CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/main.c.o
main: CMakeFiles/main.dir/src/pixel.c.o
main: CMakeFiles/main.dir/src/processing/calc.c.o
main: CMakeFiles/main.dir/src/processing/cube.c.o
main: CMakeFiles/main.dir/src/processing/dynamic_array.c.o
main: CMakeFiles/main.dir/src/processing/vert.c.o
main: CMakeFiles/main.dir/src/util/hashlist.c.o
main: CMakeFiles/main.dir/src/util/list.c.o
main: CMakeFiles/main.dir/deps/glew/src/glew.c.o
main: CMakeFiles/main.dir/deps/lodepng/lodepng.c.o
main: CMakeFiles/main.dir/deps/noise/noise.c.o
main: CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o
main: CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o
main: CMakeFiles/main.dir/build.make
main: deps/glfw/src/libglfw3.a
main: /Library/Developer/CommandLineTools/SDKs/MacOSX11.1.sdk/usr/lib/libcurl.tbd
main: deps/glfw/src/libglfw3.a
main: /Library/Developer/CommandLineTools/SDKs/MacOSX11.1.sdk/usr/lib/libcurl.tbd
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/samuel/Documents/C/Opengl_cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/samuel/Documents/C/Opengl_cube && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/samuel/Documents/C/Opengl_cube /Users/samuel/Documents/C/Opengl_cube /Users/samuel/Documents/C/Opengl_cube /Users/samuel/Documents/C/Opengl_cube /Users/samuel/Documents/C/Opengl_cube/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

