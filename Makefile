# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.19.1/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/Cellar/cmake/3.19.1/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/samuel/Documents/C/Opengl_cube/CMakeFiles /Users/samuel/Documents/C/Opengl_cube//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/samuel/Documents/C/Opengl_cube/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

#=============================================================================
# Target rules for targets named uninstall

# Build rule for target.
uninstall: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 uninstall
.PHONY : uninstall

# fast build rule for target.
uninstall/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/CMakeFiles/uninstall.dir/build.make deps/glfw/CMakeFiles/uninstall.dir/build
.PHONY : uninstall/fast

#=============================================================================
# Target rules for targets named glfw

# Build rule for target.
glfw: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 glfw
.PHONY : glfw

# fast build rule for target.
glfw/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/src/CMakeFiles/glfw.dir/build.make deps/glfw/src/CMakeFiles/glfw.dir/build
.PHONY : glfw/fast

#=============================================================================
# Target rules for targets named heightmap

# Build rule for target.
heightmap: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 heightmap
.PHONY : heightmap

# fast build rule for target.
heightmap/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/heightmap.dir/build.make deps/glfw/examples/CMakeFiles/heightmap.dir/build
.PHONY : heightmap/fast

#=============================================================================
# Target rules for targets named wave

# Build rule for target.
wave: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 wave
.PHONY : wave

# fast build rule for target.
wave/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/wave.dir/build.make deps/glfw/examples/CMakeFiles/wave.dir/build
.PHONY : wave/fast

#=============================================================================
# Target rules for targets named splitview

# Build rule for target.
splitview: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 splitview
.PHONY : splitview

# fast build rule for target.
splitview/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/splitview.dir/build.make deps/glfw/examples/CMakeFiles/splitview.dir/build
.PHONY : splitview/fast

#=============================================================================
# Target rules for targets named simple

# Build rule for target.
simple: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 simple
.PHONY : simple

# fast build rule for target.
simple/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/simple.dir/build.make deps/glfw/examples/CMakeFiles/simple.dir/build
.PHONY : simple/fast

#=============================================================================
# Target rules for targets named particles

# Build rule for target.
particles: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 particles
.PHONY : particles

# fast build rule for target.
particles/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/particles.dir/build.make deps/glfw/examples/CMakeFiles/particles.dir/build
.PHONY : particles/fast

#=============================================================================
# Target rules for targets named gears

# Build rule for target.
gears: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gears
.PHONY : gears

# fast build rule for target.
gears/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/gears.dir/build.make deps/glfw/examples/CMakeFiles/gears.dir/build
.PHONY : gears/fast

#=============================================================================
# Target rules for targets named boing

# Build rule for target.
boing: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 boing
.PHONY : boing

# fast build rule for target.
boing/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/examples/CMakeFiles/boing.dir/build.make deps/glfw/examples/CMakeFiles/boing.dir/build
.PHONY : boing/fast

#=============================================================================
# Target rules for targets named windows

# Build rule for target.
windows: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 windows
.PHONY : windows

# fast build rule for target.
windows/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/windows.dir/build.make deps/glfw/tests/CMakeFiles/windows.dir/build
.PHONY : windows/fast

#=============================================================================
# Target rules for targets named title

# Build rule for target.
title: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 title
.PHONY : title

# fast build rule for target.
title/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/title.dir/build.make deps/glfw/tests/CMakeFiles/title.dir/build
.PHONY : title/fast

#=============================================================================
# Target rules for targets named threads

# Build rule for target.
threads: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 threads
.PHONY : threads

# fast build rule for target.
threads/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/threads.dir/build.make deps/glfw/tests/CMakeFiles/threads.dir/build
.PHONY : threads/fast

#=============================================================================
# Target rules for targets named tearing

# Build rule for target.
tearing: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 tearing
.PHONY : tearing

# fast build rule for target.
tearing/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/tearing.dir/build.make deps/glfw/tests/CMakeFiles/tearing.dir/build
.PHONY : tearing/fast

#=============================================================================
# Target rules for targets named empty

# Build rule for target.
empty: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 empty
.PHONY : empty

# fast build rule for target.
empty/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/empty.dir/build.make deps/glfw/tests/CMakeFiles/empty.dir/build
.PHONY : empty/fast

#=============================================================================
# Target rules for targets named glfwinfo

# Build rule for target.
glfwinfo: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 glfwinfo
.PHONY : glfwinfo

# fast build rule for target.
glfwinfo/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/glfwinfo.dir/build.make deps/glfw/tests/CMakeFiles/glfwinfo.dir/build
.PHONY : glfwinfo/fast

#=============================================================================
# Target rules for targets named cursor

# Build rule for target.
cursor: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cursor
.PHONY : cursor

