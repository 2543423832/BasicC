#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 15
int main()
{
    char array[BUFFER_SIZE] = "hello world";
    int len = strlen(array);
    printf("len:%d\n", len);
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan" );
    printf("name:%s\n", name);

    return 0;
}