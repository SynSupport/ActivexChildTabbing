// MFCctlPropPage.cpp : Implementation of the CMFCctlPropPage property page class.

#include "stdafx.h"
#include "MFCctl.h"
#include "MFCctlPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMFCctlPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMFCctlPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMFCctlPropPage, "MFCCTL.MFCctlPropPage.1",
	0x25d5f502, 0x586c, 0x41ba, 0x89, 0xb1, 0x41, 0x4f, 0xa8, 0xba, 0x30, 0xf2)



// CMFCctlPropPage::CMFCctlPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMFCctlPropPage

BOOL CMFCctlPropPage::CMFCctlPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MFCCTL_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMFCctlPropPage::CMFCctlPropPage - Constructor

CMFCctlPropPage::CMFCctlPropPage() :
	COlePropertyPage(IDD, IDS_MFCCTL_PPG_CAPTION)
{
}



// CMFCctlPropPage::DoDataExchange - Moves data between page and properties

void CMFCctlPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMFCctlPropPage message handlers