# fast build rule for target.
cursor/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/cursor.dir/build.make deps/glfw/tests/CMakeFiles/cursor.dir/build
.PHONY : cursor/fast

#=============================================================================
# Target rules for targets named monitors

# Build rule for target.
monitors: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 monitors
.PHONY : monitors

# fast build rule for target.
monitors/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/monitors.dir/build.make deps/glfw/tests/CMakeFiles/monitors.dir/build
.PHONY : monitors/fast

#=============================================================================
# Target rules for targets named reopen

# Build rule for target.
reopen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 reopen
.PHONY : reopen

# fast build rule for target.
reopen/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/reopen.dir/build.make deps/glfw/tests/CMakeFiles/reopen.dir/build
.PHONY : reopen/fast

#=============================================================================
# Target rules for targets named joysticks

# Build rule for target.
joysticks: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 joysticks
.PHONY : joysticks

# fast build rule for target.
joysticks/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/joysticks.dir/build.make deps/glfw/tests/CMakeFiles/joysticks.dir/build
.PHONY : joysticks/fast

#=============================================================================
# Target rules for targets named events

# Build rule for target.
events: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 events
.PHONY : events

# fast build rule for target.
events/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/events.dir/build.make deps/glfw/tests/CMakeFiles/events.dir/build
.PHONY : events/fast

#=============================================================================
# Target rules for targets named iconify

# Build rule for target.
iconify: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 iconify
.PHONY : iconify

# fast build rule for target.
iconify/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/iconify.dir/build.make deps/glfw/tests/CMakeFiles/iconify.dir/build
.PHONY : iconify/fast

#=============================================================================
# Target rules for targets named gamma

# Build rule for target.
gamma: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gamma
.PHONY : gamma

# fast build rule for target.
gamma/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/gamma.dir/build.make deps/glfw/tests/CMakeFiles/gamma.dir/build
.PHONY : gamma/fast

#=============================================================================
# Target rules for targets named sharing

# Build rule for target.
sharing: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sharing
.PHONY : sharing

# fast build rule for target.
sharing/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/sharing.dir/build.make deps/glfw/tests/CMakeFiles/sharing.dir/build
.PHONY : sharing/fast

#=============================================================================
# Target rules for targets named msaa

# Build rule for target.
msaa: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 msaa
.PHONY : msaa

# fast build rule for target.
msaa/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/msaa.dir/build.make deps/glfw/tests/CMakeFiles/msaa.dir/build
.PHONY : msaa/fast

#=============================================================================
# Target rules for targets named clipboard

# Build rule for target.
clipboard: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clipboard
.PHONY : clipboard

# fast build rule for target.
clipboard/fast:
	$(MAKE) $(MAKESILENT) -f deps/glfw/tests/CMakeFiles/clipboard.dir/build.make deps/glfw/tests/CMakeFiles/clipboard.dir/build
.PHONY : clipboard/fast

deps/glew/src/glew.o: deps/glew/src/glew.c.o

.PHONY : deps/glew/src/glew.o

# target to build an object file
deps/glew/src/glew.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/glew/src/glew.c.o
.PHONY : deps/glew/src/glew.c.o

deps/glew/src/glew.i: deps/glew/src/glew.c.i

.PHONY : deps/glew/src/glew.i

# target to preprocess a source file
deps/glew/src/glew.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/glew/src/glew.c.i
.PHONY : deps/glew/src/glew.c.i

deps/glew/src/glew.s: deps/glew/src/glew.c.s

.PHONY : deps/glew/src/glew.s

# target to generate assembly for a file
deps/glew/src/glew.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/glew/src/glew.c.s
.PHONY : deps/glew/src/glew.c.s

deps/lodepng/lodepng.o: deps/lodepng/lodepng.c.o

.PHONY : deps/lodepng/lodepng.o

# target to build an object file
deps/lodepng/lodepng.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/lodepng/lodepng.c.o
.PHONY : deps/lodepng/lodepng.c.o

deps/lodepng/lodepng.i: deps/lodepng/lodepng.c.i

.PHONY : deps/lodepng/lodepng.i

# target to preprocess a source file
deps/lodepng/lodepng.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/lodepng/lodepng.c.i
.PHONY : deps/lodepng/lodepng.c.i

deps/lodepng/lodepng.s: deps/lodepng/lodepng.c.s

.PHONY : deps/lodepng/lodepng.s

# target to generate assembly for a file
deps/lodepng/lodepng.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/lodepng/lodepng.c.s
.PHONY : deps/lodepng/lodepng.c.s

deps/noise/noise.o: deps/noise/noise.c.o

.PHONY : deps/noise/noise.o

# target to build an object file
deps/noise/noise.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/noise/noise.c.o
.PHONY : deps/noise/noise.c.o

