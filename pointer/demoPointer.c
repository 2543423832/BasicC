#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 10

/*指针*/
int main()
{
#if 1 // 条件编译
    // 1.指针怎么定义
    //基础数据类型
    /*建议(Tips):定义变量（任意类型）记得初始化*/
    int a = 0;
    long b = 0;
    
    /*指针的定义*/
    int *p = NULL;

#endif
#if 1
    /*指针的使用:指针内存存放的是某变量的地址*/
    /*一级 & 二级指针*/
    int a = 5;
    int *p = &a;
    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    /*非常重要*/
    printf("*(&a)%d\n", *(&a));

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&p:%p\n", &p);
#endif
#if 0
/*这个地方不对*/
int *ptr = &p;
    printf("ptr:%p\n", ptr );
#endif
#if 1
    int **ptr = &p;
    printf("ptr :%p\n", ptr);
    printf("*ptr:%p\n", *ptr);
    /*非常非常重要*/
    printf

#endif
#if 1
    /*指针特性:指针占用的内存大小是8个字节（64为操作系统）
    如果是32位的操作系统指针占用的内存大小是4个字节
    */
    int a = 10 ;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    int len = sizeof(p);
    printf("len:%d\n", len);
    
     char *ptr = &p;
     printf("%c\t %d", ptr,*ptr);
     len = sizeof(ptr);
     printf("len:%d\n",len);

     int *ptrInt = &a;
     printf("*(&a):%d\n",*(&a));
     printf("*ptrInt:%d\n",*ptrInt);
     len = sizeof(ptrInt);
     printf("len:%d\n",len);
#endif
#if 1
     /*指针特性2;指针和字符串*/
     /*字符串是区别去字符数组的*/
     char *ptr = "hello world";
     int len = sizeof(ptr);
     printf("len:%d\n",len);//8

    /*Q1:怎么获取字符串的长度*/
    int lenth = strlen(ptr);
    printf("length:%d\n",lenth);
    /*Q2:字符数组的赋值*/
    char name[BUFFER_SIZE] = { 0 };
    //name = "zhanghsan";
    strcpyf(name, "zhamhsan") ;
    printf("name:%s\n",name);
#endif
    /*Q3:我要给字符串赋值  bug. */
    char *ptr = NULL;
#if 0
     //ptr2 = "zhangsan";
#else
    strncpy(ptr, "zhangsan");
#endif
    printf("ptr2:%d\n", ptr);
#if 0
    /*堆空间*/
    /*viod *是一个指针，这个指针被称为万能指针*/
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);

    strncpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);
#endif
    return 0;
}