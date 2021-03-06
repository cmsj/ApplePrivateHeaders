/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface EWSAutodiscoverResponse : NSObject {

	NSString* _displayName;
	NSString* _emailAddress;
	NSString* _user;
	NSURL* _internalURL;
	NSURL* _externalURL;
	NSURL* _autodiscoverURL;

}

@property (nonatomic,copy) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSURL * internalURL;                      //@synthesize internalURL=_internalURL - In the implementation block
@property (nonatomic,readonly) NSURL * externalURL;                      //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) NSURL * autodiscoverURL;                  //@synthesize autodiscoverURL=_autodiscoverURL - In the implementation block
-(id)description;
-(NSString *)user;
-(NSString *)displayName;
-(void)setUser:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSURL *)externalURL;
-(id)initWithDisplayName:(id)arg1 internalURL:(id)arg2 externalURL:(id)arg3 autodiscoverURL:(id)arg4 ;
-(NSURL *)internalURL;
-(NSURL *)autodiscoverURL;
@end

