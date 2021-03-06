/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzFilters/QComponentInfoTuple.h>

@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple {

	NSMutableArray* _intentTuples;

}

@property (retain) NSMutableArray * intentTuples;              //@synthesize intentTuples=_intentTuples - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reset;
-(NSMutableArray *)intentTuples;
-(void)setIntentTuples:(NSMutableArray *)arg1 ;
@end

