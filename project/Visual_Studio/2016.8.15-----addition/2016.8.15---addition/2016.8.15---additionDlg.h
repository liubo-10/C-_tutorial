
// 2016.8.15---additionDlg.h : ͷ�ļ�
//

#pragma once


// CMy2016815additionDlg �Ի���
class CMy2016815additionDlg : public CDialogEx
{
// ����
public:
	CMy2016815additionDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY2016815ADDITION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeAddendEdit();
	afx_msg void OnEnChangeSumEdit();
	afx_msg void OnEnChangeSummandEdit();
	afx_msg void OnStnClickedAddendStatic();
	float m_editSummand;
	float m_editAddend;
	float m_editSum;
	afx_msg void OnBnClickedAddButton();
};
