/**
 * @Author: lzw5399
 * @Date: 2020/9/16 21:43
 * @Desc: 存储类定义 C 程序中变量/函数的范围（可见性）和生命周期
 * @Desc: auto: auto存储类是所有局部变量默认的存储类。auto 只能用在函数内，即 auto 只能修饰局部变量
 * @Desc: register: register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。寄存器只用于需要快速访问的变量，比如计数器
 * @Desc: static: 静态的
 * @Desc: extern: 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置
 */

#include <stdio.h>

// 全局变量加不加static的区别 https://www.cnblogs.com/gzy-zju-edu/articles/4029902.html
int globalVar2 = 233;
static int globalVar = 233;

int main() {
    {
        // int a默认给加上了auto，即【int a】=【auto int a】
        int a = 1;
        auto int b = 2;
    }
    int a = 122;
    printf("%d", a);

    return 0;
}