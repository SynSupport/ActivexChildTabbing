

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Sat Aug 18 14:57:54 2007
 */
/* Compiler settings for .\MFCctl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __MFCctlidl_h__
#define __MFCctlidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMFCctl_FWD_DEFINED__
#define ___DMFCctl_FWD_DEFINED__
typedef interface _DMFCctl _DMFCctl;
#endif 	/* ___DMFCctl_FWD_DEFINED__ */


#ifndef ___DMFCctlEvents_FWD_DEFINED__
#define ___DMFCctlEvents_FWD_DEFINED__
typedef interface _DMFCctlEvents _DMFCctlEvents;
#endif 	/* ___DMFCctlEvents_FWD_DEFINED__ */


#ifndef __MFCctl_FWD_DEFINED__
#define __MFCctl_FWD_DEFINED__

#ifdef __cplusplus
typedef class MFCctl MFCctl;
#else
typedef struct MFCctl MFCctl;
#endif /* __cplusplus */

#endif 	/* __MFCctl_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __MFCctlLib_LIBRARY_DEFINED__
#define __MFCctlLib_LIBRARY_DEFINED__

/* library MFCctlLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_MFCctlLib;

#ifndef ___DMFCctl_DISPINTERFACE_DEFINED__
#define ___DMFCctl_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCctl */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DMFCctl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("49CCFFE8-AF0A-46A8-B02E-A80585551900")
    _DMFCctl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCctlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCctl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCctl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCctl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCctl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCctl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCctl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCctl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCctlVtbl;

    interface _DMFCctl
    {
        CONST_VTBL struct _DMFCctlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCctl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DMFCctl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DMFCctl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DMFCctl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DMFCctl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DMFCctl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DMFCctl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCctl_DISPINTERFACE_DEFINED__ */


#ifndef ___DMFCctlEvents_DISPINTERFACE_DEFINED__
#define ___DMFCctlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCctlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DMFCctlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E44D1F07-9EF4-4538-8BAC-D0E918E22F84")
    _DMFCctlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCctlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCctlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCctlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCctlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCctlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCctlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCctlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCctlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCctlEventsVtbl;

    interface _DMFCctlEvents
    {
        CONST_VTBL struct _DMFCctlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCctlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DMFCctlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DMFCctlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DMFCctlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DMFCctlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DMFCctlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DMFCctlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCctlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MFCctl;

#ifdef __cplusplus

class DECLSPEC_UUID("5D541275-D9E1-42C4-BED1-A060316B7695")
MFCctl;
#endif
#endif /* __MFCctlLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


