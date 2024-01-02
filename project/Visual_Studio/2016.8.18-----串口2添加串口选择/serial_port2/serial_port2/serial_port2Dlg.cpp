
// serial_port2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "serial_port2.h"
#include "serial_port2Dlg.h"
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


// Cserial_port2Dlg �Ի���




Cserial_port2Dlg::Cserial_port2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cserial_port2Dlg::IDD, pParent)
	, m_Editsend1(_T(""))
	, m_EditReceive(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cserial_port2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MSCOMM1, m_mscomm);
	DDX_Control(pDX, IDC_EDIT1, m_EditSend);
	DDX_Text(pDX, IDC_EDIT1, m_Editsend1);
	DDX_Text(pDX, IDC_EDIT2, m_EditReceive);
	DDX_Control(pDX, IDC_COMBO1, m_combl);
}

BEGIN_MESSAGE_MAP(Cserial_port2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_OPEN, &Cserial_port2Dlg::OnBnClickedButtonOpen)
	ON_BN_CLICKED(IDC_BUTTON_CLOSE, &Cserial_port2Dlg::OnBnClickedButtonClose)
	ON_BN_CLICKED(IDC_BUTTON_SEND, &Cserial_port2Dlg::OnBnClickedButtonSend)
	ON_BN_CLICKED(IDC_BUTTON_OX, &Cserial_port2Dlg::OnBnClickedButtonOx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &Cserial_port2Dlg::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()


// Cserial_port2Dlg ��Ϣ�������

BOOL Cserial_port2Dlg::OnInitDialog()
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

	ShowWindow(SW_MINIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	//------------------------------------------------------------
	CString str;  
	int i;   
	for(i=0;i<15;i++)  
	{     
		str.Format(_T("com %d"),i+1);
		m_combl.InsertString(i,str);   
	}   
	m_combl.SetCurSel(0);//Ԥ��COM��



	//----------------------------------------------------------
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cserial_port2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void Cserial_port2Dlg::OnPaint()
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
HCURSOR Cserial_port2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// -----------------------------------------------------------------------------------
//------------------------------------------------------------------------------------


void Cserial_port2Dlg::OnBnClickedButtonOpen()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	 if(m_mscomm.get_PortOpen()) //��������Ǵ򿪵ģ����йرմ���  
	   {   
		 m_mscomm.put_PortOpen(FALSE);   
	   }   
	 m_mscomm.put_CommPort((m_combl.GetCurSel()+1)); //ѡ�񴮿�
	// m_mscomm.put_CommPort(3); //ѡ��COM3  
	 m_mscomm.put_InBufferSize(1024); //���ջ�����  
	 m_mscomm.put_OutBufferSize(1024);//���ͻ�����  
	 m_mscomm.put_InputLen(0);//���õ�ǰ���������ݳ���Ϊ0,��ʾȫ����ȡ  
	 m_mscomm.put_InputMode(1);//�Զ����Ʒ�ʽ��д����   
	 m_mscomm.put_RThreshold(1);//���ջ�������1����1�������ַ�ʱ���������������ݵ�OnComm�¼�
	 m_mscomm.put_Settings(_T("9600,n,8,1"));//������9600�޼���λ��8������λ��1��ֹͣλ  
	 if(!m_mscomm.get_PortOpen())//�������û�д����  
	 {   
		 m_mscomm.put_PortOpen(TRUE);//�򿪴���   
		 AfxMessageBox(_T("���ڴ򿪳ɹ�"));   
	 }  
	 else  
	 {   
		 m_mscomm.put_OutBufferCount(0);   
	     AfxMessageBox(_T("���ڴ�ʧ��"));  
	 }
}


void Cserial_port2Dlg::OnBnClickedButtonClose()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_mscomm.put_PortOpen(FALSE);//�رմ���  
	AfxMessageBox(_T("�����ѹر�")); 
}


