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
CMAKE_BINARY_DIR = /home/roman/qt_ROS_projects/autobot/src/build

# Include any dependencies generated for this target.
include CMakeFiles/auto_bot_gui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/auto_bot_gui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/auto_bot_gui.dir/flags.make

auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/images.qrc
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: CMakeFiles/auto_bot_gui_autogen.dir/AutoRcc_images_PNK5WDWK6L_Info.json
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/strelka.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/Forward.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/back.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/wIcon.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/left_rotate.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/rolik.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/res/right_rotate.png
auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp: /usr/lib/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for res/images.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles/auto_bot_gui_autogen.dir/AutoRcc_images_PNK5WDWK6L_Info.json Debug

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o: auto_bot_gui_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/mocs_compilation.cpp

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/mocs_compilation.cpp > CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.i

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/mocs_compilation.cpp -o CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.s

CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/extendedscene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/extendedscene.cpp

CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/extendedscene.cpp > CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.i

CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/extendedscene.cpp -o CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.s

CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/graphicsrobitem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/graphicsrobitem.cpp

CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/graphicsrobitem.cpp > CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.i

CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/graphicsrobitem.cpp -o CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.s

CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/iteminputinfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/iteminputinfo.cpp

CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/iteminputinfo.cpp > CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.i

CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/iteminputinfo.cpp -o CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.s

CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/jsonmodule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/jsonmodule.cpp

CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/jsonmodule.cpp > CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.i

CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/jsonmodule.cpp -o CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.s

CMakeFiles/auto_bot_gui.dir/main.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/main.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/auto_bot_gui.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/main.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/main.cpp

CMakeFiles/auto_bot_gui.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/main.cpp > CMakeFiles/auto_bot_gui.dir/main.cpp.i

CMakeFiles/auto_bot_gui.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/main.cpp -o CMakeFiles/auto_bot_gui.dir/main.cpp.s

CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/mainwindow.cpp

CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/mainwindow.cpp > CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.i

CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/mainwindow.cpp -o CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.s

CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/manualremotecontroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/manualremotecontroller.cpp

CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/manualremotecontroller.cpp > CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.i

CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/manualremotecontroller.cpp -o CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.s

CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/qcustomplot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/qcustomplot.cpp

CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/qcustomplot.cpp > CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.i

CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/qcustomplot.cpp -o CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.s

CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o: /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/serialportdialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/serialportdialog.cpp

CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/serialportdialog.cpp > CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.i

CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot/serialportdialog.cpp -o CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.s

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o: CMakeFiles/auto_bot_gui.dir/flags.make
CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o: auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o -c /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp > CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.i

CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roman/qt_ROS_projects/autobot/src/build/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp -o CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.s

# Object files for target auto_bot_gui
auto_bot_gui_OBJECTS = \
"CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/main.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o" \
"CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o"

# External object files for target auto_bot_gui
auto_bot_gui_EXTERNAL_OBJECTS =

devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/mocs_compilation.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/extendedscene.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/graphicsrobitem.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/iteminputinfo.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/jsonmodule.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/main.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/mainwindow.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/manualremotecontroller.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/qcustomplot.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/serialportdialog.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp.o
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/build.make
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/libroscpp.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/librosconsole.so
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/librosconsole_log4cxx.so
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/librosconsole_backend_interface.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/libxmlrpcpp.so
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/libroscpp_serialization.so
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/librostime.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /opt/ros/noetic/lib/libcpp_common.so
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.12.8
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libQt5SerialPort.so.5.12.8
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
devel/lib/auto_bot_gui/auto_bot_gui: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
devel/lib/auto_bot_gui/auto_bot_gui: CMakeFiles/auto_bot_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable devel/lib/auto_bot_gui/auto_bot_gui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/auto_bot_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/auto_bot_gui.dir/build: devel/lib/auto_bot_gui/auto_bot_gui

.PHONY : CMakeFiles/auto_bot_gui.dir/build

CMakeFiles/auto_bot_gui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/auto_bot_gui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/auto_bot_gui.dir/clean

CMakeFiles/auto_bot_gui.dir/depend: auto_bot_gui_autogen/PNK5WDWK6L/qrc_images.cpp
	cd /home/roman/qt_ROS_projects/autobot/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot /home/roman/qt_ROS_projects/autobot/src/gui_auto_bot /home/roman/qt_ROS_projects/autobot/src/build /home/roman/qt_ROS_projects/autobot/src/build /home/roman/qt_ROS_projects/autobot/src/build/CMakeFiles/auto_bot_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/auto_bot_gui.dir/depend

