
// �������1Dlg.h : ͷ�ļ�
//

#pragma once


// C�������1Dlg �Ի���
class C�������1Dlg : public CDialogEx
{
// ����
public:
	C�������1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnChangeEdit1();
	afx_msg void m_a();
	double m_b;
	double m_c;
	afx_msg void OnEnChangeEdit6();
	double m_d;
	double m_x1;
	double m_x2;
};
