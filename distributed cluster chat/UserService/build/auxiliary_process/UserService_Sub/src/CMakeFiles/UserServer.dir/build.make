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
include auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/depend.make

# Include the progress variables for this target.
include auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/progress.make

# Include the compile flags for this target's objects.
include auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o: ../auxiliary_process/UserService_Sub/src/LogServer.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/LogServer.pb.cc.o -c /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/LogServer.pb.cc

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/LogServer.pb.cc.i"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/LogServer.pb.cc > CMakeFiles/UserServer.dir/LogServer.pb.cc.i

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/LogServer.pb.cc.s"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/LogServer.pb.cc -o CMakeFiles/UserServer.dir/LogServer.pb.cc.s

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires:

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires
	$(MAKE) -f auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides.build
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.provides.build: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o


auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o: ../auxiliary_process/UserService_Sub/src/UserServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/UserServer.cpp.o -c /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.cpp

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/UserServer.cpp.i"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.cpp > CMakeFiles/UserServer.dir/UserServer.cpp.i

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/UserServer.cpp.s"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.cpp -o CMakeFiles/UserServer.dir/UserServer.cpp.s

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.requires:

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.provides: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.requires
	$(MAKE) -f auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.provides.build
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.provides

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.provides.build: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o


auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o: ../auxiliary_process/UserService_Sub/src/UserServer.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/UserServer.pb.cc.o -c /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.pb.cc

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/UserServer.pb.cc.i"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.pb.cc > CMakeFiles/UserServer.dir/UserServer.pb.cc.i

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/UserServer.pb.cc.s"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/UserServer.pb.cc -o CMakeFiles/UserServer.dir/UserServer.pb.cc.s

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.requires:

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.provides: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.requires
	$(MAKE) -f auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.provides.build
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.provides

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.provides.build: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o


auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o: ../auxiliary_process/UserService_Sub/src/ZooKeeperFow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o -c /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/ZooKeeperFow.cpp

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.i"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/ZooKeeperFow.cpp > CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.i

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.s"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/ZooKeeperFow.cpp -o CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.s

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.requires:

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.provides: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.requires
	$(MAKE) -f auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.provides.build
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.provides

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.provides.build: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o


auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/flags.make
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o: ../auxiliary_process/UserService_Sub/src/run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UserServer.dir/run.cpp.o -c /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/run.cpp

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserServer.dir/run.cpp.i"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/run.cpp > CMakeFiles/UserServer.dir/run.cpp.i

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserServer.dir/run.cpp.s"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src/run.cpp -o CMakeFiles/UserServer.dir/run.cpp.s

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.requires:

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.provides: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.requires
	$(MAKE) -f auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.provides.build
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.provides

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.provides.build: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o


# Object files for target UserServer
UserServer_OBJECTS = \
"CMakeFiles/UserServer.dir/LogServer.pb.cc.o" \
"CMakeFiles/UserServer.dir/UserServer.cpp.o" \
"CMakeFiles/UserServer.dir/UserServer.pb.cc.o" \
"CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o" \
"CMakeFiles/UserServer.dir/run.cpp.o"

# External object files for target UserServer
UserServer_EXTERNAL_OBJECTS =

../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build.make
../bin/UserServer: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ByteTalk/UserService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../../../../bin/UserServer"
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UserServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build: ../bin/UserServer

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/build

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/LogServer.pb.cc.o.requires
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.cpp.o.requires
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/UserServer.pb.cc.o.requires
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/ZooKeeperFow.cpp.o.requires
auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires: auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/run.cpp.o.requires

.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/requires

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/clean:
	cd /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src && $(CMAKE_COMMAND) -P CMakeFiles/UserServer.dir/cmake_clean.cmake
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/clean

auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/depend:
	cd /home/ubuntu/ByteTalk/UserService/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ByteTalk/UserService /home/ubuntu/ByteTalk/UserService/auxiliary_process/UserService_Sub/src /home/ubuntu/ByteTalk/UserService/build /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src /home/ubuntu/ByteTalk/UserService/build/auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : auxiliary_process/UserService_Sub/src/CMakeFiles/UserServer.dir/depend

