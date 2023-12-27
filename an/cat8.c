#include <stdio.h>
#define BUFFER_SIZE 6
int main()
{
        int array [] = {1, 2, 2, 1, 3, 4};
        int pos = 1;
        for (int idx = 1; idx < BUFFER_SIZE  ; idx++)
        {
            if (array[idx] != array[idx - 1])
            {
                array[pos] = array [idx ];
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
