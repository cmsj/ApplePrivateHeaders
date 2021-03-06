/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Admin.framework/Versions/A/Admin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Admin/Authenticator.h>

@interface DSAuthenticator : Authenticator {

	char _didClearTextAuthentication;

}

@property (readonly) char didClearTextAuthentication;              //@synthesize didClearTextAuthentication=_didClearTextAuthentication - In the implementation block
+(id)sharedDSAuthenticator;
+(id)sharedDSClearTextAuthenticator;
-(void)finalize;
-(void)dealloc;
-(char)authenticateUsingAuthorizationSync:(id)arg1 ;
-(void)authenticateUsingAuthorization:(id)arg1 userName:(id)arg2 password:(id)arg3 ;
-(void)authenticateUsingAuthorization:(id)arg1 ;
-(void)deauthenticate;
-(void)authenticateUsingAuthorizationSync:(id)arg1 userName:(id)arg2 password:(id)arg3 ;
-(char)didClearTextAuthentication;
@end

