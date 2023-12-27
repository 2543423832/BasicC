#include <stdio.h>
#define BUFFER_SIZE 6
int main()
{
        int array [] = {2, 3, 1, 7, 5, 2};
        int pos = 0;
        for (int idx = 1; idx < BUFFER_SIZE -1 ; idx++)
        {
            if (array[idx] != array[idx - 1])
            {
                array[pos] = array [idx];
                pos++;
            }
        }
        for (int  jdx = 0; jdx < pos; jdx++)
        {
            printf("%d\t", array[jdx]);
        }
        printf("\n");
    return 0;
}


