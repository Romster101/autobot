cmake_minimum_required(VERSION 3.0.2)
project(auto_bot_gui)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 CONFIG REQUIRED Core Widgets Gui PrintSupport SerialPort)
include_directories(${catkin_INCLUDE_DIRS})

 

###########
## Build ##
###########

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  # ${CMAKE_CURRENT__BYNARY_DIR}
)

file(GLOB CPPFILE "*.cpp")

message("Adding ${PROJECT_NAME} CPP files: " )
foreach(source ${CPPFILE})
    message("  - " ${source})
endforeach(source)


file(GLOB HFILE "*.h")

message("Adding ${PROJECT_NAME} H files: " )
foreach(source ${HFILE})
    message("  - " ${source})
endforeach(source)


file(GLOB UIFILE "*.ui")

message("Adding ${PROJECT_NAME} UI files: " )
foreach(source ${UIFILE})
    message("  - " ${source})
endforeach(source)

message("buliding ${PROJECT_NAME} node: ")

set(QRCFILE res/images.qrc)

add_executable(
    ${PROJECT_NAME} 
    ${CPPFILE}
    ${HFILE}
    ${UIFILE}
    ${QRCFILE}
    )

target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} Qt5::Widgets Qt5::PrintSupport Qt5::SerialPort)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
