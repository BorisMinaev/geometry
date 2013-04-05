#main things
cmake_minimum_required(VERSION 2.6)
project(GMPTest)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

# c++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")


SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMake/Modules)

find_package(GMP REQUIRED)
#include_directories(include ${GMP_INCLUDE_DIR})
include_directories(${GMP_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${GMP_LIBRARIES})