
// serial_port2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cserial_port2App:
// �йش����ʵ�֣������ serial_port2.cpp
//

class Cserial_port2App : public CWinApp
{
public:
	Cserial_port2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cserial_port2App theApp;