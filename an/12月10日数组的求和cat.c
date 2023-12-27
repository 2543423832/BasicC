#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SHUZU 5
int main() 
{
    int mun[] = {2, 7, 1, 3, 15};
    int target = 10;
    for (int idx = 0; idx < SHUZU - 1; idx++) 
    {
        for (int jdx = idx + 1; jdx < SHUZU; jdx++) 
        {
            if (mun[idx] + mun[jdx] == target) 
            {
                printf("Target sum found at indices [%d, %d]: %d + %d = %d\n", idx, jdx, mun[idx], mun[jdx], target);
                return 0; // 找到一对后停止
            }
        }
    }
    printf("No pair found.\n");    // 没有找到一对
    return 0;
}
