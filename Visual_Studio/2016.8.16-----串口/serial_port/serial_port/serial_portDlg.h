
// serial_portDlg.h : ͷ�ļ�
//

#pragma once
#include "mscomm1.h"
#include "afxwin.h"


// Cserial_portDlg �Ի���
class Cserial_portDlg : public CDialogEx
{
// ����
public:
	Cserial_portDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SERIAL_PORT_DIALOG };

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
	CMscomm1 m_mscomm;
	CEdit m_EditSend;
	CEdit m_EditReceive;
	afx_msg void OnBnClickedButtonSend();
	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonClose();
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	CString m_EditReceive1;
	afx_msg void OnEnChangeEdit4();
	CString m_EditSend1;
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedButtonsixteen();
	CMscomm1 m_mscomma;
	CString m_edit_send;
	CString m_edit_receive;
	void OnCommMscomm2();
};
