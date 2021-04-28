/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPDDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _preflightQueue;

}
+(void)initialize;
+(id)sharedInstance;
+(id)acquireDownloadSlotForItem:(id)arg1 ;
+(void)releaseDownloadSlot:(id)arg1 ;
-(id)init;
-(void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(/*^block*/id)arg3 itemProgressSetup:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 request:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)downloadItem:(id)arg1 recursively:(unsigned long long)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(/*^block*/id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)verifyIfSubtreeIsFullyMaterializedBelowItem:(id)arg1 downloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_recursivelyDownloadItem:(id)arg1 forceDiskIteration:(char)arg2 skipAlreadyDownloadedItems:(char)arg3 downloader:(id)arg4 request:(id)arg5 perItemCompletion:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)downloadItems:(id)arg1 recursively:(unsigned long long)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(/*^block*/id)arg5 withCompletion:(/*^block*/id)arg6 ;
@end
