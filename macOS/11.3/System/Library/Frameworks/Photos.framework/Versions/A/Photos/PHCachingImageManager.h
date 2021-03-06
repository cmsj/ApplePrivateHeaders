/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManager.h>
#import <libobjc.A.dylib/PHImageCacheDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, PHImageCache, NSObject, PHPhotoLibrary, NSString;

@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate> {

	NSMutableSet* _cachingRequestIDs;
	os_unfair_lock_s _cachingLock;
	PHImageCache* _imageCache;
	char _imageCacheCommitScheduled;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PHPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_source> _memoryEventSource;
	char _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) char allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_chooseImageTableFormatForPreheatingFromFormats:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 returnBestTableRegardlessOfFit:(char)arg4 ;
-(id)init;
-(void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2 ;
-(void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3 ;
-(id)_tableFormats;
-(id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)arg1 ;
-(void)_preheatImageTable:(id)arg1 forAssets:(id)arg2 ;
-(void)_handleMemoryWarning;
-(id)_cacheFailReasonFromInfo:(id)arg1 ;
-(char)_canPopulateCacheForResult:(id)arg1 ;
-(char)_cacheImageResult:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleCachingImageRequestResult:(id)arg1 request:(id)arg2 context:(id)arg3 ;
-(void)_commitCacheChanges;
-(void)_scheduleOrCommitCacheChangesIfNeeded;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(char*)arg3 didFindImage:(char*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(char)allowsCachingHighQualityImages;
-(void)setAllowsCachingHighQualityImages:(char)arg1 ;
@end

