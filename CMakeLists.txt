cmake_minimum_required(VERSION 3.17)
project(c_cpp_grammar)

set(CMAKE_CXX_STANDARD 11)

#cpp
add_executable(cpp-hello cpp/1-hello/hello.cpp)
add_executable(cpp-string cpp/2-string/string.cpp)

#c
add_executable(c-hello c/1-bytes/hello.c)
add_executable(c-const c/2-const/const.c c/4-array/array.c)
add_executable(c-storage-class c/3-storage-class/storage-class.c)
add_executable(c-array c/4-array/array.c)
add_executable(c-enum c/5-enum/enum.c)
add_executable(c-pointer c/6-pointer/pointer.c)
add_executable(c-func-pointer c/7-func-pointer/func-pointer.c)
add_executable(c-struct c/8-struct/struct.c)
add_executable(c-typedef c/9-typedef/typedef.c)
add_executable(c-macro c/10-macro/macro.c)
add_executable(c-header-invoker c/11-header/header-invoker.c)
add_executable(c-memory c/12-memory-management/memory-management.c)
