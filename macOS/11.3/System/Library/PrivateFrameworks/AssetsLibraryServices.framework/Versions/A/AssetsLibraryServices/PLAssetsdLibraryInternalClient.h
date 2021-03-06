/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient
-(void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)repairMemoriesWithUUIDs:(id)arg1 error:(id*)arg2 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySearchIndexUpdates:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAssetCountsWithReply:(/*^block*/id)arg1 ;
-(void)getLibrarySizesFromDB:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)synchronouslyGetLibrarySizesFromDB:(char)arg1 sizes:(id*)arg2 error:(id*)arg3 ;
-(char)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long*)arg1 error:(id*)arg2 ;
-(void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadMomentGenerationOptions;
-(char)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id*)arg2 ;
-(void)getSearchIndexProgress:(/*^block*/id)arg1 ;
-(void)waitForSearchIndexExistence:(/*^block*/id)arg1 ;
-(char)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2 ;
-(char)invalidateReverseLocationDataOnAllAssetsWithError:(id*)arg1 ;
-(char)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)getBackgroundJobServiceStateWithError:(id*)arg1 ;
-(id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id*)arg1 ;
-(char)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id*)arg1 ;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)invalidateBehavioralScoreOnAllAssetsWithError:(id*)arg1 ;
-(void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(SCD_Struct_PL11)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

