cmake_minimum_required(VERSION 3.17)
project(c_cpp_grammar)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello C/1-bytes/hello.c)
add_executable(const C/2-const/const.c)
add_executable(storage-class C/3-storage-class/storage-class.c)
