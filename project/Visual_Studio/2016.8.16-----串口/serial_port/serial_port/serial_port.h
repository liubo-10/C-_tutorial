
// serial_port.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cserial_portApp:
// �йش����ʵ�֣������ serial_port.cpp
//

class Cserial_portApp : public CWinApp
{
public:
	Cserial_portApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cserial_portApp theApp;