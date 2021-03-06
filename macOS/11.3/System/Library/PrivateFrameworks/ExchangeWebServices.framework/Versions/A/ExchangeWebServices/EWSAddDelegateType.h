/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseDelegateType.h>

@class NSArray;

@interface EWSAddDelegateType : EWSBaseDelegateType {

	NSArray* _DelegateUsers;
	long long _DeliverMeetingRequests;

}

@property (nonatomic,copy) NSArray * DelegateUsers;                         //@synthesize DelegateUsers=_DelegateUsers - In the implementation block
@property (assign,nonatomic) long long DeliverMeetingRequests;              //@synthesize DeliverMeetingRequests=_DeliverMeetingRequests - In the implementation block
+(id)definition;
-(void)setDelegateUsers:(NSArray *)arg1 ;
-(NSArray *)DelegateUsers;
-(long long)DeliverMeetingRequests;
-(void)setDeliverMeetingRequests:(long long)arg1 ;
@end

