/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
-(void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