void Cserial_port2Dlg::OnBnClickedButtonSend()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    UpdateData(true); //��ȡ�༭������
	VARIANT variant_inp;   
	COleSafeArray safearray_inp; 
	long len,k;  
	unsigned int data[1024]={0};   
	byte rxdata[1024]; //���� BYTE ����   
	CString strtemp; 
    
	variant_inp=m_mscomm.get_Input(); //����������Ϣ    
	safearray_inp=variant_inp; ///����ת��    
	len=safearray_inp.GetOneDimSize(); //�õ���Ч�����ݳ���    
		for(k=0;k<len;k++)    
		   {    
			 safearray_inp.GetElement(&k,rxdata+k);    
		   }   
		for(k=0;k<len;k++) //������ת��Ϊ CString �ͱ���   
		  {     
			strtemp.Format(_T("%x"),*(rxdata+k));   
		    m_Editsend1+=strtemp;     
			CString temp=_T("\r\n"); //����    
			m_Editsend1+=temp; 
		  }
	m_mscomm.put_Output(COleVariant(m_Editsend1));//��������   
	m_Editsend1.Empty(); //���ͺ���������   
	UpdateData(false); //���±༭������ 
}
BEGIN_EVENTSINK_MAP(Cserial_port2Dlg, CDialogEx)
	ON_EVENT(Cserial_port2Dlg, IDC_MSCOMM1, 1, Cserial_port2Dlg::OnCommMscomm1, VTS_NONE)
END_EVENTSINK_MAP()


void Cserial_port2Dlg::OnCommMscomm1()
{
	// TODO: �ڴ˴������Ϣ����������
	static unsigned int cnt=0;  
	VARIANT variant_inp;    
	COleSafeArray safearray_inp;   
	long len,k;    
	unsigned int data[1024]={0};   
	byte rxdata[1024]; //���� BYTE ����   
	CString strtemp;    
	if(m_mscomm.get_CommEvent()==2) //ֵΪ 2 ��ʾ���ջ����������ַ�   
	  { 
		    cnt++;   
			variant_inp=m_mscomm.get_Input(); //����������Ϣ    
			safearray_inp=variant_inp; ///����ת��    
			len=safearray_inp.GetOneDimSize(); //�õ���Ч�����ݳ���    
			for(k=0;k<len;k++)    
			  {    
				  safearray_inp.GetElement(&k,rxdata+k);    
			  }   
			for(k=0;k<len;k++) //������ת��Ϊ CString �ͱ���   
			  {     
				  strtemp.Format(_T("%x"),*(rxdata+k));   
				  m_EditReceive+=strtemp;     
				  CString temp=_T("\r\n"); //����    
				  m_EditReceive+=temp; 
			   } 
	  }   
	UpdateData(FALSE); //���±༭������
}


void Cserial_port2Dlg::OnBnClickedButtonOx()
{
	/*// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Editsend1.Format(_T("\61 \62"));
	long len=2,k; 
	CString strtemp;
	byte rxdata[1024]; //���� BYTE ����  

	for(k=0;k<len;k++) //������ת��Ϊ CString �ͱ���   
			  {     
				  strtemp.Format(_T("%x"),*(rxdata+k));   
				  m_Editsend1+=strtemp;     
				  CString temp=_T("\r\n"); //����    
				  m_Editsend1+=temp; 
			   } 
			   

	
	unsigned char protocoldata[36];
	protocoldata[0] = '\a';
    protocoldata[1] = '\b';
	

    m_mscomm.put_Output(COleVariant(protocoldata[36]));//��������
	//m_com.SetOutput(COleVariant(protocoldata[n]));*/

	CByteArray hexdata;//���͵�����	
    hexdata.Add(0x02 );
    hexdata.Add(0x00);
    hexdata.Add(0x18);
    hexdata.Add(0x07);
    hexdata.Add(0xCB);	
    hexdata.Add(0xFF);	
    hexdata.Add(0xFF);	
    hexdata.Add(0xCA);	
    hexdata.Add(0x17);	
    hexdata.Add(0x00);	
    hexdata.Add(0x00);	
    hexdata.Add(0x09);		
    m_mscomm.put_OutBufferCount(0);//��շ��ͻ�����
    m_mscomm.put_Output(COleVariant(hexdata));//����ʮ����������
}







void Cserial_port2Dlg::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(m_mscomm.get_PortOpen())     
	  {    
		  m_mscomm.put_PortOpen(FALSE);  
	  }    
	m_mscomm.put_CommPort( m_combl.GetCurSel()+1 );      
	UpdateData(FALSE); //���±༭������ 
}
