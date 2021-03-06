/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RMEnrollmentController : NSObject {

	NSMutableDictionary* _connectionByServiceName;
	char _synchronous;

}

@property (assign,getter=isSynchronous,nonatomic) char synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
+(id)userDefaultsEnrollmentURL;
+(id)synchronousEnrollmentController;
-(id)init;
-(id)_agentConnection;
-(id)_daemonConnection;
-(void)setSynchronous:(char)arg1 ;
-(char)isSynchronous;
-(id)_daemonProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deviceChannelEnrollmentExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_agentProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_webAuthenticationURL:(id)arg1 withUserIdentifierQuery:(id)arg2 ;
-(void)_discoverWebAuthenticationURLForDomain:(id)arg1 port:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webAuthenticationURLFromWellKnownURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enrollUserChannelWithURI:(id)arg1 authenticationCredential:(id)arg2 withDataSeparation:(char)arg3 passcodeData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)discoverWebAuthenticationURLForUserIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

