/**
 * @Author: lzw5399
 * @Date: 2020/9/18 22:08
 * @Desc:C++ 提供了以下两种类型的字符串表示形式：
 * @Desc: 1. C 风格字符串
 * @Desc: 2. C++ 引入的 string 类类型
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    // 1. c风格的字符串
    char str1[] = "学海无涯";

    // 2. cpp引入的string，需要依赖string包
    string str2 = "我想打游戏";
    const int l = str2.length();

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int si = txt.size();
    cout << "str1=" << str1 << "\nstr2=" << str2 << endl;
    cout << "str2的字节长度为:" << str2.length() << endl;
}

