// date_count.cpp : �������̨Ӧ�ó������ڵ㡣
//����һ���ṹ������������ꡢ�¡��գ�����������ڱ�����Ϊ�ڼ��죿��ע�⿼���������⣩

#include "stdafx.h"
#include<iostream>
#include<process.h>
using namespace std;
 
struct Date
{
    int year;
    int month;
    int date;
}dat;
 
int IsLeapYear(int year)
{
    return (year%4==0 && year%100!=0)||(year%400==0);
}
 
int main(void)
{
    cout<<"������ �� ��"<<endl;
    cin>>dat.year>>dat.month>>dat.date;
   
    int date = dat.date;
 
    switch(dat.month-1)
    {
    case 11:         //���ȥ����case��Ӧ��break���򲻻��˳�switch�����е����֧·��ȥ
        date += 30;
    case 10:
        date += 31;
    case 9:
        date += 30;
    case 8:
        date += 31;
    case 7:
        date += 31;  
    case 6:
        date += 30;
    case 5:
        date += 31;
    case 4:           
        date += 30;
    case 3:       
        date += 31;
    case 2:
        date += IsLeapYear(dat.year)+28;
    case 1:
        date += 31;
    }
   
    cout<<"��"<<date<<"��"<<endl;
    cout<<"����"<<(date-4)%8<<endl;//�д���
	system("pause");
    return 0;
}
 
