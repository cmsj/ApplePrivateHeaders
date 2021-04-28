/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDOAuthSignerProtocol.h>

@class ACDClient, ACDDatabaseConnection, ACDClientAuthorizationManager, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {

	ACDClient* _client;
	ACDDatabaseConnection* _databaseConnection;
	ACDClientAuthorizationManager* _authorizationManager;
	char _shouldIncludeAppIdInRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)setShouldIncludeAppIdInRequest:(char)arg1 ;
-(id)initWithClient:(id)arg1 databaseConnection:(id)arg2 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)ckForAccountType:(id)arg1 ;
-(id)csForAccountType:(id)arg1 ;
-(char)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2 ;
-(id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
@end
