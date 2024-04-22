# CMAKE Version
cmake_minimum_required (VERSION 3.25)

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


# Create the executable
add_executable(${PROJ_NAME} "src/Pace.cpp")