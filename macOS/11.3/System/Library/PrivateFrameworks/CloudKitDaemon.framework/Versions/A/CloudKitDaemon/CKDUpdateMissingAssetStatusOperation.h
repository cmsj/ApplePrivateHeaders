/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKRecordID, NSArray, CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation {

	char _recovered;
	char _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;
	CKDFetchRecordsOperation* _fetchOperation;
	CKDModifyRecordsOperation* _modifyOperation;
	CKRecord* _record;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) CKRecordID * repairRecordID;                              //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) char recovered;                                           //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) char isPackage;                                           //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                                     //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;                               //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
@property (nonatomic,retain) CKDFetchRecordsOperation * fetchOperation;                //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) CKDModifyRecordsOperation * modifyOperation;              //@synthesize modifyOperation=_modifyOperation - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                        //@synthesize record=_record - In the implementation block
-(int)operationType;
-(char)isPackage;
-(void)main;
-(id)activityCreate;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)repairRecordID;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setIsPackage:(char)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(char)makeStateTransition;
-(void)setRecovered:(char)arg1 ;
-(char)recovered;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
-(void)_updateMissingAssetStatus;
-(CKDFetchRecordsOperation *)fetchOperation;
-(void)setFetchOperation:(CKDFetchRecordsOperation *)arg1 ;
-(CKDModifyRecordsOperation *)modifyOperation;
-(void)setModifyOperation:(CKDModifyRecordsOperation *)arg1 ;
@end
