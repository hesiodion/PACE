##################################################
# CMAKE Version 
##################################################
cmake_minimum_required (VERSION 3.25)


##################################################
# Project properties
##################################################

# Set the project name
set(PROJ_NAME "PACE")

# Set the project version
set(PROJ_VERSION "0.0.1")

# Set the project description
set(PROJ_DESCRIPTION "'Policy Analysis and Configuration Evaluation' Tools")

# Set the project properties
project(${PROJ_NAME} VERSION ${PROJ_VERSION} DESCRIPTION ${PROJ_DESCRIPTION})

# Set the project C++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set all the source files
file(GLOB SRC_FILES
"${CMAKE_CURRENT_SOURCE_DIR}/sources/src/gui/*.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/src/core/*.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/src/*.cpp"
)

# Set all the header files
file(GLOB HDR_FLES
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/gui/*.h"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/core/*.h"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/common/*.h"
)


##################################################
# QT packages
##################################################

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "%SystemDrive%/Qt/6.8.3/msvc2022_64/lib/cmake")
set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/sources/ui")

file(GLOB UI_FILES 
"${CMAKE_CURRENT_SOURCE_DIR}/sources/ui/*.ui"
)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Widgets UIC)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

qt_wrap_ui(GENERATED_UI_FILES ${UI_FILES})


##################################################
# Project executable
##################################################

# Create the executable
add_executable(${PROJ_NAME} WIN32 ${SRC_FILES} ${HDR_FLES} ${GENERATED_UI_FILES})


##################################################
# Project executable
##################################################

# Set the path to the include files
include_directories(
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/gui/"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/core/"
"${CMAKE_CURRENT_SOURCE_DIR}/sources/inc/common/"
${CMAKE_BINARY_DIR}
)

# Link the Qt libraries to the project
target_link_libraries(${PROJ_NAME} PRIVATE Qt6::Widgets Qt6::Core Qt6::Core Qt6::Gui)