#include <stdio.h>

/*它也是常量*/
const int g_num = 10; // const：定义一个不可变的常量
int main()
{
    /*字符数组初始化定义的两种方式*/
    char buffer1[] = "hello world";
    buffer1[0] = 'H';//数组中第一个元素下标从零开始
    printf("buffer1:%s\tbuffer[0]:%c\n", buffer1, buffer1[0]); //\t:制表符

    char *ptr = "helloworld";//字符型指针变量ptr，ptr保存的是字符串首元素的地址
    printf("ptr[0]:%c\t*(ptr + 1):%c\n", ptr[0], *(ptr + 1)); // ptr [0]数组的首字符0//%c输出一个字符
    /*为什么字符串不能改   因为字符串是常量。它也是存放在全局区*/
    //ptr[0] = 'H';//段错误进入gdb调节
    printf("ptr[0]:%c\n", ptr[0]);

    return 0;
}