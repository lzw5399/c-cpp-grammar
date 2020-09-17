/**
 * @Author: lzw5399
 * @Date: 2020/9/17 22:19
 * @Desc: 结构体 & 结构体指针
 * @Desc: 结构体指针访问成员的方式为 &book -> title
 */

#include <stdio.h>
#include <string.h>

struct Person {
    char Name[10];
    int Gender;
    int Age;
};

int main() {
    // 1. 实例化结构体
    struct Person tom = {"Tom", 1, 24};
    printf("Name=%s,Gender=%d,Age=%d\n", tom.Name, tom.Gender, tom.Age);

    // 2. 新定义一个结构体的同时实例化
    struct Job {
        char JobName[20];
    } coder = {"init"};

    // 3. 修改字符串要引入string.h包，并使用strcpy方法
    strcpy(coder.JobName, "qaq");
    printf("字符串要这么修改，修改后的值:%s\n", coder.JobName);

    // 4. 结构体指针访问成员的方式
    struct Job *jPointer = &coder;
    char accessName[20];
    strcpy(accessName, jPointer->JobName);
    printf("访问到的值为: %s", accessName);

    return 0;
}