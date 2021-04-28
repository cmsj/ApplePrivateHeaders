/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CKDatabase, CKServerChangeToken, CKOperationGroup, NSSet, NSError, NSOperationQueue;

@interface CKSyncEngineFetchChangesOperation : NSOperation {

	char _shouldFetchDatabaseChanges;
	char _isExecuting;
	char _isFinished;
	CKDatabase* _database;
	CKServerChangeToken* _previousDatabaseServerChangeToken;
	CKOperationGroup* _group;
	NSSet* _zoneIDs;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _databaseChangeTokenUpdatedBlock;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	/*^block*/id _recordZoneChangesConfigurationBlock;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _willEnqueueOperationBlock;
	/*^block*/id _fetchChangesCompletionBlock;
	NSError* _error;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char isExecuting;                                                   //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                                    //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                            //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousDatabaseServerChangeToken;              //@synthesize previousDatabaseServerChangeToken=_previousDatabaseServerChangeToken - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                           //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) char shouldFetchDatabaseChanges;                                    //@synthesize shouldFetchDatabaseChanges=_shouldFetchDatabaseChanges - In the implementation block
@property (nonatomic,retain) NSSet * zoneIDs;                                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                      //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                                   //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                                    //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id databaseChangeTokenUpdatedBlock;                                   //@synthesize databaseChangeTokenUpdatedBlock=_databaseChangeTokenUpdatedBlock - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                               //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangesConfigurationBlock;                               //@synthesize recordZoneChangesConfigurationBlock=_recordZoneChangesConfigurationBlock - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                       //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                    //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id willEnqueueOperationBlock;                                         //@synthesize willEnqueueOperationBlock=_willEnqueueOperationBlock - In the implementation block
@property (nonatomic,copy) id fetchChangesCompletionBlock;                                       //@synthesize fetchChangesCompletionBlock=_fetchChangesCompletionBlock - In the implementation block
+(unsigned long long)maxZonesPerOperation;
+(void)setMaxZonesPerOperation:(unsigned long long)arg1 ;
-(id)init;
-(NSError *)error;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(CKOperationGroup *)group;
-(CKDatabase *)database;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(NSSet *)zoneIDs;
-(void)setZoneIDs:(NSSet *)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)setWillEnqueueOperationBlock:(id)arg1 ;
-(void)setPreviousDatabaseServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setShouldFetchDatabaseChanges:(char)arg1 ;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(void)setDatabaseChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setRecordZoneChangesConfigurationBlock:(id)arg1 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)setFetchChangesCompletionBlock:(id)arg1 ;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)fetchDatabaseChangesCompletionBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(void)finishWithError:(id)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(id)cancelledError;
-(id)fetchChangesCompletionBlock;
-(char)shouldFetchDatabaseChanges;
-(void)fetchDatabaseChangesThenRecordZoneChanges;
-(void)fetchRecordZoneChanges;
-(CKServerChangeToken *)previousDatabaseServerChangeToken;
-(id)databaseChangeTokenUpdatedBlock;
-(id)willEnqueueOperationBlock;
-(id)recordZoneChangesConfigurationBlock;
@end
