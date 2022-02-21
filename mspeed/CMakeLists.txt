cmake_minimum_required(VERSION 3.20)

project(mspeed)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
 ${PROJECT_SOURCE_DIR}/../bin
)

set(SOURCE_FILES
 mspeed.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})