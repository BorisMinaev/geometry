#main things
cmake_minimum_required(VERSION 2.6)
project(GoogleTest)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})


# google test
enable_testing()
find_package (Threads)
message(STATUS GTEST_ROOT=$ENV{GTEST_ROOT})
include_directories($ENV{GTEST_ROOT}/include)
link_directories($ENV{GTEST_ROOT}/mybuild)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

# c++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")


# boost
find_package(Boost COMPONENTS chrono system)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})