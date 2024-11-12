/*****************************************************************************
 * | @file    : main.c
 * | @author  : liubo
 * | @version : V1.0.0
 * | @date    : 2024-09-01
 * --------------
 * | @brief   : main
 ******************************************************************************/
#include <iostream>  // 包含输入和输出操作
#include <stdio.h>   // C语言的标准库，包含C语言流操作 printf等
#include <string.h>  // C语言的标准库，包含字符串处理操作 strcpy等

#include <time.h>

using std::cin;
using std::cout;
using std::endl;

/*****************************************************************************
 * | @fn     : XXXX
 * | @param  : - XXX XXX
 * |           - XXX XXX
 * |           - XXX XXX
 * | @return :
 * --------------
 * | @brief  : XXX
 * |           XXX
 ******************************************************************************/
int main()
{
    printf("----------------begain------------------\n");

    time_t my_time;
    time(&my_time); /*获取从1970至当前时间过了多少秒，存为time_t类型*/
    printf("my_time = %ld \n", my_time);

    char* date1;
    date1 = ctime(&my_time);
    printf("\nctime swich\n");
    printf("%s", date1);  // 用ctime将秒数转化成字符串格式，输出：Fri Nov  8 11:24:34 2024

    struct tm* p;
    p = localtime(&my_time);  // 用localtime将秒数转化为struct tm结构体
    printf("\nstruct tm print\n");
    printf("%d/%d/%d %02d:%02d:%02d\n",
    1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);  // 2024/11/8 11:24:34

    // 输出星期
    char* wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    printf("%s\n", wday[p->tm_wday]);

    char* date2;
    date2 = asctime(p);
    printf("\nasctime swich\n");
    printf("%s", date2);


    // /*用gmtime将time_t类型的时间转换为struct tm类型的时间按，／／没有经过时区转换的UTC时间
    //   然后再用asctime转换为我们常见的格式 Fri Jan 11 17:25:24 2008
    // */
    // printf("%s", asctime(gmtime(&my_time)));

    printf("-----------------end-------------------\n");
    // getchar();
    return EXIT_SUCCESS;
}

/*****************************************************************************
 * end of file
 ******************************************************************************/
