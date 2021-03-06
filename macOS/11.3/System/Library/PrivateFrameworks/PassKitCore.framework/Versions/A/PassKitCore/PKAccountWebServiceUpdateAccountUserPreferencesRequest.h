/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, PKAccountUserPreferences, NSURL;

@interface PKAccountWebServiceUpdateAccountUserPreferencesRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSString* _accountUserAltDSID;
	PKAccountUserPreferences* _accountUserPreferences;
	unsigned long long _accountUserAccessLevel;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountUserAltDSID;                                    //@synthesize accountUserAltDSID=_accountUserAltDSID - In the implementation block
@property (nonatomic,retain) PKAccountUserPreferences * accountUserPreferences;              //@synthesize accountUserPreferences=_accountUserPreferences - In the implementation block
@property (assign,nonatomic) unsigned long long accountUserAccessLevel;                      //@synthesize accountUserAccessLevel=_accountUserAccessLevel - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)accountUserAltDSID;
-(void)setAccountUserAltDSID:(NSString *)arg1 ;
-(PKAccountUserPreferences *)accountUserPreferences;
-(void)setAccountUserPreferences:(PKAccountUserPreferences *)arg1 ;
-(unsigned long long)accountUserAccessLevel;
-(void)setAccountUserAccessLevel:(unsigned long long)arg1 ;
@end

