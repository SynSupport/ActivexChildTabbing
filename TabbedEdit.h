#pragma once


// CTabbedEdit

class CTabbedEdit : public CEdit
{
	DECLARE_DYNAMIC(CTabbedEdit)

public:
	CTabbedEdit();
	virtual ~CTabbedEdit();
	CWnd *m_Parent;

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnKeyDown( UINT, UINT, UINT );
};


