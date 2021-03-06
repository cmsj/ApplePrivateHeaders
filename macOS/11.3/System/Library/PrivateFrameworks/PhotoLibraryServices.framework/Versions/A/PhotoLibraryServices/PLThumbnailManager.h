/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSMutableSet, NSMutableArray, NSLock, NSArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {

	NSMutableSet* _previouslyRequestedThumbnailFixOIDs;
	NSMutableSet* _requestedThumbnailFixAssets;
	NSMutableArray* _alreadyFailedAssetObjectIDsForRebuild;
	NSLock* _fixLock;
	char _shouldRebuildThumbnails;
	char _didCheckShouldRebuildThumbnails;
	char _hasExceededThumbnailRebuildRequestLimit;
	char _isRebuildingThumbnails;
	id _observerToken;
	NSArray* _slowPersistenceManagers;

}

@property (nonatomic,retain) id observerToken;                               //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSArray * slowPersistenceManagers;              //@synthesize slowPersistenceManagers=_slowPersistenceManagers - In the implementation block
+(id)supportedThumbnailFormats;
-(void)dealloc;
-(id)imageTableForFormat:(unsigned short)arg1 ;
-(id)thumbnailJPEGPathForPhoto:(id)arg1 ;
-(char)setThumbnailsForThumbIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 assetUUID:(id)arg3 kind:(short)arg4 extension:(id)arg5 withImage:(id)arg6 ;
-(void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2 ;
-(id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(char)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9 ;
-(id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(char)hasRebuildThumbnailsRequest;
-(long long)_diskFootprintOfTableThumbnailTables;
-(void)removeObsoleteMetadata;
-(id)observerToken;
-(NSArray *)slowPersistenceManagers;
-(id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2 ;
-(id)thumbnailRebuildIndicatorPath;
-(char)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4 ;
-(int)_configurationThumbnailVersion;
-(unsigned short)_configurationThumbnailFormat;
-(char)hasDeprecationsOnly;
-(char)hasThumbnailVersionMismatch;
-(char)isMissingThumbnailTables;
-(void)removeThumbnailTablesUnsupportedOnly:(char)arg1 ;
-(void)_removeMasterThumbDirectories;
-(char)resetThumbnailsWithModelMigrator:(id)arg1 ;
-(char)resetThumbnailsWithModelMigrator:(id)arg1 forced:(char)arg2 ;
-(void)addRebuildThumbnailsRequest;
-(void)removeRebuildThumbnailsRequest:(const char*)arg1 ;
-(void)_recordRebuildThumbnailsAttempt;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(id)_missingThumbnailPredicate;
-(long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id*)arg3 ;
-(char)hasMissingThumbnailsInLibrary:(id)arg1 ;
-(id)_rebuildThumbnailsQueue;
-(void)rebuildAllMissingThumbnailsInLibrary:(id)arg1 ;
-(char)isRebuildingThumbnails;
-(char)hasExceededRebuildThumbnailRequestLimit;
-(void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1 ;
-(id)_allPossibleThumbnailFormatIDs;
-(CGImageRef)newImageForAsset:(id)arg1 format:(id)arg2 ;
-(void)discardCachedThumbnailDownscalerContexts;
-(char)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(char)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2 ;
-(id)_tableDescriptions;
-(id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(unsigned short*)arg9 ;
-(unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1 ;
-(id)thumbManagerForFormatID:(unsigned short)arg1 ;
-(void)setObserverToken:(id)arg1 ;
-(void)setSlowPersistenceManagers:(NSArray *)arg1 ;
@end

