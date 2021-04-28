/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface WFCachedDonations : NSObject {

	NSArray* _donations;
	NSDate* _fetchDate;
	unsigned long long _ballpark;

}

@property (nonatomic,readonly) NSArray * donations;                      //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) NSDate * fetchDate;                       //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,readonly) unsigned long long ballpark;              //@synthesize ballpark=_ballpark - In the implementation block
-(NSDate *)fetchDate;
-(id)initWithDonations:(id)arg1 ballpark:(unsigned long long)arg2 ;
-(char)isValidWithBallpark:(unsigned long long)arg1 ;
-(NSArray *)donations;
-(unsigned long long)ballpark;
@end