deps/noise/noise.i: deps/noise/noise.c.i

.PHONY : deps/noise/noise.i

# target to preprocess a source file
deps/noise/noise.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/noise/noise.c.i
.PHONY : deps/noise/noise.c.i

deps/noise/noise.s: deps/noise/noise.c.s

.PHONY : deps/noise/noise.s

# target to generate assembly for a file
deps/noise/noise.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/noise/noise.c.s
.PHONY : deps/noise/noise.c.s

deps/sqlite/sqlite3.o: deps/sqlite/sqlite3.c.o

.PHONY : deps/sqlite/sqlite3.o

# target to build an object file
deps/sqlite/sqlite3.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/sqlite/sqlite3.c.o
.PHONY : deps/sqlite/sqlite3.c.o

deps/sqlite/sqlite3.i: deps/sqlite/sqlite3.c.i

.PHONY : deps/sqlite/sqlite3.i

# target to preprocess a source file
deps/sqlite/sqlite3.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/sqlite/sqlite3.c.i
.PHONY : deps/sqlite/sqlite3.c.i

deps/sqlite/sqlite3.s: deps/sqlite/sqlite3.c.s

.PHONY : deps/sqlite/sqlite3.s

# target to generate assembly for a file
deps/sqlite/sqlite3.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/sqlite/sqlite3.c.s
.PHONY : deps/sqlite/sqlite3.c.s

deps/tinycthread/tinycthread.o: deps/tinycthread/tinycthread.c.o

.PHONY : deps/tinycthread/tinycthread.o

# target to build an object file
deps/tinycthread/tinycthread.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.o
.PHONY : deps/tinycthread/tinycthread.c.o

deps/tinycthread/tinycthread.i: deps/tinycthread/tinycthread.c.i

.PHONY : deps/tinycthread/tinycthread.i

# target to preprocess a source file
deps/tinycthread/tinycthread.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.i
.PHONY : deps/tinycthread/tinycthread.c.i

deps/tinycthread/tinycthread.s: deps/tinycthread/tinycthread.c.s

.PHONY : deps/tinycthread/tinycthread.s

# target to generate assembly for a file
deps/tinycthread/tinycthread.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/deps/tinycthread/tinycthread.c.s
.PHONY : deps/tinycthread/tinycthread.c.s

src/main.o: src/main.c.o

.PHONY : src/main.o

# target to build an object file
src/main.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.c.o
.PHONY : src/main.c.o

src/main.i: src/main.c.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.c.i
.PHONY : src/main.c.i

src/main.s: src/main.c.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.c.s
.PHONY : src/main.c.s

src/pixel.o: src/pixel.c.o

.PHONY : src/pixel.o

# target to build an object file
src/pixel.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/pixel.c.o
.PHONY : src/pixel.c.o

src/pixel.i: src/pixel.c.i

.PHONY : src/pixel.i

# target to preprocess a source file
src/pixel.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/pixel.c.i
.PHONY : src/pixel.c.i

src/pixel.s: src/pixel.c.s

.PHONY : src/pixel.s

# target to generate assembly for a file
src/pixel.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/pixel.c.s
.PHONY : src/pixel.c.s

src/processing/calc.o: src/processing/calc.c.o

.PHONY : src/processing/calc.o

# target to build an object file
src/processing/calc.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/calc.c.o
.PHONY : src/processing/calc.c.o

src/processing/calc.i: src/processing/calc.c.i

.PHONY : src/processing/calc.i

# target to preprocess a source file
src/processing/calc.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/calc.c.i
.PHONY : src/processing/calc.c.i

src/processing/calc.s: src/processing/calc.c.s

.PHONY : src/processing/calc.s

# target to generate assembly for a file
src/processing/calc.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/calc.c.s
.PHONY : src/processing/calc.c.s

src/processing/cube.o: src/processing/cube.c.o

.PHONY : src/processing/cube.o

# target to build an object file
src/processing/cube.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/cube.c.o
.PHONY : src/processing/cube.c.o

src/processing/cube.i: src/processing/cube.c.i

.PHONY : src/processing/cube.i

# target to preprocess a source file
src/processing/cube.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/cube.c.i
.PHONY : src/processing/cube.c.i

src/processing/cube.s: src/processing/cube.c.s

.PHONY : src/processing/cube.s

# target to generate assembly for a file
src/processing/cube.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/cube.c.s
.PHONY : src/processing/cube.c.s

src/processing/dynamic_array.o: src/processing/dynamic_array.c.o

.PHONY : src/processing/dynamic_array.o

# target to build an object file
src/processing/dynamic_array.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/dynamic_array.c.o
.PHONY : src/processing/dynamic_array.c.o

src/processing/dynamic_array.i: src/processing/dynamic_array.c.i

