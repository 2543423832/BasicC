#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10 /*宏定义*/
/*数组：1.一段连续的存储空间
        2.它里边存放的数据类型是相同的
   */
int main()
{
        /*方法一: 使用定义即初始化*/

        int array[BUFFER_SIZE] = { 0 };//{ 0 }：初始化数组元素都为零
        //  int array[BUFFER_SIZE];
        for (int  idx = 0; idx < BUFFER_SIZE; idx++)//遍历 //for循环终止条件是：idx < BUFFER_SIZE
        // 使用 for 循环遍历数组
        {
           printf("array[%d]= %d\n", idx, array[idx]);
       }
    int array[BUFFER_SIZE];
    int len = sizeof(array); // 数组元素的长度
    printf("len:%d\n", len);
    /*地址*/
    printf("%p\n", &array[0]);//%p：格式化输出指针地址的格式化字符串 ， 用于输出指针[]元素里的地址
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
    printf("%p\n", &len);
    /*数组的（首）地址 和 数组的首元素的地址是一样的*/
    /*二进制*/
    /*八进制*/
    /*十进制*/
    /*十六进制*/ /*0X34 = 3 *16 ^ 1+ 4* 16 ^ 0= 48 + 4 = 52*/
    /*0 1 2 3 4 5 6 7 8 9 A B C D E F*/
    /*0X0F + 0X01 = 0X10*/

#if 1
    /*清除脏数据*/    
    int array[BUFFER_SIZE] = { 0 };
    memset(array, 0, sizeof(array));//返回一个指向区域s的指针
    printf("==============\n");
    for (int  idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]= %d\n", idx, array[idx]);
    }
#endif

    /*数组的越界访问*/
    /*判断索引的有效性*/
    printf("array[-1]:%d\n",array[-1]);
    printf("array[10]:%d\n",array[10]);

    return 0;
}