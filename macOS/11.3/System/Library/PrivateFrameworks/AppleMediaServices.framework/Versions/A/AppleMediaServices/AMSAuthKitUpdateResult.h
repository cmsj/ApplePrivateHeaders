/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject {

	ACAccount* _account;
	NSDictionary* _authenticationResults;

}

@property (readonly) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (readonly) NSDictionary * authenticationResults;              //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (readonly) unsigned long long credentialSource; 
+(id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 options:(id)arg3 ;
-(ACAccount *)account;
-(NSDictionary *)authenticationResults;
-(unsigned long long)credentialSource;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 options:(id)arg3 ;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4 ;
@end
