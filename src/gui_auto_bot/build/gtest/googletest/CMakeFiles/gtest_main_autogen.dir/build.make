# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build

# Utility rule file for gtest_main_autogen.

# Include the progress variables for this target.
include gtest/googletest/CMakeFiles/gtest_main_autogen.dir/progress.make

gtest/googletest/CMakeFiles/gtest_main_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gtest_main"
	cd /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/gtest/googletest && /usr/bin/cmake -E cmake_autogen /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/gtest/googletest/CMakeFiles/gtest_main_autogen.dir/AutogenInfo.json Debug

gtest_main_autogen: gtest/googletest/CMakeFiles/gtest_main_autogen
gtest_main_autogen: gtest/googletest/CMakeFiles/gtest_main_autogen.dir/build.make

.PHONY : gtest_main_autogen

# Rule to build all files generated by this target.
gtest/googletest/CMakeFiles/gtest_main_autogen.dir/build: gtest_main_autogen

.PHONY : gtest/googletest/CMakeFiles/gtest_main_autogen.dir/build

gtest/googletest/CMakeFiles/gtest_main_autogen.dir/clean:
	cd /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/gtest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main_autogen.dir/cmake_clean.cmake
.PHONY : gtest/googletest/CMakeFiles/gtest_main_autogen.dir/clean

gtest/googletest/CMakeFiles/gtest_main_autogen.dir/depend:
	cd /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot /usr/src/googletest/googletest /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/gtest/googletest /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/build/gtest/googletest/CMakeFiles/gtest_main_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/googletest/CMakeFiles/gtest_main_autogen.dir/depend
