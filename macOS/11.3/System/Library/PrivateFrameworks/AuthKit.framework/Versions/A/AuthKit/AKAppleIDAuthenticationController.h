/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAuthenticationUIProvider;
@class NSString, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationContextManager, NSLock;

@interface AKAppleIDAuthenticationController : NSObject {

	NSString* _serviceID;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	NSXPCConnection* _authenticationServiceConnection;
	AKAppleIDAuthenticationContextManager* _contextManager;
	NSLock* _connectionLock;
	id<AKAuthenticationUIProvider> _uiProvider;
	/*^block*/id _deallocHandler;

}

@property (nonatomic,copy) id deallocHandler;                                                  //@synthesize deallocHandler=_deallocHandler - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate; 
@property (nonatomic,retain) id<AKAuthenticationUIProvider> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
+(id)sensitiveAuthenticationKeys;
-(void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2 ;
-(id)_authenticationServiceConnection;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id)fetchDeviceListWithContext:(id)arg1 error:(id*)arg2 ;
-(id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id*)arg2 ;
-(char)deleteAuthorizationDatabase:(id*)arg1 ;
-(char)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id*)arg2 ;
-(void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountNamesForAltDSID:(id)arg1 ;
-(id)_urlBagFromCache:(char)arg1 altDSID:(id)arg2 withError:(id*)arg3 ;
-(id)deallocHandler;
-(void)setDeallocHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)getServerUILoadDelegateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUiProvider:(id<AKAuthenticationUIProvider>)arg1 ;
-(void)isCreateAppleIDAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAppleIDWithAltDSID:(id)arg1 inUse:(char)arg2 forService:(long long)arg3 ;
-(void)setAppleIDWithDSID:(id)arg1 inUse:(char)arg2 forService:(long long)arg3 ;
-(id<AKAuthenticationUIProvider>)uiProvider;
-(void)generateLoginCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performCircleRequestWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDeviceListWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)synchronizeFollowUpItemsForContext:(id)arg1 error:(id*)arg2 ;
-(void)teardownFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renewRecoveryTokenWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchURLBagForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAuthModeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDeviceMapWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpVerificationSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isDevicePasscodeProtected:(id*)arg1 ;
-(id)activeLoginCode:(id*)arg1 ;
-(void)fetchUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
