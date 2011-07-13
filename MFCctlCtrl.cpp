// MFCctlCtrl.cpp : Implementation of the CMFCctlCtrl ActiveX Control class.

#include "stdafx.h"
#include "MFCctl.h"
#include "MFCctlCtrl.h"
#include "MFCctlPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMFCctlCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMFCctlCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMFCctlCtrl, COleControl)
    DISP_FUNCTION_ID(CMFCctlCtrl, "FocusControl", dispidFocusControl, FocusControl, VT_EMPTY, VTS_BOOL)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMFCctlCtrl, COleControl)
    EVENT_CUSTOM_ID("Tabout", eventidTabout, Tabout, VTS_BOOL)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMFCctlCtrl, 1)
	PROPPAGEID(CMFCctlPropPage::guid)
END_PROPPAGEIDS(CMFCctlCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMFCctlCtrl, "MFCCTL.MFCctlCtrl.1",
	0x5d541275, 0xd9e1, 0x42c4, 0xbe, 0xd1, 0xa0, 0x60, 0x31, 0x6b, 0x76, 0x95)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMFCctlCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DMFCctl =
		{ 0x49CCFFE8, 0xAF0A, 0x46A8, { 0xB0, 0x2E, 0xA8, 0x5, 0x85, 0x55, 0x19, 0x0 } };
const IID BASED_CODE IID_DMFCctlEvents =
		{ 0xE44D1F07, 0x9EF4, 0x4538, { 0x8B, 0xAC, 0xD0, 0xE9, 0x18, 0xE2, 0x2F, 0x84 } };



// Control type information

static const DWORD BASED_CODE _dwMFCctlOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCctlCtrl, IDS_MFCCTL, _dwMFCctlOleMisc)



// CMFCctlCtrl::CMFCctlCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMFCctlCtrl

BOOL CMFCctlCtrl::CMFCctlCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegInsertable | afxRegApartmentThreading to afxRegInsertable.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_MFCCTL,
			IDB_MFCCTL,
			afxRegInsertable | afxRegApartmentThreading,
			_dwMFCctlOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMFCctlCtrl::CMFCctlCtrl - Constructor

CMFCctlCtrl::CMFCctlCtrl()
{
	InitializeIIDs(&IID_DMFCctl, &IID_DMFCctlEvents);
	// TODO: Initialize your control's instance data here.
}



// CMFCctlCtrl::~CMFCctlCtrl - Destructor

CMFCctlCtrl::~CMFCctlCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMFCctlCtrl::OnDraw - Drawing function

void CMFCctlCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;
	FillRect(pdc->m_hDC, rcBounds, (HBRUSH)GetStockObject(LTGRAY_BRUSH));
}



// CMFCctlCtrl::DoPropExchange - Persistence support

void CMFCctlCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CMFCctlCtrl::OnResetState - Reset control to default state

void CMFCctlCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange


}

afx_msg int CMFCctlCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
        RECT rc;
        pEdit1 = new CTabbedEdit();
        SetRect(&rc, 10, 10, 100, 30);
        pEdit1->Create(WS_VISIBLE|WS_CHILD|WS_BORDER|WS_TABSTOP, rc, this, 1);
	pEdit1->m_Parent = this;
        pEdit2 = new CTabbedEdit();
        SetRect(&rc, 10, 50, 100, 70);
        pEdit2->Create(WS_VISIBLE|WS_CHILD|WS_BORDER|WS_TABSTOP, rc, this, 2);
	pEdit2->m_Parent = this;
	return 0;
}




// CMFCctlCtrl message handlers

void CMFCctlCtrl::FocusControl(VARIANT_BOOL bLast)
{
    if (bLast)
	pEdit2->SetFocus();
    else
	pEdit1->SetFocus();
}

void CMFCctlCtrl::OnTab(UINT id)
{
    BOOL bShifted = ((GetKeyState(VK_SHIFT) & 8000) != 0);

    if (bShifted)
	id--;
    else
	id++;
	
    if ((id > 0) && (id <= 2))
	GetDlgItem(id)->SetFocus();
    else
	Tabout(bShifted);
}
