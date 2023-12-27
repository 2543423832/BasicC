#include <stdio.h>
#define SHUZU 8

int main()
 {
    int array[] = {1, 1, 2, 3, 7, 9, 9, 11};
    int pos = 1;
    for (int idx = 1; idx < SHUZU; idx++)
    {
        if (array[idx] != array[idx - 1])
        {
            array [pos] = array [idx];
            pos++;
        }  
    }
    for (int num = 0; num < pos; num++)
     {
        printf("%d ", array[num]);
    }
    printf("\n");
    return 0;
}
