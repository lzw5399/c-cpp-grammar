/**
 * @Author: lzw5399
 * @Date: 2020/9/16 22:51
 * @Desc: 数组
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 5, 6};

    // 获取数组长度
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}


