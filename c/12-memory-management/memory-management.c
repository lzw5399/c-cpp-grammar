/**
 * @Author: lzw5399
 * @Date: 2020/9/17 23:28
 * @Desc: 内存管理 malloc free
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char name[50];
    char *description;

    strcpy(name, "米奇妙妙屋");

    // 动态分配内存
    description = (char *) malloc(200 * sizeof(char));

    if (description == NULL) {
        printf("assign memory failed!");
    } else {
        strcpy(description, "这是一个描述");
    }

    printf("NAME=%s\n", name);
    printf("DESCRIPTION=%s\n", description);

    // 释放内存
    free(description);

    return 0;
}
