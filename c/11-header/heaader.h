/**
 * @Author: lzw5399
 * @Date: 2020/9/17 23:24
 * @Desc: 如果一个头文件被引用两次，编译器会处理两次头文件的内容
 * @Desc: 为了防止这种情况，标准的做法是把文件的整个内容放在条件编译语句中.
 * @Desc: 如下
 */

#ifndef C_CPP_GRAMMAR_HEAADER_H
#define C_CPP_GRAMMAR_HEAADER_H

#include <stdio.h>

static void sayHello(){
    printf("hello from header file!!");
}

#endif //C_CPP_GRAMMAR_HEAADER_H
