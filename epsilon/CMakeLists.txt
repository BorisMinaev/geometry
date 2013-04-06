#main things
cmake_minimum_required(VERSION 2.6)
project(Epsilon)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})