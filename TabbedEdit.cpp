// TabbedEdit.cpp : implementation file
//

#include "stdafx.h"
#include "MFCctl.h"
#include "MFCctlCtrl.h"
#include "TabbedEdit.h"


// CTabbedEdit

IMPLEMENT_DYNAMIC(CTabbedEdit, CEdit)

CTabbedEdit::CTabbedEdit()
{

}

CTabbedEdit::~CTabbedEdit()
{
}


BEGIN_MESSAGE_MAP(CTabbedEdit, CEdit)
    ON_WM_KEYDOWN()
END_MESSAGE_MAP()



// CTabbedEdit message handlers
afx_msg void CTabbedEdit::OnKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags)
{
    if (nChar == VK_TAB)
    {
	((CMFCctlCtrl *)m_Parent)->OnTab(GetDlgCtrlID());
	MSG msg;    // Remove the resulting WM_CHAR message
	PeekMessage(&msg, m_hWnd, WM_CHAR, WM_CHAR, PM_REMOVE);
    }
}

