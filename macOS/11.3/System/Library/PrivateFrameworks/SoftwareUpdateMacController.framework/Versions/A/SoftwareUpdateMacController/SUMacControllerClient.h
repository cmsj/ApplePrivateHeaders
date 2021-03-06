/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUCoreConnectClientDelegate.h>

@protocol OS_dispatch_queue, SUMacControllerDelegate;
@class NSDictionary, NSObject, NSString, SUCoreConnectClientPolicy, SUCoreConnectClient, SUCoreLog, SUCoreDiag;

@interface SUMacControllerClient : NSObject <SUCoreConnectClientDelegate> {

	long long _accessControlPriority;
	NSDictionary* _accessControlAdditionalContext;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	unsigned long long _requestCookieCounter;
	NSString* _clientID;
	SUCoreConnectClientPolicy* _coreConnectClientPolicy;
	SUCoreConnectClient* _coreConnectClient;
	SUCoreLog* _logger;
	id<SUMacControllerDelegate> _delegate;
	NSString* _sender;
	SUCoreDiag* _diag;
	NSString* _clientCookie;

}

@property (assign,nonatomic) unsigned long long requestCookieCounter;                                   //@synthesize requestCookieCounter=_requestCookieCounter - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                                              //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain,readonly) SUCoreConnectClientPolicy * coreConnectClientPolicy;              //@synthesize coreConnectClientPolicy=_coreConnectClientPolicy - In the implementation block
@property (nonatomic,retain,readonly) SUCoreConnectClient * coreConnectClient;                          //@synthesize coreConnectClient=_coreConnectClient - In the implementation block
@property (nonatomic,retain,readonly) SUCoreLog * logger;                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) id<SUMacControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * sender;                                                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) SUCoreDiag * diag;                                                //@synthesize diag=_diag - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientCookie;                                          //@synthesize clientCookie=_clientCookie - In the implementation block
@property (assign,nonatomic) long long accessControlPriority;                                           //@synthesize accessControlPriority=_accessControlPriority - In the implementation block
@property (nonatomic,retain) NSDictionary * accessControlAdditionalContext;                             //@synthesize accessControlAdditionalContext=_accessControlAdditionalContext - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;               //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)queryCurrentStateWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)waitForControllerSetupCompleteWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClientID:(id)arg1 delegate:(id)arg2 serviceName:(id)arg3 completionQueue:(id)arg4 ;
-(void)_initializeClientConnectionPolicyClassWhitelists;
-(SUCoreConnectClient *)coreConnectClient;
-(id)_newRequestCookie;
-(id)summaryWithRequestCookie:(id)arg1 ;
-(void)_callCommandCompletion:(/*^block*/id)arg1 withError:(id)arg2 logKey:(id)arg3 command:(id)arg4 requestCookie:(id)arg5 ;
-(id)_newClientContext;
-(id)_newProxyObjectForProgressBlock:(/*^block*/id)arg1 logKey:(id)arg2 requestCookie:(id)arg3 ;
-(void)_commitStashWithCommand:(id)arg1 forDescriptor:(id)arg2 overrides:(id)arg3 progressBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)applyDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scanForUpdateWithOverrides:(id)arg1 progressBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_newPackageDescriptorWithUpdateBrainPath:(id)arg1 updateBundlePath:(id)arg2 sfrBundlePath:(id)arg3 error:(id*)arg4 ;
-(void)downloadSFRFromUpdateDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 pathCompletion:(/*^block*/id)arg4 ;
-(long long)accessControlPriority;
-(NSDictionary *)accessControlAdditionalContext;
-(void)_handleDelegateReady:(id)arg1 ;
-(unsigned long long)requestCookieCounter;
-(void)setRequestCookieCounter:(unsigned long long)arg1 ;
-(NSString *)clientCookie;
-(SUCoreConnectClientPolicy *)coreConnectClientPolicy;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithClientID:(id)arg1 delegate:(id)arg2 completionQueue:(id)arg3 ;
-(id)initWithClientID:(id)arg1 delegate:(id)arg2 serviceName:(id)arg3 ;
-(void)wakeupUpdateBrainForDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)prerequisiteCheckForDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preparePackageDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scanForSFRUpdateWithTargetRestoreVersion:(id)arg1 targetBuildVersion:(id)arg2 targetProductVersion:(id)arg3 overrides:(id)arg4 progressBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)newPackageDescriptorWithUpdateBrainPath:(id)arg1 updateBundlePath:(id)arg2 error:(id*)arg3 ;
-(id)newPackageDescriptorWithUpdateBrainPath:(id)arg1 sfrBundlePath:(id)arg2 error:(id*)arg3 ;
-(id)newPackageDescriptorWithUpdateBrainPath:(id)arg1 updateBundlePath:(id)arg2 sfrBundlePath:(id)arg3 error:(id*)arg4 ;
-(void)downloadSFRFromUpdateDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)downloadUpdateDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)prepareDownloadedUpdateDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestControlWithCompletion:(/*^block*/id)arg1 ;
-(void)releaseControlWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)adoptSimulationsAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateConfigWithDefaults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SUCoreDiag *)diag;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(NSString *)description;
-(id<SUMacControllerDelegate>)delegate;
-(SUCoreLog *)logger;
-(NSString *)sender;
-(NSString *)clientID;
-(id)summary;
-(id)initWithClientID:(id)arg1 delegate:(id)arg2 ;
-(void)setAccessControlPriority:(long long)arg1 ;
-(void)scanForUpdateWithOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareUpdateDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyDescriptor:(id)arg1 overrides:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccessControlAdditionalContext:(NSDictionary *)arg1 ;
-(void)cancelCurrentUpdateWithOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryCurrentStateWithCompletion:(/*^block*/id)arg1 ;
-(void)commitStashForDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)createAndPersistStashForDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitStashCommitOnlyForDescriptor:(id)arg1 overrides:(id)arg2 progressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pingDaemonWithCompletion:(/*^block*/id)arg1 ;
-(void)connectionClosed;
@end

