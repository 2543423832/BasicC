#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 5
//void task ()

//int main(int argc, const char * argv[])
int main()
{ 
#if 1
/*作业1*/
    int array1 [BUFFER_SIZE] = {1, 2, 3, 4, 5};
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array1[%d] = %d\n", idx, array1[idx]);
    }
    
    char array2[BUFFER_SIZE] =  { 'a', 'b', 'c', 'd', 'e' };
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %d\n", idx, array2[idx]);
    }
    printf("\n");

    char *array3[BUFFER_SIZE] =  { "hello", "world", "zhangsan", "nihao", "china" };
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array3[%d] = %s\n", idx, array3[idx]);
    }
    /*将数组array3排序*/
#endif  
    return 0;
}