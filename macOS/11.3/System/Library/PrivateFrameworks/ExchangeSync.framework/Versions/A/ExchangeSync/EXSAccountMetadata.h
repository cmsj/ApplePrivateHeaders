/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Versions/A/ExchangeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EXSAccountMetadata : NSObject {

	long long _accountID;
	unsigned long long _enabledDataclasses;
	NSString* _accountKey;

}

@property (assign) long long accountID;                                //@synthesize accountID=_accountID - In the implementation block
@property (assign) unsigned long long enabledDataclasses;              //@synthesize enabledDataclasses=_enabledDataclasses - In the implementation block
@property (retain) NSString * accountKey;                              //@synthesize accountKey=_accountKey - In the implementation block
-(long long)accountID;
-(void)setAccountID:(long long)arg1 ;
-(NSString *)accountKey;
-(unsigned long long)enabledDataclasses;
-(void)setEnabledDataclasses:(unsigned long long)arg1 ;
-(void)setAccountKey:(NSString *)arg1 ;
-(char)isEqualToMetadata:(id)arg1 ;
-(void)updateWithACAccount:(id)arg1 ;
@end

