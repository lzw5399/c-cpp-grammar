/**
 * @Author: lzw5399
 * @Date: 2020/9/16 23:04
 * @Desc: 枚举
 */

#include <stdio.h>

enum Week {
    MON = 1,
    TUE,
    WED,
    TUR,
    FRI,
    SAT,
    SUN
};

// 循环遍历输出Week enum
void loopWeek() {
    for (enum Week w = MON; w <= SUN; w++) {
        printf("\n循环遍历输出Week enum： %u", w);
    }
}

int main() {
    enum Week currentDay;

    printf("print the 1-7, and will mapping to the Week enum\n");

    scanf("%u", &currentDay);

    switch (currentDay) {
        case MON:
            printf("current week is MON");
            break;

        case TUE:
            printf("current week is TUE");
            break;

        case WED:
            printf("current week is WED");
            break;

        case TUR:
            printf("current week is TUR");
            break;

        case FRI:
            printf("current week is FRI");
            break;

        case SAT:
            printf("current week is SAT");
            break;

        case SUN:
            printf("current week is SUN");
            break;

        default:
            printf("default???");
            break;
    }


    // 将整数转为enum
    enum Week c = (enum Week) 6;
    printf("\n转换之后的enum=%u", c);

    // 循环遍历输出Week enum
    loopWeek();

    return 0;
}


