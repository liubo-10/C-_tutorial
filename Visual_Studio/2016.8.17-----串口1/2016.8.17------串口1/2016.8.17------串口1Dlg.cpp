
// 2016.8.17------����1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "2016.8.17------����1.h"
#include "2016.8.17------����1Dlg.h"
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


// CMy2016817����1Dlg �Ի���




CMy2016817����1Dlg::CMy2016817����1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMy2016817����1Dlg::IDD, pParent)
	, m_receive(_T(""))
	, m_send(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy2016817����1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MSCOMM1, m_MSComm);
	DDX_Text(pDX, IDC_EDIT1, m_receive);
	DDX_Text(pDX, IDC_EDIT2, m_send);
}

BEGIN_MESSAGE_MAP(CMy2016817����1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CMy2016817����1Dlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CMy2016817����1Dlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy2016817����1Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMy2016817����1Dlg ��Ϣ�������

BOOL CMy2016817����1Dlg::OnInitDialog()
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
	/*m_MSComm.SetCommPort(1); //���ô���
    m_MSComm.SetInBufferSize(1024); //�������뻺������С
    m_MSComm.SetOutBufferSize(1024); //���������������С
    m_MSComm.SetRThreshold(1); //�����յ����ٸ��ַ��󴥷�OnComm�¼�
    m_MSComm.SetPortOpen(TRUE); //�򿪴���
    m_MSComm.SetInputMode(1); //�������뷽ʽΪ�����Ʒ�ʽ
    m_MSComm.SetSettings("9600,n,8,1"); //���ò����ʵȲ���
    m_MSComm.SetInputLen(0); //���õ�ǰ���ճ���Ϊ0
    m_MSComm.GetInput(); //��Ԥ���������������������*/
	m_MSComm.put_CommPort(1); //���ô���
	m_MSComm.put_InBufferSize(1024); //�������뻺������С
    m_MSComm.put_OutBufferSize(1024); //���������������С
    m_MSComm.put_RThreshold(1); //�����յ����ٸ��ַ��󴥷�OnComm�¼�
    m_MSComm.put_PortOpen(TRUE); //�򿪴���
    m_MSComm.put_InputMode(1); //�������뷽ʽΪ�����Ʒ�ʽ
    m_MSComm.put_Settings(_T("9600,n,8,1")); //���ò����ʵȲ���
    m_MSComm.put_InputLen(0); //���õ�ǰ���ճ���Ϊ0
    m_MSComm.get_Input(); //��Ԥ���������������������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMy2016817����1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMy2016817����1Dlg::OnPaint()
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
HCURSOR CMy2016817����1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//-------------------------------------------------------
//-------------------------------------------------------

void CMy2016817����1Dlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMy2016817����1Dlg::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
BEGIN_EVENTSINK_MAP(CMy2016817����1Dlg, CDialogEx)
	ON_EVENT(CMy2016817����1Dlg, IDC_MSCOMM1, 1, CMy2016817����1Dlg::OnCommMscomm1, VTS_NONE)
END_EVENTSINK_MAP()


void CMy2016817����1Dlg::OnCommMscomm1()
{
	// TODO: �ڴ˴������Ϣ����������
	int resEvent;
    resEvent = m_MSComm.get_CommEvent();
    if(resEvent == 2);
      {
        VARIANT data;
        data = m_MSComm.get_Input();
        CString str;
        str = data.bstrVal;
        m_receive += str + "rn";//m_receiveΪ��ʾ���յ����ݵı༭�����
        UpdateData(FALSE);
      }
}


void CMy2016817����1Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
    m_receive += m_send + "rn";
    UpdateData(FALSE);
    m_MSComm.put_Output((COleVariant)m_send);//m_SendΪ���뷢����Ϣ�ı༭�����
    Sleep(1000);



}
