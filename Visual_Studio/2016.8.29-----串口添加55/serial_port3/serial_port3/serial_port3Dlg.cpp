
// serial_port3Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "serial_port3.h"
#include "serial_port3Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cserial_port3Dlg �Ի���




Cserial_port3Dlg::Cserial_port3Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cserial_port3Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cserial_port3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MSCOMM1, m_mscomm);
}

BEGIN_MESSAGE_MAP(Cserial_port3Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_OPEN, &Cserial_port3Dlg::OnBnClickedButtonOpen)
	ON_BN_CLICKED(IDC_BUTTON_CLOSE, &Cserial_port3Dlg::OnBnClickedButtonClose)
	ON_BN_CLICKED(IDC_BUTTON1, &Cserial_port3Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cserial_port3Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cserial_port3Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cserial_port3Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Cserial_port3Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Cserial_port3Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Cserial_port3Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &Cserial_port3Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &Cserial_port3Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &Cserial_port3Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &Cserial_port3Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &Cserial_port3Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &Cserial_port3Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &Cserial_port3Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &Cserial_port3Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &Cserial_port3Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &Cserial_port3Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &Cserial_port3Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &Cserial_port3Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &Cserial_port3Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &Cserial_port3Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON_START55, &Cserial_port3Dlg::OnBnClickedButtonStart55)
	ON_BN_CLICKED(IDC_BUTTON_STOP55, &Cserial_port3Dlg::OnBnClickedButtonStop55)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// Cserial_port3Dlg ��Ϣ�������

BOOL Cserial_port3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cserial_port3Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cserial_port3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cserial_port3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------

BEGIN_EVENTSINK_MAP(Cserial_port3Dlg, CDialogEx)
	ON_EVENT(Cserial_port3Dlg, IDC_MSCOMM1, 1, Cserial_port3Dlg::OnCommMscomm1, VTS_NONE)
END_EVENTSINK_MAP()

void Cserial_port3Dlg::OnCommMscomm1()
{
	// TODO: �ڴ˴������Ϣ����������
}


void Cserial_port3Dlg::OnBnClickedButtonOpen()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(m_mscomm.get_PortOpen()) //��������Ǵ򿪵ģ����ȹرմ���
	   {   
		 m_mscomm.put_PortOpen(FALSE);   
	   }   
	 m_mscomm.put_CommPort(3); //ѡ��COM3
	 m_mscomm.put_InBufferSize(1024); //���ջ�����  
	 m_mscomm.put_OutBufferSize(1024);//���ͻ�����  
	 m_mscomm.put_InputLen(0);//���õ�ǰ���������ݳ���Ϊ0,��ʾȫ����ȡ  
	 m_mscomm.put_InputMode(1);//�Զ����Ʒ�ʽ��д����   
	 m_mscomm.put_RThreshold(1);//���ջ�������1����1�������ַ�ʱ���������������ݵ�OnComm�¼�
	 m_mscomm.put_Settings(_T("9600,n,8,1"));//������9600�޼���λ��8������λ��1��ֹͣλ  
	 if(!m_mscomm.get_PortOpen())//�������û�д����  
	   {   
		 m_mscomm.put_PortOpen(TRUE);//�򿪴���   
		 AfxMessageBox(_T("����3�򿪳ɹ�"));   
	   }  
	 else 
	   {   
		   m_mscomm.put_OutBufferCount(0);   
	       AfxMessageBox(_T("����3��ʧ��"));  
	   }
}


void Cserial_port3Dlg::OnBnClickedButtonClose()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_mscomm.put_PortOpen(FALSE);//�رմ���  
	AfxMessageBox(_T("����3�ѹر�"));
}


void Cserial_port3Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}

void Cserial_port3Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}

void Cserial_port3Dlg::OnBnClickedButton17()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton18()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton19()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}



void Cserial_port3Dlg::OnBnClickedButton20()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButton21()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CByteArray hexdata;//���͵�����	
    hexdata.Add(0xC1);
    hexdata.Add(0x03);
    hexdata.Add(0x01);
    hexdata.Add(0x00);
    hexdata.Add(0x00);	
    hexdata.Add(0x30);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}


void Cserial_port3Dlg::OnBnClickedButtonStart55()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SetTimer(1,100,NULL);//����1��nIDEvent����ʱ��ID��
                        //����2��nElapse����ʱ����ʱʱ�䣬��λΪ���룻
                        //����3���ص���������ΪNULL���ɡ�
}


void Cserial_port3Dlg::OnBnClickedButtonStop55()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	KillTimer(1);//ֻ������һ����������ʱ��ID��
}


void Cserial_port3Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CByteArray hexdata;//���͵�����	
	switch (nIDEvent)
	{
	  case 1:
          hexdata.Add(0x55);
         // m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
          m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
		  break;
	 }
	CDialogEx::OnTimer(nIDEvent);
}
