#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 30
int main()

{
#if 0
    char array[BUFFER_SIZE];
    memset(array,  0, sizeof(array));
    int len  =  sizeof(array);
    printf("len:%d\n",len);
#endif
#if 0
    char array[BUFFER_SIZE] = "hello world";
    int len = sizeof(array);
    printf("len:%d, array:%s\n", len, array);
#endif
#if 1
    char array1[BUFFER_SIZE] = "hello world";
    /*strlen*/ // 字符长度不包括\0;
    int len = strlen(array1);
    printf("len:%d\n", len);
    /*strcpy：复制字符串包括\0*/
    char name2[BUFFER_SIZE];
    memset(name2, 0, sizeof(name2));
    strcpy(name2, "zhangSan");
    printf("name:%s\n", name2);
#if 0
    /*strcat: 连接字符串*/
    strcat(name, " is am boy ");
    printf("name:%s\n",name);
#endif
    /*strcmp：比较两个字符串的大小 */
    char name1[BUFFER_SIZE] = "zhangsan";
    int ret = strcmp(name2,name1 );
    printf("ret:%d\n",ret);
#endif
#if 1
    char *ptr = "hello world";
    int len = srelen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n",len);
    printf("size:%d\n",size);
#endif
    return 0;
}