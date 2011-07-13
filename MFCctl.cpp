// MFCctl.cpp : Implementation of CMFCctlApp and DLL registration.

#include "stdafx.h"
#include "MFCctl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMFCctlApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x43083F07, 0x2A3A, 0x42BB, { 0x86, 0xF9, 0x2, 0xA5, 0xD8, 0xBA, 0x3A, 0x85 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMFCctlApp::InitInstance - DLL initialization

BOOL CMFCctlApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
	}

	return bInit;
}



// CMFCctlApp::ExitInstance - DLL termination

int CMFCctlApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
