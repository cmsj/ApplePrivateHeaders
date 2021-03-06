/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {

	unsigned long long _accountID;
	unsigned long long _fairPlaySessionID;

}

@property (nonatomic,readonly) unsigned long long accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long fairPlaySessionID;              //@synthesize fairPlaySessionID=_fairPlaySessionID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)accountID;
-(id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2 ;
-(unsigned long long)fairPlaySessionID;
@end

