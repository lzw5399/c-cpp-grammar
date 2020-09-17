/**
 * @Author: lzw5399
 * @Date: 2020/9/17 21:56
 * @Desc: 1. 指向函数的指针
 * @Desc: 2. 回调函数
 */

#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    // 定义一个指向函数的指针
    int (*p)(int x, int y) = max;

    int a, b, c;
    printf("请输入三个数字\n");
    scanf("%d %d %d", &a, &b, &c);

    int d = p(p(a, b), c);
    printf("最大的数字是:%d", d);

    return 0;
}
