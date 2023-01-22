#ifndef __COMCntr_h__
#define __COMCntr_h__

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

/* Forward Declarations */ 

#ifndef __IV8COMConnector_FWD_DEFINED__
#define __IV8COMConnector_FWD_DEFINED__
typedef interface IV8COMConnector IV8COMConnector;

#endif 	/* __IV8COMConnector_FWD_DEFINED__ */

#ifndef __IV8COMConnector2_FWD_DEFINED__
#define __IV8COMConnector2_FWD_DEFINED__
typedef interface IV8COMConnector2 IV8COMConnector2;

#endif 	/* __IV8COMConnector2_FWD_DEFINED__ */

#ifndef __IV8COMConnector3_FWD_DEFINED__
#define __IV8COMConnector3_FWD_DEFINED__
typedef interface IV8COMConnector3 IV8COMConnector3;

#endif 	/* __IV8COMConnector3_FWD_DEFINED__ */

#ifndef __IWorkingProcessConnection_FWD_DEFINED__
#define __IWorkingProcessConnection_FWD_DEFINED__
typedef interface IWorkingProcessConnection IWorkingProcessConnection;

#endif 	/* __IWorkingProcessConnection_FWD_DEFINED__ */

#ifndef __IInfoBaseInfo_FWD_DEFINED__
#define __IInfoBaseInfo_FWD_DEFINED__
typedef interface IInfoBaseInfo IInfoBaseInfo;

#endif 	/* __IInfoBaseInfo_FWD_DEFINED__ */

#ifndef __IInfoBaseConnectionInfo_FWD_DEFINED__
#define __IInfoBaseConnectionInfo_FWD_DEFINED__
typedef interface IInfoBaseConnectionInfo IInfoBaseConnectionInfo;

#endif 	/* __IInfoBaseConnectionInfo_FWD_DEFINED__ */

#ifndef __IServerAgentConnection_FWD_DEFINED__
#define __IServerAgentConnection_FWD_DEFINED__
typedef interface IServerAgentConnection IServerAgentConnection;

#endif 	/* __IServerAgentConnection_FWD_DEFINED__ */

#ifndef __IClusterInfo_FWD_DEFINED__
#define __IClusterInfo_FWD_DEFINED__
typedef interface IClusterInfo IClusterInfo;

#endif 	/* __IClusterInfo_FWD_DEFINED__ */

#ifndef __IInfoBaseShort_FWD_DEFINED__
#define __IInfoBaseShort_FWD_DEFINED__
typedef interface IInfoBaseShort IInfoBaseShort;

#endif 	/* __IInfoBaseShort_FWD_DEFINED__ */

#ifndef __IConnectionShort_FWD_DEFINED__
#define __IConnectionShort_FWD_DEFINED__
typedef interface IConnectionShort IConnectionShort;

#endif 	/* __IConnectionShort_FWD_DEFINED__ */

#ifndef __IWorkingProcessInfo_FWD_DEFINED__
#define __IWorkingProcessInfo_FWD_DEFINED__
typedef interface IWorkingProcessInfo IWorkingProcessInfo;

#endif 	/* __IWorkingProcessInfo_FWD_DEFINED__ */

#ifndef __IRegUserInfo_FWD_DEFINED__
#define __IRegUserInfo_FWD_DEFINED__
typedef interface IRegUserInfo IRegUserInfo;

#endif 	/* __IRegUserInfo_FWD_DEFINED__ */

#ifndef __IWorkingServerInfo_FWD_DEFINED__
#define __IWorkingServerInfo_FWD_DEFINED__
typedef interface IWorkingServerInfo IWorkingServerInfo;

#endif 	/* __IWorkingServerInfo_FWD_DEFINED__ */

#ifndef __IPortRangeInfo_FWD_DEFINED__
#define __IPortRangeInfo_FWD_DEFINED__
typedef interface IPortRangeInfo IPortRangeInfo;

#endif 	/* __IPortRangeInfo_FWD_DEFINED__ */

#ifndef __ISessionInfo_FWD_DEFINED__
#define __ISessionInfo_FWD_DEFINED__
typedef interface ISessionInfo ISessionInfo;

#endif 	/* __ISessionInfo_FWD_DEFINED__ */

#ifndef __IAssignmentRuleInfo_FWD_DEFINED__
#define __IAssignmentRuleInfo_FWD_DEFINED__
typedef interface IAssignmentRuleInfo IAssignmentRuleInfo;

#endif 	/* __IAssignmentRuleInfo_FWD_DEFINED__ */

#ifndef __ISecurityProfile_FWD_DEFINED__
#define __ISecurityProfile_FWD_DEFINED__
typedef interface ISecurityProfile ISecurityProfile;

#endif 	/* __ISecurityProfile_FWD_DEFINED__ */

#ifndef __ISecurityProfileVirtualDirectory_FWD_DEFINED__
#define __ISecurityProfileVirtualDirectory_FWD_DEFINED__
typedef interface ISecurityProfileVirtualDirectory ISecurityProfileVirtualDirectory;

#endif 	/* __ISecurityProfileVirtualDirectory_FWD_DEFINED__ */

#ifndef __ISecurityProfileCOMClass_FWD_DEFINED__
#define __ISecurityProfileCOMClass_FWD_DEFINED__
typedef interface ISecurityProfileCOMClass ISecurityProfileCOMClass;

#endif 	/* __ISecurityProfileCOMClass_FWD_DEFINED__ */

#ifndef __ISecurityProfileAddIn_FWD_DEFINED__
#define __ISecurityProfileAddIn_FWD_DEFINED__
typedef interface ISecurityProfileAddIn ISecurityProfileAddIn;

#endif 	/* __ISecurityProfileAddIn_FWD_DEFINED__ */

#ifndef __ISecurityProfileExternalModule_FWD_DEFINED__
#define __ISecurityProfileExternalModule_FWD_DEFINED__
typedef interface ISecurityProfileExternalModule ISecurityProfileExternalModule;

#endif 	/* __ISecurityProfileExternalModule_FWD_DEFINED__ */

#ifndef __ISecurityProfileApplication_FWD_DEFINED__
#define __ISecurityProfileApplication_FWD_DEFINED__
typedef interface ISecurityProfileApplication ISecurityProfileApplication;

#endif 	/* __ISecurityProfileApplication_FWD_DEFINED__ */

#ifndef __ISecurityProfileInternetResource_FWD_DEFINED__
#define __ISecurityProfileInternetResource_FWD_DEFINED__
typedef interface ISecurityProfileInternetResource ISecurityProfileInternetResource;

#endif 	/* __ISecurityProfileInternetResource_FWD_DEFINED__ */

#ifndef __IObjectLock_FWD_DEFINED__
#define __IObjectLock_FWD_DEFINED__
typedef interface IObjectLock IObjectLock;

#endif 	/* __IObjectLock_FWD_DEFINED__ */

#ifndef __ILicenseInfo_FWD_DEFINED__
#define __ILicenseInfo_FWD_DEFINED__
typedef interface ILicenseInfo ILicenseInfo;

#endif 	/* __ILicenseInfo_FWD_DEFINED__ */

#ifndef __IClusterServiceInfo_FWD_DEFINED__
#define __IClusterServiceInfo_FWD_DEFINED__
typedef interface IClusterServiceInfo IClusterServiceInfo;

#endif 	/* __IClusterServiceInfo_FWD_DEFINED__ */

#ifndef __IClusterManagerInfo_FWD_DEFINED__
#define __IClusterManagerInfo_FWD_DEFINED__
typedef interface IClusterManagerInfo IClusterManagerInfo;

#endif 	/* __IClusterManagerInfo_FWD_DEFINED__ */

#ifndef __COMConnector_FWD_DEFINED__
#define __COMConnector_FWD_DEFINED__

#ifdef __cplusplus
typedef class COMConnector COMConnector;
#else
typedef struct COMConnector COMConnector;
#endif /* __cplusplus */

#endif 	/* __COMConnector_FWD_DEFINED__ */

