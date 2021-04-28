/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzFilters/QComponentInfoTuple.h>

@class NSArray, NSMutableArray;

@interface TargetComponentInfo : QComponentInfoTuple {

	NSArray* _targetNames;
	NSMutableArray* _profileTuples;

}

@property (retain) NSArray * targetNames;                       //@synthesize targetNames=_targetNames - In the implementation block
@property (retain) NSMutableArray * profileTuples;              //@synthesize profileTuples=_profileTuples - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reset;
-(NSMutableArray *)profileTuples;
-(void)setTargetNames:(NSArray *)arg1 ;
-(void)setProfileTuples:(NSMutableArray *)arg1 ;
-(NSArray *)targetNames;
@end
