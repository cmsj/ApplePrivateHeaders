/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACMToken.h>
#import <ACDEClient/ACCSSOTokenProtocol.h>

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage, NSDictionary;

@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol> {

	char _longLiveSession;
	ACFMessage* _initialRequest;
	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	NSNumber* _personID;
	NSDate* _recentUnlockDate;
	NSString* _clientSecret;
	NSNumber* _clientSecretCreationTimestamp;

}

@property (readonly) NSDictionary * tokenDictionary; 
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken;                               //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDate * recentAuthenticationDate;                     //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (nonatomic,retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest;                           //@synthesize initialRequest=_initialRequest - In the implementation block
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate;                             //@synthesize recentUnlockDate=_recentUnlockDate - In the implementation block
@property (nonatomic,retain) NSString * clientSecret;                               //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp;              //@synthesize clientSecretCreationTimestamp=_clientSecretCreationTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) char longLiveSession;                                  //@synthesize longLiveSession=_longLiveSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSString *)clientSecret;
-(ACFMessage *)initialRequest;
-(NSDictionary *)tokenDictionary;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(NSDate *)arg1 ;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(NSDate *)arg1 ;
-(void)setInitialRequest:(ACFMessage *)arg1 ;
-(NSNumber *)clientSecretCreationTimestamp;
-(void)setClientSecretCreationTimestamp:(NSNumber *)arg1 ;
-(char)longLiveSession;
-(void)setLongLiveSession:(char)arg1 ;
@end

