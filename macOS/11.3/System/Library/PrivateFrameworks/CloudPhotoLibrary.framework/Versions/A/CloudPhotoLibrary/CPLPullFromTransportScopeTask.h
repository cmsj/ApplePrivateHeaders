/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGroup, CPLEngineTransportGetCurrentSyncAnchorTask;
@class NSObject, CPLEngineTransport, CPLScopeChange, NSData, CPLFeatureVersionHistory;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	CPLEngineTransport* _transport;
	id<CPLEngineTransportDownloadBatchTask> _downloadTask;
	id<CPLEngineTransportQueryTask> _queryTask;
	CPLScopeChange* _currentScopeChange;
	Class _currentQueryClass;
	char _ignoreNewBatches;
	char _useCourtesyMingling;
	unsigned long long _rewindFeatureVersion;
	NSData* _rewindSyncAnchor;
	CPLFeatureVersionHistory* _versionHistory;
	id<CPLEngineTransportGroup> _transportGroup;
	unsigned long long _totalAssetCountForScope;
	char _hasCachedTotalAssetCountForScope;
	long long _taskItem;
	char _hasFetchedInitialSyncAnchor;
	char _shouldStoreInitialSyncAnchor;
	NSData* _initialSyncAnchor;
	CPLScopeChange* _initialScopeChange;
	id<CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	char _didNotifySchedulerPullQueueIsFullOnce;
	char _needsToNotifySchedulerPullQueueIsFull;

}
-(void)cancel;
-(void)launch;
-(id)taskIdentifier;
-(char)checkScopeIsValidInTransaction:(id)arg1 ;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)_launch;
-(void)taskDidFinishWithError:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(unsigned long long)_totalAssetCountForScope;
-(void)_cancelAllTasks;
-(void)_extractAndMinglePersonsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_handleNewBatchFromChanges:(id)arg1 updatedFlags:(id)arg2 newSyncAnchor:(id)arg3 ;
-(void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg1 ;
-(void)_launchFetchChangesFromSyncAnchor:(id)arg1 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1 ;
-(void)_handleNewBatchFromQuery:(id)arg1 queryClass:(Class)arg2 newCursor:(id)arg3 ;
-(void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(char)arg1 ;
-(void)_fetchInitialSyncAnchor;
-(void)_checkServerFeatureVersionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

