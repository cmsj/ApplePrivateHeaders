/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface WBSPasswordWarningTopFraudTargets : NSObject {

	NSArray* _highPriorityFraudTargets;
	NSArray* _fraudTargets;
	NSArray* _financialFraudTargets;

}

@property (nonatomic,readonly) NSArray * highPriorityFraudTargets;              //@synthesize highPriorityFraudTargets=_highPriorityFraudTargets - In the implementation block
@property (nonatomic,readonly) NSArray * fraudTargets;                          //@synthesize fraudTargets=_fraudTargets - In the implementation block
@property (nonatomic,readonly) NSArray * financialFraudTargets;                 //@synthesize financialFraudTargets=_financialFraudTargets - In the implementation block
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)initWithHighPriorityTargets:(id)arg1 targets:(id)arg2 financialTargets:(id)arg3 ;
-(NSArray *)highPriorityFraudTargets;
-(NSArray *)fraudTargets;
-(NSArray *)financialFraudTargets;
@end