.PHONY : src/processing/dynamic_array.i

# target to preprocess a source file
src/processing/dynamic_array.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/dynamic_array.c.i
.PHONY : src/processing/dynamic_array.c.i

src/processing/dynamic_array.s: src/processing/dynamic_array.c.s

.PHONY : src/processing/dynamic_array.s

# target to generate assembly for a file
src/processing/dynamic_array.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/dynamic_array.c.s
.PHONY : src/processing/dynamic_array.c.s

src/processing/vert.o: src/processing/vert.c.o

.PHONY : src/processing/vert.o

# target to build an object file
src/processing/vert.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/vert.c.o
.PHONY : src/processing/vert.c.o

src/processing/vert.i: src/processing/vert.c.i

.PHONY : src/processing/vert.i

# target to preprocess a source file
src/processing/vert.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/vert.c.i
.PHONY : src/processing/vert.c.i

src/processing/vert.s: src/processing/vert.c.s

.PHONY : src/processing/vert.s

# target to generate assembly for a file
src/processing/vert.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/processing/vert.c.s
.PHONY : src/processing/vert.c.s

src/util/hashlist.o: src/util/hashlist.c.o

.PHONY : src/util/hashlist.o

# target to build an object file
src/util/hashlist.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/hashlist.c.o
.PHONY : src/util/hashlist.c.o

src/util/hashlist.i: src/util/hashlist.c.i

.PHONY : src/util/hashlist.i

# target to preprocess a source file
src/util/hashlist.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/hashlist.c.i
.PHONY : src/util/hashlist.c.i

src/util/hashlist.s: src/util/hashlist.c.s

.PHONY : src/util/hashlist.s

# target to generate assembly for a file
src/util/hashlist.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/hashlist.c.s
.PHONY : src/util/hashlist.c.s

src/util/list.o: src/util/list.c.o

.PHONY : src/util/list.o

# target to build an object file
src/util/list.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/list.c.o
.PHONY : src/util/list.c.o

src/util/list.i: src/util/list.c.i

.PHONY : src/util/list.i

# target to preprocess a source file
src/util/list.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/list.c.i
.PHONY : src/util/list.c.i

src/util/list.s: src/util/list.c.s

.PHONY : src/util/list.s

# target to generate assembly for a file
src/util/list.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/list.c.s
.PHONY : src/util/list.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... uninstall"
	@echo "... boing"
	@echo "... clipboard"
	@echo "... cursor"
	@echo "... empty"
	@echo "... events"
	@echo "... gamma"
	@echo "... gears"
	@echo "... glfw"
	@echo "... glfwinfo"
	@echo "... heightmap"
	@echo "... iconify"
	@echo "... joysticks"
	@echo "... main"
	@echo "... monitors"
	@echo "... msaa"
	@echo "... particles"
	@echo "... reopen"
	@echo "... sharing"
	@echo "... simple"
	@echo "... splitview"
	@echo "... tearing"
	@echo "... threads"
	@echo "... title"
	@echo "... wave"
	@echo "... windows"
	@echo "... deps/glew/src/glew.o"
	@echo "... deps/glew/src/glew.i"
	@echo "... deps/glew/src/glew.s"
	@echo "... deps/lodepng/lodepng.o"
	@echo "... deps/lodepng/lodepng.i"
	@echo "... deps/lodepng/lodepng.s"
	@echo "... deps/noise/noise.o"
	@echo "... deps/noise/noise.i"
	@echo "... deps/noise/noise.s"
	@echo "... deps/sqlite/sqlite3.o"
	@echo "... deps/sqlite/sqlite3.i"
	@echo "... deps/sqlite/sqlite3.s"
	@echo "... deps/tinycthread/tinycthread.o"
	@echo "... deps/tinycthread/tinycthread.i"
	@echo "... deps/tinycthread/tinycthread.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/pixel.o"
	@echo "... src/pixel.i"
	@echo "... src/pixel.s"
	@echo "... src/processing/calc.o"
	@echo "... src/processing/calc.i"
	@echo "... src/processing/calc.s"
	@echo "... src/processing/cube.o"
	@echo "... src/processing/cube.i"
	@echo "... src/processing/cube.s"
	@echo "... src/processing/dynamic_array.o"
	@echo "... src/processing/dynamic_array.i"
	@echo "... src/processing/dynamic_array.s"
	@echo "... src/processing/vert.o"
	@echo "... src/processing/vert.i"
	@echo "... src/processing/vert.s"
	@echo "... src/util/hashlist.o"
	@echo "... src/util/hashlist.i"
	@echo "... src/util/hashlist.s"
	@echo "... src/util/list.o"
	@echo "... src/util/list.i"
	@echo "... src/util/list.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

