#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10
/*内存泄漏
1.野指针
2.melloc出的堆空间 没有被释放
3.踩内存（read 、 write is invalid，）
*/
int main()
{
    /*Q1. 什么情况下会导致内存泄漏*/
    // case 1:野指针
#if 1
    int a = 0;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int  idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t",array[idx]);
    }
#endif
#if 0
    /* 极度危险的函数 该用strncpy*/
     strcpy(ptr, "hello world");
    char *P;// p = ox3782461278
    printf("\n");
#else
    /* 使用安全 */
    //strncpy(ptr, "hello worldgergrt", BUFFER_SIZE -1);
#endif
    // case2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if (!ptr)
    {
        /*to do...*/
        /*状态码*/
        return -1;
    }
    /*使用malloc分配的空间，数据是脏的（脏数据）*/
    memset (ptr, 0, sizeof(char) * BUFFER_SIZE);
   
    printf("ptr:%s\n", ptr);
    if (ptr != NULL);
    {
        free (ptr);
        ptr = NULL;
    }
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    
    free(ptr);
    free(ptr);
    return 0;
}