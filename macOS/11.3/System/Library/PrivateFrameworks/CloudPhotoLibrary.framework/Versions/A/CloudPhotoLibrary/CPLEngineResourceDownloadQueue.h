/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate, CPLPlatformObject, NSString;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _downloadLock;
	NSArray* _allQueues;
	NSArray* _allHighPriorityQueues;
	NSArray* _allLowPriorityQueues;
	NSArray* _bestCancellableLowPriorityQueues;
	/*^block*/id _highPriorityQueuePerResourceTypeAndTransferIntent;
	/*^block*/id _lowPriorityQueuePerResourceTypeAndTransferIntent;
	unsigned long long _inflightTransferTasksCount;
	unsigned long long _transferTasksBurstCount;
	unsigned long long _lastTransferTasksBurstCount;
	NSDate* _lastTransferTaskBurstDate;
	char _shouldRequestABackgroundDownloadSyncPhase;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldRetryDownloadOnError:(id)arg1 ;
-(id)status;
-(void)barrier;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(char)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)cloudResourceForLocalResource:(id*)arg1 shouldNotTrustCaches:(char*)arg2 transportScope:(id*)arg3 error:(id*)arg4 ;
-(id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 intent:(unsigned long long)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 intent:(unsigned long long)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_failedTaskWithCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 resource:(id)arg3 taskIdentifier:(id)arg4 intent:(unsigned long long)arg5 ;
-(id)_resourceStorageCopyTaskForResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 didStartHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_realDownloadTaskForLocalResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 didStartHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(char)_shouldTryLowPriorityDownloadWithError:(id*)arg1 ;
-(unsigned long long)_transportTaskCount;
-(id)_bestLowPriorityQueueWithCancellableTransportTasks;
-(char)_canScheduleBackgroundDownloads;
-(char)_launchTransportTaskForQueue:(id)arg1 ;
-(void)_dispatchTransportTasksIfNecessary;
-(id)_activeQueueForTransferTask:(id)arg1 ;
-(id)createGroupForBackgroundDownloadsOfResourceType:(unsigned long long)arg1 transferIntent:(unsigned long long)arg2 transport:(id)arg3 ;
-(void)_enqueueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_dequeueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_scheduleBackgroundDownloadsIfNecessary;
-(void)_requestBackgroundDownloads;
-(void)_unscheduleBackgroundDownloads;
-(char)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(char)arg3 error:(id*)arg4 ;
-(char)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(char)arg2 didDiscard:(char*)arg3 error:(id*)arg4 ;
-(char)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id*)arg2 ;
-(char)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id*)arg2 ;
-(id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(char)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(char)hasActiveOrQueuedBackgroundDownloadOperations;
-(id)_queuesStatus;
@end
