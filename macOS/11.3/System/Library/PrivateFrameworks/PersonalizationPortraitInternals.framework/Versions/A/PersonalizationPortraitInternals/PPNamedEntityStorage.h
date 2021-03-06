/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage, NSObject;

@interface PPNamedEntityStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;
	NSObject*<OS_dispatch_queue> _populateDatabaseQueue;

}
+(double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4 ;
+(id)_loadTrieFromLocalAsset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(char)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(char)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(char)arg4 ;
-(char)iterNamedEntityRecordsAndIdsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)_createRecordWithStatement:(id)arg1 txnWitness:(id)arg2 ;
-(char)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4 ;
-(PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5 ;
-(char)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(char)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id*)arg7 ;
-(char)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(char)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7 ;
-(void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(char)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(char)donateNamedEntityFeedback:(id)arg1 ;
-(char)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(char)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(char*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)deleteNamedEntitiesMatchingRowIds:(id)arg1 atLeastOneNamedEntityRemoved:(char*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(char*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(char*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(char*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(char*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(char)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(char)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(char*)arg4 ;
-(id)_deletionQueue;
-(void)_asyncProcessNewDKEventDeletions;
-(void)processNewDKEventDeletions;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned)arg1 isComplete:(char*)arg2 shouldContinueBlock:(/*^block*/id)arg3 ;
-(void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
-(void)_importDKEventsWithLimit:(unsigned)arg1 remoteEventsOnly:(char)arg2 isComplete:(char*)arg3 ;
-(void)_importDKEventsWithShouldContinueBlock:(unsigned)arg1 remoteEventsOnly:(char)arg2 isComplete:(char*)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3 filter:(id)arg4 ;
-(void)exportRecordsToDKWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_generateExportRowIdsWithBatchSize:(unsigned)arg1 isComplete:(char*)arg2 ;
-(void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)fixupDKEventsWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)fixupDKEventsMetadataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(unsigned)duetReadBatchSize;
-(unsigned)duetWriteBatchSize;
-(double)duetWriteBatchInterval;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)clusterIdentifiersExistingBeforeDate:(id)arg1 ;
-(unsigned)uniqueClusterIdentifierCount;
-(id)thirdPartyBundleIdsFromToday;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)namedEntityFilterLastRunDateWithError:(id*)arg1 ;
-(id)namedEntityFilterLastRecordDate;
-(char)setNamedEntityFilterLastRecordDate:(id)arg1 error:(id*)arg2 ;
-(char)setNamedEntityFilterLastRunDate:(id)arg1 error:(id*)arg2 ;
-(id)firstDonationSourceCounts;
@end

