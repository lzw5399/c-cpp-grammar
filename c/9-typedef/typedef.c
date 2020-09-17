/**
 * @Author: lzw5399
 * @Date: 2020/9/17 23:01
 * @Desc: typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
 * @Desc: typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
 */

#include <stdio.h>

struct OriginModel {
    int Prop;
};

typedef struct OriginModel Alias;

int main() {
    Alias model;
    model.Prop = 3;

    printf("%d", model.Prop);
    return 0;
}

