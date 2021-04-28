/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVClientCertificateInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVLogDelegate.h>

@class NSString, ACAccount, NSURL, NSData, NSSet, NSManagedObjectID, AKAppleIDSession;

@interface CalDAVBasicAccountInfoProvider : NSObject <CoreDAVAccountInfoProvider, CoreDAVClientCertificateInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate> {

	NSString* _accountID;
	ACAccount* _acAccount;
	char _shouldFailAllTasks;
	NSString* _scheme;
	NSString* _host;
	NSString* _principalPath;
	NSURL* _principalURL;
	long long _port;
	NSString* _serverRoot;
	NSString* _user;
	NSString* _password;
	NSData* _identityPersist;
	NSSet* _serverComplianceClasses;
	NSManagedObjectID* _objectID;
	AKAppleIDSession* _appleIDSession;

}

@property (retain) AKAppleIDSession * appleIDSession;               //@synthesize appleIDSession=_appleIDSession - In the implementation block
@property (retain) NSString * scheme;                               //@synthesize scheme=_scheme - In the implementation block
@property (retain) NSString * host;                                 //@synthesize host=_host - In the implementation block
@property (retain) NSString * principalPath;                        //@synthesize principalPath=_principalPath - In the implementation block
@property (retain) NSURL * principalURL;                            //@synthesize principalURL=_principalURL - In the implementation block
@property (assign) long long port;                                  //@synthesize port=_port - In the implementation block
@property (retain) NSString * serverRoot;                           //@synthesize serverRoot=_serverRoot - In the implementation block
@property (retain) NSString * user;                                 //@synthesize user=_user - In the implementation block
@property (retain) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (retain) NSData * identityPersist;                        //@synthesize identityPersist=_identityPersist - In the implementation block
@property (retain) NSString * accountID; 
@property (retain) NSSet * serverComplianceClasses;                 //@synthesize serverComplianceClasses=_serverComplianceClasses - In the implementation block
@property (retain) NSManagedObjectID * objectID;                    //@synthesize objectID=_objectID - In the implementation block
@property (assign) char shouldFailAllTasks;                         //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (retain) ACAccount * acAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)_accountIsPartOfAppleAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)scheme;
-(NSString *)host;
-(long long)port;
-(NSString *)user;
-(NSString *)password;
-(void)setScheme:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSManagedObjectID *)objectID;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)oauthToken;
-(NSURL *)principalURL;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(ACAccount *)acAccount;
-(void)setAcAccount:(ACAccount *)arg1 ;
-(id)logHandle;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(id)userAgentHeader;
-(id)initWithUser:(id)arg1 password:(id)arg2 principalURL:(id)arg3 objectID:(id)arg4 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 principalURL:(id)arg3 accountID:(id)arg4 acAccount:(id)arg5 objectID:(id)arg6 ;
-(void)setFullPrincipalAddress:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)handleTrustChallenge:(id)arg1 ;
-(char)handleShouldUseCredentialStorage;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(AKAppleIDSession *)appleIDSession;
-(void)setShouldFailAllTasks:(char)arg1 ;
-(id)oauthInfoProvider;
-(SecIdentityRef)copySecIdentity;
-(id)secCertificates;
-(NSString *)serverRoot;
-(NSData *)identityPersist;
-(NSSet *)serverComplianceClasses;
-(char)handleCertificateError:(id)arg1 ;
-(char)shouldFailAllTasks;
-(id)clientCertificateInfoProvider;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2 ;
-(char)shouldTryRenewingCredential;
-(char)renewCredential;
-(char)shouldCompressRequests;
-(id)getAppleIDSession;
-(id)oauth2Token;
-(unsigned long long)oauthVariant;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)coreDAVLogRequestBody:(id)arg1 ;
-(void)coreDAVLogResponseBody:(id)arg1 ;
-(void)notePrincipalPathChange:(id)arg1 ;
-(void)setServerRoot:(NSString *)arg1 ;
-(void)setIdentityPersist:(NSData *)arg1 ;
-(void)setServerComplianceClasses:(NSSet *)arg1 ;
-(void)setAppleIDSession:(AKAppleIDSession *)arg1 ;
@end
