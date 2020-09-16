/**
 * @Author: lzw5399
 * @Date: 2020/9/16 23:29
 * @Desc: 指针
 */

#include <stdio.h>

void nullPointerDemo();

int main() {
    // 1. 正常指针演示
    int var1 = 233;
    int *pointer = &var1;
    printf("var1变量地址=%p, 指针占用的字节数=%llu\n", &var1, sizeof(&var1));
    printf("var1变量地址=%p, 指针占用的字节数=%llu\n", pointer, sizeof(pointer));
    printf("指针指向的原值=%d\n", *pointer);

    // 2. 空指针演示
    nullPointerDemo();

    return 0;
}

// 空指针演示
void nullPointerDemo() {
    int *nullP = NULL;
    printf("当前空指针的地址是:%p\n", nullP);// 打印:0x0

    // 检测是否空指针
    if (!nullP) {
        printf("当前指针为空\n");
    }
}
