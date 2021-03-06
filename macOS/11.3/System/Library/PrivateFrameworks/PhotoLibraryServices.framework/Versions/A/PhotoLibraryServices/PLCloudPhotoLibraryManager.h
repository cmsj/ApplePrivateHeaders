/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLCloudChangeTrackerDelegate.h>
#import <libobjc.A.dylib/PLCloudPersistentHistoryMigratorContext.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerCoordinatorDelegate.h>
#import <libobjc.A.dylib/CPLResourceProgressDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerDelegate.h>
#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>
#import <libobjc.A.dylib/PLCloudUserSessionHandling.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>

@protocol PLCloudChangeTracker, OS_dispatch_queue, OS_dispatch_source;
@class PLCloudBatchUploader, PLCloudBatchDownloader, NSObject, PLForegroundMonitor, CPLLibraryManager, CPLStatus, PLCloudTaskManager, PLLazyObject, PFCoalescer, PLCloudInMemoryTaskManager, PLCloudPhotoLibraryUploadTracker, NSMutableDictionary, NSMutableArray, PLBackgroundJobWorkerCoordinator, PLLibraryServicesManager, NSNumber, PLPhotoLibrary, PLPhotoLibraryPathManager, NSString;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling, CPLStatusDelegate> {

	PLCloudBatchUploader* _uploader;
	PLCloudBatchDownloader* _downloader;
	id<PLCloudChangeTracker> _changeTracker;
	char _wasRebuild;
	char _hasAttemptedMigration;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLForegroundMonitor* _foregroundMonitor;
	unsigned long long _mode;
	char _checkEnableStateOnIdle;
	char _icplEnabled;
	char _pushOnIdle;
	char _pullOnIdle;
	char _modeChangePending;
	char _hasSettledInitialBatch;
	CPLLibraryManager* _unsafe_cplLibrary;
	CPLStatus* _unsafe_cplStatus;
	int _pauseRequest;
	short _pauseReason;
	PLCloudTaskManager* _taskManager;
	PLLazyObject* _lazyResourceManager;
	PLLazyObject* _lazyRecoveryManager;
	NSObject*<OS_dispatch_source> _unpauseDispatchTimer;
	NSObject*<OS_dispatch_source> _userUnpauseDispatchTimer;
	long long _pendingResetSyncType;
	char _initializedMaster;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _uploadDownloadCountQueue;
	unsigned long long _boundForUploadingPhotos;
	unsigned long long _boundForUploadingVideos;
	unsigned long long _boundForUploadingOtherItems;
	NSObject*<OS_dispatch_source> _workInProgressTimer;
	char _significantWork;
	PLCloudInMemoryTaskManager* _inMemoryTaskManager;
	PLCloudPhotoLibraryUploadTracker* _uploadTracker;
	NSMutableDictionary* _placeholderAssetAvailabilityHandlers;
	os_unfair_lock_s _placeholderAssetAvailabilityHandlersLock;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PLLazyObject* _lazyCacheDeleteSupport;
	NSMutableArray* _pushAllChangesCompletionHandlers;
	PLBackgroundJobWorkerCoordinator* _backgroundJobWorkerCoordinator;
	char _pushingAllChanges;
	char _didCallBlocksWaitingForLibraryOpen;
	NSMutableArray* _blocksWaitingForLibraryOpen;
	os_unfair_lock_s _waitForLibraryOpenLock;
	os_unfair_lock_s _cplLibraryLock;
	char _willBecomeNonSPL;
	char _isHandlingStatusChangesNotification;
	unsigned long long _statusChangesNotificationGeneration;
	PLLibraryServicesManager* _libraryServicesManager;
	NSNumber* __numberOfPhotosToPush;
	NSNumber* __numberOfVideosToPush;
	NSNumber* __numberOfOtherItemsToPush;
	NSNumber* __numberOfPhotosDownloaded;
	NSNumber* __numberOfVideosDownloaded;
	NSNumber* __numberOfOtherItemsDownloaded;
	/*^block*/id __idleStateTransitionOneTimeAction;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (nonatomic,__weak,readonly) PLLibraryServicesManager * libraryServicesManager;                                     //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (setter=_setNumberOfPhotosToPush:,nonatomic,retain) NSNumber * _numberOfPhotosToPush;                              //@synthesize _numberOfPhotosToPush=__numberOfPhotosToPush - In the implementation block
@property (setter=_setNumberOfVideosToPush:,nonatomic,retain) NSNumber * _numberOfVideosToPush;                              //@synthesize _numberOfVideosToPush=__numberOfVideosToPush - In the implementation block
@property (setter=_setNumberOfOtherItemsToPush:,nonatomic,retain) NSNumber * _numberOfOtherItemsToPush;                      //@synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush - In the implementation block
@property (setter=_setNumberOfPhotosDownloaded:,nonatomic,retain) NSNumber * _numberOfPhotosDownloaded;                      //@synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded - In the implementation block
@property (setter=_setNumberOfVideosDownloaded:,nonatomic,retain) NSNumber * _numberOfVideosDownloaded;                      //@synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded - In the implementation block
@property (setter=_setNumberOfOtherItemsDownloaded:,nonatomic,retain) NSNumber * _numberOfOtherItemsDownloaded;              //@synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded - In the implementation block
@property (setter=_setIdleStateTransitionOneTimeAction:,nonatomic,copy) id _idleStateTransitionOneTimeAction;                //@synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) char cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) unsigned long long totalNumberOfUnpushedMasters; 
@property (nonatomic,readonly) unsigned long long totalNumberOfUploadedMasters; 
@property (nonatomic,readonly) unsigned long long totalSizeOfUnpushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalUploadedOriginalSize; 
@property (nonatomic,readonly) long long currentResetSyncType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(char)needResetSyncErrorType:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)sync;
-(void)_pause;
-(PLPhotoLibrary *)photoLibrary;
-(PLPhotoLibraryPathManager *)pathManager;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)registerPlaceholderAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)callPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(char)isCloudPhotoLibraryEnabled;
-(id)cplStatus;
-(void)fetchShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)resourceManager;
-(void)setLocalVersion:(id)arg1 ;
-(void)clearPrefetchState;
-(void)dumpStatusIncludingDaemon:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(char)arg3 highPriority:(char)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(/*^block*/id)arg7 progressBlock:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)getStreamingURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 intent:(unsigned long long)arg3 hints:(id)arg4 clientBundleID:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)downloadResource:(id)arg1 intent:(unsigned long long)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(char)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)cplLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(char)arg2 forBundleIdentifier:(id)arg3 ;
-(NSNumber *)_numberOfPhotosToPush;
-(NSNumber *)_numberOfVideosToPush;
-(NSNumber *)_numberOfOtherItemsToPush;
-(NSNumber *)_numberOfPhotosDownloaded;
-(NSNumber *)_numberOfVideosDownloaded;
-(NSNumber *)_numberOfOtherItemsDownloaded;
-(id)_idleStateTransitionOneTimeAction;
-(unsigned long long)totalNumberOfUnpushedMasters;
-(unsigned long long)totalNumberOfUploadedMasters;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(unsigned long long)totalUploadedOriginalSize;
-(long long)currentResetSyncType;
-(void)statusDidChange:(id)arg1 ;
-(void)endUserSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)libraryManagerHasStatusChanges:(id)arg1 ;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1 ;
-(void)setMigratedLocalVersion:(id)arg1 ;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;
-(void)saveTokenObject:(id)arg1 ;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2 ;
-(void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1 ;
-(id)readTokenObject;
-(id)_debugNameForMode:(unsigned long long)arg1 ;
-(void)invalidateResourceManager;
-(void)invalidateCacheDeleteSupport;
-(void)invalidateRecoveryManager;
-(void)setCPLLibrary:(id)arg1 ;
-(long long)sizeOfResourcesToUploadByCPL:(id*)arg1 ;
-(void)enableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_initCacheDeleteSupport;
-(id)cacheDeleteSupport;
-(void)_resetCacheDeleteSupport;
-(void)_initResourceManager;
-(void)_resetResourceManager;
-(void)_initRecoveryManager;
-(id)recoveryManager;
-(char)_hasItemToDownload;
-(void)_enableiCPL;
-(void)_openCPLLibrary;
-(void)_handleAccountFlagsChangeIfNecessary;
-(void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1 ;
-(void)_initializeMasterAndSizeCalculation;
-(void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
-(void)_runOneTimeMigrationStepsIfNecessary;
-(void)_createDeletionRecordsIfNecessary;
-(void)_migrateFromChangeHubToCoreDataIfNecessary;
-(void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1 ;
-(void)endsSignificantWork;
-(void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetCPLLibrary;
-(void)_doUnpause;
-(void)setPause:(char)arg1 reason:(short)arg2 ;
-(void)_unpause;
-(void)_doPause;
-(void)disableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
-(void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(char)arg1 ;
-(void)_handleModeTransistionAfterDisableiCPL;
-(void)_runSyncOnIsolationQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)_runOnLibraryOpenWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_callBlocksWaitingForLibraryOpen;
-(char)_canExternallyTransitionToNewLibraryModeIgnoringPause:(char)arg1 ;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(void)_stopUnpauseTimer;
-(id)_calculateUnpauseTimeForPauseTime:(id)arg1 ;
-(void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2 ;
-(char)_setupTimerForUnpause;
-(void)_updatePendingResetSyncDate;
-(void)reportMiscInformation:(id)arg1 ;
-(void)_reportOptimizeSettingChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleOptimizeSettingChange;
-(void)_handleOptimizeSettingChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_repushVideoAssetsMetadata;
-(void)_repushMasterWithMissingMediaMetadata;
-(void)_repushAssetsWithCreatorBundleIdentifier;
-(void)_clearPurgeableResourcesMatchingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_markPurgeableResourcesMatchingPredicate:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg1 checkServerIfNecessary:(char)arg2 urgency:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processNextTransaction;
-(void)_checkEnableState;
-(void)_setupPLCPLPlist;
-(void)_callPushAllChangesCompletionHandlersIfNecessary;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(char)connectToChangeTracker;
-(void)unregisterPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
-(char)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1 ;
-(void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchResourcesForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)downloadResource:(id)arg1 highPriority:(char)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(char)arg3 isPhoto:(char*)arg4 ;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doResetSync:(long long)arg1 ;
-(void)startAssetRecoveryWithTransaction:(id)arg1 ;
-(void)_fetchNewEventsFromChangeTracker;
-(id)fetchEventsFromChangeTracker;
-(char)isConnectedToChangeTracker;
-(void)_fixMasterStatusIn:(id)arg1 ;
-(void)_checkForPushedMasters;
-(void)_uploadFullPhotoLibraryToCloud;
-(void)uploadToCloudForEventsResult:(id)arg1 ;
-(void)_processUploadBatch;
-(void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(char)arg4 forTransaction:(id)arg5 ;
-(void)_finishUploadWithNoBatchesToUpload;
-(void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1 ;
-(id)lastKnownCloudVersionFromDisk;
-(void)startAutomaticPrefetchOrPrune;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)overrideSystemBudgetsForSyncSession:(char)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)_downloadFromCloud;
-(void)processDownloadBatchWithSession:(id)arg1 ;
-(void)_markResourceObjectIDsAsPurgeable:(id)arg1 urgency:(long long)arg2 ;
-(void)_getStatusChanges:(id)arg1 transaction:(id)arg2 notificationGeneration:(unsigned long long)arg3 ;
-(char)_isAssetsdNotReadyToAnswer;
-(void)_linkFileFrom:(id)arg1 to:(id)arg2 ;
-(CGSize)_targetSizeForInputSize:(CGSize)arg1 maxPixelSize:(unsigned long long)arg2 ;
-(void)_updateLocalStaleResourceWithCPLResource:(id)arg1 ;
-(void)_updateWithCPLResource:(id)arg1 isHighPriority:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1 ;
-(void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(char)_isPausedForDownloadRequestHighPriority:(char)arg1 ;
-(void)getCPLState:(/*^block*/id)arg1 ;
-(void)setCPLStatus:(id)arg1 ;
-(void)_updateTransferCounts;
-(unsigned long long)_inq_numberOfOtherItemsToUpload;
-(unsigned long long)_inq_numberOfPhotosToUpload;
-(unsigned long long)_inq_numberOfVideosToUpload;
-(unsigned long long)_inq_numberOfPhotosToDownload;
-(unsigned long long)_inq_numberOfVideosToDownload;
-(unsigned long long)_inq_numberOfOtherItemsToDownload;
-(void)_startWorkInProgressTimer;
-(void)_stopWorkInProgressTimer;
-(void)_checkForWorkInProgress;
-(char)_hasAvalancheIncomingWork;
-(char)_hasIncomingWorkFileMarker;
-(void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)publishCPLMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptCPLShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceSyncMomentSharesWithScopeIdentifiers:(id)arg1 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUUIDsForCloudIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setNumberOfPhotosToPush:(id)arg1 ;
-(void)_setNumberOfVideosToPush:(id)arg1 ;
-(void)_setNumberOfOtherItemsToPush:(id)arg1 ;
-(void)_setNumberOfPhotosDownloaded:(id)arg1 ;
-(void)_setNumberOfVideosDownloaded:(id)arg1 ;
-(void)_setNumberOfOtherItemsDownloaded:(id)arg1 ;
-(void)_setIdleStateTransitionOneTimeAction:(/*^block*/id)arg1 ;
@end

