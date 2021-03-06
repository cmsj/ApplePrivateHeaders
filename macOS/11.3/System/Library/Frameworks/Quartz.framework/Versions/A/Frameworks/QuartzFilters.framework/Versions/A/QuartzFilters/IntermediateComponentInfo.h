/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzFilters/QComponentInfoTuple.h>

@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple {

	NSArray* _midNames;
	NSMutableArray* _intermediateTuples;

}

@property (retain) NSArray * midNames;                               //@synthesize midNames=_midNames - In the implementation block
@property (retain) NSMutableArray * intermediateTuples;              //@synthesize intermediateTuples=_intermediateTuples - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reset;
-(NSMutableArray *)intermediateTuples;
-(void)setMidNames:(NSArray *)arg1 ;
-(NSArray *)midNames;
-(void)setIntermediateTuples:(NSMutableArray *)arg1 ;
@end

