# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vlad/programming/roman/autobot/src/gui_auto_bot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build

# Utility rule file for auto_bot_gui_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/auto_bot_gui_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/auto_bot_gui_autogen.dir/progress.make

CMakeFiles/auto_bot_gui_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/vlad/programming/roman/autobot/src/gui_auto_bot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target auto_bot_gui"
	/opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E cmake_autogen /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build/CMakeFiles/auto_bot_gui_autogen.dir/AutogenInfo.json Debug

auto_bot_gui_autogen: CMakeFiles/auto_bot_gui_autogen
auto_bot_gui_autogen: CMakeFiles/auto_bot_gui_autogen.dir/build.make
.PHONY : auto_bot_gui_autogen

# Rule to build all files generated by this target.
CMakeFiles/auto_bot_gui_autogen.dir/build: auto_bot_gui_autogen
.PHONY : CMakeFiles/auto_bot_gui_autogen.dir/build

CMakeFiles/auto_bot_gui_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/auto_bot_gui_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/auto_bot_gui_autogen.dir/clean

CMakeFiles/auto_bot_gui_autogen.dir/depend:
	cd /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vlad/programming/roman/autobot/src/gui_auto_bot /Users/vlad/programming/roman/autobot/src/gui_auto_bot /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build /Users/vlad/programming/roman/autobot/src/gui_auto_bot/build/CMakeFiles/auto_bot_gui_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/auto_bot_gui_autogen.dir/depend

