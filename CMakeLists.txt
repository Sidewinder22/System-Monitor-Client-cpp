cmake_minimum_required(VERSION 3.20)

project(system-monitor-client VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(src)
