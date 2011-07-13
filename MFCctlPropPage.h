#pragma once

// MFCctlPropPage.h : Declaration of the CMFCctlPropPage property page class.


// CMFCctlPropPage : See MFCctlPropPage.cpp for implementation.

class CMFCctlPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMFCctlPropPage)
	DECLARE_OLECREATE_EX(CMFCctlPropPage)

// Constructor
public:
	CMFCctlPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_MFCCTL };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

