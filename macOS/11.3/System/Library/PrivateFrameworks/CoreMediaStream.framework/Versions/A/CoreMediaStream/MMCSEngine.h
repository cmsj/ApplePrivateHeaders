/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MMCSEngineDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSURL, NSString, NSDictionary, NSMutableDictionary, NSObject, NSMutableArray, NSThread, NSTimer;

@interface MMCSEngine : NSObject {

	NSURL* _workPathURL;
	NSString* _appIDHeader;
	NSString* _dataClass;
	NSDictionary* _options;
	mmcs_engineRef _engine;
	SCD_Struct_MM15* _engineClientContext;
	NSMutableDictionary* _itemIDToAssetMap;
	NSObject*<OS_dispatch_queue> _itemIDToAssetMapQueue;
	NSMutableArray* _requestorContexts;
	NSObject*<OS_dispatch_queue> _reqestorContextQueue;
	NSMutableDictionary* _autoItemIDDictionary;
	NSURL* _autoItemIDPersistenceURL;
	NSObject*<OS_dispatch_queue> _autoItemIDDictionaryQueue;
	char _autoGenerateItemID;
	char _isMetricsGatheringEnabled;
	char _isDone;
	id<MMCSEngineDelegate> _delegate;
	NSThread* _workThread;
	NSTimer* _threadKeepAliveTimer;

}

@property (nonatomic,retain) NSTimer * threadKeepAliveTimer;                      //@synthesize threadKeepAliveTimer=_threadKeepAliveTimer - In the implementation block
@property (assign,nonatomic) char isDone;                                         //@synthesize isDone=_isDone - In the implementation block
@property (assign,nonatomic,__weak) id<MMCSEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasOutstandingActivity; 
@property (assign,nonatomic) char autoGenerateItemID;                             //@synthesize autoGenerateItemID=_autoGenerateItemID - In the implementation block
@property (assign,nonatomic) char isMetricsGatheringEnabled;                      //@synthesize isMetricsGatheringEnabled=_isMetricsGatheringEnabled - In the implementation block
@property (nonatomic,retain) NSThread * workThread;                               //@synthesize workThread=_workThread - In the implementation block
+(id)logStringForPutItemState:(int)arg1 ;
+(id)logStringForGetItemState:(int)arg1 ;
-(id<MMCSEngineDelegate>)delegate;
-(void)setDelegate:(id<MMCSEngineDelegate>)arg1 ;
-(char)isActive;
-(void)cancelAllOperations;
-(void)performBlock:(/*^block*/id)arg1 ;
-(char)isDone;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(char)hasOutstandingActivity;
-(void)_registerAsset:(id)arg1 ;
-(id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5 ;
-(id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 ;
-(void)performBlockOnWorkThread:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)performBlockOnWorkThread:(/*^block*/id)arg1 ;
-(void)_doNothingTimerHandler:(id)arg1 ;
-(void)threadMain:(id)arg1 ;
-(void)setIsMetricsGatheringEnabled:(char)arg1 ;
-(char)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int*)arg2 outItemType:(id*)arg3 outError:(id*)arg4 ;
-(void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5 ;
-(void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4 ;
-(void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5 ;
-(void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)_requestCompletedRequestorContext:(id)arg1 ;
-(void)cancelOperationsWithContext:(id)arg1 ;
-(void)registerAssetForUpload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reregisterAssetForUpload:(id)arg1 ;
-(void)reregisterAssetForDownload:(id)arg1 ;
-(void)registerAssets:(id)arg1 forDownloadCompletionBlock:(/*^block*/id)arg2 ;
-(void)unregisterAsset:(id)arg1 ;
-(void)unregisterAssets:(id)arg1 ;
-(void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4 ;
-(void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4 ;
-(id)_assetWithItemID:(unsigned long long)arg1 ;
-(void)_removeAssetForItemID:(unsigned long long)arg1 ;
-(void)_registerRequestorContext:(id)arg1 ;
-(void)_removeRequestorContext:(id)arg1 ;
-(void)_initItemIDPersistence;
-(unsigned long long)_nextItemID;
-(char)autoGenerateItemID;
-(void)setAutoGenerateItemID:(char)arg1 ;
-(char)isMetricsGatheringEnabled;
-(NSThread *)workThread;
-(void)setWorkThread:(NSThread *)arg1 ;
-(NSTimer *)threadKeepAliveTimer;
-(void)setThreadKeepAliveTimer:(NSTimer *)arg1 ;
-(void)setIsDone:(char)arg1 ;
@end

