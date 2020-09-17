#include <stdio.h>
#include <limits.h>

int add(int i, int i1);

int main() {
    // 整形
    printf("int占用字节数, %llu \n", sizeof(int)); // 根据计算机的操作系统，有可能是short或者long
    printf("unsigned int占用字节数, %llu \n", sizeof(unsigned int));// 根据计算机的操作系统，有可能是unsigned short或者unsigned long
    printf("short占用字节数, %llu \n", sizeof(short));
    printf("long占用字节数, %llu \n", sizeof(long));

    // 浮点型
    printf("float占用字节数, %llu \n", sizeof(float));
    printf("double占用字节数, %llu \n", sizeof(double));
    printf("long double占用字节数, %llu \n", sizeof(long double));

    // 布尔：全零为真。否则为假
    _Bool b1 = 1;
    int bo = 1;
    bo = "ewew";
    if (bo && b1) {
        printf("。。。\n");
    }

    bo = "0";
    if (bo) {
        printf("这尼玛也行？\n");
    }

    int sum = add(2, 3);
    printf("%d", sum);

    return 0;
}

// 方法
int add(int num1, int num2) {
    return num1 + num2;
}