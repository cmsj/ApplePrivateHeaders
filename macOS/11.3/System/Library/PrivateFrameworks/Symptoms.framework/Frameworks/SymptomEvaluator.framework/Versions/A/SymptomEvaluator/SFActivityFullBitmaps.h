/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SFActivityBitmaps.h>

@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps {

	NSMutableDictionary* _flows;

}

@property (retain) NSMutableDictionary * flows;              //@synthesize flows=_flows - In the implementation block
-(id)init;
-(NSMutableDictionary *)flows;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)freeUpBufferSpace;
-(void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(void)resetAllActivities;
-(id)getAllFlowIds;
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 ;
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 ;
-(unsigned long long)getHammingWeightForFlowId:(unsigned long long)arg1 ;
-(unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)arg1 ;
@end
