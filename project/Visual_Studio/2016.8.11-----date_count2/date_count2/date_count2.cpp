//ʵ���ж�һ���������������ڼ�����һ���еĵڼ���

#include "stdafx.h"
#include<iostream>
#include<process.h>
using namespace std;  
  
struct time  
{  
int year;  
int month;  
int day;  
unsigned int weekday;  
};  
  
void initialtime(time & t);//�����ʼ��ʱ��  
void Show(time & t);//��ʾʱ����Ϣ  
int Weekdaycount(time & t);//���㵱�������ڼ�  
int Daycount(time & t);//���㵱���ǵڹ�Ԫ������  
int Daysyearcount(time & t);//���㵱���Ǹ���ĵڶ�����  
bool isleapyear(time & t);//�жϸ����ǲ�������  
bool check(time &t);//���ʱ���ʽ�Ƿ���ȷ  
  
int main()  
{  
time t;  
initialtime(t);  
Show(t);  
system("pause");
return 0;  
}  
  
bool check(time &t)  
{  
if (t.year <= 0 || (t.month <= 0 || t.month>12) || t.day <= 0) return false;  
else{  
if ((t.month == 1 || t.month == 3 || t.month == 5 || t.month == 7  
|| t.month == 8 || t.month == 10 || t.month == 12) && t.day > 31)return false;  
else  
{  
if ((t.month == 4 || t.month == 6 || t.month == 9 || t.month == 11  
) && t.day > 30)return false;  
else  
{  
if (t.month == 2) {  
if (isleapyear(t)) {  
if (t.day > 29)return false; else return true;  
}  
else  
{  
if (t.day > 28)return false; else return true;  
}  
}  
}  
}  
}  
}  
void initialtime(time & t)  
{  
cout << "Enter the time (year,month,day):\n";  
cin >> t.year;  
cin.get();  
cin>> t.month;  
cin.get();  
cin >> t.day;  
cin.get();  
if (!check(t)){ cout << "Try again:\n"; initialtime(t); }  
else  
t.weekday = Weekdaycount(t);  
}  
void Show(time & t)  
{  
cout << "Year: " << t.year << "\t";  
cout << "Month: " << t.month << "\t";  
cout << "Day: " << t.day << "\t";  
cout << "Weekday: " << t.weekday << endl;  
cout << "This is a ";  
if (isleapyear(t))cout << "leap"; else cout << "nonleap";  
cout << " year.\n";  
cout << "Today is the " << Daysyearcount(t) << " days of the year.\n";  
}  
int Weekdaycount(time & t)  
{  
return Daycount(t) % 7;  
}  
int Daycount(time & t)  
{  
int days = 0;  
days = (t.year - 1) * 365 + (t.year - 1) / 4 - (t.year - 1) / 100  
+ (t.year - 1) / 400 + Daysyearcount(t);  
return days;  
}  
bool isleapyear(time & t)  
{  
if (t.year % 4 == 0 && t.year % 100 != 0) return true;//�����ĵı������Ҳ���100�ı�����������  
if (t.year % 400 == 0)return true;  
else return false;  
}  
int Daysyearcount(time & t)  
{  
int days = 0;  
int mtemp = t.month - 1;  
while (mtemp > 0)  
{  
switch (mtemp)  
{  
case(1) :  
case(3) :   
case(5) :   
case(7) :   
case(8) :   
case(10) :   
case(12) :  
days += 31; break;  
case(4):  
case(6):  
case(9):   
case(11):  
days += 30; break;  
case(2) :  
days += 28; break;  
default:  
break;  
}  
--mtemp;  
}  
if (isleapyear(t))++days;//��������꣬�ټ���һ��  
return days+t.day;//���ؼ�����������ϵ��µ�����  
}  