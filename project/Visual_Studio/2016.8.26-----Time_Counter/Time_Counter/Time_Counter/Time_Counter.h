
// Time_Counter.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTime_CounterApp:
// �йش����ʵ�֣������ Time_Counter.cpp
//

class CTime_CounterApp : public CWinApp
{
public:
	CTime_CounterApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTime_CounterApp theApp;