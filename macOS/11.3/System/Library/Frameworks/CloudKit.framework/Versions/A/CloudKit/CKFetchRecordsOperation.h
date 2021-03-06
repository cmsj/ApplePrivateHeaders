/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordsOperationCallbacks.h>
#import <libobjc.A.dylib/CKOperationInMemoryAssets.h>

@class NSMutableDictionary, NSArray, NSMutableSet, NSDictionary, CKFetchRecordsOperationInfo;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets> {

	char _isFetchCurrentUserOperation;
	char _shouldFetchAssetContent;
	char _shouldFetchAssetContentInMemory;
	char _dropInMemoryAssetContentASAP;
	NSMutableDictionary* _assetInfoByArrayIndexByRecordKeyByRecordID;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSMutableSet* _packagesToDestroy;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _webSharingIdentityDataByRecordID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;

}

@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                                 //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (nonatomic,readonly) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) char isFetchCurrentUserOperation;                                                 //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                                  //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                                                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContentInMemory;                                             //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (assign,nonatomic) char dropInMemoryAssetContentASAP;                                                //@synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP - In the implementation block
@property (nonatomic,copy) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                                         //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                           //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToETags;                                                    //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToVersionETags;                                             //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                                          //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                                        //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                                     //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetInfoByArrayIndexByRecordKeyByRecordID;                 //@synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(id)fetchCurrentUserRecordOperation;
-(id)init;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(char)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(char)shouldFetchAssetContent;
-(char)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(char)arg1 ;
-(id)perRecordCompletionBlock;
-(id)perRecordProgressBlock;
-(void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2 ;
-(void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5 ;
-(char)dropInMemoryAssetContentASAP;
-(NSMutableDictionary *)assetInfoByArrayIndexByRecordKeyByRecordID;
-(void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setDropInMemoryAssetContentASAP:(char)arg1 ;
-(NSArray *)desiredKeys;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setIsFetchCurrentUserOperation:(char)arg1 ;
-(char)isFetchCurrentUserOperation;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSMutableDictionary *)recordIDsToRecords;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
@end

