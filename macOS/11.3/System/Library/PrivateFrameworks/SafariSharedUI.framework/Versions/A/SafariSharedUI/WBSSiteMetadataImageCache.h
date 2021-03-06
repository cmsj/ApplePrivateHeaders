/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;
#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableSet, WBSCacheRetainReleasePolicy, WBSCoalescedAsynchronousWriter, NSURL;

@interface WBSSiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	os_unfair_lock_s _cacheAccessLock;
	atomic<bool> _terminating;
	NSMutableDictionary* _imagesForKeyStrings;
	NSMutableSet* _missingImageKeyStrings;
	NSMutableDictionary* _keyStringRequestsToCompletionHandlers;
	WBSCacheRetainReleasePolicy* _cachePolicy;
	NSMutableDictionary* _cacheSettings;
	WBSCoalescedAsynchronousWriter* _cacheSettingsWriter;
	unsigned long long _fileProtectionOptions;
	NSURL* _imageDirectoryURL;
	long long _imageType;
	id<WBSSiteMetadataImageCacheDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL;                          //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (nonatomic,readonly) long long imageType;                                //@synthesize imageType=_imageType - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) char terminating; 
@property (__weak) id<WBSSiteMetadataImageCacheDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WBSSiteMetadataImageCacheDelegate>)delegate;
-(void)setDelegate:(id<WBSSiteMetadataImageCacheDelegate>)arg1 ;
-(long long)imageType;
-(void)emptyCache;
-(void)savePendingChangesBeforeTermination;
-(char)isTerminating;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 ;
-(void)setUpImageCache;
-(void)retainImageForKeyString:(id)arg1 ;
-(void)releaseImageForKeyString:(id)arg1 ;
-(void)purgeUnneededImages;
-(id)imageForKeyString:(id)arg1 getImageState:(long long*)arg2 ;
-(void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)imageDirectoryURL;
-(long long)imageStateForKeyString:(id)arg1 ;
-(void)retainImagesForKeyStrings:(id)arg1 ;
-(void)releaseImagesForKeyStrings:(id)arg1 ;
-(void)setImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(void)getImageForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_internalQueueName;
-(id)_diskAccessQueueName;
-(id)_cacheSettingsFileURL;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 fileProtectionOptions:(unsigned long long)arg3 ;
-(void)_internalReleaseImageForKeyString:(id)arg1 ;
-(void)_internalSetUpImageCache;
-(void)_notifyDidFinishLoadingSettings;
-(void)_internalPurgeUnneededImages;
-(id)_fileNameForKeyString:(id)arg1 ;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(void)_emptyCacheDirectory;
-(long long)_internalImageStateForKeyString:(id)arg1 ;
-(void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(char)_internalDidLoadImageAndShouldNotify:(id)arg1 forKeyString:(id)arg2 fromDisk:(char)arg3 ;
-(void)_requestImageForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(char)arg3 ;
-(void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_internalRemoveAllImages;
-(void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1 ;
-(void)setImage:(id)arg1 forKeyString:(id)arg2 ;
-(void)removeAllImages;
-(void)retainImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(char)isImageRetainedForKeyString:(id)arg1 ;
-(void)removeImagesFromCacheForKeyStrings:(id)arg1 ;
@end

