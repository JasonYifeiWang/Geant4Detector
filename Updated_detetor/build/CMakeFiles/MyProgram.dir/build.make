# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/s2155437/Desktop/proj3/GeantExample2Part2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s2155437/Desktop/proj3/GeantExample2Part2/build

# Include any dependencies generated for this target.
include CMakeFiles/MyProgram.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyProgram.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyProgram.dir/flags.make

CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o: ../src/ActionInitialization.cpp
CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o -MF CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o.d -o CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/ActionInitialization.cpp

CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/ActionInitialization.cpp > CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.i

CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/ActionInitialization.cpp -o CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.s

CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o: ../src/DetectorConstruction.cpp
CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o -MF CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o.d -o CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/DetectorConstruction.cpp

CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/DetectorConstruction.cpp > CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.i

CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/DetectorConstruction.cpp -o CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.s

CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o: ../src/EnergyMomentumFinder.cpp
CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o -MF CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o.d -o CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/EnergyMomentumFinder.cpp

CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/EnergyMomentumFinder.cpp > CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.i

CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/EnergyMomentumFinder.cpp -o CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.s

CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o: ../src/GeneratorAction.cpp
CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o -MF CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o.d -o CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/GeneratorAction.cpp

CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/GeneratorAction.cpp > CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.i

CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/GeneratorAction.cpp -o CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.s

CMakeFiles/MyProgram.dir/src/RunAction.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/RunAction.cpp.o: ../src/RunAction.cpp
CMakeFiles/MyProgram.dir/src/RunAction.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MyProgram.dir/src/RunAction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/RunAction.cpp.o -MF CMakeFiles/MyProgram.dir/src/RunAction.cpp.o.d -o CMakeFiles/MyProgram.dir/src/RunAction.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/RunAction.cpp

CMakeFiles/MyProgram.dir/src/RunAction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/RunAction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/RunAction.cpp > CMakeFiles/MyProgram.dir/src/RunAction.cpp.i

CMakeFiles/MyProgram.dir/src/RunAction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/RunAction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/RunAction.cpp -o CMakeFiles/MyProgram.dir/src/RunAction.cpp.s

CMakeFiles/MyProgram.dir/src/main.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MyProgram.dir/src/main.cpp.o: CMakeFiles/MyProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MyProgram.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyProgram.dir/src/main.cpp.o -MF CMakeFiles/MyProgram.dir/src/main.cpp.o.d -o CMakeFiles/MyProgram.dir/src/main.cpp.o -c /home/s2155437/Desktop/proj3/GeantExample2Part2/src/main.cpp

CMakeFiles/MyProgram.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s2155437/Desktop/proj3/GeantExample2Part2/src/main.cpp > CMakeFiles/MyProgram.dir/src/main.cpp.i

CMakeFiles/MyProgram.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s2155437/Desktop/proj3/GeantExample2Part2/src/main.cpp -o CMakeFiles/MyProgram.dir/src/main.cpp.s

# Object files for target MyProgram
MyProgram_OBJECTS = \
"CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o" \
"CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o" \
"CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o" \
"CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o" \
"CMakeFiles/MyProgram.dir/src/RunAction.cpp.o" \
"CMakeFiles/MyProgram.dir/src/main.cpp.o"

# External object files for target MyProgram
MyProgram_EXTERNAL_OBJECTS =

MyProgram: CMakeFiles/MyProgram.dir/src/ActionInitialization.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/src/DetectorConstruction.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/src/EnergyMomentumFinder.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/src/GeneratorAction.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/src/RunAction.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/src/main.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/build.make
MyProgram: /opt/geant4/lib/libG4Tree.so
MyProgram: /opt/geant4/lib/libG4FR.so
MyProgram: /opt/geant4/lib/libG4GMocren.so
MyProgram: /opt/geant4/lib/libG4visHepRep.so
MyProgram: /opt/geant4/lib/libG4RayTracer.so
MyProgram: /opt/geant4/lib/libG4VRML.so
MyProgram: /opt/geant4/lib/libG4ToolsSG.so
MyProgram: /opt/geant4/lib/libG4OpenGL.so
MyProgram: /opt/geant4/lib/libG4vis_management.so
MyProgram: /opt/geant4/lib/libG4modeling.so
MyProgram: /opt/geant4/lib/libG4interfaces.so
MyProgram: /opt/geant4/lib/libG4mctruth.so
MyProgram: /opt/geant4/lib/libG4geomtext.so
MyProgram: /opt/geant4/lib/libG4gdml.so
MyProgram: /opt/geant4/lib/libG4error_propagation.so
MyProgram: /opt/geant4/lib/libG4readout.so
MyProgram: /opt/geant4/lib/libG4physicslists.so
MyProgram: /opt/geant4/lib/libG4run.so
MyProgram: /opt/geant4/lib/libG4event.so
MyProgram: /opt/geant4/lib/libG4tracking.so
MyProgram: /opt/geant4/lib/libG4parmodels.so
MyProgram: /opt/geant4/lib/libG4processes.so
MyProgram: /opt/geant4/lib/libG4digits_hits.so
MyProgram: /opt/geant4/lib/libG4track.so
MyProgram: /opt/geant4/lib/libG4particles.so
MyProgram: /opt/geant4/lib/libG4geometry.so
MyProgram: /opt/geant4/lib/libG4materials.so
MyProgram: /opt/geant4/lib/libG4graphics_reps.so
MyProgram: /usr/lib/x86_64-linux-gnu/libGL.so
MyProgram: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3
MyProgram: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
MyProgram: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
MyProgram: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
MyProgram: /usr/lib/x86_64-linux-gnu/libXmu.so
MyProgram: /usr/lib/x86_64-linux-gnu/libXext.so
MyProgram: /usr/lib/x86_64-linux-gnu/libXt.so
MyProgram: /usr/lib/x86_64-linux-gnu/libICE.so
MyProgram: /usr/lib/x86_64-linux-gnu/libSM.so
MyProgram: /usr/lib/x86_64-linux-gnu/libX11.so
MyProgram: /usr/lib/x86_64-linux-gnu/libxerces-c.so
MyProgram: /opt/geant4/lib/libG4analysis.so
MyProgram: /usr/lib/x86_64-linux-gnu/libfreetype.so
MyProgram: /usr/lib/x86_64-linux-gnu/libz.so
MyProgram: /usr/lib/x86_64-linux-gnu/libexpat.so
MyProgram: /opt/geant4/lib/libG4intercoms.so
MyProgram: /opt/geant4/lib/libG4global.so
MyProgram: /opt/geant4/lib/libG4clhep.so
MyProgram: /opt/geant4/lib/libG4ptl.so.2.3.3
MyProgram: CMakeFiles/MyProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable MyProgram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyProgram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyProgram.dir/build: MyProgram
.PHONY : CMakeFiles/MyProgram.dir/build

CMakeFiles/MyProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyProgram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyProgram.dir/clean

CMakeFiles/MyProgram.dir/depend:
	cd /home/s2155437/Desktop/proj3/GeantExample2Part2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s2155437/Desktop/proj3/GeantExample2Part2 /home/s2155437/Desktop/proj3/GeantExample2Part2 /home/s2155437/Desktop/proj3/GeantExample2Part2/build /home/s2155437/Desktop/proj3/GeantExample2Part2/build /home/s2155437/Desktop/proj3/GeantExample2Part2/build/CMakeFiles/MyProgram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyProgram.dir/depend

