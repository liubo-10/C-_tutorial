
// 2016.8.17------����1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy2016817����1App:
// �йش����ʵ�֣������ 2016.8.17------����1.cpp
//

class CMy2016817����1App : public CWinApp
{
public:
	CMy2016817����1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy2016817����1App theApp;