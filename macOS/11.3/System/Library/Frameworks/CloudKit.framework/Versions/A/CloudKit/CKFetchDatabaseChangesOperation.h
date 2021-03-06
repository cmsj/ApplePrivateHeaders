/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchDatabaseChangesOperationCallbacks.h>

@class CKServerChangeToken, CKFetchDatabaseChangesOperationInfo;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks> {

	char _fetchAllChanges;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _changeTokenUpdatedBlock;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _serverChangeToken;
	long long _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                                                  //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchDatabaseChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;                                            //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) char fetchAllChanges;                                                                     //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                                            //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                                                         //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                                                          //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id changeTokenUpdatedBlock;                                                                 //@synthesize changeTokenUpdatedBlock=_changeTokenUpdatedBlock - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                                                     //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(id)init;
-(long long)status;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setFetchAllChanges:(char)arg1 ;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(char)fetchAllChanges;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)fetchDatabaseChangesCompletionBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)changeTokenUpdatedBlock;
-(CKServerChangeToken *)serverChangeToken;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 databaseChangesStatus:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleChangeForRecordZoneID:(id)arg1 ;
-(void)handleDeleteForRecordZoneID:(id)arg1 ;
-(void)handlePurgeForRecordZoneID:(id)arg1 ;
@end

