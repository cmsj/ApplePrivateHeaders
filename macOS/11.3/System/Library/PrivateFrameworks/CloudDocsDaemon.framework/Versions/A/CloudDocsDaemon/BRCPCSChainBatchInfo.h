/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, BRCAppLibrary, NSArray, NSDictionary;

@interface BRCPCSChainBatchInfo : NSObject {

	NSMutableArray* _fullyChainRecordBatch;
	NSMutableDictionary* _fullyChainRecordInfoMap;
	NSMutableDictionary* _halfChainedRecordMap;
	NSMutableSet* _alreadyHalfChainedRecords;
	NSMutableArray* _recordsForFirstPhase;
	BRCAppLibrary* _appLibrary;
	char _should2PhasePCSChain;

}

@property (nonatomic,readonly) unsigned long long batchCount; 
@property (nonatomic,readonly) unsigned long long chainedRecordsCount; 
@property (nonatomic,readonly) NSArray * recordsForFirstPhase; 
@property (nonatomic,readonly) NSArray * recordsForSecondPhase; 
@property (nonatomic,readonly) NSDictionary * halfChainedRecordMap;                 //@synthesize halfChainedRecordMap=_halfChainedRecordMap - In the implementation block
@property (nonatomic,readonly) char should2PhasePCSChain; 
-(char)should2PhasePCSChain;
-(void)_chainPreppedRecordToParent:(id)arg1 ;
-(id)initWithAppLibrary:(id)arg1 ;
-(char)containsRecordInfo:(id)arg1 ;
-(void)prepareFirstPhaseRecordBatch;
-(void)addFullyChainedRecordInfo:(id)arg1 ;
-(void)chainPreparedRecordBatch:(id)arg1 ;
-(unsigned long long)batchCount;
-(unsigned long long)chainedRecordsCount;
-(NSArray *)recordsForFirstPhase;
-(NSArray *)recordsForSecondPhase;
-(NSDictionary *)halfChainedRecordMap;
@end

