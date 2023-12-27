#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
/*数据类型*/
int main()
{
#if 0
    /*变量的命名：数字，字母,下划线。只能以字母和下划线开头 */
    /*数据类型对相应的是内存的存储空间*/
    long bigValue = 0;
    int len = sizeof(bigValue);
    printf("len: %d,bigValue = %ld\n", len, bigValue); /*%d就是打印整数*/
    printf("\n");                                      //\n:表示空格
    int a = 6;
    len = sizeof(a); /*整形就是整数*/   /*sizeof是计算字节的大小*/
    printf("len: %d,a = %d\n", len, a); /*%d就是打印整数*/
    printf("hello world!");
#endif
#if 0
    /*浮点数*/
    float weight = 50.5;
    int len = sizeof(weight);
    printf("len:%d, weight = %f\n", len, weight); /*%f就是打印小数/浮点数*/
#endif
#if 0
    double weight = 50.5;
    int len = sizeof(weight);                      // len:返回文本字符串中的字符数
    printf("len: %d, weight = %f\n", len, weight); /*%f就是打印小数/浮点数*/
#endif
#if 0
    char sex = -2;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex); /*%c打印字符*/
#endif
#if 0                       /*无符号 和 有符号的区别*/
    char default_value = 137; // 有符号
    int len = sizeof(default_value);
    printf("len: %d, default_value = %c default_value = %d\n", len, default_value, default_value);

    unsigned char m_value = -1; // 无符号
    int len = sizeof(m_value);
    printf("len: %d, m_value = %d\n", len, m_value);
#endif
#if 1
    // int val = (3 - 5) * 2; /*表达式&运算符*/ /*运算符 + - * / */ /*括号的优先级是最高的，运算符的优先级用括号的限制*/
    // printf("val:%d\n", val);                                     //-4
    int val = 2;
    //val = val + 1; // 3
    val++;         //  val = val + 1;//4
    printf("val++:%d\n", val);
    // /*后置++ --*/
    // val--; // 3
    // printf("val--:%d\n", val);
    // val++; // 4
    // printf("val++: %d\n", val);
    // /*前置++ --*/
    // ++val; // 5
    // printf("++val:%d\n", ++val);
    // --val; // 4
    // printf("--val:%d\n", --val);
    // val = val + 100; // 104
    // printf("val:%d\n", val);
    // val += 100; // val = val + 100;//104+100=204
    // printf("val+=:%d\n", val);
    //-=
    //*=
    //*=

#endif
#if 0
    int m_value = 10;
    int disscuss = m_value / 3;  // 取商：disscuss 3
    int remainder = m_value % 3; // 取余数：remainder 1

    printf("disscuss:%d\n", disscuss);
    printf("remainder:%d\n", remainder);
#endif

#if 0
    /*随机数*/
    int randomVal = rand();
    printf("randomVal:%d\n", randomVal);
#endif
#if 0
    /*中奖率是25%*/
    int randomVal = rand();
    int lotterRate = randomVal % 4; //[0-3]
    printf("lotterRate:%d\n", lotterRate);
#endif
#if 0
    int a = 5 << 1; // 位运算：相当于5*2=10
    printf("a:%d\n", a);
#endif

#if 0
        int a = 51;
        //32+16+2+1
        //2^5+2^4+2^1+2^0
        printf("a:%d\n", a );//51
        a <<= 1; //a = a << 1//51*2=102
        printf("a:%d\n", a );
#endif
#if 0
    /* 或 与 */
    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2; /*同为1才是1 ，其他全是0*/
    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n", andVal);

    /*非*/
    int notVal = !val;
    printf("notVal:%d\n", notVal);
#endif
#if 0
        /*且 或 非*/
       
        int condition1 = 1;//1或0满足条件结果是hello world
        int condition2 = 4;//都不满足条件结果是not hello world
       /*或：只要满足一个条件，就返回1 */
        if ((condition1 == 1 || condition2 == 0)) //||：或 
        {
            printf("hello world\n");
        }       
        else
        {
            printf("not hello world\n");
        }
#endif
#if 0
    /*且： 两边都满足*/
         int condition1 = 1;
         int condition2 = 2;
    if ((condition1 == 1 && condition2 == 0)) //||：或 
        {
            printf("hello world\n");
        }       
        else
        {
            printf("not hello world\n");
        }
#endif
#if 0
    /*运算符：双目运算符 & 三目运算符*/
    /*双目运算符*/
    // int a = 7 + 8
    /* */
    int num1 = 40;
    int num2 = 30;
    /*三目运算符 */
    int num3 = (num1 > num2) ? 100 : 666;
    printf("num3:%d\n", num3);

#endif
    return 0;
}