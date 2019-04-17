#CMakeLists.txt
cmake_minimum_required(VERSION 2.8)

PROJECT(jsoncpp_test)

SET( CMAKE_CXX_FLAGS "-std=c++11 -O3")

include_directories(./ ./lib_json )#添加多目录的路径

# Add block directories
add_subdirectory(lib_json)#添加hello文件夹中的hello库

ADD_EXECUTABLE(jsoncpp_test main.cpp )

target_link_libraries(jsoncpp_test lib_json)#将多目录下的hello库和world库链接上可执行文件helloworld.o
