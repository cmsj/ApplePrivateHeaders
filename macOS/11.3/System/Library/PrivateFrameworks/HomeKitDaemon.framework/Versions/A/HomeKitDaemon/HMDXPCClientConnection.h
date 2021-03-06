/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMDXPCMessageCountTracker, NSString, HMDXPCMessageSendPolicyParameters, NSDictionary, HMDProcessInfo, NSXPCConnection, HMDXPCRequestTracker, NSSet;

@interface HMDXPCClientConnection : HMFMessageTransport <HMXPCMessageTransport, HMFLogging> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMDXPCMessageCountTracker* _counterTracker;
	NSString* _signature;
	char _activated;
	char _entitledForAPIAccess;
	char _entitledForBackgroundMode;
	char _entitledForCameraClipsAccess;
	char _entitledForMultiUserSetupAccess;
	char _entitledForPersonManagerAccess;
	HMDXPCMessageSendPolicyParameters* _sendPolicyParameters;
	NSDictionary* _userInfo;
	HMDProcessInfo* _processInfo;
	NSXPCConnection* _xpcConnection;
	unsigned long long _entitlements;
	NSString* _clientName;
	HMDXPCRequestTracker* _requestTracker;
	NSDictionary* _privateAccessEntitlement;

}

@property (nonatomic,readonly) id remoteProxy; 
@property (nonatomic,retain) NSString * clientName;                                                                                      //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                                                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) HMDXPCRequestTracker * requestTracker;                                                                    //@synthesize requestTracker=_requestTracker - In the implementation block
@property (assign,getter=isActivated,nonatomic) char activated;                                                                          //@synthesize activated=_activated - In the implementation block
@property (nonatomic,retain) NSDictionary * privateAccessEntitlement;                                                                    //@synthesize privateAccessEntitlement=_privateAccessEntitlement - In the implementation block
@property (nonatomic,retain) HMDXPCMessageSendPolicyParameters * sendPolicyParameters;                                                   //@synthesize sendPolicyParameters=_sendPolicyParameters - In the implementation block
@property (retain) HMDProcessInfo * processInfo;                                                                                         //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (copy,readonly) NSDictionary * userInfo;                                                                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) Class principalClass; 
@property (nonatomic,readonly) int clientPid; 
@property (nonatomic,readonly) NSSet * activeRequests; 
@property (getter=isAuthorizedForHomeDataAccess,nonatomic,readonly) char authorizedForHomeDataAccess; 
@property (getter=isAuthorizedForMicrophoneAccess,nonatomic,readonly) char authorizedForMicrophoneAccess; 
@property (readonly) unsigned long long entitlements;                                                                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isEntitledForAPIAccess,nonatomic,readonly) char entitledForAPIAccess;                                                  //@synthesize entitledForAPIAccess=_entitledForAPIAccess - In the implementation block
@property (getter=isEntitledForSPIAccess,readonly) char entitledForSPIAccess; 
@property (getter=isAuthorizedForLocationAccess,nonatomic,readonly) char authorizedForLocationAccess; 
@property (getter=isEntitledForBackgroundMode,nonatomic,readonly) char entitledForBackgroundMode;                                        //@synthesize entitledForBackgroundMode=_entitledForBackgroundMode - In the implementation block
@property (getter=isEntitledForHomeLocationAccess,nonatomic,readonly) char entitledForHomeLocationAccess; 
@property (getter=isEntitledForCameraClipsAccess,nonatomic,readonly) char entitledForCameraClipsAccess;                                  //@synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess - In the implementation block
@property (getter=isEntitledForMultiUserSetupAccess,nonatomic,readonly) char entitledForMultiUserSetupAccess;                            //@synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess - In the implementation block
@property (getter=isEntitledForShortcutsAutomationAccess,nonatomic,readonly) char entitledForShortcutsAutomationAccess; 
@property (getter=isEntitledToProvideAccessorySetupPayload,nonatomic,readonly) char entitledToProvideAccessorySetupPayload; 
@property (getter=isEntitledForPersonManagerAccess,nonatomic,readonly) char entitledForPersonManagerAccess;                              //@synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess - In the implementation block
@property (getter=isEntitledForSecureAccess,nonatomic,readonly) char entitledForSecureAccess; 
@property (getter=isEntitledForStateDump,nonatomic,readonly) char entitledForStateDump; 
@property (getter=isEntitledForAssistantIdentifiers,nonatomic,readonly) char entitledForAssistantIdentifiers; 
@property (getter=isPlatformBinary,readonly) char platformBinary; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * companionAppBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)entitlementsForConnection:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(HMDProcessInfo *)processInfo;
-(unsigned long long)entitlements;
-(id)_displayName;
-(Class)principalClass;
-(void)deactivate;
-(id)shortDescription;
-(NSString *)clientName;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(int)clientPid;
-(char)isActivated;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProcessInfo:(HMDProcessInfo *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(id)remoteProxy;
-(void)setClientName:(NSString *)arg1 ;
-(id)logIdentifier;
-(char)isPlatformBinary;
-(id)attributeDescriptions;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)updateUserInfo:(id)arg1 ;
-(char)isAuthorizedForHomeDataAccess;
-(void)setActivated:(char)arg1 ;
-(char)canSendMessage:(id)arg1 ;
-(char)isEntitledForSPIAccess;
-(HMDXPCMessageSendPolicyParameters *)sendPolicyParameters;
-(void)updateSendPolicyParameters:(id)arg1 ;
-(char)isEntitledToProvideAccessorySetupPayload;
-(char)isAuthorizedForLocationAccess;
-(char)isEntitledForSecureAccess;
-(char)isEntitledForHomeLocationAccess;
-(char)isEntitledForAssistantIdentifiers;
-(char)isEntitledForShortcutsAutomationAccess;
-(char)isEntitledForAPIAccess;
-(char)isAuthorizedForMicrophoneAccess;
-(char)isEntitledForBackgroundMode;
-(char)isEntitledForStateDump;
-(NSString *)companionAppBundleIdentifier;
-(unsigned long long)homeManagerOptions;
-(HMDXPCRequestTracker *)requestTracker;
-(void)__handleApplicationStateChange:(id)arg1 ;
-(void)initiateRefresh;
-(void)setSendPolicyParameters:(HMDXPCMessageSendPolicyParameters *)arg1 ;
-(char)isEntitledForCameraClipsAccess;
-(char)isEntitledForMultiUserSetupAccess;
-(char)isEntitledForPersonManagerAccess;
-(char)shouldSendResponseForMessageIdentifier:(id)arg1 ;
-(id)counterIdentifierForMessage:(id)arg1 ;
-(id)initForTestingWithName:(id)arg1 ;
-(id)initWithConnection:(id)arg1 counterTracker:(id)arg2 ;
-(NSSet *)activeRequests;
-(NSDictionary *)privateAccessEntitlement;
-(void)setPrivateAccessEntitlement:(NSDictionary *)arg1 ;
@end

