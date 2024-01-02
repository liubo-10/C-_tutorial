
// FMC_experienceView.cpp : CFMC_experienceView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FMC_experience.h"
#endif

#include "FMC_experienceDoc.h"
#include "FMC_experienceView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFMC_experienceView

IMPLEMENT_DYNCREATE(CFMC_experienceView, CView)

BEGIN_MESSAGE_MAP(CFMC_experienceView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFMC_experienceView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CFMC_experienceView ����/����

CFMC_experienceView::CFMC_experienceView()
{
	// TODO: �ڴ˴���ӹ������

}

CFMC_experienceView::~CFMC_experienceView()
{
}

BOOL CFMC_experienceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFMC_experienceView ����

void CFMC_experienceView::OnDraw(CDC* /*pDC*/)
{
	CFMC_experienceDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFMC_experienceView ��ӡ


void CFMC_experienceView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CFMC_experienceView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CFMC_experienceView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CFMC_experienceView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CFMC_experienceView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CFMC_experienceView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CFMC_experienceView ���

#ifdef _DEBUG
void CFMC_experienceView::AssertValid() const
{
	CView::AssertValid();
}

void CFMC_experienceView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFMC_experienceDoc* CFMC_experienceView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFMC_experienceDoc)));
	return (CFMC_experienceDoc*)m_pDocument;
}
#endif //_DEBUG


// CFMC_experienceView ��Ϣ�������
