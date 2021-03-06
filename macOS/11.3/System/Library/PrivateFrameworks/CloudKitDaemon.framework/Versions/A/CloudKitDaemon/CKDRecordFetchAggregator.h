/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class CKDRecordCache, NSDictionary, NSSet, NSObject, NSMutableDictionary, CKDFetchRecordsOperation;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {

	CKDRecordCache* _recordCache;
	char _useRecordCache;
	char _fetchAssetContents;
	char _preserveOrdering;
	char _started;
	char _markedToFinishByParent;
	char _forceDecryptionAttempt;
	/*^block*/id _fetchAggregatorCompletionBlock;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSSet* _desiredKeys;
	NSObject*<OS_dispatch_source> _recordReadySource;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSMutableDictionary* _fetchInfosByOrder;
	unsigned long long _curFetchOrder;
	unsigned long long _highestReturnedOrder;
	CKDFetchRecordsOperation* _currentFetchOp;

}

@property (assign,nonatomic) char fetchAssetContents;                                            //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) char preserveOrdering;                                              //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;                    //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;                            //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;                          //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                            //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchInfosByOrder;                            //@synthesize fetchInfosByOrder=_fetchInfosByOrder - In the implementation block
@property (assign) unsigned long long curFetchOrder;                                             //@synthesize curFetchOrder=_curFetchOrder - In the implementation block
@property (assign) unsigned long long highestReturnedOrder;                                      //@synthesize highestReturnedOrder=_highestReturnedOrder - In the implementation block
@property (assign,nonatomic,__weak) CKDFetchRecordsOperation * currentFetchOp;                   //@synthesize currentFetchOp=_currentFetchOp - In the implementation block
@property (nonatomic,readonly) CKDRecordCache * recordCache; 
@property (assign) char started;                                                                 //@synthesize started=_started - In the implementation block
@property (getter=isMarkedToFinishByParent) char markedToFinishByParent;                         //@synthesize markedToFinishByParent=_markedToFinishByParent - In the implementation block
@property (assign,nonatomic) char forceDecryptionAttempt;                                        //@synthesize forceDecryptionAttempt=_forceDecryptionAttempt - In the implementation block
@property (assign,nonatomic) char useRecordCache;                                                //@synthesize useRecordCache=_useRecordCache - In the implementation block
@property (nonatomic,copy) id fetchAggregatorCompletionBlock;                                    //@synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(void)main;
-(char)started;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(id)CKPropertiesDescription;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSSet *)desiredKeys;
-(void)setStarted:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)fetchRecords:(id)arg1 withPerRecordCompletion:(/*^block*/id)arg2 ;
-(void)setFetchAssetContents:(char)arg1 ;
-(void)setPreserveOrdering:(char)arg1 ;
-(void)setFetchAggregatorCompletionBlock:(id)arg1 ;
-(void)finishIfAppropriate;
-(char)supportsClearAssetEncryption;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)fetchAssetContents;
-(char)preserveOrdering;
-(char)forceDecryptionAttempt;
-(void)setForceDecryptionAttempt:(char)arg1 ;
-(void)_recordFetchesAvailable;
-(void)_flushFetchedRecordsToConsumerLocked;
-(char)useRecordCache;
-(NSMutableDictionary *)fetchInfosByOrder;
-(unsigned long long)highestReturnedOrder;
-(void)setHighestReturnedOrder:(unsigned long long)arg1 ;
-(void)_performCallbackForFetchInfoLocked:(id)arg1 ;
-(void)_flushFetchedRecordsToConsumerOrderedLocked;
-(void)_flushFetchedRecordsToConsumerNoOrderingLocked;
-(CKDFetchRecordsOperation *)currentFetchOp;
-(void)setUseRecordCache:(char)arg1 ;
-(void)setCurrentFetchOp:(CKDFetchRecordsOperation *)arg1 ;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)_lockedSendFetchRequest;
-(char)isMarkedToFinishByParent;
-(void)_finishRecordFetchAggregator;
-(unsigned long long)curFetchOrder;
-(void)setCurFetchOrder:(unsigned long long)arg1 ;
-(CKDRecordCache *)recordCache;
-(id)_fetchRecord:(id)arg1 recordReadyHandle:(char*)arg2 withRecordCompletion:(/*^block*/id)arg3 ;
-(void)_addRecordFetchInfos:(id)arg1 ;
-(void)setMarkedToFinishByParent:(char)arg1 ;
-(id)fetchAggregatorCompletionBlock;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setFetchInfosByOrder:(NSMutableDictionary *)arg1 ;
@end

