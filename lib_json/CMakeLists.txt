cmake_minimum_required(VERSION 2.8)

SET( CMAKE_CXX_FLAGS "-std=c++11 -O3")

aux_source_directory(. DIR_WORLD_SRCS)

add_library(lib_json ${DIR_WORLD_SRCS})


