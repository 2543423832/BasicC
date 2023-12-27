#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10
#define BUFFER_OFFSET 100
/*函数
1. 函数参数   
需求实现两个数的交换
*/
/*值传递*/
#if 0
void swapSurfaceData(int val1, int val2)
{
    int temp = val1;
    val1 =val2;
    val2 = temp;
    printf("after:val1:%d val2:%d\n",val1,val2);

}

#endif
#if 0
/*地址传递*/
void swapRealData(int *val1, int *val2)
{
    int tempdate = *val1;       //*（&num1)
    *val1 =*val2;              // *(&num1) = *(&num2)
    *val2 = tempdate;         //*（&num2) = tempdate
    printf("after:val1:%d val2:%d\n",val1,val2);
}
#endif
/*数组做函数会自动弱化为指针*/
void  printArray(int *array, int numSize)
{
    int elemenNum = sizeof(array) / sizeof(array[0]);
    for (int idx = 1; idx < numSize ; idx++)
        {
           printf("array[%d]= %d\t",idx,array[idx]);
        }
}
int main()
{   
#if 0
    int num1 = 100;
    int num2 = 200;
   // swapSurfaceData(num1,num2);

    // int a = 5;
    // int *p = &a;
    // *p = 200;
    
    swapRealData( &num1, &num2);

    printf("num1:%d num2: %d\n",num1,num2);
#endif
#if 1
    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elemenNum = sizeof(array) / sizeof(array[0]);
    printf("len:%d\n",elemenNum);
    for (int idx = 1; idx < elemenNum ; idx++)
        {
           array[idx] = idx + BUFFER_OFFSET;
        }

        printArray(array,elemenNum);
      
        printf("\n");
#endif

    return 0;
}