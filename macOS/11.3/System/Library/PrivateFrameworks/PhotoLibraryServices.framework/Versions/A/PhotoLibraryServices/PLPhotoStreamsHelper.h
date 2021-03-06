/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	char _appHasPolledOnceThisForegroundSession;

}
+(id)sharedPhotoStreamsHelper;
+(char)photoStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)iCloudServiceAccount;
+(char)_photoStreamsEnabled;
+(char)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(char)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(id)photoStreamsPublishStreamID;
-(void)clearCachedAccountState;
-(void)pollForNewSubscriptionContent;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(void)_clearPhotoStreamAccountSettings;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(id)psHashAsString:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(char)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(char)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(char)dequeueAssetsForPSPublishing:(id)arg1 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(char)shouldPublishScreenShots;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(id)imageLimitsByAssetType;
-(long long)maxPixelSizeForDerivative;
-(long long)imageLimitForOwnStream;
-(long long)imageLimitForFriendStream;
-(long long)friendsLimit;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(char)arg3 ;
-(void)resetServerState;
-(id)pause_mstreamd;
-(void)resume_mstreamd:(id)arg1 ;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchMPSStateWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMPSStateIfNecessaryInLibrary:(id)arg1 ;
@end

