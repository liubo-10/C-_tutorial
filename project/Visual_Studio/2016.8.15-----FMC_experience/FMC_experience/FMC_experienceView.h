
// FMC_experienceView.h : CFMC_experienceView ��Ľӿ�
//

#pragma once


class CFMC_experienceView : public CView
{
protected: // �������л�����
	CFMC_experienceView();
	DECLARE_DYNCREATE(CFMC_experienceView)

// ����
public:
	CFMC_experienceDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CFMC_experienceView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // FMC_experienceView.cpp �еĵ��԰汾
inline CFMC_experienceDoc* CFMC_experienceView::GetDocument() const
   { return reinterpret_cast<CFMC_experienceDoc*>(m_pDocument); }
#endif

