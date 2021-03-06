/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _deletedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * deletedRecordZoneID;              //@synthesize deletedRecordZoneID=_deletedRecordZoneID - In the implementation block
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(CKRecordZoneID *)deletedRecordZoneID;
-(void)dealloc;
-(id)description;
@end

