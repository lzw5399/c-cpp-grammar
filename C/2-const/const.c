/**
 * @Author: lzw5399
 * @Date: 2020/9/16 21:24
 * @Desc: 在 C 中，有两种简单的定义常量的方式：
 * @Desc: 1. 使用 #define 预处理器。
 * @Desc: 2. 使用 const 关键字。
 */
#include <stdio.h>

// 常量的定义方式一
#define CONST1 "ddd"
#define CONST2 233

int main() {
    // 常量的定义方式二
    const double CONST3 = 3.1415;

    printf("%s, %d, %f", CONST1, CONST2, CONST3);

    return 0;
}

