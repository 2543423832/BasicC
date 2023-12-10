#include <stdio.h>
#define BUFFER_SIZE 10
int main()
{
#if 1
    /*如何获取数组有多少元素：数组的总长度/ 每个元素的长度*/
    long array[BUFFER_SIZE] = { 0 };
    int arraylen = sizeof (array);
    printf("len:%d\n",arraylen);
    int elementlen = sizeof(array[1]);
    printf("len:%d\n",elementlen);

    int length = arraylen / elementlen;
     printf("length:%d\n",length);
#endif
#if 1
   /*字符数组*/
   /*Q1:什么叫字符？*/
   char pNUM = 'a';
   printf("pNUM:%c\n",pNUM) ;//%c：字符
   /*只要是指针的变量，变量定义第一个需要是p开头*/
   char * ptr = "hello world";//指针指向字符串里的地址
   printf("ptr:%s\n", ptr);//%s输出字符串
   char buffer[] = {'h', 'e','l', 'l','o', 'w', 'o', 'r', 'l', 'd' };//buffer[]：数组
   int buflen = sizeof(buffer);//数组元素的长度
   printf("buflen:%d\n", buflen);//数组的长度：字节乘以字符串的数量 char字节为1 字符串个数为10 数组大小=1乘10=10
#endif
#if 1
   /* 字符数组初始化定义的两种方式*/
   char buffer1[] = "helloworld";
   /*如果是以双引号（字符串）的方式 默认加上\0*/
   char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
   /*如果以单引号（字符）的方式 默认不会加'0'*/
   char buffer3[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
   int buflen1 = sizeof(buffer1);
   int buflen2 = sizeof(buffer2);
   printf("&buffer1 :%p\n", buffer1); //&：取地址符号
   printf("&buffer2 :%p\n", buffer2); //%p:输出的是地址
   printf("&buflen3:%p\n", buffer3);

   printf("buflen1:%d,\tbuflen2:%d\n", buflen1, buflen2); //\t:控四个字符
   printf("buffer1:%s\n,", buffer1);                      // %s 打印字符串
   printf("buffer2:%s\n,", buffer2);
   printf("buffer3:%s\n,", buffer3);
#endif
   return 0;
}