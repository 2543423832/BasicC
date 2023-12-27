#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*状态码*/
enum STATUS_CODE
{
    REDIRECT = 1,
    LOGIN = 2,
    QUIT = 3,
};
/*宏定义*/
/*代码规范：宏必须全部大写*/
#define COUNT_NUM 5  // 循环次数//循环次数的常量
#define RANGE_NUM 20 // 随机数范围的常量
int main()
{
#if 1
    /*判断语句*/
    int budget = 5000;
    int applephone = 8999;
    int mi14Pro = 6399;
    int huaweiP60 = 4000;
    if (budget > applephone) // if循环：判断条件，如果第一个条件不成立，接着判断第二个条件是否成立，以此类推
    {
        printf("get a applephone!\n");
    }
    else if (budget > mi14Pro) // else if :用于在多个条件之间选择一个满足的条件，在前面的条件为假时进行检查。
    {
        printf("get a mi14Pro\n");
    }
    else if (budget > huaweiP60) // else if :用于在多个条件之间选择一个满足的条件，在前面的条件为假时进行检查。
    {
        printf("get a huaweiP60\n");
    }

#endif
#if 1
    int budget = 5000;
    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000;
    int minbudget = 4000;
    int maxbudget = 9000;
    /*只要有一个条件被满足，那么就为1(成立)*/
    if (budget < applephone || budget > mi14Pro) //||:或
    {
        printf("i am happy, get a phone\n");
    }
    else // else：用于在前面的所有条件都为假时执行默认的代码块
    {
        printf("i am sad, no  phone\n");
    }
    /*&& 1=0*/
    /*&&两边都是1 （成立）才是1*/
    if ((minbudget < budget) && (budget < maxbudget)) //&&:与
    {
        printf("success get a compter\n");
    }
    else // 两个条件用
    {
        printf("error get a phone\n");
    }
#endif
    /*代码规范1：一个函数尽量不要超过80行 最多不要超过120行.*/

#if 1
    /*swith表示开关的意思：多分支选择（if）语句*/
    /*坑1：每一个case都需要有break*/
    int choice = 0;
    printf("请输入你的选项");
    scanf("%d", &choice); //&:取地址符
    switch (choice)
    {
    case REDIRECT:
        /*坑2：如果case里边的语句过多，一定需要加上{}来包含*/
        printf("welcome to 1 city\n");
        break;
    case LOGIN:
        printf("welcome to 2 city\n");
        break;
    case QUIT:
        printf("welcome to 3 city\n");
        break;
    default:
        printf("input choice invalid\n");
        break;
    }
#endif
#if 1
    /*请你写一个100以内的[0-100]*/
    /*循环*/
    /*for 循环*/
    /*代码规范:循环不允许使用i*/
    /*代码规范:不允许使用魔鬼数字*/
    // int randomNum = 0;
    for (int idx = 0; idx < COUNT_NUM; idx++)
    {
        int randomNum = rand() % RANGE_NUM + 1; // rand():返回一个介于0和RAND_MAX之间的随机整数。
        printf("randomNum:%d\n", randomNum);
    }

#endif
#if 1
    srand(time(NULL)); // 初始化随机数生成器的种子
    /*编码规范：变量尽量使用驼峰式命令*/
    int circuleTimes = COUNT_NUM >> 1; //>>:即右移一位（相当于除以2），这将导致循环次数减半
    int randomNum = 0;
    /*一定有需要推出的条件*/
    while (circuleTimes--) // 每次循环时，的值会减1，并且循环将一直执行直到的值变为0
    {
        randomNum = rand() % RANGE_NUM + 1; // rand() :生成随机数
        printf("randomNum:%d\n", randomNum);
    }

#endif
#if 1
    // do while 循环：先运行后判断
    int varaNum = 0; // 初始化一个整型变量 varaNum，赋值为 0
    do
    {
        printf("varaNum:%d\n", varaNum); // 输出 varaNum 的值到控制台
    } while (varaNum);                   // 执行 do-while 循环，循环条件是 varaNum 的值

#endif

    return 0;
}
