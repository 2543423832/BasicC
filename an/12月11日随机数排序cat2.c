#include <stdio.h>
#include <string.h>
#define BUFFER_SIDE 8
int main()
{
    int num, idx, temp;
    int array [BUFFER_SIDE]= {7,1,4,9,2,3,11,6};
    for (int num = 0; num < BUFFER_SIDE; num++)//外循环轮数
    {   
        for (int idx = 0; idx < BUFFER_SIDE - 1 - num; idx++)//内循环次数
        {
           if (array[idx] > array[idx + 1])//判断交换的条件
           {
            int temp = array[idx];
            array[idx] = array[idx + 1];
            array[idx + 1] = temp ;
           }  
        }
    }
    for (int jdx = 0; jdx < BUFFER_SIDE; jdx++)//打印遍历
    {                                                                                                                                                             
        printf("%d\t",array[jdx]);
        
    }
    return 0;
}