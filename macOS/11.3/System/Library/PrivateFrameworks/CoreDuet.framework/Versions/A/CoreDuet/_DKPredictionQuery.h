/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKEventQuery.h>

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery : _DKEventQuery {

	char _useHistoricalHistogram;
	char _isTopNPrediction;
	int _slotDuration;
	int _minimumDaysOfHistory;
	int _totalSlotsInDay;
	unsigned long long _type;
	unsigned long long _partitionType;
	NSDate* _asOfDate;
	_DKKnowledgeStorage* _storage;
	/*^block*/id _predictionHandler;
	long long _topN;
	double _minLikelihood;

}

@property (assign,nonatomic) int slotDuration;                              //@synthesize slotDuration=_slotDuration - In the implementation block
@property (assign,nonatomic) int minimumDaysOfHistory;                      //@synthesize minimumDaysOfHistory=_minimumDaysOfHistory - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long partitionType;              //@synthesize partitionType=_partitionType - In the implementation block
@property (assign,nonatomic) char useHistoricalHistogram;                   //@synthesize useHistoricalHistogram=_useHistoricalHistogram - In the implementation block
@property (nonatomic,retain) NSDate * asOfDate;                             //@synthesize asOfDate=_asOfDate - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStorage * storage;                 //@synthesize storage=_storage - In the implementation block
@property (copy) id predictionHandler;                                      //@synthesize predictionHandler=_predictionHandler - In the implementation block
+(char)supportsSecureCoding;
+(id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
+(id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
+(id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setSlotDuration:(int)arg1 ;
-(void)setAsOfDate:(NSDate *)arg1 ;
-(void)setPartitionType:(unsigned long long)arg1 ;
-(void)setUseHistoricalHistogram:(char)arg1 ;
-(void)setMinimumDaysOfHistory:(int)arg1 ;
-(int)slotDuration;
-(int)minimumDaysOfHistory;
-(unsigned long long)partitionType;
-(char)useHistoricalHistogram;
-(NSDate *)asOfDate;
-(id)predictionHandler;
-(void)setPredictionHandler:(id)arg1 ;
@end
