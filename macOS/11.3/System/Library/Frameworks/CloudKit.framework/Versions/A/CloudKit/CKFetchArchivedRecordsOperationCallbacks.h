/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKFetchArchivedRecordsOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 archivedRecordStatus:(long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5;

@end
