﻿// cross mutiply.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    int b = 0, c = 0;
    int i, j;
    //printf("model1:x^2±b±c\n");
    //printf("model2:ax^2±b±c\n");
    printf("input b\n");
    scanf_s("%d", &b);
    if (b != 0)
        printf("input c\n");
    scanf_s("%d", &c);
    if (b != 0)
        printf("ok\n");
    for (i = -999; i < 999; i = i + 1)
    {
        //printf("first circle\n");
        for (j = -999; j < 999; j = j + 1)
        {
            //printf("j = %d\n",j);
            if (i + j == b) {
                //printf("1\n");
                if (i * j == c)
                    printf("(x+%d)(x+%d)\n", i, j);
            }
        }
    }
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
