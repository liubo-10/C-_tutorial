
// serial_port2Dlg.h : ͷ�ļ�
//

#pragma once
#include "mscomm1.h"
#include "afxwin.h"


// Cserial_port2Dlg �Ի���
class Cserial_port2Dlg : public CDialogEx
{
// ����
public:
	Cserial_port2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SERIAL_PORT2_DIALOG };

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
	CMscomm1 m_mscomm;
	CEdit m_EditSend;
	CString m_Editsend1;
	CString m_EditReceive;
	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonClose();
	afx_msg void OnBnClickedButtonSend();
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	afx_msg void OnBnClickedButtonOx();
	afx_msg void OnCbnSelchangeCombo1();
private:
	CComboBox m_combl;
};
