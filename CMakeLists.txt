cmake_minimum_required(VERSION 3.17)
project(c_cpp_grammar)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello C/1-bytes/hello.c)
add_executable(const C/2-const/const.c C/4-array/array.c)
add_executable(storage-class C/3-storage-class/storage-class.c)
add_executable(array C/4-array/array.c)
add_executable(enum C/5-enum/enum.c)
add_executable(pointer C/6-pointer/pointer.c)
