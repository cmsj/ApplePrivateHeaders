/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CSKStreamArchiveStatistics : NSObject {

	NSArray* _sortedEntries;
	unsigned long long _totalEntityCount;

}

@property (nonatomic,retain) NSArray * sortedEntries;                          //@synthesize sortedEntries=_sortedEntries - In the implementation block
@property (assign,nonatomic) unsigned long long totalEntityCount;              //@synthesize totalEntityCount=_totalEntityCount - In the implementation block
+(id)statisticsWithRawData:(id)arg1 totalCountThreshold:(unsigned long long)arg2 percentageThreshold:(float)arg3 entriesMaximumCount:(unsigned long long)arg4 type:(unsigned long long)arg5 ;
+(id)_entityCountsFromEntries:(id)arg1 total:(unsigned long long*)arg2 ;
+(void)_evaluateTopEntries:(unsigned long long)arg1 fromCounts:(id)arg2 totalCount:(unsigned long long)arg3 totalCountThreshold:(unsigned long long)arg4 percentageThreshold:(float)arg5 withStatistics:(id*)arg6 ;
+(id)statisticsWithRawData:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)sortedEntries;
-(void)setTotalEntityCount:(unsigned long long)arg1 ;
-(void)setSortedEntries:(NSArray *)arg1 ;
-(id)allPaths;
-(unsigned long long)totalEntityCount;
@end

