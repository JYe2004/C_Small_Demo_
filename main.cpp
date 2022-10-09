#include <iostream>
#include <cstdio>
#define LEN 9
using namespace std;
int main(void)
{
//    int x,LEN;
//    cout << "How many row you need?" << endl;
//    scanf_s("%d" ,&x);
//
//    LEN = x;

    int index[LEN][LEN];
//    char mid[LEN][LEN];
    int i;
    int j;

//    for (int k = 0; k < LEN; ++k)
//    {
//        for (int l = 0; l < k; ++l)
//        {
//            printf("%c" , mid[k][l]);
//        }
//        putchar('\n');
//    }
    for (int k = 0; k < LEN; ++k)
    {
        for (int l = 0; l < LEN; ++l)
        {
            index[k][l] = 0;
        }
    }

    for ( i = 0; i < LEN; ++i)
    {
//        for (int k = 6 * LEN / 2 + 10; k >= i ; k--)
//        {
//            printf("0");
//        }
//        这里居中的问题在于迭代的不是一个变量！应该用6 * i
//          而不是直接把i作为一倍变量，应该是n倍变量！
        for (int k = 0; k < 26 - 6 * i / 2; ++k)
            //不'/2'的话“k < 26 - 6 * i”这个条件减着减着就会变成负数
            // ，然后条件就恒不成立，然后就不会再打印出’ ‘
        {
            printf("x");
        }
        for ( j = 0; j < i + 1; ++j)
        {
            index[i][j] = 1;
            if (i >= 1) //从第二行开始
//          if (i > 1)也行 -- 从第三行开始
                index[i][j] = index[i - 1][j - 1] + index[i - 1][j];
            printf("%6d" , index[i][j]);
        }
        putchar('\n');
    }

    return 0;
}


/**
#include <cstdio>
#include <iostream>
using namespace std;
#define LEN 6
int main(void)
{
    int index[LEN][LEN];

    for (int i = 0; i < LEN; ++i) {
        for (int j = 0; j < LEN; ++j) {
            index[i][j] = 0;
        }
    }
    for (int i = LEN; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << index[i][j] ;
        }
        putchar('\n');
    }

    return 0;
}
**/
/*
#include <cstdio>
#include <iostream>
using namespace std;
#define LEN 6
int main(void)
{
    int index[LEN][LEN];

    for (int i = 0; i < LEN; ++i) {
        for (int j = 0; j < LEN; ++j) {
            index[i][j] = 0;
        }
    }
    for (int i = LEN; i >= 0 ; i--){
        for (int j = 0; j < i; ++j) {
            printf("9");
        }
        putchar('\n');
    }
    for (int i = 0; i < LEN ; ++i) {
        for (int j = 0; j < i + 1; ++j) {
//            index[i][j] =
            cout << index[i][j];
        }
        putchar('\n');
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
    int data[9][9];//定义一个9行9列的数组
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            data[i][j] = 1;
    }//将数组中的所有数字赋值为1，如思路中1
    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < i; j++)
            data[i][j] =data[i-1][j]+data[i - 1][j - 1];//当前数=上一行的数+上一行前面的数
    }//处理中间数据，如思路中3
    for (int i = 0; i < 9; i++)
    {
        for (int k = 0 ; k < 26 - 6*i / 2; k++)
            printf(" ");//使数据居中显示，如思路中4
        for (int j = 0; j <= i; j++)//j<=i表示仅输出左下角数据，如思路中2
            printf("%6d", data[i][j]);
        printf("\n");//输出数组所有数据
    }
    return 0;
}*/