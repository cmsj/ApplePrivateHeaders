/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@interface IMDCKCacheDeleteManager : NSObject {

	char _alreadyCapturedErrorWithAutoBugCapture;
	char _allowsWritingToDisk;
	char _deviceLowOnDiskSpace;
	char _isUsingCentralizedModel;
	char _isUpdatingAttachmentFileSizes;

}

@property (assign,nonatomic) char alreadyCapturedErrorWithAutoBugCapture;                          //@synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture - In the implementation block
@property (assign,nonatomic) char allowsWritingToDisk;                                             //@synthesize allowsWritingToDisk=_allowsWritingToDisk - In the implementation block
@property (assign,getter=isDeviceLowOnDiskSpace,nonatomic) char deviceLowOnDiskSpace;              //@synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace - In the implementation block
@property (assign,nonatomic) char isUsingCentralizedModel;                                         //@synthesize isUsingCentralizedModel=_isUsingCentralizedModel - In the implementation block
@property (assign) char isUpdatingAttachmentFileSizes;                                             //@synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)purgeAttachments:(long long)arg1 ;
-(char)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(char)arg2 ;
-(char)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(char)arg2 ;
-(char)isUpdatingAttachmentFileSizes;
-(void)setIsUpdatingAttachmentFileSizes:(char)arg1 ;
-(char)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1 ;
-(void)_cacheDeleteSetUp;
-(id)_ckUtilitiesSharedInstance;
-(char)isUsingCentralizedModel;
-(void)setIsUsingCentralizedModel:(char)arg1 ;
-(void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)arg1 ;
-(id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2 ;
-(id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2 ;
-(void)setDeviceLowOnDiskSpace:(char)arg1 ;
-(id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2 ;
-(id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4 ;
-(void)setAllowsWritingToDisk:(char)arg1 ;
-(char)allowsWritingToDisk;
-(long long)_purgeableSpaceGivenUrgency:(int)arg1 ;
-(long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1 ;
-(long long)purgeableAttachmentSize;
-(id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2 ;
-(id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2 ;
-(IMDAttachmentRecordStructRef)_copyRecordRef:(id)arg1 ;
-(void)_postTransferInfoOfDeletedTransfers:(id)arg1 ;
-(id)_fileTransfersToDelete:(CFArrayRef)arg1 ;
-(long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1 ;
-(id)_fileTransfersToValidate:(CFArrayRef)arg1 ;
-(void)_fetchTransfersFromCloudKit:(id)arg1 ;
-(void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2 ;
-(unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3 ;
-(char)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2 ;
-(void)updateAttachmentFileSizesWithActivity:(id)arg1 ;
-(void)registerWithCacheDelete;
-(void)resetAttachmentWatermark;
-(char)isUsingCentralizeCacheDelete;
-(void)metricAttachmentsToPurge:(long long)arg1 ;
-(char)alreadyCapturedErrorWithAutoBugCapture;
-(void)setAlreadyCapturedErrorWithAutoBugCapture:(char)arg1 ;
-(char)isDeviceLowOnDiskSpace;
@end

