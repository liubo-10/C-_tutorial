
// 2016.8.15---addition.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy2016815additionApp:
// �йش����ʵ�֣������ 2016.8.15---addition.cpp
//

class CMy2016815additionApp : public CWinApp
{
public:
	CMy2016815additionApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy2016815additionApp theApp;