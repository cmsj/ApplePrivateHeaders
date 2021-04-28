/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSString, NSDate, CKQueryCursor;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {

	NSString* _recordType;
	NSDate* _maxModificationDate;
	CKQueryCursor* _queryCursor;

}

@property (nonatomic,readonly) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSDate * maxModificationDate;              //@synthesize maxModificationDate=_maxModificationDate - In the implementation block
@property (nonatomic,retain) CKQueryCursor * queryCursor;               //@synthesize queryCursor=_queryCursor - In the implementation block
-(void)addUpdatedRecord:(id)arg1 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(char*)arg4 error:(id*)arg5 ;
-(char)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(char)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(id)newCKQueryOperationFromMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)queryOperationFinishedWithCursor:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDate *)maxModificationDate;
-(id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3 ;
-(void)setMaxModificationDate:(NSDate *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)recordType;
-(void)setQueryCursor:(CKQueryCursor *)arg1 ;
-(CKQueryCursor *)queryCursor;
@end
