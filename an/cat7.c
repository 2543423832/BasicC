#include <stdio.h>
#include <string.h>

int main()
 {
    char array[] = "hello world";
    int len = sizeof(array) / sizeof(array[0]);
    printf("Size of the array: %d\n", len);
    size_t slen = strlen(array);//size_t是全局定义的类型; size_type是STL类中定义的类型属性，用以保存任意string和vector类对象的长度size_t是全局定义的类型; 
    printf("Length of the string: %zu\n", slen);
 
    return 0;
}
