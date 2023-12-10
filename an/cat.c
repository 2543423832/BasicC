#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int mun[] = {2, 7, 1, 3, 15};
    int target = 10;
    srand(time(NULL));
    int randomNum = 0;
    int rember = 5;
    for (int idx = 0; idx < 5; idx++)
    {
        int randomNum = rand() %  rember + 1; 
        printf("randomNum:%d\n", randomNum);
    }
    for (int idx = 0; idx < 1; idx++)
    {
        printf("idx:%d\n", idx);
        for (int num = 0; num < 5; num++)
        {
            printf("num:%d\n", mun[num]);
        }
        if (target == mun[1] + mun[3])
        {
            printf("target:%d\n", target);
        }
    }

    return 0;
}