/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, BridgeOSInstallDownloader, SUCoreLog, NSObject;

@interface SUMacControllerBridgeOSManager : NSObject {

	NSString* _uuid;
	BridgeOSInstallDownloader* _downloader;
	SUCoreLog* _logger;
	NSObject*<OS_dispatch_queue> _operationQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,retain,readonly) SUCoreLog * logger;                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) BridgeOSInstallDownloader * downloader;                    //@synthesize downloader=_downloader - In the implementation block
+(id)_defaultDownloadDirectory;
+(void)cleanupDefaultDownloadPath;
-(void)_callDownloadProgressBlock:(/*^block*/id)arg1 withProgress:(id)arg2 ;
-(id)_ensureDownloadDirectoryWithOverrides:(id)arg1 error:(id*)arg2 ;
-(void)locateAvailableBridgeOSUpdateForSUDescriptor:(id)arg1 withOverrides:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_callScanCompletion:(/*^block*/id)arg1 performUpdate:(char)arg2 version:(id)arg3 downloadSizeBytes:(id)arg4 withError:(id)arg5 ;
-(void)_updateDownloaderCatalogURLWithOverrides:(id)arg1 ;
-(void)_updateDownloaderAuxInfoWithDescriptor:(id)arg1 ;
-(void)_callDownloadCompletion:(/*^block*/id)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)downloadBridgeOSProductForSUDescriptor:(id)arg1 withOverrides:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(NSString *)uuid;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(SUCoreLog *)logger;
-(id)initWithUUID:(id)arg1 ;
-(id)summary;
-(BridgeOSInstallDownloader *)downloader;
@end

