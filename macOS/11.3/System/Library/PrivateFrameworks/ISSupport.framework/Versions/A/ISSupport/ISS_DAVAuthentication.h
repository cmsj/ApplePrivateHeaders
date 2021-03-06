/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ISSupport/ISSupport-Structs.h>
@class NSString;

@interface ISS_DAVAuthentication : NSObject {

	CFHTTPAuthenticationRef _auth;
	NSString* _user;
	NSString* _pass;
	NSString* _domain;

}
+(id)findProxyAuthenticationForRequest:(CFHTTPMessageRef)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)username;
-(void)setUsername:(id)arg1 ;
-(id)realm;
-(char)requiresDomain;
-(id)initWithHTTPResponse:(CFHTTPMessageRef)arg1 ;
-(char)requiresProxyAuthCredentials;
-(char)changeAuthForResponse:(CFHTTPMessageRef)arg1 ;
-(char)applyCredentialsToRequest:(CFHTTPMessageRef)arg1 ;
-(char)setProxyAuthFromKeychainForRequest:(CFHTTPMessageRef)arg1 proxyConfig:(id)arg2 ;
@end

