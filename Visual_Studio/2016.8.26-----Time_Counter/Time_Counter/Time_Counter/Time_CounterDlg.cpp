
// Time_CounterDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Time_Counter.h"
#include "Time_CounterDlg.h"
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


// CTime_CounterDlg �Ի���




CTime_CounterDlg::CTime_CounterDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTime_CounterDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTime_CounterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TimeDis, m_time);
}

BEGIN_MESSAGE_MAP(CTime_CounterDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_Timer, &CTime_CounterDlg::OnBnClickedTimer)
	ON_BN_CLICKED(IDC_Reset, &CTime_CounterDlg::OnBnClickedReset)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CTime_CounterDlg ��Ϣ�������

BOOL CTime_CounterDlg::OnInitDialog()
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

void CTime_CounterDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CTime_CounterDlg::OnPaint()
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
HCURSOR CTime_CounterDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

void CTime_CounterDlg::OnBnClickedTimer()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SetTimer(1,10,NULL);//����1��nIDEvent����ʱ��ID��
                        //����2��nElapse����ʱ����ʱʱ�䣬��λΪ���룻
                        //����3���ص���������ΪNULL���ɡ�
}


void CTime_CounterDlg::OnBnClickedReset()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	KillTimer(1);//ֻ������һ����������ʱ��ID��
	m_time.SetWindowTextW(_T("00:00:00"));
}


void CTime_CounterDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	static UINT mm = 0;
	static UINT ss = 0;
	static UINT mss = 0;
	CString str;
	switch (nIDEvent)
	{
	  case 1:
		   mss++;
		   if (mss == 100)
		   {
			  mss = 0;
			  ss++;
		   }
		   if(ss == 60)
		   {
             ss = 0;
			 mm++;
		   }
		   str.Format(_T("%02i:%02i:%02i"),mm,ss,mss);
		   m_time.SetWindowTextW(str);
		   break;
	 }
	CDialogEx::OnTimer(nIDEvent);
}