#ifdef __cplusplus
extern "C"{
#endif 

#ifndef __IV8COMConnector_INTERFACE_DEFINED__
#define __IV8COMConnector_INTERFACE_DEFINED__

/* interface IV8COMConnector */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IV8COMConnector;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("BA4E52BD-DCB2-4BF7-BB29-84C1CA456A8F")
	IV8COMConnector : public IDispatch
	{
	public:
		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( 
			/* [in] */ BSTR connectString,
			/* [retval][out] */ IDispatch **conn) = 0;

	};

#else 	/* C style interface */

	typedef struct IV8COMConnectorVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IV8COMConnector * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IV8COMConnector * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IV8COMConnector * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IV8COMConnector * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IV8COMConnector * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IV8COMConnector * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IV8COMConnector * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
			IV8COMConnector * This,
			/* [in] */ BSTR connectString,
			/* [retval][out] */ IDispatch **conn);

		END_INTERFACE
	} IV8COMConnectorVtbl;

	interface IV8COMConnector
	{
		CONST_VTBL struct IV8COMConnectorVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IV8COMConnector_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IV8COMConnector_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IV8COMConnector_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IV8COMConnector_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IV8COMConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IV8COMConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IV8COMConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IV8COMConnector_Connect(This,connectString,conn)	\
	( (This)->lpVtbl -> Connect(This,connectString,conn) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IV8COMConnector_INTERFACE_DEFINED__ */

#ifndef __IV8COMConnector2_INTERFACE_DEFINED__
#define __IV8COMConnector2_INTERFACE_DEFINED__

/* interface IV8COMConnector2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IV8COMConnector2;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("687CB41E-3FBC-4096-9BAA-9065F2546D8F")
	IV8COMConnector2 : public IV8COMConnector
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PoolCapacity( 
			/* [retval][out] */ unsigned long *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PoolCapacity( 
			/* [in] */ unsigned long pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PoolTimeout( 
			/* [retval][out] */ unsigned long *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PoolTimeout( 
			/* [in] */ unsigned long pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IV8COMConnector2Vtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IV8COMConnector2 * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IV8COMConnector2 * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IV8COMConnector2 * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IV8COMConnector2 * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IV8COMConnector2 * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IV8COMConnector2 * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IV8COMConnector2 * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
			IV8COMConnector2 * This,
			/* [in] */ BSTR connectString,
			/* [retval][out] */ IDispatch **conn);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PoolCapacity )( 
			IV8COMConnector2 * This,
			/* [retval][out] */ unsigned long *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PoolCapacity )( 
			IV8COMConnector2 * This,
			/* [in] */ unsigned long pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PoolTimeout )( 
			IV8COMConnector2 * This,
			/* [retval][out] */ unsigned long *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PoolTimeout )( 
			IV8COMConnector2 * This,
			/* [in] */ unsigned long pVal);

		END_INTERFACE
	} IV8COMConnector2Vtbl;

	interface IV8COMConnector2
	{
		CONST_VTBL struct IV8COMConnector2Vtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IV8COMConnector2_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IV8COMConnector2_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IV8COMConnector2_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IV8COMConnector2_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IV8COMConnector2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IV8COMConnector2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IV8COMConnector2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IV8COMConnector2_Connect(This,connectString,conn)	\
	( (This)->lpVtbl -> Connect(This,connectString,conn) ) 

#define IV8COMConnector2_get_PoolCapacity(This,pVal)	\
	( (This)->lpVtbl -> get_PoolCapacity(This,pVal) ) 

#define IV8COMConnector2_put_PoolCapacity(This,pVal)	\
	( (This)->lpVtbl -> put_PoolCapacity(This,pVal) ) 

#define IV8COMConnector2_get_PoolTimeout(This,pVal)	\
	( (This)->lpVtbl -> get_PoolTimeout(This,pVal) ) 

#define IV8COMConnector2_put_PoolTimeout(This,pVal)	\
	( (This)->lpVtbl -> put_PoolTimeout(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IV8COMConnector2_INTERFACE_DEFINED__ */

#ifndef __V83_LIBRARY_DEFINED__
#define __V83_LIBRARY_DEFINED__

/* library V83 */
/* [custom][custom][custom][helpstring][version][uuid] */ 

EXTERN_C const IID LIBID_V83;

#ifndef __IV8COMConnector3_INTERFACE_DEFINED__
#define __IV8COMConnector3_INTERFACE_DEFINED__

/* interface IV8COMConnector3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IV8COMConnector3;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("2FF2245E-C604-45BD-AC16-19B1F64BD9A4")
	IV8COMConnector3 : public IV8COMConnector2
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxConnections( 
			/* [retval][out] */ unsigned long *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxConnections( 
			/* [in] */ unsigned long pVal) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectWorkingProcess( 
			/* [in] */ BSTR serverName,
			/* [retval][out] */ IWorkingProcessConnection **conn) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectAgent( 
			/* [in] */ BSTR serverName,
			/* [retval][out] */ IServerAgentConnection **conn) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RAgentPortDefault( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RMngrPortDefault( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LowBoundDefault( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HighBoundDefault( 
			/* [retval][out] */ int *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IV8COMConnector3Vtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IV8COMConnector3 * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IV8COMConnector3 * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IV8COMConnector3 * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IV8COMConnector3 * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IV8COMConnector3 * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IV8COMConnector3 * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IV8COMConnector3 * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
			IV8COMConnector3 * This,
			/* [in] */ BSTR connectString,
			/* [retval][out] */ IDispatch **conn);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PoolCapacity )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ unsigned long *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PoolCapacity )( 
			IV8COMConnector3 * This,
			/* [in] */ unsigned long pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PoolTimeout )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ unsigned long *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PoolTimeout )( 
			IV8COMConnector3 * This,
			/* [in] */ unsigned long pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxConnections )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ unsigned long *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxConnections )( 
			IV8COMConnector3 * This,
			/* [in] */ unsigned long pVal);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectWorkingProcess )( 
			IV8COMConnector3 * This,
			/* [in] */ BSTR serverName,
			/* [retval][out] */ IWorkingProcessConnection **conn);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectAgent )( 
			IV8COMConnector3 * This,
			/* [in] */ BSTR serverName,
			/* [retval][out] */ IServerAgentConnection **conn);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RAgentPortDefault )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RMngrPortDefault )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LowBoundDefault )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HighBoundDefault )( 
			IV8COMConnector3 * This,
			/* [retval][out] */ int *pVal);

		END_INTERFACE
	} IV8COMConnector3Vtbl;

	interface IV8COMConnector3
	{
		CONST_VTBL struct IV8COMConnector3Vtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IV8COMConnector3_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IV8COMConnector3_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IV8COMConnector3_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IV8COMConnector3_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IV8COMConnector3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IV8COMConnector3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IV8COMConnector3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IV8COMConnector3_Connect(This,connectString,conn)	\
	( (This)->lpVtbl -> Connect(This,connectString,conn) ) 

#define IV8COMConnector3_get_PoolCapacity(This,pVal)	\
	( (This)->lpVtbl -> get_PoolCapacity(This,pVal) ) 

#define IV8COMConnector3_put_PoolCapacity(This,pVal)	\
	( (This)->lpVtbl -> put_PoolCapacity(This,pVal) ) 

#define IV8COMConnector3_get_PoolTimeout(This,pVal)	\
	( (This)->lpVtbl -> get_PoolTimeout(This,pVal) ) 

#define IV8COMConnector3_put_PoolTimeout(This,pVal)	\
	( (This)->lpVtbl -> put_PoolTimeout(This,pVal) ) 

#define IV8COMConnector3_get_MaxConnections(This,pVal)	\
	( (This)->lpVtbl -> get_MaxConnections(This,pVal) ) 

#define IV8COMConnector3_put_MaxConnections(This,pVal)	\
	( (This)->lpVtbl -> put_MaxConnections(This,pVal) ) 

#define IV8COMConnector3_ConnectWorkingProcess(This,serverName,conn)	\
	( (This)->lpVtbl -> ConnectWorkingProcess(This,serverName,conn) ) 

#define IV8COMConnector3_ConnectAgent(This,serverName,conn)	\
	( (This)->lpVtbl -> ConnectAgent(This,serverName,conn) ) 

#define IV8COMConnector3_get_RAgentPortDefault(This,pVal)	\
	( (This)->lpVtbl -> get_RAgentPortDefault(This,pVal) ) 

#define IV8COMConnector3_get_RMngrPortDefault(This,pVal)	\
	( (This)->lpVtbl -> get_RMngrPortDefault(This,pVal) ) 

#define IV8COMConnector3_get_LowBoundDefault(This,pVal)	\
	( (This)->lpVtbl -> get_LowBoundDefault(This,pVal) ) 

#define IV8COMConnector3_get_HighBoundDefault(This,pVal)	\
	( (This)->lpVtbl -> get_HighBoundDefault(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IV8COMConnector3_INTERFACE_DEFINED__ */

#ifndef __IWorkingProcessConnection_INTERFACE_DEFINED__
#define __IWorkingProcessConnection_INTERFACE_DEFINED__

/* interface IWorkingProcessConnection */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IWorkingProcessConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("F097A4B8-28DB-4162-8904-772D6D8BCC76")
	IWorkingProcessConnection : public IDispatch
	{
	public:
		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAuthentication( 
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPassword) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBases( 
			/* [retval][out] */ SAFEARRAY * *infoBases) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBaseConnections( 
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [retval][out] */ SAFEARRAY * *connections) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateInfoBaseInfo( 
			/* [retval][out] */ IInfoBaseInfo **infoBase) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateInfoBase( 
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ int mode) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DropInfoBase( 
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ int mode) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disconnect( 
			/* [in] */ IInfoBaseConnectionInfo *connection) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( 
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPassword,
			/* [retval][out] */ IDispatch **conn) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AuthenticateAdmin( 
			/* [in] */ BSTR srvrUserName,
			/* [in] */ BSTR srvrUserPassword) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateInfoBase( 
			/* [in] */ IInfoBaseInfo *infoBase) = 0;

	};

#else 	/* C style interface */

	typedef struct IWorkingProcessConnectionVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IWorkingProcessConnection * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IWorkingProcessConnection * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IWorkingProcessConnection * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IWorkingProcessConnection * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IWorkingProcessConnection * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IWorkingProcessConnection * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IWorkingProcessConnection * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAuthentication )( 
			IWorkingProcessConnection * This,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPassword);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBases )( 
			IWorkingProcessConnection * This,
			/* [retval][out] */ SAFEARRAY * *infoBases);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBaseConnections )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [retval][out] */ SAFEARRAY * *connections);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateInfoBaseInfo )( 
			IWorkingProcessConnection * This,
			/* [retval][out] */ IInfoBaseInfo **infoBase);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateInfoBase )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ int mode);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DropInfoBase )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ int mode);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseConnectionInfo *connection);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseInfo *infoBase,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPassword,
			/* [retval][out] */ IDispatch **conn);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AuthenticateAdmin )( 
			IWorkingProcessConnection * This,
			/* [in] */ BSTR srvrUserName,
			/* [in] */ BSTR srvrUserPassword);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateInfoBase )( 
			IWorkingProcessConnection * This,
			/* [in] */ IInfoBaseInfo *infoBase);

		END_INTERFACE
	} IWorkingProcessConnectionVtbl;

	interface IWorkingProcessConnection
	{
		CONST_VTBL struct IWorkingProcessConnectionVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IWorkingProcessConnection_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkingProcessConnection_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkingProcessConnection_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IWorkingProcessConnection_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorkingProcessConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorkingProcessConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorkingProcessConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IWorkingProcessConnection_AddAuthentication(This,userName,userPassword)	\
	( (This)->lpVtbl -> AddAuthentication(This,userName,userPassword) ) 

#define IWorkingProcessConnection_GetInfoBases(This,infoBases)	\
	( (This)->lpVtbl -> GetInfoBases(This,infoBases) ) 

#define IWorkingProcessConnection_GetInfoBaseConnections(This,infoBase,connections)	\
	( (This)->lpVtbl -> GetInfoBaseConnections(This,infoBase,connections) ) 

#define IWorkingProcessConnection_CreateInfoBaseInfo(This,infoBase)	\
	( (This)->lpVtbl -> CreateInfoBaseInfo(This,infoBase) ) 

#define IWorkingProcessConnection_CreateInfoBase(This,infoBase,mode)	\
	( (This)->lpVtbl -> CreateInfoBase(This,infoBase,mode) ) 

#define IWorkingProcessConnection_DropInfoBase(This,infoBase,mode)	\
	( (This)->lpVtbl -> DropInfoBase(This,infoBase,mode) ) 

#define IWorkingProcessConnection_Disconnect(This,connection)	\
	( (This)->lpVtbl -> Disconnect(This,connection) ) 

#define IWorkingProcessConnection_Connect(This,infoBase,userName,userPassword,conn)	\
	( (This)->lpVtbl -> Connect(This,infoBase,userName,userPassword,conn) ) 

#define IWorkingProcessConnection_AuthenticateAdmin(This,srvrUserName,srvrUserPassword)	\
	( (This)->lpVtbl -> AuthenticateAdmin(This,srvrUserName,srvrUserPassword) ) 

#define IWorkingProcessConnection_UpdateInfoBase(This,infoBase)	\
	( (This)->lpVtbl -> UpdateInfoBase(This,infoBase) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IWorkingProcessConnection_INTERFACE_DEFINED__ */

#ifndef __IInfoBaseInfo_INTERFACE_DEFINED__
#define __IInfoBaseInfo_INTERFACE_DEFINED__

/* interface IInfoBaseInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IInfoBaseInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("94FFC9F2-286C-480C-BB80-A20D8E8E1464")
	IInfoBaseInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBMS( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DBMS( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBServerName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DBServerName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DBName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBUser( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DBUser( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBPassword( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DBPassword( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DateOffset( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DateOffset( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Locale( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Locale( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SecurityLevel( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SecurityLevel( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectDenied( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectDenied( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeniedFrom( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DeniedFrom( 
			/* [in] */ DATE pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeniedTo( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DeniedTo( 
			/* [in] */ DATE pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeniedMessage( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DeniedMessage( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PermissionCode( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PermissionCode( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeniedParameter( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DeniedParameter( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScheduledJobsDenied( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScheduledJobsDenied( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionsDenied( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SessionsDenied( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LicenseDistributionAllowed( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LicenseDistributionAllowed( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExternalSessionManagerConnectionString( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExternalSessionManagerConnectionString( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExternalSessionManagerRequired( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExternalSessionManagerRequired( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SecurityProfileName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SecurityProfileName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SafeModeSecurityProfileName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SafeModeSecurityProfileName( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IInfoBaseInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IInfoBaseInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IInfoBaseInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IInfoBaseInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IInfoBaseInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IInfoBaseInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IInfoBaseInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IInfoBaseInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBMS )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DBMS )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBServerName )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DBServerName )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBName )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DBName )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBUser )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DBUser )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBPassword )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DBPassword )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DateOffset )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DateOffset )( 
			IInfoBaseInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Locale )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Locale )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityLevel )( 
			IInfoBaseInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectDenied )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectDenied )( 
			IInfoBaseInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeniedFrom )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeniedFrom )( 
			IInfoBaseInfo * This,
			/* [in] */ DATE pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeniedTo )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeniedTo )( 
			IInfoBaseInfo * This,
			/* [in] */ DATE pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeniedMessage )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeniedMessage )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PermissionCode )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PermissionCode )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeniedParameter )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeniedParameter )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledJobsDenied )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledJobsDenied )( 
			IInfoBaseInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionsDenied )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SessionsDenied )( 
			IInfoBaseInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseDistributionAllowed )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseDistributionAllowed )( 
			IInfoBaseInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalSessionManagerConnectionString )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalSessionManagerConnectionString )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalSessionManagerRequired )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalSessionManagerRequired )( 
			IInfoBaseInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityProfileName )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityProfileName )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SafeModeSecurityProfileName )( 
			IInfoBaseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SafeModeSecurityProfileName )( 
			IInfoBaseInfo * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} IInfoBaseInfoVtbl;

	interface IInfoBaseInfo
	{
		CONST_VTBL struct IInfoBaseInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IInfoBaseInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInfoBaseInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IInfoBaseInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IInfoBaseInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInfoBaseInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInfoBaseInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInfoBaseInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IInfoBaseInfo_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IInfoBaseInfo_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IInfoBaseInfo_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define IInfoBaseInfo_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#define IInfoBaseInfo_get_DBMS(This,pVal)	\
	( (This)->lpVtbl -> get_DBMS(This,pVal) ) 

#define IInfoBaseInfo_put_DBMS(This,pVal)	\
	( (This)->lpVtbl -> put_DBMS(This,pVal) ) 

#define IInfoBaseInfo_get_DBServerName(This,pVal)	\
	( (This)->lpVtbl -> get_DBServerName(This,pVal) ) 

#define IInfoBaseInfo_put_DBServerName(This,pVal)	\
	( (This)->lpVtbl -> put_DBServerName(This,pVal) ) 

#define IInfoBaseInfo_get_DBName(This,pVal)	\
	( (This)->lpVtbl -> get_DBName(This,pVal) ) 

#define IInfoBaseInfo_put_DBName(This,pVal)	\
	( (This)->lpVtbl -> put_DBName(This,pVal) ) 

#define IInfoBaseInfo_get_DBUser(This,pVal)	\
	( (This)->lpVtbl -> get_DBUser(This,pVal) ) 

#define IInfoBaseInfo_put_DBUser(This,pVal)	\
	( (This)->lpVtbl -> put_DBUser(This,pVal) ) 

#define IInfoBaseInfo_get_DBPassword(This,pVal)	\
	( (This)->lpVtbl -> get_DBPassword(This,pVal) ) 

#define IInfoBaseInfo_put_DBPassword(This,pVal)	\
	( (This)->lpVtbl -> put_DBPassword(This,pVal) ) 

#define IInfoBaseInfo_get_DateOffset(This,pVal)	\
	( (This)->lpVtbl -> get_DateOffset(This,pVal) ) 

#define IInfoBaseInfo_put_DateOffset(This,pVal)	\
	( (This)->lpVtbl -> put_DateOffset(This,pVal) ) 

#define IInfoBaseInfo_get_Locale(This,pVal)	\
	( (This)->lpVtbl -> get_Locale(This,pVal) ) 

#define IInfoBaseInfo_put_Locale(This,pVal)	\
	( (This)->lpVtbl -> put_Locale(This,pVal) ) 

#define IInfoBaseInfo_get_SecurityLevel(This,pVal)	\
	( (This)->lpVtbl -> get_SecurityLevel(This,pVal) ) 

#define IInfoBaseInfo_put_SecurityLevel(This,pVal)	\
	( (This)->lpVtbl -> put_SecurityLevel(This,pVal) ) 

#define IInfoBaseInfo_get_ConnectDenied(This,pVal)	\
	( (This)->lpVtbl -> get_ConnectDenied(This,pVal) ) 

#define IInfoBaseInfo_put_ConnectDenied(This,pVal)	\
	( (This)->lpVtbl -> put_ConnectDenied(This,pVal) ) 

#define IInfoBaseInfo_get_DeniedFrom(This,pVal)	\
	( (This)->lpVtbl -> get_DeniedFrom(This,pVal) ) 

#define IInfoBaseInfo_put_DeniedFrom(This,pVal)	\
	( (This)->lpVtbl -> put_DeniedFrom(This,pVal) ) 

#define IInfoBaseInfo_get_DeniedTo(This,pVal)	\
	( (This)->lpVtbl -> get_DeniedTo(This,pVal) ) 

#define IInfoBaseInfo_put_DeniedTo(This,pVal)	\
	( (This)->lpVtbl -> put_DeniedTo(This,pVal) ) 

#define IInfoBaseInfo_get_DeniedMessage(This,pVal)	\
	( (This)->lpVtbl -> get_DeniedMessage(This,pVal) ) 

#define IInfoBaseInfo_put_DeniedMessage(This,pVal)	\
	( (This)->lpVtbl -> put_DeniedMessage(This,pVal) ) 

#define IInfoBaseInfo_get_PermissionCode(This,pVal)	\
	( (This)->lpVtbl -> get_PermissionCode(This,pVal) ) 

#define IInfoBaseInfo_put_PermissionCode(This,pVal)	\
	( (This)->lpVtbl -> put_PermissionCode(This,pVal) ) 

#define IInfoBaseInfo_get_DeniedParameter(This,pVal)	\
	( (This)->lpVtbl -> get_DeniedParameter(This,pVal) ) 

#define IInfoBaseInfo_put_DeniedParameter(This,pVal)	\
	( (This)->lpVtbl -> put_DeniedParameter(This,pVal) ) 

#define IInfoBaseInfo_get_ScheduledJobsDenied(This,pVal)	\
	( (This)->lpVtbl -> get_ScheduledJobsDenied(This,pVal) ) 

#define IInfoBaseInfo_put_ScheduledJobsDenied(This,pVal)	\
	( (This)->lpVtbl -> put_ScheduledJobsDenied(This,pVal) ) 

#define IInfoBaseInfo_get_SessionsDenied(This,pVal)	\
	( (This)->lpVtbl -> get_SessionsDenied(This,pVal) ) 

#define IInfoBaseInfo_put_SessionsDenied(This,pVal)	\
	( (This)->lpVtbl -> put_SessionsDenied(This,pVal) ) 

#define IInfoBaseInfo_get_LicenseDistributionAllowed(This,pVal)	\
	( (This)->lpVtbl -> get_LicenseDistributionAllowed(This,pVal) ) 

#define IInfoBaseInfo_put_LicenseDistributionAllowed(This,pVal)	\
	( (This)->lpVtbl -> put_LicenseDistributionAllowed(This,pVal) ) 

#define IInfoBaseInfo_get_ExternalSessionManagerConnectionString(This,pVal)	\
	( (This)->lpVtbl -> get_ExternalSessionManagerConnectionString(This,pVal) ) 

#define IInfoBaseInfo_put_ExternalSessionManagerConnectionString(This,pVal)	\
	( (This)->lpVtbl -> put_ExternalSessionManagerConnectionString(This,pVal) ) 

#define IInfoBaseInfo_get_ExternalSessionManagerRequired(This,pVal)	\
	( (This)->lpVtbl -> get_ExternalSessionManagerRequired(This,pVal) ) 

#define IInfoBaseInfo_put_ExternalSessionManagerRequired(This,pVal)	\
	( (This)->lpVtbl -> put_ExternalSessionManagerRequired(This,pVal) ) 

#define IInfoBaseInfo_get_SecurityProfileName(This,pVal)	\
	( (This)->lpVtbl -> get_SecurityProfileName(This,pVal) ) 

#define IInfoBaseInfo_put_SecurityProfileName(This,pVal)	\
	( (This)->lpVtbl -> put_SecurityProfileName(This,pVal) ) 

#define IInfoBaseInfo_get_SafeModeSecurityProfileName(This,pVal)	\
	( (This)->lpVtbl -> get_SafeModeSecurityProfileName(This,pVal) ) 

#define IInfoBaseInfo_put_SafeModeSecurityProfileName(This,pVal)	\
	( (This)->lpVtbl -> put_SafeModeSecurityProfileName(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IInfoBaseInfo_INTERFACE_DEFINED__ */

#ifndef __IInfoBaseConnectionInfo_INTERFACE_DEFINED__
#define __IInfoBaseConnectionInfo_INTERFACE_DEFINED__

/* interface IInfoBaseConnectionInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IInfoBaseConnectionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("7DF710D1-BA3F-4714-8DDC-634C3C4BB138")
	IInfoBaseConnectionInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_userName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HostName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AppID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnID( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectedAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IBConnMode( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DBConnMode( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcInfo( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcTookAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcTook( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAllDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5MinDBMS( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrentDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAll( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrent( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_callsAll( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_callsLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_bytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_bytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_blockedByDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbmsBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbmsBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryCurrent( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryLast5Min( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryAll( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesCurrent( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesCurrent( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrentService( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5MinService( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAllService( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentServiceName( 
			/* [retval][out] */ BSTR *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IInfoBaseConnectionInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IInfoBaseConnectionInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IInfoBaseConnectionInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IInfoBaseConnectionInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IInfoBaseConnectionInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IInfoBaseConnectionInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IInfoBaseConnectionInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IInfoBaseConnectionInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_userName )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AppID )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnID )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedAt )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IBConnMode )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DBConnMode )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcInfo )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcTookAt )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcTook )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAllDBMS )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5MinDBMS )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrentDBMS )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrent )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_callsAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_callsLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bytesAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bytesLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_blockedByDBMS )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbmsBytesAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbmsBytesLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryCurrent )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesCurrent )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesCurrent )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesLast5Min )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesAll )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrentService )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5MinService )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAllService )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentServiceName )( 
			IInfoBaseConnectionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		END_INTERFACE
	} IInfoBaseConnectionInfoVtbl;

	interface IInfoBaseConnectionInfo
	{
		CONST_VTBL struct IInfoBaseConnectionInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IInfoBaseConnectionInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInfoBaseConnectionInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IInfoBaseConnectionInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IInfoBaseConnectionInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInfoBaseConnectionInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInfoBaseConnectionInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInfoBaseConnectionInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IInfoBaseConnectionInfo_get_userName(This,pVal)	\
	( (This)->lpVtbl -> get_userName(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_HostName(This,pVal)	\
	( (This)->lpVtbl -> get_HostName(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_AppID(This,pVal)	\
	( (This)->lpVtbl -> get_AppID(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_ConnID(This,pVal)	\
	( (This)->lpVtbl -> get_ConnID(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_ConnectedAt(This,pVal)	\
	( (This)->lpVtbl -> get_ConnectedAt(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_IBConnMode(This,pVal)	\
	( (This)->lpVtbl -> get_IBConnMode(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_DBConnMode(This,pVal)	\
	( (This)->lpVtbl -> get_DBConnMode(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_dbProcInfo(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcInfo(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_dbProcTookAt(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcTookAt(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_dbProcTook(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcTook(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationAllDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationAllDBMS(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationLast5MinDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5MinDBMS(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationCurrentDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrentDBMS(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationAll(This,pVal)	\
	( (This)->lpVtbl -> get_durationAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrent(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_callsAll(This,pVal)	\
	( (This)->lpVtbl -> get_callsAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_callsLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_callsLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_bytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_bytesAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_bytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_bytesLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_blockedByDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_blockedByDBMS(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_dbmsBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_dbmsBytesAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_dbmsBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_dbmsBytesLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_MemoryCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryCurrent(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_MemoryLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_MemoryAll(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_InBytesCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesCurrent(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_InBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_InBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_OutBytesCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesCurrent(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_OutBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesLast5Min(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_OutBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesAll(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationCurrentService(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrentService(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationLast5MinService(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5MinService(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_durationAllService(This,pVal)	\
	( (This)->lpVtbl -> get_durationAllService(This,pVal) ) 

#define IInfoBaseConnectionInfo_get_CurrentServiceName(This,pVal)	\
	( (This)->lpVtbl -> get_CurrentServiceName(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IInfoBaseConnectionInfo_INTERFACE_DEFINED__ */

#ifndef __IServerAgentConnection_INTERFACE_DEFINED__
#define __IServerAgentConnection_INTERFACE_DEFINED__

/* interface IServerAgentConnection */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IServerAgentConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("0433D6E5-C99A-4FBC-AAA6-7B20ADD134D0")
	IServerAgentConnection : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionString( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClusters( 
			/* [retval][out] */ SAFEARRAY * *registries) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateClusterInfo( 
			/* [retval][out] */ IClusterInfo **registry) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegCluster( 
			/* [in] */ IClusterInfo *registry) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregCluster( 
			/* [in] */ IClusterInfo *registry) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWorkingProcesses( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *processes) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBases( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *infoBases) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnections( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *connections) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBaseConnections( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *connections) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLocks( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *locks) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBaseLocks( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *locks) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnectionLocks( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IConnectionShort *client,
			/* [retval][out] */ SAFEARRAY * *locks) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Authenticate( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPswd) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClusterAdmins( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *users) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateClusterAdminInfo( 
			/* [retval][out] */ IRegUserInfo **user) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegClusterAdmin( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IRegUserInfo *user) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregClusterAdmin( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR userName) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWorkingServers( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *servers) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateWorkingServerInfo( 
			/* [retval][out] */ IWorkingServerInfo **server) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegWorkingServer( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregWorkingServer( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerWorkingProcesses( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server,
			/* [retval][out] */ SAFEARRAY * *processes) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateWorkingServer( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterMultiProcess( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL MultiProcess) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AuthenticateAgent( 
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPswd) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAgentAdmins( 
			/* [retval][out] */ SAFEARRAY * *users) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegAgentAdmin( 
			/* [in] */ IRegUserInfo *user) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregAgentAdmin( 
			/* [in] */ BSTR userName) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterSecurityLevel( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int secLevel) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterDescription( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR Descr) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateInfoBase( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecycling( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int LifeTimeLimit,
			/* [in] */ int ExpirationTimeout) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClusterManagers( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *managers) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClusterServices( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *services) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSessions( 
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *sessions) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoBaseSessions( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *sessions) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TerminateSession( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session,
			/* [defaultvalue][optional][in] */ BSTR errorMessage = (BSTR)L"") = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingByMemory( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int MaxMemorySize,
			/* [in] */ int MaxMemoryTimeLimit) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingByTime( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int LifeTimeLimit) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingExpirationTimeout( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int ExpirationTimeout) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingErrorsCountThreshold( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int ErrorsCountThreshold) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingKillProblemProcesses( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL KillProblemProcesses) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClusterRecyclingKillByMemoryWithDump( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL KillByMemoryWithDump) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSessionLocks( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session,
			/* [retval][out] */ SAFEARRAY * *locks) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyAssignmentRules( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ int full) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegAssignmentRule( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [in] */ IAssignmentRuleInfo *AssgnRuleInfo,
			/* [in] */ unsigned int position) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregAssignmentRule( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [in] */ IAssignmentRuleInfo *assignmentRule) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAssignmentRules( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [retval][out] */ SAFEARRAY * *assignmentRules) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAssignmentRule( 
			/* [retval][out] */ IAssignmentRuleInfo **AssgnRuleInfo) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfiles( 
			/* [in] */ IClusterInfo *cluster,
			/* [retval][out] */ SAFEARRAY * *securityProfiles) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfile( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ ISecurityProfile *securityProfile) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfile( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfile( 
			/* [retval][out] */ ISecurityProfile **hint) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileVirtualDirectories( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *virtualDirectories) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileVirtualDirectory( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileVirtualDirectory *virtualDirectory) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileVirtualDirectory( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileVirtualDirectory( 
			/* [retval][out] */ ISecurityProfileVirtualDirectory **virtualDirectory) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileCOMClasses( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *comClasses) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileCOMClass( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileCOMClass *comClass) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileCOMClass( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileCOMClass( 
			/* [retval][out] */ ISecurityProfileCOMClass **comClass) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileAddIns( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *addIns) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileAddIn( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileAddIn *addIn) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileAddIn( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileAddIn( 
			/* [retval][out] */ ISecurityProfileAddIn **addIn) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileUnSafeExternalModules( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *modules) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileUnSafeExternalModule( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileExternalModule *mod) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileUnSafeExternalModule( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileUnSafeExternalModule( 
			/* [retval][out] */ ISecurityProfileExternalModule **mod) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileApplications( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *appls) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileApplication( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileApplication *appl) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileApplication( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileApplication( 
			/* [retval][out] */ ISecurityProfileApplication **appl) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSecurityProfileInternetResources( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *appls) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegSecurityProfileInternetResource( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileInternetResource *ir) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregSecurityProfileInternetResource( 
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSecurityProfileInternetResource( 
			/* [retval][out] */ ISecurityProfileInternetResource **ir) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InterruptCurrentServerCall( 
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session,
			/* [defaultvalue][optional][in] */ BSTR errorMessage = (BSTR)L"") = 0;
	};

#else 	/* C style interface */

	typedef struct IServerAgentConnectionVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IServerAgentConnection * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IServerAgentConnection * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IServerAgentConnection * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IServerAgentConnection * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IServerAgentConnection * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IServerAgentConnection * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IServerAgentConnection * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )( 
			IServerAgentConnection * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClusters )( 
			IServerAgentConnection * This,
			/* [retval][out] */ SAFEARRAY * *registries);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateClusterInfo )( 
			IServerAgentConnection * This,
			/* [retval][out] */ IClusterInfo **registry);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegCluster )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregCluster )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWorkingProcesses )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *processes);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBases )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *infoBases);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnections )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *connections);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBaseConnections )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *connections);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLocks )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *locks);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBaseLocks )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *locks);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnectionLocks )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IConnectionShort *client,
			/* [retval][out] */ SAFEARRAY * *locks);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Authenticate )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPswd);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClusterAdmins )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *users);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateClusterAdminInfo )( 
			IServerAgentConnection * This,
			/* [retval][out] */ IRegUserInfo **user);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegClusterAdmin )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IRegUserInfo *user);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregClusterAdmin )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR userName);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWorkingServers )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *servers);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateWorkingServerInfo )( 
			IServerAgentConnection * This,
			/* [retval][out] */ IWorkingServerInfo **server);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegWorkingServer )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregWorkingServer )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerWorkingProcesses )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server,
			/* [retval][out] */ SAFEARRAY * *processes);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateWorkingServer )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IWorkingServerInfo *server);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterMultiProcess )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL MultiProcess);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AuthenticateAgent )( 
			IServerAgentConnection * This,
			/* [in] */ BSTR userName,
			/* [in] */ BSTR userPswd);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAgentAdmins )( 
			IServerAgentConnection * This,
			/* [retval][out] */ SAFEARRAY * *users);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegAgentAdmin )( 
			IServerAgentConnection * This,
			/* [in] */ IRegUserInfo *user);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregAgentAdmin )( 
			IServerAgentConnection * This,
			/* [in] */ BSTR userName);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterSecurityLevel )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int secLevel);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterDescription )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ BSTR Descr);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateInfoBase )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecycling )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int LifeTimeLimit,
			/* [in] */ int ExpirationTimeout);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClusterManagers )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *managers);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClusterServices )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *services);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSessions )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [retval][out] */ SAFEARRAY * *sessions);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoBaseSessions )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ IInfoBaseShort *infoBase,
			/* [retval][out] */ SAFEARRAY * *sessions);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TerminateSession )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session
			/* [defaultvalue][optional][in] */ BSTR errorMessage);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingByMemory )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int MaxMemorySize,
			/* [in] */ int MaxMemoryTimeLimit);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingByTime )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int LifeTimeLimit);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingExpirationTimeout )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int ExpirationTimeout);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingErrorsCountThreshold )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ int ErrorsCountThreshold);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingKillProblemProcesses )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL KillProblemProcesses);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClusterRecyclingKillByMemoryWithDump )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ VARIANT_BOOL KillByMemoryWithDump);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSessionLocks )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session,
			/* [retval][out] */ SAFEARRAY * *locks);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyAssignmentRules )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ int full);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegAssignmentRule )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [in] */ IAssignmentRuleInfo *AssgnRuleInfo,
			/* [in] */ unsigned int position);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregAssignmentRule )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [in] */ IAssignmentRuleInfo *assignmentRule);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAssignmentRules )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ IWorkingServerInfo *workingServer,
			/* [retval][out] */ SAFEARRAY * *assignmentRules);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAssignmentRule )( 
			IServerAgentConnection * This,
			/* [retval][out] */ IAssignmentRuleInfo **AssgnRuleInfo);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfiles )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [retval][out] */ SAFEARRAY * *securityProfiles);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfile )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ ISecurityProfile *securityProfile);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfile )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfile )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfile **hint);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileVirtualDirectories )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *virtualDirectories);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileVirtualDirectory )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileVirtualDirectory *virtualDirectory);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileVirtualDirectory )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileVirtualDirectory )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileVirtualDirectory **virtualDirectory);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileCOMClasses )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *comClasses);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileCOMClass )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileCOMClass *comClass);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileCOMClass )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileCOMClass )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileCOMClass **comClass);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileAddIns )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *addIns);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileAddIn )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileAddIn *addIn);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileAddIn )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileAddIn )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileAddIn **addIn);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileUnSafeExternalModules )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *modules);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileUnSafeExternalModule )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileExternalModule *mod);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileUnSafeExternalModule )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileUnSafeExternalModule )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileExternalModule **mod);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileApplications )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *appls);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileApplication )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileApplication *appl);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileApplication )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileApplication )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileApplication **appl);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityProfileInternetResources )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [retval][out] */ SAFEARRAY * *appls);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegSecurityProfileInternetResource )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ ISecurityProfileInternetResource *ir);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregSecurityProfileInternetResource )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *cluster,
			/* [in] */ BSTR spName,
			/* [in] */ BSTR Name);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSecurityProfileInternetResource )( 
			IServerAgentConnection * This,
			/* [retval][out] */ ISecurityProfileInternetResource **ir);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InterruptCurrentServerCall )( 
			IServerAgentConnection * This,
			/* [in] */ IClusterInfo *registry,
			/* [in] */ ISessionInfo *session
			/* [defaultvalue][optional][in] */ BSTR errorMessage);

		END_INTERFACE
	} IServerAgentConnectionVtbl;

	interface IServerAgentConnection
	{
		CONST_VTBL struct IServerAgentConnectionVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IServerAgentConnection_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServerAgentConnection_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IServerAgentConnection_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IServerAgentConnection_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServerAgentConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServerAgentConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServerAgentConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IServerAgentConnection_get_ConnectionString(This,pVal)	\
	( (This)->lpVtbl -> get_ConnectionString(This,pVal) ) 

#define IServerAgentConnection_GetClusters(This,registries)	\
	( (This)->lpVtbl -> GetClusters(This,registries) ) 

#define IServerAgentConnection_CreateClusterInfo(This,registry)	\
	( (This)->lpVtbl -> CreateClusterInfo(This,registry) ) 

#define IServerAgentConnection_RegCluster(This,registry)	\
	( (This)->lpVtbl -> RegCluster(This,registry) ) 

#define IServerAgentConnection_UnregCluster(This,registry)	\
	( (This)->lpVtbl -> UnregCluster(This,registry) ) 

#define IServerAgentConnection_GetWorkingProcesses(This,registry,processes)	\
	( (This)->lpVtbl -> GetWorkingProcesses(This,registry,processes) ) 

#define IServerAgentConnection_GetInfoBases(This,registry,infoBases)	\
	( (This)->lpVtbl -> GetInfoBases(This,registry,infoBases) ) 

#define IServerAgentConnection_GetConnections(This,registry,connections)	\
	( (This)->lpVtbl -> GetConnections(This,registry,connections) ) 

#define IServerAgentConnection_GetInfoBaseConnections(This,registry,infoBase,connections)	\
	( (This)->lpVtbl -> GetInfoBaseConnections(This,registry,infoBase,connections) ) 

#define IServerAgentConnection_GetLocks(This,registry,locks)	\
	( (This)->lpVtbl -> GetLocks(This,registry,locks) ) 

#define IServerAgentConnection_GetInfoBaseLocks(This,registry,infoBase,locks)	\
	( (This)->lpVtbl -> GetInfoBaseLocks(This,registry,infoBase,locks) ) 

#define IServerAgentConnection_GetConnectionLocks(This,registry,client,locks)	\
	( (This)->lpVtbl -> GetConnectionLocks(This,registry,client,locks) ) 

#define IServerAgentConnection_Authenticate(This,registry,userName,userPswd)	\
	( (This)->lpVtbl -> Authenticate(This,registry,userName,userPswd) ) 

#define IServerAgentConnection_GetClusterAdmins(This,registry,users)	\
	( (This)->lpVtbl -> GetClusterAdmins(This,registry,users) ) 

#define IServerAgentConnection_CreateClusterAdminInfo(This,user)	\
	( (This)->lpVtbl -> CreateClusterAdminInfo(This,user) ) 

#define IServerAgentConnection_RegClusterAdmin(This,registry,user)	\
	( (This)->lpVtbl -> RegClusterAdmin(This,registry,user) ) 

#define IServerAgentConnection_UnregClusterAdmin(This,registry,userName)	\
	( (This)->lpVtbl -> UnregClusterAdmin(This,registry,userName) ) 

#define IServerAgentConnection_GetWorkingServers(This,registry,servers)	\
	( (This)->lpVtbl -> GetWorkingServers(This,registry,servers) ) 

#define IServerAgentConnection_CreateWorkingServerInfo(This,server)	\
	( (This)->lpVtbl -> CreateWorkingServerInfo(This,server) ) 

#define IServerAgentConnection_RegWorkingServer(This,registry,server)	\
	( (This)->lpVtbl -> RegWorkingServer(This,registry,server) ) 

#define IServerAgentConnection_UnregWorkingServer(This,registry,server)	\
	( (This)->lpVtbl -> UnregWorkingServer(This,registry,server) ) 

#define IServerAgentConnection_GetServerWorkingProcesses(This,registry,server,processes)	\
	( (This)->lpVtbl -> GetServerWorkingProcesses(This,registry,server,processes) ) 

#define IServerAgentConnection_UpdateWorkingServer(This,registry,server)	\
	( (This)->lpVtbl -> UpdateWorkingServer(This,registry,server) ) 

#define IServerAgentConnection_SetClusterMultiProcess(This,registry,MultiProcess)	\
	( (This)->lpVtbl -> SetClusterMultiProcess(This,registry,MultiProcess) ) 

#define IServerAgentConnection_AuthenticateAgent(This,userName,userPswd)	\
	( (This)->lpVtbl -> AuthenticateAgent(This,userName,userPswd) ) 

#define IServerAgentConnection_GetAgentAdmins(This,users)	\
	( (This)->lpVtbl -> GetAgentAdmins(This,users) ) 

#define IServerAgentConnection_RegAgentAdmin(This,user)	\
	( (This)->lpVtbl -> RegAgentAdmin(This,user) ) 

#define IServerAgentConnection_UnregAgentAdmin(This,userName)	\
	( (This)->lpVtbl -> UnregAgentAdmin(This,userName) ) 

#define IServerAgentConnection_SetClusterSecurityLevel(This,registry,secLevel)	\
	( (This)->lpVtbl -> SetClusterSecurityLevel(This,registry,secLevel) ) 

#define IServerAgentConnection_SetClusterDescription(This,registry,Descr)	\
	( (This)->lpVtbl -> SetClusterDescription(This,registry,Descr) ) 

#define IServerAgentConnection_UpdateInfoBase(This,registry,infoBase)	\
	( (This)->lpVtbl -> UpdateInfoBase(This,registry,infoBase) ) 

#define IServerAgentConnection_SetClusterRecycling(This,registry,LifeTimeLimit,ExpirationTimeout)	\
	( (This)->lpVtbl -> SetClusterRecycling(This,registry,LifeTimeLimit,ExpirationTimeout) ) 

#define IServerAgentConnection_GetClusterManagers(This,registry,managers)	\
	( (This)->lpVtbl -> GetClusterManagers(This,registry,managers) ) 

#define IServerAgentConnection_GetClusterServices(This,registry,services)	\
	( (This)->lpVtbl -> GetClusterServices(This,registry,services) ) 

#define IServerAgentConnection_GetSessions(This,registry,sessions)	\
	( (This)->lpVtbl -> GetSessions(This,registry,sessions) ) 

#define IServerAgentConnection_GetInfoBaseSessions(This,registry,infoBase,sessions)	\
	( (This)->lpVtbl -> GetInfoBaseSessions(This,registry,infoBase,sessions) ) 

#define IServerAgentConnection_TerminateSession(This,registry,session,errorMessage)	\
	( (This)->lpVtbl -> TerminateSession(This,registry,session,errorMessage) ) 

#define IServerAgentConnection_SetClusterRecyclingByMemory(This,registry,MaxMemorySize,MaxMemoryTimeLimit)	\
	( (This)->lpVtbl -> SetClusterRecyclingByMemory(This,registry,MaxMemorySize,MaxMemoryTimeLimit) ) 

#define IServerAgentConnection_SetClusterRecyclingByTime(This,registry,LifeTimeLimit)	\
	( (This)->lpVtbl -> SetClusterRecyclingByTime(This,registry,LifeTimeLimit) ) 

#define IServerAgentConnection_SetClusterRecyclingExpirationTimeout(This,registry,ExpirationTimeout)	\
	( (This)->lpVtbl -> SetClusterRecyclingExpirationTimeout(This,registry,ExpirationTimeout) ) 

#define IServerAgentConnection_SetClusterRecyclingErrorsCountThreshold(This,registry,ErrorsCountThreshold)	\
	( (This)->lpVtbl -> SetClusterRecyclingErrorsCountThreshold(This,registry,ErrorsCountThreshold) ) 

#define IServerAgentConnection_SetClusterRecyclingKillProblemProcesses(This,registry,KillProblemProcesses)	\
	( (This)->lpVtbl -> SetClusterRecyclingKillProblemProcesses(This,registry,KillProblemProcesses) ) 

#define IServerAgentConnection_SetClusterRecyclingKillByMemoryWithDump(This,registry,KillByMemoryWithDump)	\
	( (This)->lpVtbl -> SetClusterRecyclingKillByMemoryWithDump(This,registry,KillByMemoryWithDump) ) 

#define IServerAgentConnection_GetSessionLocks(This,registry,session,locks)	\
	( (This)->lpVtbl -> GetSessionLocks(This,registry,session,locks) ) 

#define IServerAgentConnection_ApplyAssignmentRules(This,cluster,full)	\
	( (This)->lpVtbl -> ApplyAssignmentRules(This,cluster,full) ) 

#define IServerAgentConnection_RegAssignmentRule(This,cluster,workingServer,AssgnRuleInfo,position)	\
	( (This)->lpVtbl -> RegAssignmentRule(This,cluster,workingServer,AssgnRuleInfo,position) ) 

#define IServerAgentConnection_UnregAssignmentRule(This,cluster,workingServer,assignmentRule)	\
	( (This)->lpVtbl -> UnregAssignmentRule(This,cluster,workingServer,assignmentRule) ) 

#define IServerAgentConnection_GetAssignmentRules(This,cluster,workingServer,assignmentRules)	\
	( (This)->lpVtbl -> GetAssignmentRules(This,cluster,workingServer,assignmentRules) ) 

#define IServerAgentConnection_CreateAssignmentRule(This,AssgnRuleInfo)	\
	( (This)->lpVtbl -> CreateAssignmentRule(This,AssgnRuleInfo) ) 

#define IServerAgentConnection_GetSecurityProfiles(This,cluster,securityProfiles)	\
	( (This)->lpVtbl -> GetSecurityProfiles(This,cluster,securityProfiles) ) 

#define IServerAgentConnection_RegSecurityProfile(This,cluster,securityProfile)	\
	( (This)->lpVtbl -> RegSecurityProfile(This,cluster,securityProfile) ) 

#define IServerAgentConnection_UnregSecurityProfile(This,cluster,spName)	\
	( (This)->lpVtbl -> UnregSecurityProfile(This,cluster,spName) ) 

#define IServerAgentConnection_CreateSecurityProfile(This,hint)	\
	( (This)->lpVtbl -> CreateSecurityProfile(This,hint) ) 

#define IServerAgentConnection_GetSecurityProfileVirtualDirectories(This,cluster,spName,virtualDirectories)	\
	( (This)->lpVtbl -> GetSecurityProfileVirtualDirectories(This,cluster,spName,virtualDirectories) ) 

#define IServerAgentConnection_RegSecurityProfileVirtualDirectory(This,cluster,spName,virtualDirectory)	\
	( (This)->lpVtbl -> RegSecurityProfileVirtualDirectory(This,cluster,spName,virtualDirectory) ) 

#define IServerAgentConnection_UnregSecurityProfileVirtualDirectory(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileVirtualDirectory(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileVirtualDirectory(This,virtualDirectory)	\
	( (This)->lpVtbl -> CreateSecurityProfileVirtualDirectory(This,virtualDirectory) ) 

#define IServerAgentConnection_GetSecurityProfileCOMClasses(This,cluster,spName,comClasses)	\
	( (This)->lpVtbl -> GetSecurityProfileCOMClasses(This,cluster,spName,comClasses) ) 

#define IServerAgentConnection_RegSecurityProfileCOMClass(This,cluster,spName,comClass)	\
	( (This)->lpVtbl -> RegSecurityProfileCOMClass(This,cluster,spName,comClass) ) 

#define IServerAgentConnection_UnregSecurityProfileCOMClass(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileCOMClass(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileCOMClass(This,comClass)	\
	( (This)->lpVtbl -> CreateSecurityProfileCOMClass(This,comClass) ) 

#define IServerAgentConnection_GetSecurityProfileAddIns(This,cluster,spName,addIns)	\
	( (This)->lpVtbl -> GetSecurityProfileAddIns(This,cluster,spName,addIns) ) 

#define IServerAgentConnection_RegSecurityProfileAddIn(This,cluster,spName,addIn)	\
	( (This)->lpVtbl -> RegSecurityProfileAddIn(This,cluster,spName,addIn) ) 

#define IServerAgentConnection_UnregSecurityProfileAddIn(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileAddIn(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileAddIn(This,addIn)	\
	( (This)->lpVtbl -> CreateSecurityProfileAddIn(This,addIn) ) 

#define IServerAgentConnection_GetSecurityProfileUnSafeExternalModules(This,cluster,spName,modules)	\
	( (This)->lpVtbl -> GetSecurityProfileUnSafeExternalModules(This,cluster,spName,modules) ) 

#define IServerAgentConnection_RegSecurityProfileUnSafeExternalModule(This,cluster,spName,mod)	\
	( (This)->lpVtbl -> RegSecurityProfileUnSafeExternalModule(This,cluster,spName,mod) ) 

#define IServerAgentConnection_UnregSecurityProfileUnSafeExternalModule(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileUnSafeExternalModule(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileUnSafeExternalModule(This,mod)	\
	( (This)->lpVtbl -> CreateSecurityProfileUnSafeExternalModule(This,mod) ) 

#define IServerAgentConnection_GetSecurityProfileApplications(This,cluster,spName,appls)	\
	( (This)->lpVtbl -> GetSecurityProfileApplications(This,cluster,spName,appls) ) 

#define IServerAgentConnection_RegSecurityProfileApplication(This,cluster,spName,appl)	\
	( (This)->lpVtbl -> RegSecurityProfileApplication(This,cluster,spName,appl) ) 

#define IServerAgentConnection_UnregSecurityProfileApplication(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileApplication(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileApplication(This,appl)	\
	( (This)->lpVtbl -> CreateSecurityProfileApplication(This,appl) ) 

#define IServerAgentConnection_GetSecurityProfileInternetResources(This,cluster,spName,appls)	\
	( (This)->lpVtbl -> GetSecurityProfileInternetResources(This,cluster,spName,appls) ) 

#define IServerAgentConnection_RegSecurityProfileInternetResource(This,cluster,spName,ir)	\
	( (This)->lpVtbl -> RegSecurityProfileInternetResource(This,cluster,spName,ir) ) 

#define IServerAgentConnection_UnregSecurityProfileInternetResource(This,cluster,spName,Name)	\
	( (This)->lpVtbl -> UnregSecurityProfileInternetResource(This,cluster,spName,Name) ) 

#define IServerAgentConnection_CreateSecurityProfileInternetResource(This,ir)	\
	( (This)->lpVtbl -> CreateSecurityProfileInternetResource(This,ir) ) 

#define IServerAgentConnection_InterruptCurrentServerCall(This,registry,session,errorMessage)	\
	( (This)->lpVtbl -> InterruptCurrentServerCall(This,registry,session,errorMessage) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IServerAgentConnection_INTERFACE_DEFINED__ */

#ifndef __IClusterInfo_INTERFACE_DEFINED__
#define __IClusterInfo_INTERFACE_DEFINED__

/* interface IClusterInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IClusterInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("2A0DC852-5AB2-4DDF-A373-6D7C8BCC6535")
	IClusterInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClusterName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClusterName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HostName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HostName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MainPort( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MultiProcess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MultiProcess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SecurityLevel( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SecurityLevel( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LifeTimeLimit( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LifeTimeLimit( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExpirationTimeout( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExpirationTimeout( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxMemorySize( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxMemorySize( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxMemoryTimeLimit( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxMemoryTimeLimit( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionFaultToleranceLevel( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SessionFaultToleranceLevel( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LoadBalancingMode( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LoadBalancingMode( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorsCountThreshold( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ErrorsCountThreshold( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KillProblemProcesses( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KillProblemProcesses( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KillByMemoryWithDump( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KillByMemoryWithDump( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IClusterInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IClusterInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IClusterInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IClusterInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IClusterInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IClusterInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IClusterInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IClusterInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
			IClusterInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
			IClusterInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
			IClusterInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
			IClusterInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainPort )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MainPort )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MultiProcess )( 
			IClusterInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MultiProcess )( 
			IClusterInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityLevel )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LifeTimeLimit )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LifeTimeLimit )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationTimeout )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationTimeout )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxMemorySize )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxMemorySize )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxMemoryTimeLimit )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxMemoryTimeLimit )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionFaultToleranceLevel )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SessionFaultToleranceLevel )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalancingMode )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalancingMode )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorsCountThreshold )( 
			IClusterInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorsCountThreshold )( 
			IClusterInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KillProblemProcesses )( 
			IClusterInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KillProblemProcesses )( 
			IClusterInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KillByMemoryWithDump )( 
			IClusterInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KillByMemoryWithDump )( 
			IClusterInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		END_INTERFACE
	} IClusterInfoVtbl;

	interface IClusterInfo
	{
		CONST_VTBL struct IClusterInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IClusterInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IClusterInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IClusterInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IClusterInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IClusterInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IClusterInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IClusterInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IClusterInfo_get_ClusterName(This,pVal)	\
	( (This)->lpVtbl -> get_ClusterName(This,pVal) ) 

#define IClusterInfo_put_ClusterName(This,pVal)	\
	( (This)->lpVtbl -> put_ClusterName(This,pVal) ) 

#define IClusterInfo_get_HostName(This,pVal)	\
	( (This)->lpVtbl -> get_HostName(This,pVal) ) 

#define IClusterInfo_put_HostName(This,pVal)	\
	( (This)->lpVtbl -> put_HostName(This,pVal) ) 

#define IClusterInfo_get_MainPort(This,pVal)	\
	( (This)->lpVtbl -> get_MainPort(This,pVal) ) 

#define IClusterInfo_put_MainPort(This,pVal)	\
	( (This)->lpVtbl -> put_MainPort(This,pVal) ) 

#define IClusterInfo_get_MultiProcess(This,pVal)	\
	( (This)->lpVtbl -> get_MultiProcess(This,pVal) ) 

#define IClusterInfo_put_MultiProcess(This,pVal)	\
	( (This)->lpVtbl -> put_MultiProcess(This,pVal) ) 

#define IClusterInfo_get_SecurityLevel(This,pVal)	\
	( (This)->lpVtbl -> get_SecurityLevel(This,pVal) ) 

#define IClusterInfo_put_SecurityLevel(This,pVal)	\
	( (This)->lpVtbl -> put_SecurityLevel(This,pVal) ) 

#define IClusterInfo_get_LifeTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> get_LifeTimeLimit(This,pVal) ) 

#define IClusterInfo_put_LifeTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> put_LifeTimeLimit(This,pVal) ) 

#define IClusterInfo_get_ExpirationTimeout(This,pVal)	\
	( (This)->lpVtbl -> get_ExpirationTimeout(This,pVal) ) 

#define IClusterInfo_put_ExpirationTimeout(This,pVal)	\
	( (This)->lpVtbl -> put_ExpirationTimeout(This,pVal) ) 

#define IClusterInfo_get_MaxMemorySize(This,pVal)	\
	( (This)->lpVtbl -> get_MaxMemorySize(This,pVal) ) 

#define IClusterInfo_put_MaxMemorySize(This,pVal)	\
	( (This)->lpVtbl -> put_MaxMemorySize(This,pVal) ) 

#define IClusterInfo_get_MaxMemoryTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> get_MaxMemoryTimeLimit(This,pVal) ) 

#define IClusterInfo_put_MaxMemoryTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> put_MaxMemoryTimeLimit(This,pVal) ) 

#define IClusterInfo_get_SessionFaultToleranceLevel(This,pVal)	\
	( (This)->lpVtbl -> get_SessionFaultToleranceLevel(This,pVal) ) 

#define IClusterInfo_put_SessionFaultToleranceLevel(This,pVal)	\
	( (This)->lpVtbl -> put_SessionFaultToleranceLevel(This,pVal) ) 

#define IClusterInfo_get_LoadBalancingMode(This,pVal)	\
	( (This)->lpVtbl -> get_LoadBalancingMode(This,pVal) ) 

#define IClusterInfo_put_LoadBalancingMode(This,pVal)	\
	( (This)->lpVtbl -> put_LoadBalancingMode(This,pVal) ) 

#define IClusterInfo_get_ErrorsCountThreshold(This,pVal)	\
	( (This)->lpVtbl -> get_ErrorsCountThreshold(This,pVal) ) 

#define IClusterInfo_put_ErrorsCountThreshold(This,pVal)	\
	( (This)->lpVtbl -> put_ErrorsCountThreshold(This,pVal) ) 

#define IClusterInfo_get_KillProblemProcesses(This,pVal)	\
	( (This)->lpVtbl -> get_KillProblemProcesses(This,pVal) ) 

#define IClusterInfo_put_KillProblemProcesses(This,pVal)	\
	( (This)->lpVtbl -> put_KillProblemProcesses(This,pVal) ) 

#define IClusterInfo_get_KillByMemoryWithDump(This,pVal)	\
	( (This)->lpVtbl -> get_KillByMemoryWithDump(This,pVal) ) 

#define IClusterInfo_put_KillByMemoryWithDump(This,pVal)	\
	( (This)->lpVtbl -> put_KillByMemoryWithDump(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IClusterInfo_INTERFACE_DEFINED__ */

#ifndef __IInfoBaseShort_INTERFACE_DEFINED__
#define __IInfoBaseShort_INTERFACE_DEFINED__

/* interface IInfoBaseShort */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IInfoBaseShort;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("358D4DB6-0771-465C-A8C0-743D0729C25D")
	IInfoBaseShort : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IInfoBaseShortVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IInfoBaseShort * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IInfoBaseShort * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IInfoBaseShort * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IInfoBaseShort * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IInfoBaseShort * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IInfoBaseShort * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IInfoBaseShort * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			IInfoBaseShort * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			IInfoBaseShort * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			IInfoBaseShort * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} IInfoBaseShortVtbl;

	interface IInfoBaseShort
	{
		CONST_VTBL struct IInfoBaseShortVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IInfoBaseShort_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInfoBaseShort_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IInfoBaseShort_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IInfoBaseShort_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInfoBaseShort_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInfoBaseShort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInfoBaseShort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IInfoBaseShort_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IInfoBaseShort_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define IInfoBaseShort_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IInfoBaseShort_INTERFACE_DEFINED__ */

#ifndef __IConnectionShort_INTERFACE_DEFINED__
#define __IConnectionShort_INTERFACE_DEFINED__

/* interface IConnectionShort */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IConnectionShort;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("43AE2F7E-A98F-4A46-A868-D3E193116A65")
	IConnectionShort : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_infoBase( 
			/* [retval][out] */ IInfoBaseShort **infoBase) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_process( 
			/* [retval][out] */ IWorkingProcessInfo **process) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Host( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnID( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectedAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_blockedByLM( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionID( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_blockedByLS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IConnectionShortVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IConnectionShort * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IConnectionShort * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IConnectionShort * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IConnectionShort * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IConnectionShort * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IConnectionShort * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IConnectionShort * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_infoBase )( 
			IConnectionShort * This,
			/* [retval][out] */ IInfoBaseShort **infoBase);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_process )( 
			IConnectionShort * This,
			/* [retval][out] */ IWorkingProcessInfo **process);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
			IConnectionShort * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
			IConnectionShort * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnID )( 
			IConnectionShort * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedAt )( 
			IConnectionShort * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_blockedByLM )( 
			IConnectionShort * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionID )( 
			IConnectionShort * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_blockedByLS )( 
			IConnectionShort * This,
			/* [retval][out] */ unsigned int *pVal);

		END_INTERFACE
	} IConnectionShortVtbl;

	interface IConnectionShort
	{
		CONST_VTBL struct IConnectionShortVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IConnectionShort_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConnectionShort_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IConnectionShort_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IConnectionShort_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConnectionShort_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConnectionShort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConnectionShort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IConnectionShort_get_infoBase(This,infoBase)	\
	( (This)->lpVtbl -> get_infoBase(This,infoBase) ) 

#define IConnectionShort_get_process(This,process)	\
	( (This)->lpVtbl -> get_process(This,process) ) 

#define IConnectionShort_get_Host(This,pVal)	\
	( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define IConnectionShort_get_Application(This,pVal)	\
	( (This)->lpVtbl -> get_Application(This,pVal) ) 

#define IConnectionShort_get_ConnID(This,pVal)	\
	( (This)->lpVtbl -> get_ConnID(This,pVal) ) 

#define IConnectionShort_get_ConnectedAt(This,pVal)	\
	( (This)->lpVtbl -> get_ConnectedAt(This,pVal) ) 

#define IConnectionShort_get_blockedByLM(This,pVal)	\
	( (This)->lpVtbl -> get_blockedByLM(This,pVal) ) 

#define IConnectionShort_get_SessionID(This,pVal)	\
	( (This)->lpVtbl -> get_SessionID(This,pVal) ) 

#define IConnectionShort_get_blockedByLS(This,pVal)	\
	( (This)->lpVtbl -> get_blockedByLS(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IConnectionShort_INTERFACE_DEFINED__ */

#ifndef __IWorkingProcessInfo_INTERFACE_DEFINED__
#define __IWorkingProcessInfo_INTERFACE_DEFINED__

/* interface IWorkingProcessInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IWorkingProcessInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("719A6F6A-0B91-4D55-B57A-67C8E4D6F700")
	IWorkingProcessInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HostName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HostName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Enable( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Enable( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Running( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_connections( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StartedAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgCallTime( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgServerCallTime( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgDBCallTime( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgBackCallTime( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgLockCallTime( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectionSize( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgThreads( 
			/* [retval][out] */ double *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Capacity( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Capacity( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemorySize( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryExcessTime( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AvailablePerfomance( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Use( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Use( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsEnable( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_License( 
			/* [retval][out] */ VARIANT *process) = 0;

	};

#else 	/* C style interface */

	typedef struct IWorkingProcessInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IWorkingProcessInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IWorkingProcessInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IWorkingProcessInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IWorkingProcessInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IWorkingProcessInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IWorkingProcessInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IWorkingProcessInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
			IWorkingProcessInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainPort )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enable )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enable )( 
			IWorkingProcessInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Running )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_connections )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartedAt )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgCallTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgServerCallTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgDBCallTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgBackCallTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgLockCallTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectionSize )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgThreads )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ double *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Capacity )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Capacity )( 
			IWorkingProcessInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemorySize )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryExcessTime )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvailablePerfomance )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PID )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Use )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Use )( 
			IWorkingProcessInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsEnable )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_License )( 
			IWorkingProcessInfo * This,
			/* [retval][out] */ VARIANT *process);

		END_INTERFACE
	} IWorkingProcessInfoVtbl;

	interface IWorkingProcessInfo
	{
		CONST_VTBL struct IWorkingProcessInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IWorkingProcessInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkingProcessInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkingProcessInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IWorkingProcessInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorkingProcessInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorkingProcessInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorkingProcessInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IWorkingProcessInfo_get_HostName(This,pVal)	\
	( (This)->lpVtbl -> get_HostName(This,pVal) ) 

#define IWorkingProcessInfo_put_HostName(This,pVal)	\
	( (This)->lpVtbl -> put_HostName(This,pVal) ) 

#define IWorkingProcessInfo_get_MainPort(This,pVal)	\
	( (This)->lpVtbl -> get_MainPort(This,pVal) ) 

#define IWorkingProcessInfo_get_Enable(This,pVal)	\
	( (This)->lpVtbl -> get_Enable(This,pVal) ) 

#define IWorkingProcessInfo_put_Enable(This,pVal)	\
	( (This)->lpVtbl -> put_Enable(This,pVal) ) 

#define IWorkingProcessInfo_get_Running(This,pVal)	\
	( (This)->lpVtbl -> get_Running(This,pVal) ) 

#define IWorkingProcessInfo_get_connections(This,pVal)	\
	( (This)->lpVtbl -> get_connections(This,pVal) ) 

#define IWorkingProcessInfo_get_StartedAt(This,pVal)	\
	( (This)->lpVtbl -> get_StartedAt(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgCallTime(This,pVal)	\
	( (This)->lpVtbl -> get_AvgCallTime(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgServerCallTime(This,pVal)	\
	( (This)->lpVtbl -> get_AvgServerCallTime(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgDBCallTime(This,pVal)	\
	( (This)->lpVtbl -> get_AvgDBCallTime(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgBackCallTime(This,pVal)	\
	( (This)->lpVtbl -> get_AvgBackCallTime(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgLockCallTime(This,pVal)	\
	( (This)->lpVtbl -> get_AvgLockCallTime(This,pVal) ) 

#define IWorkingProcessInfo_get_SelectionSize(This,pVal)	\
	( (This)->lpVtbl -> get_SelectionSize(This,pVal) ) 

#define IWorkingProcessInfo_get_AvgThreads(This,pVal)	\
	( (This)->lpVtbl -> get_AvgThreads(This,pVal) ) 

#define IWorkingProcessInfo_get_Capacity(This,pVal)	\
	( (This)->lpVtbl -> get_Capacity(This,pVal) ) 

#define IWorkingProcessInfo_put_Capacity(This,pVal)	\
	( (This)->lpVtbl -> put_Capacity(This,pVal) ) 

#define IWorkingProcessInfo_get_MemorySize(This,pVal)	\
	( (This)->lpVtbl -> get_MemorySize(This,pVal) ) 

#define IWorkingProcessInfo_get_MemoryExcessTime(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryExcessTime(This,pVal) ) 

#define IWorkingProcessInfo_get_AvailablePerfomance(This,pVal)	\
	( (This)->lpVtbl -> get_AvailablePerfomance(This,pVal) ) 

#define IWorkingProcessInfo_get_PID(This,pVal)	\
	( (This)->lpVtbl -> get_PID(This,pVal) ) 

#define IWorkingProcessInfo_get_Use(This,pVal)	\
	( (This)->lpVtbl -> get_Use(This,pVal) ) 

#define IWorkingProcessInfo_put_Use(This,pVal)	\
	( (This)->lpVtbl -> put_Use(This,pVal) ) 

#define IWorkingProcessInfo_get_IsEnable(This,pVal)	\
	( (This)->lpVtbl -> get_IsEnable(This,pVal) ) 

#define IWorkingProcessInfo_get_License(This,process)	\
	( (This)->lpVtbl -> get_License(This,process) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IWorkingProcessInfo_INTERFACE_DEFINED__ */

#ifndef __IRegUserInfo_INTERFACE_DEFINED__
#define __IRegUserInfo_INTERFACE_DEFINED__

/* interface IRegUserInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IRegUserInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("31D10916-DA55-4F7D-B934-0541053E6C52")
	IRegUserInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Password( 
			/* [in] */ BSTR rhs) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SysUserName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SysUserName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PasswordAuthAllowed( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PasswordAuthAllowed( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SysAuthAllowed( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SysAuthAllowed( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IRegUserInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IRegUserInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IRegUserInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IRegUserInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IRegUserInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IRegUserInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IRegUserInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IRegUserInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			IRegUserInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			IRegUserInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			IRegUserInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			IRegUserInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
			IRegUserInfo * This,
			/* [in] */ BSTR rhs);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SysUserName )( 
			IRegUserInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SysUserName )( 
			IRegUserInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAuthAllowed )( 
			IRegUserInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PasswordAuthAllowed )( 
			IRegUserInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SysAuthAllowed )( 
			IRegUserInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SysAuthAllowed )( 
			IRegUserInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		END_INTERFACE
	} IRegUserInfoVtbl;

	interface IRegUserInfo
	{
		CONST_VTBL struct IRegUserInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IRegUserInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegUserInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IRegUserInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IRegUserInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRegUserInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRegUserInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRegUserInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IRegUserInfo_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IRegUserInfo_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IRegUserInfo_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define IRegUserInfo_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#define IRegUserInfo_put_Password(This,rhs)	\
	( (This)->lpVtbl -> put_Password(This,rhs) ) 

#define IRegUserInfo_get_SysUserName(This,pVal)	\
	( (This)->lpVtbl -> get_SysUserName(This,pVal) ) 

#define IRegUserInfo_put_SysUserName(This,pVal)	\
	( (This)->lpVtbl -> put_SysUserName(This,pVal) ) 

#define IRegUserInfo_get_PasswordAuthAllowed(This,pVal)	\
	( (This)->lpVtbl -> get_PasswordAuthAllowed(This,pVal) ) 

#define IRegUserInfo_put_PasswordAuthAllowed(This,pVal)	\
	( (This)->lpVtbl -> put_PasswordAuthAllowed(This,pVal) ) 

#define IRegUserInfo_get_SysAuthAllowed(This,pVal)	\
	( (This)->lpVtbl -> get_SysAuthAllowed(This,pVal) ) 

#define IRegUserInfo_put_SysAuthAllowed(This,pVal)	\
	( (This)->lpVtbl -> put_SysAuthAllowed(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IRegUserInfo_INTERFACE_DEFINED__ */

#ifndef __IWorkingServerInfo_INTERFACE_DEFINED__
#define __IWorkingServerInfo_INTERFACE_DEFINED__

/* interface IWorkingServerInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IWorkingServerInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("234B5C3F-4B51-49BC-8D95-E1FA192404AC")
	IWorkingServerInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HostName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HostName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MainPort( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPortRanges( 
			/* [retval][out] */ SAFEARRAY * *ranges) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePortRange( 
			/* [retval][out] */ IPortRangeInfo **range) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertPortRange( 
			/* [in] */ IPortRangeInfo *range) = 0;

		virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ErasePortRange( 
			/* [in] */ IPortRangeInfo *range) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainServer( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MainServer( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InfoBasesPerWorkingProcessLimit( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InfoBasesPerWorkingProcessLimit( 
			/* [in] */ unsigned int pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WorkingProcessMemoryLimit( 
			/* [in] */ INT64 pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WorkingProcessMemoryLimit( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionsPerWorkingProcessLimit( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectionsPerWorkingProcessLimit( 
			/* [in] */ unsigned int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClusterMainPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClusterMainPort( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DedicatedManagers( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DedicatedManagers( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SafeWorkingProcessesMemoryLimit( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SafeWorkingProcessesMemoryLimit( 
			/* [in] */ INT64 pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SafeCallMemoryLimit( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SafeCallMemoryLimit( 
			/* [in] */ INT64 pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CriticalProcessesTotalMemory( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CriticalProcessesTotalMemory( 
			/* [in] */ INT64 pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TemporaryAllowedProcessesTotalMemory( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TemporaryAllowedProcessesTotalMemory( 
			/* [in] */ INT64 pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TemporaryAllowedProcessesTotalMemoryTimeLimit( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TemporaryAllowedProcessesTotalMemoryTimeLimit( 
			/* [in] */ INT64 pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IWorkingServerInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IWorkingServerInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IWorkingServerInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IWorkingServerInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IWorkingServerInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IWorkingServerInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IWorkingServerInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IWorkingServerInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			IWorkingServerInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
			IWorkingServerInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainPort )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MainPort )( 
			IWorkingServerInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPortRanges )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ SAFEARRAY * *ranges);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePortRange )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ IPortRangeInfo **range);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertPortRange )( 
			IWorkingServerInfo * This,
			/* [in] */ IPortRangeInfo *range);

		/* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ErasePortRange )( 
			IWorkingServerInfo * This,
			/* [in] */ IPortRangeInfo *range);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainServer )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MainServer )( 
			IWorkingServerInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfoBasesPerWorkingProcessLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InfoBasesPerWorkingProcessLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ unsigned int pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WorkingProcessMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WorkingProcessMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionsPerWorkingProcessLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionsPerWorkingProcessLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ unsigned int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterMainPort )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterMainPort )( 
			IWorkingServerInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedManagers )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedManagers )( 
			IWorkingServerInfo * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SafeWorkingProcessesMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SafeWorkingProcessesMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SafeCallMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SafeCallMemoryLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalProcessesTotalMemory )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CriticalProcessesTotalMemory )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TemporaryAllowedProcessesTotalMemory )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TemporaryAllowedProcessesTotalMemory )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TemporaryAllowedProcessesTotalMemoryTimeLimit )( 
			IWorkingServerInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TemporaryAllowedProcessesTotalMemoryTimeLimit )( 
			IWorkingServerInfo * This,
			/* [in] */ INT64 pVal);

		END_INTERFACE
	} IWorkingServerInfoVtbl;

	interface IWorkingServerInfo
	{
		CONST_VTBL struct IWorkingServerInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IWorkingServerInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkingServerInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkingServerInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IWorkingServerInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorkingServerInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorkingServerInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorkingServerInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IWorkingServerInfo_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IWorkingServerInfo_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IWorkingServerInfo_get_HostName(This,pVal)	\
	( (This)->lpVtbl -> get_HostName(This,pVal) ) 

#define IWorkingServerInfo_put_HostName(This,pVal)	\
	( (This)->lpVtbl -> put_HostName(This,pVal) ) 

#define IWorkingServerInfo_get_MainPort(This,pVal)	\
	( (This)->lpVtbl -> get_MainPort(This,pVal) ) 

#define IWorkingServerInfo_put_MainPort(This,pVal)	\
	( (This)->lpVtbl -> put_MainPort(This,pVal) ) 

#define IWorkingServerInfo_GetPortRanges(This,ranges)	\
	( (This)->lpVtbl -> GetPortRanges(This,ranges) ) 

#define IWorkingServerInfo_CreatePortRange(This,range)	\
	( (This)->lpVtbl -> CreatePortRange(This,range) ) 

#define IWorkingServerInfo_InsertPortRange(This,range)	\
	( (This)->lpVtbl -> InsertPortRange(This,range) ) 

#define IWorkingServerInfo_ErasePortRange(This,range)	\
	( (This)->lpVtbl -> ErasePortRange(This,range) ) 

#define IWorkingServerInfo_get_MainServer(This,pVal)	\
	( (This)->lpVtbl -> get_MainServer(This,pVal) ) 

#define IWorkingServerInfo_put_MainServer(This,pVal)	\
	( (This)->lpVtbl -> put_MainServer(This,pVal) ) 

#define IWorkingServerInfo_get_InfoBasesPerWorkingProcessLimit(This,pVal)	\
	( (This)->lpVtbl -> get_InfoBasesPerWorkingProcessLimit(This,pVal) ) 

#define IWorkingServerInfo_put_InfoBasesPerWorkingProcessLimit(This,pVal)	\
	( (This)->lpVtbl -> put_InfoBasesPerWorkingProcessLimit(This,pVal) ) 

#define IWorkingServerInfo_put_WorkingProcessMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> put_WorkingProcessMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_get_WorkingProcessMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> get_WorkingProcessMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_get_ConnectionsPerWorkingProcessLimit(This,pVal)	\
	( (This)->lpVtbl -> get_ConnectionsPerWorkingProcessLimit(This,pVal) ) 

#define IWorkingServerInfo_put_ConnectionsPerWorkingProcessLimit(This,pVal)	\
	( (This)->lpVtbl -> put_ConnectionsPerWorkingProcessLimit(This,pVal) ) 

#define IWorkingServerInfo_get_ClusterMainPort(This,pVal)	\
	( (This)->lpVtbl -> get_ClusterMainPort(This,pVal) ) 

#define IWorkingServerInfo_put_ClusterMainPort(This,pVal)	\
	( (This)->lpVtbl -> put_ClusterMainPort(This,pVal) ) 

#define IWorkingServerInfo_get_DedicatedManagers(This,pVal)	\
	( (This)->lpVtbl -> get_DedicatedManagers(This,pVal) ) 

#define IWorkingServerInfo_put_DedicatedManagers(This,pVal)	\
	( (This)->lpVtbl -> put_DedicatedManagers(This,pVal) ) 

#define IWorkingServerInfo_get_SafeWorkingProcessesMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> get_SafeWorkingProcessesMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_put_SafeWorkingProcessesMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> put_SafeWorkingProcessesMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_get_SafeCallMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> get_SafeCallMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_put_SafeCallMemoryLimit(This,pVal)	\
	( (This)->lpVtbl -> put_SafeCallMemoryLimit(This,pVal) ) 

#define IWorkingServerInfo_get_CriticalProcessesTotalMemory(This,pVal)	\
	( (This)->lpVtbl -> get_CriticalProcessesTotalMemory(This,pVal) ) 

#define IWorkingServerInfo_put_CriticalProcessesTotalMemory(This,pVal)	\
	( (This)->lpVtbl -> put_CriticalProcessesTotalMemory(This,pVal) ) 

#define IWorkingServerInfo_get_TemporaryAllowedProcessesTotalMemory(This,pVal)	\
	( (This)->lpVtbl -> get_TemporaryAllowedProcessesTotalMemory(This,pVal) ) 

#define IWorkingServerInfo_put_TemporaryAllowedProcessesTotalMemory(This,pVal)	\
	( (This)->lpVtbl -> put_TemporaryAllowedProcessesTotalMemory(This,pVal) ) 

#define IWorkingServerInfo_get_TemporaryAllowedProcessesTotalMemoryTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> get_TemporaryAllowedProcessesTotalMemoryTimeLimit(This,pVal) ) 

#define IWorkingServerInfo_put_TemporaryAllowedProcessesTotalMemoryTimeLimit(This,pVal)	\
	( (This)->lpVtbl -> put_TemporaryAllowedProcessesTotalMemoryTimeLimit(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IWorkingServerInfo_INTERFACE_DEFINED__ */

#ifndef __IPortRangeInfo_INTERFACE_DEFINED__
#define __IPortRangeInfo_INTERFACE_DEFINED__

/* interface IPortRangeInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IPortRangeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("CBB703D2-D3C7-40E1-9FAC-7F869895A72E")
	IPortRangeInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LowBound( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LowBound( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HighBound( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HighBound( 
			/* [in] */ int pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IPortRangeInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IPortRangeInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IPortRangeInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IPortRangeInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IPortRangeInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IPortRangeInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IPortRangeInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IPortRangeInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LowBound )( 
			IPortRangeInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LowBound )( 
			IPortRangeInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HighBound )( 
			IPortRangeInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HighBound )( 
			IPortRangeInfo * This,
			/* [in] */ int pVal);

		END_INTERFACE
	} IPortRangeInfoVtbl;

	interface IPortRangeInfo
	{
		CONST_VTBL struct IPortRangeInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IPortRangeInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortRangeInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IPortRangeInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IPortRangeInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPortRangeInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPortRangeInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPortRangeInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IPortRangeInfo_get_LowBound(This,pVal)	\
	( (This)->lpVtbl -> get_LowBound(This,pVal) ) 

#define IPortRangeInfo_put_LowBound(This,pVal)	\
	( (This)->lpVtbl -> put_LowBound(This,pVal) ) 

#define IPortRangeInfo_get_HighBound(This,pVal)	\
	( (This)->lpVtbl -> get_HighBound(This,pVal) ) 

#define IPortRangeInfo_put_HighBound(This,pVal)	\
	( (This)->lpVtbl -> put_HighBound(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IPortRangeInfo_INTERFACE_DEFINED__ */

#ifndef __ISessionInfo_INTERFACE_DEFINED__
#define __ISessionInfo_INTERFACE_DEFINED__

/* interface ISessionInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISessionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("DA4A0529-1B5A-4B25-9230-B9B22D78C483")
	ISessionInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_infoBase( 
			/* [retval][out] */ IInfoBaseShort **infoBase) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionID( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StartedAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastActiveAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Host( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AppID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_userName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Locale( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_process( 
			/* [retval][out] */ VARIANT *process) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_connection( 
			/* [retval][out] */ VARIANT *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcInfo( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcTookAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbProcTook( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_blockedByDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_blockedByLS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrentDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5MinDBMS( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAllDBMS( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbmsBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_dbmsBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrent( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAll( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_callsLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_callsAll( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_bytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_bytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryCurrent( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryLast5Min( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MemoryAll( 
			/* [retval][out] */ INT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesCurrent( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesCurrent( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutBytesAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_License( 
			/* [retval][out] */ VARIANT *process) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Hibernate( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PassiveSessionHibernateTime( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HibernateSessionTerminateTime( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationCurrentService( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationLast5MinService( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_durationAllService( 
			/* [retval][out] */ unsigned int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentServiceName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_cpuTimeCurrent( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_cpuTimeLast5Min( 
			/* [retval][out] */ UINT64 *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_cpuTimeAll( 
			/* [retval][out] */ UINT64 *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISessionInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISessionInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISessionInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISessionInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISessionInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISessionInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISessionInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISessionInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_infoBase )( 
			ISessionInfo * This,
			/* [retval][out] */ IInfoBaseShort **infoBase);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionID )( 
			ISessionInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartedAt )( 
			ISessionInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastActiveAt )( 
			ISessionInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AppID )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_userName )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Locale )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_process )( 
			ISessionInfo * This,
			/* [retval][out] */ VARIANT *process);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_connection )( 
			ISessionInfo * This,
			/* [retval][out] */ VARIANT *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcInfo )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcTookAt )( 
			ISessionInfo * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbProcTook )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_blockedByDBMS )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_blockedByLS )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrentDBMS )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5MinDBMS )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAllDBMS )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbmsBytesLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dbmsBytesAll )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrent )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAll )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_callsLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_callsAll )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bytesLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bytesAll )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryCurrent )( 
			ISessionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryAll )( 
			ISessionInfo * This,
			/* [retval][out] */ INT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesCurrent )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBytesAll )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesCurrent )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutBytesAll )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_License )( 
			ISessionInfo * This,
			/* [retval][out] */ VARIANT *process);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hibernate )( 
			ISessionInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PassiveSessionHibernateTime )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HibernateSessionTerminateTime )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationCurrentService )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationLast5MinService )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationAllService )( 
			ISessionInfo * This,
			/* [retval][out] */ unsigned int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentServiceName )( 
			ISessionInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cpuTimeCurrent )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cpuTimeLast5Min )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cpuTimeAll )( 
			ISessionInfo * This,
			/* [retval][out] */ UINT64 *pVal);

		END_INTERFACE
	} ISessionInfoVtbl;

	interface ISessionInfo
	{
		CONST_VTBL struct ISessionInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISessionInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISessionInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISessionInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISessionInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISessionInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISessionInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISessionInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISessionInfo_get_infoBase(This,infoBase)	\
	( (This)->lpVtbl -> get_infoBase(This,infoBase) ) 

#define ISessionInfo_get_SessionID(This,pVal)	\
	( (This)->lpVtbl -> get_SessionID(This,pVal) ) 

#define ISessionInfo_get_StartedAt(This,pVal)	\
	( (This)->lpVtbl -> get_StartedAt(This,pVal) ) 

#define ISessionInfo_get_LastActiveAt(This,pVal)	\
	( (This)->lpVtbl -> get_LastActiveAt(This,pVal) ) 

#define ISessionInfo_get_Host(This,pVal)	\
	( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define ISessionInfo_get_AppID(This,pVal)	\
	( (This)->lpVtbl -> get_AppID(This,pVal) ) 

#define ISessionInfo_get_userName(This,pVal)	\
	( (This)->lpVtbl -> get_userName(This,pVal) ) 

#define ISessionInfo_get_Locale(This,pVal)	\
	( (This)->lpVtbl -> get_Locale(This,pVal) ) 

#define ISessionInfo_get_process(This,process)	\
	( (This)->lpVtbl -> get_process(This,process) ) 

#define ISessionInfo_get_connection(This,pVal)	\
	( (This)->lpVtbl -> get_connection(This,pVal) ) 

#define ISessionInfo_get_dbProcInfo(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcInfo(This,pVal) ) 

#define ISessionInfo_get_dbProcTookAt(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcTookAt(This,pVal) ) 

#define ISessionInfo_get_dbProcTook(This,pVal)	\
	( (This)->lpVtbl -> get_dbProcTook(This,pVal) ) 

#define ISessionInfo_get_blockedByDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_blockedByDBMS(This,pVal) ) 

#define ISessionInfo_get_blockedByLS(This,pVal)	\
	( (This)->lpVtbl -> get_blockedByLS(This,pVal) ) 

#define ISessionInfo_get_durationCurrentDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrentDBMS(This,pVal) ) 

#define ISessionInfo_get_durationLast5MinDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5MinDBMS(This,pVal) ) 

#define ISessionInfo_get_durationAllDBMS(This,pVal)	\
	( (This)->lpVtbl -> get_durationAllDBMS(This,pVal) ) 

#define ISessionInfo_get_dbmsBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_dbmsBytesLast5Min(This,pVal) ) 

#define ISessionInfo_get_dbmsBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_dbmsBytesAll(This,pVal) ) 

#define ISessionInfo_get_durationCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrent(This,pVal) ) 

#define ISessionInfo_get_durationLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5Min(This,pVal) ) 

#define ISessionInfo_get_durationAll(This,pVal)	\
	( (This)->lpVtbl -> get_durationAll(This,pVal) ) 

#define ISessionInfo_get_callsLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_callsLast5Min(This,pVal) ) 

#define ISessionInfo_get_callsAll(This,pVal)	\
	( (This)->lpVtbl -> get_callsAll(This,pVal) ) 

#define ISessionInfo_get_bytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_bytesLast5Min(This,pVal) ) 

#define ISessionInfo_get_bytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_bytesAll(This,pVal) ) 

#define ISessionInfo_get_MemoryCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryCurrent(This,pVal) ) 

#define ISessionInfo_get_MemoryLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryLast5Min(This,pVal) ) 

#define ISessionInfo_get_MemoryAll(This,pVal)	\
	( (This)->lpVtbl -> get_MemoryAll(This,pVal) ) 

#define ISessionInfo_get_InBytesCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesCurrent(This,pVal) ) 

#define ISessionInfo_get_InBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesLast5Min(This,pVal) ) 

#define ISessionInfo_get_InBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_InBytesAll(This,pVal) ) 

#define ISessionInfo_get_OutBytesCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesCurrent(This,pVal) ) 

#define ISessionInfo_get_OutBytesLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesLast5Min(This,pVal) ) 

#define ISessionInfo_get_OutBytesAll(This,pVal)	\
	( (This)->lpVtbl -> get_OutBytesAll(This,pVal) ) 

#define ISessionInfo_get_License(This,process)	\
	( (This)->lpVtbl -> get_License(This,process) ) 

#define ISessionInfo_get_Hibernate(This,pVal)	\
	( (This)->lpVtbl -> get_Hibernate(This,pVal) ) 

#define ISessionInfo_get_PassiveSessionHibernateTime(This,pVal)	\
	( (This)->lpVtbl -> get_PassiveSessionHibernateTime(This,pVal) ) 

#define ISessionInfo_get_HibernateSessionTerminateTime(This,pVal)	\
	( (This)->lpVtbl -> get_HibernateSessionTerminateTime(This,pVal) ) 

#define ISessionInfo_get_durationCurrentService(This,pVal)	\
	( (This)->lpVtbl -> get_durationCurrentService(This,pVal) ) 

#define ISessionInfo_get_durationLast5MinService(This,pVal)	\
	( (This)->lpVtbl -> get_durationLast5MinService(This,pVal) ) 

#define ISessionInfo_get_durationAllService(This,pVal)	\
	( (This)->lpVtbl -> get_durationAllService(This,pVal) ) 

#define ISessionInfo_get_CurrentServiceName(This,pVal)	\
	( (This)->lpVtbl -> get_CurrentServiceName(This,pVal) ) 

#define ISessionInfo_get_cpuTimeCurrent(This,pVal)	\
	( (This)->lpVtbl -> get_cpuTimeCurrent(This,pVal) ) 

#define ISessionInfo_get_cpuTimeLast5Min(This,pVal)	\
	( (This)->lpVtbl -> get_cpuTimeLast5Min(This,pVal) ) 

#define ISessionInfo_get_cpuTimeAll(This,pVal)	\
	( (This)->lpVtbl -> get_cpuTimeAll(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISessionInfo_INTERFACE_DEFINED__ */

#ifndef __IAssignmentRuleInfo_INTERFACE_DEFINED__
#define __IAssignmentRuleInfo_INTERFACE_DEFINED__

/* interface IAssignmentRuleInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IAssignmentRuleInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("DF99D0E1-0AD6-4DDE-A052-378653128ECE")
	IAssignmentRuleInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ObjectType( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ObjectType( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InfoBaseName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InfoBaseName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RuleType( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RuleType( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ApplicationExt( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ApplicationExt( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Priority( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Priority( 
			/* [in] */ int pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IAssignmentRuleInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IAssignmentRuleInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IAssignmentRuleInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IAssignmentRuleInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IAssignmentRuleInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IAssignmentRuleInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IAssignmentRuleInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IAssignmentRuleInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
			IAssignmentRuleInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectType )( 
			IAssignmentRuleInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfoBaseName )( 
			IAssignmentRuleInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InfoBaseName )( 
			IAssignmentRuleInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RuleType )( 
			IAssignmentRuleInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RuleType )( 
			IAssignmentRuleInfo * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ApplicationExt )( 
			IAssignmentRuleInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ApplicationExt )( 
			IAssignmentRuleInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
			IAssignmentRuleInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
			IAssignmentRuleInfo * This,
			/* [in] */ int pVal);

		END_INTERFACE
	} IAssignmentRuleInfoVtbl;

	interface IAssignmentRuleInfo
	{
		CONST_VTBL struct IAssignmentRuleInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IAssignmentRuleInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssignmentRuleInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IAssignmentRuleInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IAssignmentRuleInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAssignmentRuleInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAssignmentRuleInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAssignmentRuleInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IAssignmentRuleInfo_get_ObjectType(This,pVal)	\
	( (This)->lpVtbl -> get_ObjectType(This,pVal) ) 

#define IAssignmentRuleInfo_put_ObjectType(This,pVal)	\
	( (This)->lpVtbl -> put_ObjectType(This,pVal) ) 

#define IAssignmentRuleInfo_get_InfoBaseName(This,pVal)	\
	( (This)->lpVtbl -> get_InfoBaseName(This,pVal) ) 

#define IAssignmentRuleInfo_put_InfoBaseName(This,pVal)	\
	( (This)->lpVtbl -> put_InfoBaseName(This,pVal) ) 

#define IAssignmentRuleInfo_get_RuleType(This,pVal)	\
	( (This)->lpVtbl -> get_RuleType(This,pVal) ) 

#define IAssignmentRuleInfo_put_RuleType(This,pVal)	\
	( (This)->lpVtbl -> put_RuleType(This,pVal) ) 

#define IAssignmentRuleInfo_get_ApplicationExt(This,pVal)	\
	( (This)->lpVtbl -> get_ApplicationExt(This,pVal) ) 

#define IAssignmentRuleInfo_put_ApplicationExt(This,pVal)	\
	( (This)->lpVtbl -> put_ApplicationExt(This,pVal) ) 

#define IAssignmentRuleInfo_get_Priority(This,pVal)	\
	( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IAssignmentRuleInfo_put_Priority(This,pVal)	\
	( (This)->lpVtbl -> put_Priority(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IAssignmentRuleInfo_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfile_INTERFACE_DEFINED__
#define __ISecurityProfile_INTERFACE_DEFINED__

/* interface ISecurityProfile */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("62CA5BAD-94BF-4E8F-888B-F825F010A795")
	ISecurityProfile : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileSystemFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileSystemFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_COMFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_COMFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AddInFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AddInFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExternalAppFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExternalAppFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InternetFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InternetFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SafeModeProfile( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SafeModeProfile( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrivilegedModeInSafeModeAllowed( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrivilegedModeInSafeModeAllowed( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UnSafeExternalModuleFullAccess( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UnSafeExternalModuleFullAccess( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CryptographyAllowed( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CryptographyAllowed( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RightExtension( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RightExtension( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RightExtensionDefinitionRoles( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RightExtensionDefinitionRoles( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllModulesExtension( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllModulesExtension( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ModulesAvailableForExtension( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ModulesAvailableForExtension( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ModulesNotAvailableForExtension( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ModulesNotAvailableForExtension( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfile * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfile * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfile * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfile * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfile * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfile * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfile * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfile * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfile * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfile * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfile * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileSystemFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileSystemFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_COMFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AddInFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AddInFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalAppFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalAppFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InternetFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InternetFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SafeModeProfile )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SafeModeProfile )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrivilegedModeInSafeModeAllowed )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrivilegedModeInSafeModeAllowed )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnSafeExternalModuleFullAccess )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UnSafeExternalModuleFullAccess )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CryptographyAllowed )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CryptographyAllowed )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RightExtension )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RightExtension )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RightExtensionDefinitionRoles )( 
			ISecurityProfile * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RightExtensionDefinitionRoles )( 
			ISecurityProfile * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllModulesExtension )( 
			ISecurityProfile * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllModulesExtension )( 
			ISecurityProfile * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ModulesAvailableForExtension )( 
			ISecurityProfile * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ModulesAvailableForExtension )( 
			ISecurityProfile * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ModulesNotAvailableForExtension )( 
			ISecurityProfile * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ModulesNotAvailableForExtension )( 
			ISecurityProfile * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileVtbl;

	interface ISecurityProfile
	{
		CONST_VTBL struct ISecurityProfileVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfile_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfile_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfile_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfile_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfile_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfile_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfile_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfile_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#define ISecurityProfile_get_FileSystemFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_FileSystemFullAccess(This,pVal) ) 

#define ISecurityProfile_put_FileSystemFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_FileSystemFullAccess(This,pVal) ) 

#define ISecurityProfile_get_COMFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_COMFullAccess(This,pVal) ) 

#define ISecurityProfile_put_COMFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_COMFullAccess(This,pVal) ) 

#define ISecurityProfile_get_AddInFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_AddInFullAccess(This,pVal) ) 

#define ISecurityProfile_put_AddInFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_AddInFullAccess(This,pVal) ) 

#define ISecurityProfile_get_ExternalAppFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_ExternalAppFullAccess(This,pVal) ) 

#define ISecurityProfile_put_ExternalAppFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_ExternalAppFullAccess(This,pVal) ) 

#define ISecurityProfile_get_InternetFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_InternetFullAccess(This,pVal) ) 

#define ISecurityProfile_put_InternetFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_InternetFullAccess(This,pVal) ) 

#define ISecurityProfile_get_SafeModeProfile(This,pVal)	\
	( (This)->lpVtbl -> get_SafeModeProfile(This,pVal) ) 

#define ISecurityProfile_put_SafeModeProfile(This,pVal)	\
	( (This)->lpVtbl -> put_SafeModeProfile(This,pVal) ) 

#define ISecurityProfile_get_PrivilegedModeInSafeModeAllowed(This,pVal)	\
	( (This)->lpVtbl -> get_PrivilegedModeInSafeModeAllowed(This,pVal) ) 

#define ISecurityProfile_put_PrivilegedModeInSafeModeAllowed(This,pVal)	\
	( (This)->lpVtbl -> put_PrivilegedModeInSafeModeAllowed(This,pVal) ) 

#define ISecurityProfile_get_UnSafeExternalModuleFullAccess(This,pVal)	\
	( (This)->lpVtbl -> get_UnSafeExternalModuleFullAccess(This,pVal) ) 

#define ISecurityProfile_put_UnSafeExternalModuleFullAccess(This,pVal)	\
	( (This)->lpVtbl -> put_UnSafeExternalModuleFullAccess(This,pVal) ) 

#define ISecurityProfile_get_CryptographyAllowed(This,pVal)	\
	( (This)->lpVtbl -> get_CryptographyAllowed(This,pVal) ) 

#define ISecurityProfile_put_CryptographyAllowed(This,pVal)	\
	( (This)->lpVtbl -> put_CryptographyAllowed(This,pVal) ) 

#define ISecurityProfile_get_RightExtension(This,pVal)	\
	( (This)->lpVtbl -> get_RightExtension(This,pVal) ) 

#define ISecurityProfile_put_RightExtension(This,pVal)	\
	( (This)->lpVtbl -> put_RightExtension(This,pVal) ) 

#define ISecurityProfile_get_RightExtensionDefinitionRoles(This,pVal)	\
	( (This)->lpVtbl -> get_RightExtensionDefinitionRoles(This,pVal) ) 

#define ISecurityProfile_put_RightExtensionDefinitionRoles(This,pVal)	\
	( (This)->lpVtbl -> put_RightExtensionDefinitionRoles(This,pVal) ) 

#define ISecurityProfile_get_AllModulesExtension(This,pVal)	\
	( (This)->lpVtbl -> get_AllModulesExtension(This,pVal) ) 

#define ISecurityProfile_put_AllModulesExtension(This,pVal)	\
	( (This)->lpVtbl -> put_AllModulesExtension(This,pVal) ) 

#define ISecurityProfile_get_ModulesAvailableForExtension(This,pVal)	\
	( (This)->lpVtbl -> get_ModulesAvailableForExtension(This,pVal) ) 

#define ISecurityProfile_put_ModulesAvailableForExtension(This,pVal)	\
	( (This)->lpVtbl -> put_ModulesAvailableForExtension(This,pVal) ) 

#define ISecurityProfile_get_ModulesNotAvailableForExtension(This,pVal)	\
	( (This)->lpVtbl -> get_ModulesNotAvailableForExtension(This,pVal) ) 

#define ISecurityProfile_put_ModulesNotAvailableForExtension(This,pVal)	\
	( (This)->lpVtbl -> put_ModulesNotAvailableForExtension(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfile_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileVirtualDirectory_INTERFACE_DEFINED__
#define __ISecurityProfileVirtualDirectory_INTERFACE_DEFINED__

/* interface ISecurityProfileVirtualDirectory */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileVirtualDirectory;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("D982E86D-F4D1-45FA-8019-256E31385A5E")
	ISecurityProfileVirtualDirectory : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Alias( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Alias( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PhysicalPath( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PhysicalPath( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowedRead( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowedRead( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowedWrite( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowedWrite( 
			/* [in] */ VARIANT_BOOL pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileVirtualDirectoryVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileVirtualDirectory * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileVirtualDirectory * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileVirtualDirectory * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileVirtualDirectory * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Alias )( 
			ISecurityProfileVirtualDirectory * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Alias )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PhysicalPath )( 
			ISecurityProfileVirtualDirectory * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PhysicalPath )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileVirtualDirectory * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowedRead )( 
			ISecurityProfileVirtualDirectory * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowedRead )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ VARIANT_BOOL pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowedWrite )( 
			ISecurityProfileVirtualDirectory * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowedWrite )( 
			ISecurityProfileVirtualDirectory * This,
			/* [in] */ VARIANT_BOOL pVal);

		END_INTERFACE
	} ISecurityProfileVirtualDirectoryVtbl;

	interface ISecurityProfileVirtualDirectory
	{
		CONST_VTBL struct ISecurityProfileVirtualDirectoryVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileVirtualDirectory_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileVirtualDirectory_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileVirtualDirectory_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileVirtualDirectory_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileVirtualDirectory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileVirtualDirectory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileVirtualDirectory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileVirtualDirectory_get_Alias(This,pVal)	\
	( (This)->lpVtbl -> get_Alias(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_put_Alias(This,pVal)	\
	( (This)->lpVtbl -> put_Alias(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_get_PhysicalPath(This,pVal)	\
	( (This)->lpVtbl -> get_PhysicalPath(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_put_PhysicalPath(This,pVal)	\
	( (This)->lpVtbl -> put_PhysicalPath(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_get_AllowedRead(This,pVal)	\
	( (This)->lpVtbl -> get_AllowedRead(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_put_AllowedRead(This,pVal)	\
	( (This)->lpVtbl -> put_AllowedRead(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_get_AllowedWrite(This,pVal)	\
	( (This)->lpVtbl -> get_AllowedWrite(This,pVal) ) 

#define ISecurityProfileVirtualDirectory_put_AllowedWrite(This,pVal)	\
	( (This)->lpVtbl -> put_AllowedWrite(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileVirtualDirectory_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileCOMClass_INTERFACE_DEFINED__
#define __ISecurityProfileCOMClass_INTERFACE_DEFINED__

/* interface ISecurityProfileCOMClass */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileCOMClass;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("CE320F0F-7181-4C21-9407-7A23FA720041")
	ISecurityProfileCOMClass : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ObjectUUID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ObjectUUID( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ComputerName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ComputerName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileCOMClassVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileCOMClass * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileCOMClass * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileCOMClass * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileCOMClass * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfileCOMClass * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
			ISecurityProfileCOMClass * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileName )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectUUID )( 
			ISecurityProfileCOMClass * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectUUID )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ComputerName )( 
			ISecurityProfileCOMClass * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ComputerName )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileCOMClass * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileCOMClass * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileCOMClassVtbl;

	interface ISecurityProfileCOMClass
	{
		CONST_VTBL struct ISecurityProfileCOMClassVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileCOMClass_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileCOMClass_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileCOMClass_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileCOMClass_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileCOMClass_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileCOMClass_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileCOMClass_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileCOMClass_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfileCOMClass_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfileCOMClass_get_FileName(This,pVal)	\
	( (This)->lpVtbl -> get_FileName(This,pVal) ) 

#define ISecurityProfileCOMClass_put_FileName(This,pVal)	\
	( (This)->lpVtbl -> put_FileName(This,pVal) ) 

#define ISecurityProfileCOMClass_get_ObjectUUID(This,pVal)	\
	( (This)->lpVtbl -> get_ObjectUUID(This,pVal) ) 

#define ISecurityProfileCOMClass_put_ObjectUUID(This,pVal)	\
	( (This)->lpVtbl -> put_ObjectUUID(This,pVal) ) 

#define ISecurityProfileCOMClass_get_ComputerName(This,pVal)	\
	( (This)->lpVtbl -> get_ComputerName(This,pVal) ) 

#define ISecurityProfileCOMClass_put_ComputerName(This,pVal)	\
	( (This)->lpVtbl -> put_ComputerName(This,pVal) ) 

#define ISecurityProfileCOMClass_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileCOMClass_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileCOMClass_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileAddIn_INTERFACE_DEFINED__
#define __ISecurityProfileAddIn_INTERFACE_DEFINED__

/* interface ISecurityProfileAddIn */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileAddIn;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("01E92B89-A348-4AA2-9B71-53EFF43D28F7")
	ISecurityProfileAddIn : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AddInHash( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AddInHash( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileAddInVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileAddIn * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileAddIn * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileAddIn * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileAddIn * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileAddIn * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileAddIn * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileAddIn * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfileAddIn * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfileAddIn * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AddInHash )( 
			ISecurityProfileAddIn * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AddInHash )( 
			ISecurityProfileAddIn * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileAddIn * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileAddIn * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileAddInVtbl;

	interface ISecurityProfileAddIn
	{
		CONST_VTBL struct ISecurityProfileAddInVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileAddIn_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileAddIn_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileAddIn_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileAddIn_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileAddIn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileAddIn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileAddIn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileAddIn_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfileAddIn_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfileAddIn_get_AddInHash(This,pVal)	\
	( (This)->lpVtbl -> get_AddInHash(This,pVal) ) 

#define ISecurityProfileAddIn_put_AddInHash(This,pVal)	\
	( (This)->lpVtbl -> put_AddInHash(This,pVal) ) 

#define ISecurityProfileAddIn_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileAddIn_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileAddIn_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileExternalModule_INTERFACE_DEFINED__
#define __ISecurityProfileExternalModule_INTERFACE_DEFINED__

/* interface ISecurityProfileExternalModule */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileExternalModule;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("594F531E-5767-45BA-8785-C0BB5D2A457E")
	ISecurityProfileExternalModule : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExternalModuleHash( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExternalModuleHash( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileExternalModuleVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileExternalModule * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileExternalModule * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileExternalModule * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileExternalModule * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfileExternalModule * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalModuleHash )( 
			ISecurityProfileExternalModule * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalModuleHash )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileExternalModule * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileExternalModule * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileExternalModuleVtbl;

	interface ISecurityProfileExternalModule
	{
		CONST_VTBL struct ISecurityProfileExternalModuleVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileExternalModule_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileExternalModule_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileExternalModule_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileExternalModule_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileExternalModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileExternalModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileExternalModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileExternalModule_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfileExternalModule_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfileExternalModule_get_ExternalModuleHash(This,pVal)	\
	( (This)->lpVtbl -> get_ExternalModuleHash(This,pVal) ) 

#define ISecurityProfileExternalModule_put_ExternalModuleHash(This,pVal)	\
	( (This)->lpVtbl -> put_ExternalModuleHash(This,pVal) ) 

#define ISecurityProfileExternalModule_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileExternalModule_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileExternalModule_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileApplication_INTERFACE_DEFINED__
#define __ISecurityProfileApplication_INTERFACE_DEFINED__

/* interface ISecurityProfileApplication */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("2629138F-448D-4CF9-B6D3-9423826FC1D7")
	ISecurityProfileApplication : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CommandMask( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CommandMask( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileApplicationVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileApplication * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileApplication * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileApplication * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileApplication * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileApplication * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileApplication * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileApplication * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfileApplication * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfileApplication * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CommandMask )( 
			ISecurityProfileApplication * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CommandMask )( 
			ISecurityProfileApplication * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileApplication * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileApplication * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileApplicationVtbl;

	interface ISecurityProfileApplication
	{
		CONST_VTBL struct ISecurityProfileApplicationVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileApplication_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileApplication_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileApplication_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileApplication_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileApplication_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfileApplication_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfileApplication_get_CommandMask(This,pVal)	\
	( (This)->lpVtbl -> get_CommandMask(This,pVal) ) 

#define ISecurityProfileApplication_put_CommandMask(This,pVal)	\
	( (This)->lpVtbl -> put_CommandMask(This,pVal) ) 

#define ISecurityProfileApplication_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileApplication_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileApplication_INTERFACE_DEFINED__ */

#ifndef __ISecurityProfileInternetResource_INTERFACE_DEFINED__
#define __ISecurityProfileInternetResource_INTERFACE_DEFINED__

/* interface ISecurityProfileInternetResource */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ISecurityProfileInternetResource;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("C7C0E781-11F3-4D69-9A93-CEDB439B9BD0")
	ISecurityProfileInternetResource : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Address( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Address( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Port( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Port( 
			/* [in] */ int pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Protocol( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ISecurityProfileInternetResourceVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ISecurityProfileInternetResource * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ISecurityProfileInternetResource * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ISecurityProfileInternetResource * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ISecurityProfileInternetResource * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			ISecurityProfileInternetResource * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
			ISecurityProfileInternetResource * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
			ISecurityProfileInternetResource * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ int pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
			ISecurityProfileInternetResource * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Protocol )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			ISecurityProfileInternetResource * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			ISecurityProfileInternetResource * This,
			/* [in] */ BSTR pVal);

		END_INTERFACE
	} ISecurityProfileInternetResourceVtbl;

	interface ISecurityProfileInternetResource
	{
		CONST_VTBL struct ISecurityProfileInternetResourceVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ISecurityProfileInternetResource_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecurityProfileInternetResource_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ISecurityProfileInternetResource_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ISecurityProfileInternetResource_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecurityProfileInternetResource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecurityProfileInternetResource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecurityProfileInternetResource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ISecurityProfileInternetResource_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISecurityProfileInternetResource_put_Name(This,pVal)	\
	( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define ISecurityProfileInternetResource_get_Address(This,pVal)	\
	( (This)->lpVtbl -> get_Address(This,pVal) ) 

#define ISecurityProfileInternetResource_put_Address(This,pVal)	\
	( (This)->lpVtbl -> put_Address(This,pVal) ) 

#define ISecurityProfileInternetResource_get_Port(This,pVal)	\
	( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define ISecurityProfileInternetResource_put_Port(This,pVal)	\
	( (This)->lpVtbl -> put_Port(This,pVal) ) 

#define ISecurityProfileInternetResource_get_Protocol(This,pVal)	\
	( (This)->lpVtbl -> get_Protocol(This,pVal) ) 

#define ISecurityProfileInternetResource_put_Protocol(This,pVal)	\
	( (This)->lpVtbl -> put_Protocol(This,pVal) ) 

#define ISecurityProfileInternetResource_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define ISecurityProfileInternetResource_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ISecurityProfileInternetResource_INTERFACE_DEFINED__ */

#ifndef __IObjectLock_INTERFACE_DEFINED__
#define __IObjectLock_INTERFACE_DEFINED__

/* interface IObjectLock */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IObjectLock;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("915D5BA9-08BA-40D4-BC8C-9B79E04BF26D")
	IObjectLock : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_connection( 
			/* [retval][out] */ VARIANT *connection) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Object( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LockedAt( 
			/* [retval][out] */ DATE *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LockDescr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_session( 
			/* [retval][out] */ VARIANT *session) = 0;

	};

#else 	/* C style interface */

	typedef struct IObjectLockVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IObjectLock * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IObjectLock * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IObjectLock * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IObjectLock * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IObjectLock * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IObjectLock * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IObjectLock * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_connection )( 
			IObjectLock * This,
			/* [retval][out] */ VARIANT *connection);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
			IObjectLock * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LockedAt )( 
			IObjectLock * This,
			/* [retval][out] */ DATE *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LockDescr )( 
			IObjectLock * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_session )( 
			IObjectLock * This,
			/* [retval][out] */ VARIANT *session);

		END_INTERFACE
	} IObjectLockVtbl;

	interface IObjectLock
	{
		CONST_VTBL struct IObjectLockVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IObjectLock_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectLock_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectLock_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IObjectLock_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectLock_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectLock_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectLock_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IObjectLock_get_connection(This,connection)	\
	( (This)->lpVtbl -> get_connection(This,connection) ) 

#define IObjectLock_get_Object(This,pVal)	\
	( (This)->lpVtbl -> get_Object(This,pVal) ) 

#define IObjectLock_get_LockedAt(This,pVal)	\
	( (This)->lpVtbl -> get_LockedAt(This,pVal) ) 

#define IObjectLock_get_LockDescr(This,pVal)	\
	( (This)->lpVtbl -> get_LockDescr(This,pVal) ) 

#define IObjectLock_get_session(This,session)	\
	( (This)->lpVtbl -> get_session(This,session) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IObjectLock_INTERFACE_DEFINED__ */

#ifndef __ILicenseInfo_INTERFACE_DEFINED__
#define __ILicenseInfo_INTERFACE_DEFINED__

/* interface ILicenseInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_ILicenseInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("8474FB87-8A0E-4F97-8F3E-379A6C955497")
	ILicenseInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IssuedByServer( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RMngrAddress( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RMngrPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RMngrPID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LicenseType( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Series( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Net( 
			/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxUsersCur( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxUsersAll( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullPresentation( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShortPresentation( 
			/* [retval][out] */ BSTR *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct ILicenseInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			ILicenseInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			ILicenseInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			ILicenseInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			ILicenseInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			ILicenseInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			ILicenseInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			ILicenseInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IssuedByServer )( 
			ILicenseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RMngrAddress )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RMngrPort )( 
			ILicenseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RMngrPID )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseType )( 
			ILicenseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Series )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Net )( 
			ILicenseInfo * This,
			/* [retval][out] */ VARIANT_BOOL *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxUsersCur )( 
			ILicenseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxUsersAll )( 
			ILicenseInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullPresentation )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShortPresentation )( 
			ILicenseInfo * This,
			/* [retval][out] */ BSTR *pVal);

		END_INTERFACE
	} ILicenseInfoVtbl;

	interface ILicenseInfo
	{
		CONST_VTBL struct ILicenseInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define ILicenseInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILicenseInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define ILicenseInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define ILicenseInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILicenseInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILicenseInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILicenseInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ILicenseInfo_get_IssuedByServer(This,pVal)	\
	( (This)->lpVtbl -> get_IssuedByServer(This,pVal) ) 

#define ILicenseInfo_get_RMngrAddress(This,pVal)	\
	( (This)->lpVtbl -> get_RMngrAddress(This,pVal) ) 

#define ILicenseInfo_get_RMngrPort(This,pVal)	\
	( (This)->lpVtbl -> get_RMngrPort(This,pVal) ) 

#define ILicenseInfo_get_RMngrPID(This,pVal)	\
	( (This)->lpVtbl -> get_RMngrPID(This,pVal) ) 

#define ILicenseInfo_get_LicenseType(This,pVal)	\
	( (This)->lpVtbl -> get_LicenseType(This,pVal) ) 

#define ILicenseInfo_get_Series(This,pVal)	\
	( (This)->lpVtbl -> get_Series(This,pVal) ) 

#define ILicenseInfo_get_Net(This,pVal)	\
	( (This)->lpVtbl -> get_Net(This,pVal) ) 

#define ILicenseInfo_get_MaxUsersCur(This,pVal)	\
	( (This)->lpVtbl -> get_MaxUsersCur(This,pVal) ) 

#define ILicenseInfo_get_MaxUsersAll(This,pVal)	\
	( (This)->lpVtbl -> get_MaxUsersAll(This,pVal) ) 

#define ILicenseInfo_get_FileName(This,pVal)	\
	( (This)->lpVtbl -> get_FileName(This,pVal) ) 

#define ILicenseInfo_get_FullPresentation(This,pVal)	\
	( (This)->lpVtbl -> get_FullPresentation(This,pVal) ) 

#define ILicenseInfo_get_ShortPresentation(This,pVal)	\
	( (This)->lpVtbl -> get_ShortPresentation(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __ILicenseInfo_INTERFACE_DEFINED__ */

#ifndef __IClusterServiceInfo_INTERFACE_DEFINED__
#define __IClusterServiceInfo_INTERFACE_DEFINED__

/* interface IClusterServiceInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IClusterServiceInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("E3DC5C5B-7290-4ACE-A6D8-96DD5DBAA9CB")
	IClusterServiceInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainOnly( 
			/* [retval][out] */ unsigned char *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClusterManagers( 
			/* [retval][out] */ SAFEARRAY * *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IClusterServiceInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IClusterServiceInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IClusterServiceInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IClusterServiceInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IClusterServiceInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IClusterServiceInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IClusterServiceInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IClusterServiceInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
			IClusterServiceInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			IClusterServiceInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainOnly )( 
			IClusterServiceInfo * This,
			/* [retval][out] */ unsigned char *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterManagers )( 
			IClusterServiceInfo * This,
			/* [retval][out] */ SAFEARRAY * *pVal);

		END_INTERFACE
	} IClusterServiceInfoVtbl;

	interface IClusterServiceInfo
	{
		CONST_VTBL struct IClusterServiceInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IClusterServiceInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IClusterServiceInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IClusterServiceInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IClusterServiceInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IClusterServiceInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IClusterServiceInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IClusterServiceInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IClusterServiceInfo_get_Name(This,pVal)	\
	( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IClusterServiceInfo_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define IClusterServiceInfo_get_MainOnly(This,pVal)	\
	( (This)->lpVtbl -> get_MainOnly(This,pVal) ) 

#define IClusterServiceInfo_get_ClusterManagers(This,pVal)	\
	( (This)->lpVtbl -> get_ClusterManagers(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IClusterServiceInfo_INTERFACE_DEFINED__ */

#ifndef __IClusterManagerInfo_INTERFACE_DEFINED__
#define __IClusterManagerInfo_INTERFACE_DEFINED__

/* interface IClusterManagerInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 

EXTERN_C const IID IID_IClusterManagerInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("223A0210-5059-41BE-8D59-8EEAFE5A7ACA")
	IClusterManagerInfo : public IDispatch
	{
	public:
		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HostName( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HostName( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainPort( 
			/* [retval][out] */ int *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Descr( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Descr( 
			/* [in] */ BSTR pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PID( 
			/* [retval][out] */ BSTR *pVal) = 0;

		virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainManager( 
			/* [retval][out] */ unsigned char *pVal) = 0;

	};

#else 	/* C style interface */

	typedef struct IClusterManagerInfoVtbl
	{
		BEGIN_INTERFACE

		HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
			IClusterManagerInfo * This,
			/* [in] */ REFIID riid,
			/* [annotation][iid_is][out] */ 
			_COM_Outptr_  void **ppvObject);

		ULONG ( STDMETHODCALLTYPE *AddRef )( 
			IClusterManagerInfo * This);

		ULONG ( STDMETHODCALLTYPE *Release )( 
			IClusterManagerInfo * This);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
			IClusterManagerInfo * This,
			/* [out] */ UINT *pctinfo);

		HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
			IClusterManagerInfo * This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo **ppTInfo);

		HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
			IClusterManagerInfo * This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR *rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID *rgDispId);

		/* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
			IClusterManagerInfo * This,
			/* [annotation][in] */ 
			_In_  DISPID dispIdMember,
			/* [annotation][in] */ 
			_In_  REFIID riid,
			/* [annotation][in] */ 
			_In_  LCID lcid,
			/* [annotation][in] */ 
			_In_  WORD wFlags,
			/* [annotation][out][in] */ 
			_In_  DISPPARAMS *pDispParams,
			/* [annotation][out] */ 
			_Out_opt_  VARIANT *pVarResult,
			/* [annotation][out] */ 
			_Out_opt_  EXCEPINFO *pExcepInfo,
			/* [annotation][out] */ 
			_Out_opt_  UINT *puArgErr);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
			IClusterManagerInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
			IClusterManagerInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainPort )( 
			IClusterManagerInfo * This,
			/* [retval][out] */ int *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Descr )( 
			IClusterManagerInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Descr )( 
			IClusterManagerInfo * This,
			/* [in] */ BSTR pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PID )( 
			IClusterManagerInfo * This,
			/* [retval][out] */ BSTR *pVal);

		/* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainManager )( 
			IClusterManagerInfo * This,
			/* [retval][out] */ unsigned char *pVal);

		END_INTERFACE
	} IClusterManagerInfoVtbl;

	interface IClusterManagerInfo
	{
		CONST_VTBL struct IClusterManagerInfoVtbl *lpVtbl;
	};

#ifdef COBJMACROS

#define IClusterManagerInfo_QueryInterface(This,riid,ppvObject)	\
	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IClusterManagerInfo_AddRef(This)	\
	( (This)->lpVtbl -> AddRef(This) ) 

#define IClusterManagerInfo_Release(This)	\
	( (This)->lpVtbl -> Release(This) ) 

#define IClusterManagerInfo_GetTypeInfoCount(This,pctinfo)	\
	( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IClusterManagerInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
	( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IClusterManagerInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
	( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IClusterManagerInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
	( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define IClusterManagerInfo_get_HostName(This,pVal)	\
	( (This)->lpVtbl -> get_HostName(This,pVal) ) 

#define IClusterManagerInfo_put_HostName(This,pVal)	\
	( (This)->lpVtbl -> put_HostName(This,pVal) ) 

#define IClusterManagerInfo_get_MainPort(This,pVal)	\
	( (This)->lpVtbl -> get_MainPort(This,pVal) ) 

#define IClusterManagerInfo_get_Descr(This,pVal)	\
	( (This)->lpVtbl -> get_Descr(This,pVal) ) 

#define IClusterManagerInfo_put_Descr(This,pVal)	\
	( (This)->lpVtbl -> put_Descr(This,pVal) ) 

#define IClusterManagerInfo_get_PID(This,pVal)	\
	( (This)->lpVtbl -> get_PID(This,pVal) ) 

#define IClusterManagerInfo_get_MainManager(This,pVal)	\
	( (This)->lpVtbl -> get_MainManager(This,pVal) ) 

#endif /* COBJMACROS */

#endif 	/* C style interface */

#endif 	/* __IClusterManagerInfo_INTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_COMConnector;

#ifdef __cplusplus

class DECLSPEC_UUID("181E893D-73A4-4722-B61D-D604B3D67D47")
COMConnector;
#endif
#endif /* __V83_LIBRARY_DEFINED__ */

#ifdef __cplusplus
}
#endif

#endif //__COMCntr_h__
