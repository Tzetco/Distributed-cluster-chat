# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/ByteTalk/UserService

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ByteTalk/UserService/build

# Include any dependencies generated for this target.
include src/CMakeFiles/UserServer.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/UserServer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/UserServer.dir/flags.make

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o: src/CMakeFiles/UserServer.dir/flags.make
src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o: ../src/LogServer.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/LogServer.pb.cc.o -c /home/ubuntu/ByteTalk/UserService/src/LogServer.pb.cc

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/LogServer.pb.cc.i"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/src/LogServer.pb.cc > CMakeFiles/UserServer.dir/LogServer.pb.cc.i

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/LogServer.pb.cc.s"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/src/LogServer.pb.cc -o CMakeFiles/UserServer.dir/LogServer.pb.cc.s

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires:

.PHONY : src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides: src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires
	$(MAKE) -f src/CMakeFiles/UserServer.dir/build.make src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides.build
.PHONY : src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides

src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides.build: src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o


src/CMakeFiles/UserServer.dir/UserService.cpp.o: src/CMakeFiles/UserServer.dir/flags.make
src/CMakeFiles/UserServer.dir/UserService.cpp.o: ../src/UserService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/UserServer.dir/UserService.cpp.o"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/UserService.cpp.o -c /home/ubuntu/ByteTalk/UserService/src/UserService.cpp

src/CMakeFiles/UserServer.dir/UserService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/UserService.cpp.i"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/src/UserService.cpp > CMakeFiles/UserServer.dir/UserService.cpp.i

src/CMakeFiles/UserServer.dir/UserService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/UserService.cpp.s"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/src/UserService.cpp -o CMakeFiles/UserServer.dir/UserService.cpp.s

src/CMakeFiles/UserServer.dir/UserService.cpp.o.requires:

.PHONY : src/CMakeFiles/UserServer.dir/UserService.cpp.o.requires

src/CMakeFiles/UserServer.dir/UserService.cpp.o.provides: src/CMakeFiles/UserServer.dir/UserService.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/UserServer.dir/build.make src/CMakeFiles/UserServer.dir/UserService.cpp.o.provides.build
.PHONY : src/CMakeFiles/UserServer.dir/UserService.cpp.o.provides

src/CMakeFiles/UserServer.dir/UserService.cpp.o.provides.build: src/CMakeFiles/UserServer.dir/UserService.cpp.o


src/CMakeFiles/UserServer.dir/UserService.pb.cc.o: src/CMakeFiles/UserServer.dir/flags.make
src/CMakeFiles/UserServer.dir/UserService.pb.cc.o: ../src/UserService.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/UserServer.dir/UserService.pb.cc.o"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/UserService.pb.cc.o -c /home/ubuntu/ByteTalk/UserService/src/UserService.pb.cc

src/CMakeFiles/UserServer.dir/UserService.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/UserService.pb.cc.i"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/src/UserService.pb.cc > CMakeFiles/UserServer.dir/UserService.pb.cc.i

src/CMakeFiles/UserServer.dir/UserService.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/UserService.pb.cc.s"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/src/UserService.pb.cc -o CMakeFiles/UserServer.dir/UserService.pb.cc.s

src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.requires:

.PHONY : src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.requires

src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.provides: src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.requires
	$(MAKE) -f src/CMakeFiles/UserServer.dir/build.make src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.provides.build
.PHONY : src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.provides

src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.provides.build: src/CMakeFiles/UserServer.dir/UserService.pb.cc.o


src/CMakeFiles/UserServer.dir/run.cpp.o: src/CMakeFiles/UserServer.dir/flags.make
src/CMakeFiles/UserServer.dir/run.cpp.o: ../src/run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/UserServer.dir/run.cpp.o"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/run.cpp.o -c /home/ubuntu/ByteTalk/UserService/src/run.cpp

src/CMakeFiles/UserServer.dir/run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/run.cpp.i"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/src/run.cpp > CMakeFiles/UserServer.dir/run.cpp.i

src/CMakeFiles/UserServer.dir/run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/run.cpp.s"
	cd /home/ubuntu/ByteTalk/UserService/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/src/run.cpp -o CMakeFiles/UserServer.dir/run.cpp.s

src/CMakeFiles/UserServer.dir/run.cpp.o.requires:

.PHONY : src/CMakeFiles/UserServer.dir/run.cpp.o.requires

src/CMakeFiles/UserServer.dir/run.cpp.o.provides: src/CMakeFiles/UserServer.dir/run.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/UserServer.dir/build.make src/CMakeFiles/UserServer.dir/run.cpp.o.provides.build
.PHONY : src/CMakeFiles/UserServer.dir/run.cpp.o.provides

src/CMakeFiles/UserServer.dir/run.cpp.o.provides.build: src/CMakeFiles/UserServer.dir/run.cpp.o


# Object files for target UserServer
UserServer_OBJECTS = \
"CMakeFiles/UserServer.dir/LogServer.pb.cc.o" \
"CMakeFiles/UserServer.dir/UserService.cpp.o" \
"CMakeFiles/UserServer.dir/UserService.pb.cc.o" \
"CMakeFiles/UserServer.dir/run.cpp.o"

# External object files for target UserServer
UserServer_EXTERNAL_OBJECTS =

../bin/UserServer: src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o
../bin/UserServer: src/CMakeFiles/UserServer.dir/UserService.cpp.o
../bin/UserServer: src/CMakeFiles/UserServer.dir/UserService.pb.cc.o
../bin/UserServer: src/CMakeFiles/UserServer.dir/run.cpp.o
../bin/UserServer: src/CMakeFiles/UserServer.dir/build.make
../bin/UserServer: src/CMakeFiles/UserServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/UserServer"
	cd /home/ubuntu/ByteTalk/UserService/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UserServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/UserServer.dir/build: ../bin/UserServer

.PHONY : src/CMakeFiles/UserServer.dir/build

src/CMakeFiles/UserServer.dir/requires: src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires
src/CMakeFiles/UserServer.dir/requires: src/CMakeFiles/UserServer.dir/UserService.cpp.o.requires
src/CMakeFiles/UserServer.dir/requires: src/CMakeFiles/UserServer.dir/UserService.pb.cc.o.requires
src/CMakeFiles/UserServer.dir/requires: src/CMakeFiles/UserServer.dir/run.cpp.o.requires

.PHONY : src/CMakeFiles/UserServer.dir/requires

src/CMakeFiles/UserServer.dir/clean:
	cd /home/ubuntu/ByteTalk/UserService/build/src && $(CMAKE_COMMAND) -P CMakeFiles/UserServer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/UserServer.dir/clean

src/CMakeFiles/UserServer.dir/depend:
	cd /home/ubuntu/ByteTalk/UserService/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ByteTalk/UserService /home/ubuntu/ByteTalk/UserService/src /home/ubuntu/ByteTalk/UserService/build /home/ubuntu/ByteTalk/UserService/build/src /home/ubuntu/ByteTalk/UserService/build/src/CMakeFiles/UserServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/UserServer.dir/depend
