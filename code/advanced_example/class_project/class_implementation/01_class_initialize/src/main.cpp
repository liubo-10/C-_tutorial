/*****************************************************************************
 * | @file    : main.c
 * | @author  : liubo
 * | @version : V1.0.0
 * | @date    : 2024-10-10
 * --------------
 * | @brief   : main
 ******************************************************************************/
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
class A
{
   public:
    int a = 1;
    A() {}
    A(int a_) : a(a_) {}  // 初始化列表初始化的变量值会覆盖掉声明时初始化的值
    A(int a_, bool b) : a(4)
    {
        a = a_;  // 构造函数中初始化的值又会覆盖掉初始化列表的
    }
};

/*****************************************************************************
 * | @fn     : XXXX
 * | @param  : - cmd 命令码
 * |           - dataPtr 发送的数据
 * |           - Len 发送的数据长度
 * | @return :
 * --------------
 * | @brief  : 发送请求到智能电池
 * |           通过串口2发送
 ******************************************************************************/
int main()
{
    printf("----------------begain------------------\n");

    A a1, a2(3), a3(5, true);
    cout << "a1.a=" << a1.a << endl;
    cout << "a2.a=" << a2.a << endl;
    cout << "a3.a=" << a3.a << endl;

    printf("-----------------end-------------------\n");
    return EXIT_SUCCESS;
}

/***********************************************************
 * end of file
 **********************************************************/