/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchArchivedRecordsOperationCallbacks.h>

@class NSArray, NSDictionary, NSMutableDictionary, CKFetchArchivedRecordsOperationInfo;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation <CKFetchArchivedRecordsOperationCallbacks> {

	char _fetchAllChanges;
	char _shouldFetchAssetContents;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchArchivedRecordsCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                                                     //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContents;                                                            //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                      //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                                    //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,readonly) id<CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchArchivedRecordsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                    //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                                                //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) char fetchAllChanges;                                                                     //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                                      //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                                      //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                                          //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchArchivedRecordsCompletionBlock;                                                     //@synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(id)init;
-(void)setFetchAllChanges:(char)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)relevantZoneIDs;
-(NSMutableDictionary *)perItemErrors;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(char)fetchAllChanges;
-(NSMutableDictionary *)statusByZoneID;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(char)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(char)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(id)recordFetchedBlock;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(id)fetchArchivedRecordsCompletionBlock;
-(void)setFetchArchivedRecordsCompletionBlock:(id)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 archivedRecordStatus:(long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(id)recordZoneArchivesStatusByZoneID;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
@end
