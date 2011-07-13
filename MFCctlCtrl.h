#pragma once

#include "TabbedEdit.h"

// MFCctlCtrl.h : Declaration of the CMFCctlCtrl ActiveX Control class.


// CMFCctlCtrl : See MFCctlCtrl.cpp for implementation.

class CMFCctlCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMFCctlCtrl)

// Constructor
public:
	CMFCctlCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	void OnTab(UINT id);

	CTabbedEdit *pEdit1, *pEdit2;


// Implementation
protected:
	~CMFCctlCtrl();

	DECLARE_OLECREATE_EX(CMFCctlCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMFCctlCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMFCctlCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMFCctlCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	    eventidTabout = 1L,
	    dispidFocusControl = 1L
	};

protected:
    void FocusControl(VARIANT_BOOL bLast);

    void Tabout(VARIANT_BOOL bShifted)
    {
	FireEvent(eventidTabout, EVENT_PARAM(VTS_BOOL), bShifted);
    }
};

