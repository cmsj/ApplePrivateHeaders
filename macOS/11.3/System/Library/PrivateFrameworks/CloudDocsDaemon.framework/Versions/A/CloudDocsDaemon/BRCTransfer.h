/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKRecordID, BRCItemID, NSString, NSNumber, BRCProgress, CKRecord;


@protocol BRCTransfer
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * stageID; 
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,readonly) unsigned long long totalSize; 
@property (nonatomic,readonly) BRCProgress * progress; 
@property (assign,nonatomic) char progressPublished; 
@property (assign,nonatomic) unsigned long long doneSize; 
@property (nonatomic,retain) CKRecord * record; 
@property (nonatomic,retain) CKRecord * secondaryRecord; 
@required
-(BRCItemID *)itemID;
-(BRCProgress *)progress;
-(NSString *)etag;
-(unsigned long long)totalSize;
-(CKRecordID *)recordID;
-(CKRecord *)record;
-(void)setRecord:(id)arg1;
-(NSString *)stageID;
-(NSNumber *)transferID;
-(void)setProgressPublished:(char)arg1;
-(char)progressPublished;
-(CKRecordID *)secondaryRecordID;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1;

@end
