/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/Versions/A/ExtensionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExtensionKit/ExtensionKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSExtensionAuxHostingBase.h>
#import <libobjc.A.dylib/_NSExtensionContextInternalImplementation.h>

@protocol EXExtensionContextHosting, OS_os_transaction, EXExtensionContextVending;
@class NSArray, NSUUID, NSXPCConnection, NSExtensionContext, NSObject, NSXPCListener, NSString;

@interface EXExtensionContextImplementation : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation> {

	char __dummyExtension;
	/*^block*/id __requestCleanUpBlock;
	NSExtensionContext* _extensionContext;
	id<EXExtensionContextHosting> __extensionHostProxy;
	NSObject*<OS_os_transaction> __transaction;
	id __principalObject;
	id __processAssertion;
	id<EXExtensionContextVending> __extensionVendorProxy;
	NSXPCListener* __auxiliaryListener;
	NSUUID* __pkUUID;
	NSUUID* __UUID;
	NSArray* _inputItems;
	NSXPCConnection* __auxiliaryConnection;
	SCD_Struct_EX1 __extensionHostAuditToken;

}

@property (copy) NSUUID * _UUID;                                                                                       //@synthesize _UUID=__UUID - In the implementation block
@property (setter=_setInputItems:,copy) NSArray * inputItems;                                                          //@synthesize inputItems=_inputItems - In the implementation block
@property (setter=_setAuxiliaryConnection:,retain) NSXPCConnection * _auxiliaryConnection;                             //@synthesize _auxiliaryConnection=__auxiliaryConnection - In the implementation block
@property (setter=_setDummyExtension:,getter=_isDummyExtension) char _dummyExtension;                                  //@synthesize _dummyExtension=__dummyExtension - In the implementation block
@property (__weak,readonly) NSExtensionContext * extensionContext;                                                     //@synthesize extensionContext=_extensionContext - In the implementation block
@property (setter=_setExtensionHostProxy:,retain) id<EXExtensionContextHosting> _extensionHostProxy;                   //@synthesize _extensionHostProxy=__extensionHostProxy - In the implementation block
@property (setter=_setExtensionHostAuditToken:) SCD_Struct_EX1 _extensionHostAuditToken;                               //@synthesize _extensionHostAuditToken=__extensionHostAuditToken - In the implementation block
@property (setter=_setTransaction:,getter=_transaction,retain) NSObject*<OS_os_transaction> _transaction;              //@synthesize _transaction=__transaction - In the implementation block
@property (setter=_setPrincipalObject:) id _principalObject;                                                           //@synthesize _principalObject=__principalObject - In the implementation block
@property (setter=_setProcessAssertion:,retain) id _processAssertion;                                                  //@synthesize _processAssertion=__processAssertion - In the implementation block
@property (setter=_setExtensionVendorProxy:,retain) id<EXExtensionContextVending> _extensionVendorProxy;               //@synthesize _extensionVendorProxy=__extensionVendorProxy - In the implementation block
@property (setter=_setAuxiliaryListener:,retain) NSXPCListener * _auxiliaryListener;                                   //@synthesize _auxiliaryListener=__auxiliaryListener - In the implementation block
@property (copy) NSUUID * _pkUUID;                                                                                     //@synthesize _pkUUID=__pkUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock;                                              //@synthesize _requestCleanUpBlock=__requestCleanUpBlock - In the implementation block
+(char)supportsSecureCoding;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
+(id)_extensionContextForIdentifier:(id)arg1 ;
+(id)_defaultExtensionContextProtocol;
+(id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1 ;
+(id)_defaultExtensionContextVendorProtocol;
+(id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1 ;
+(id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_os_transaction>)_transaction;
-(id)_processAssertion;
-(void)_setInputItems:(id)arg1 ;
-(NSArray *)inputItems;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4 ;
-(NSUUID *)_UUID;
-(void)set_UUID:(NSUUID *)arg1 ;
-(NSXPCConnection *)_auxiliaryConnection;
-(void)_setAuxiliaryConnection:(id)arg1 ;
-(NSXPCListener *)_auxiliaryListener;
-(void)_setAuxiliaryListener:(id)arg1 ;
-(id<EXExtensionContextHosting>)_extensionHostProxy;
-(void)_setExtensionHostProxy:(id)arg1 ;
-(char)_isHost;
-(id<EXExtensionContextVending>)_extensionVendorProxy;
-(void)_setExtensionVendorProxy:(id)arg1 ;
-(void)_setProcessAssertion:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(SCD_Struct_EX1)_extensionHostAuditToken;
-(void)_setExtensionHostAuditToken:(SCD_Struct_EX1)arg1 ;
-(id)_requestCleanUpBlock;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1 ;
-(id)_principalObject;
-(void)_setPrincipalObject:(id)arg1 ;
-(void)_willPerformHostCallback:(/*^block*/id)arg1 ;
-(void)_loadItemForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)___nsx_pingHost:(/*^block*/id)arg1 ;
-(char)_isDummyExtension;
-(void)_setDummyExtension:(char)arg1 ;
-(NSExtensionContext *)extensionContext;
-(void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)arg1 ;
-(void)_completeRequestReturningItemsSecondHalf:(/*^block*/id)arg1 ;
-(NSUUID *)_pkUUID;
-(void)set_pkUUID:(NSUUID *)arg1 ;
@end
