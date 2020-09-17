/**
 * @Author: lzw5399
 * @Date: 2020/9/17 23:11
 * @Desc: 宏
 */

#include <stdio.h>

int main() {

    // 主要演示一些预定义的宏
    printf("预定义宏之 当前日期为:%s\n",__DATE__);
    printf("预定义宏之 当前时间为:%s\n",__TIME__);
    printf("预定义宏之 当前时间戳为:%s\n",__TIMESTAMP__);
    printf("预定义宏之 当前文件名为:%s\n",__FILE__);
    printf("预定义宏之 当前行号为:%d\n",__LINE__);
    printf("预定义宏之 当编译器以 ANSI 标准编译时，则定义为1，结果是:%d\n",__STDC__);

    return 0;
}

