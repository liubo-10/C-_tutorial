// mentu.cpp : �������̨Ӧ�ó������ڵ㡣

/*1.Ү����13����ͽ��������һ�����ǳ���Ү�յ���ͽ��
�����ų����ҳ���λ��ͽ��13��Χ��һȦ���ӵ�һ����ʼ���ţ�1��2��3��1��2��3������
���Ǳ�����3�����˳�Ȧ�ӣ��������Ȧ�ڵ��˾��ǳ���Ү�յ���ͽ�����ҳ���ԭ�������*/

/*
 * ʹ��ѭ������ʵ��Ҫ��
 */

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<process.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;


int main(void)
{
    node *head = new node;       //����ͷ�ڵ�
    head->next = head;           //ѭ������
    node *p = head;  
    p->data = 1;              //����һ���ڵ㸳ֵ
 
    int i;
    for(i=12; i>0; i--)
    {
        node *p = new node;      //�����½ڵ�
        p->data = i+1;            //��13��һ��ʼ��ֵ
        p->next = head->next;    //ָ����ָ����һ���ڵ�
        head->next = p;           //�嵽ͷ�ڵ��
    }
   
    int count=0;             
    node *q, *pq=NULL;              
    p = head;                 
 
    while(1)
    {
        count++;           //������һ
        q = p;             //����ǰһ�ڵ㷽��ɾ��
        p=p->next;         //�������ƶ�ָ��
       
        if(count==2)      //������3
        {
            if(pq == p)       //����ֻʣ���һ���ڵ�
            {
                cout<<p->data<<endl;
                return 0;
            }
            /*ɾ���ڵ�*/
            q->next = p->next;
            delete[] p;
           
            count=0;   //������0
            pq = p = q->next; //pָ����һ�ڵ�,pq��־
        }
    }
	cout<<"Hello World"<<endl;
    system("pause");
    return 0;
}