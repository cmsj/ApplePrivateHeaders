/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage;

@interface PPLocationStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;

}
-(void)dealloc;
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(char)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(char)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
-(char)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(char)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(char)arg4 ;
-(char)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(char)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)thirdPartyBundleIdsFromToday;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3 ;
-(char)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(char)arg5 decayRate:(double)arg6 txnWitness:(id)arg7 ;
-(void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(char*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(char)donateLocationFeedback:(id)arg1 ;
-(char)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(char*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(char*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(char*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(char*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(char*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(char)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(char)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(char*)arg4 ;
@end
