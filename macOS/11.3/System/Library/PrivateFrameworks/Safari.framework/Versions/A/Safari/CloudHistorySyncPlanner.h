/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCloudHistoryServiceProtocol;
#import <Safari/Safari-Structs.h>
@class NSTimer;

@interface CloudHistorySyncPlanner : NSObject {

	id<WBSCloudHistoryServiceProtocol> _cloudHistory;
	char _isCloudHistoryEnabled;
	BOOL _isMonitoringForTriggersAndSyncAttemptNotifications;
	NSTimer* _historyItemsAddedOrChangedIdleTimer;
	NSTimer* _historyItemsRemovedIdleTimer;
	BOOL _ignoresDisplaysDidSleepNotification;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>>* _pendingCloudOperationSuddenTerminationDisabler;
	NSTimer* _saveChangesBeforeTerminationTimeoutTimer;

}

@property (getter=isCloudHistoryEnabled,nonatomic,readonly) char cloudHistoryEnabled; 
+(id)sharedPlanner;
-(id)init;
-(void)_sync;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(char)isCloudHistoryEnabled;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(char)shouldDeferTerminationToSaveChangesToCloud;
-(void)savePendingChangesToCloudAndTerminate;
-(void)stopTryingToDownloadRemoteConfiguration;
-(void)syncOnAppStartup;
-(void)_safariSyncStatusMayHaveChanged:(id)arg1 ;
-(void)_resetCloudHistoryIfNecessary;
-(char)_syncOnAppStartupIfReady;
-(void)_cloudHistoryConfigurationDidFullyConfigure:(id)arg1 ;
-(void)_saveChanges;
-(void)_startMonitoringForTriggersAndSyncAttemptNotifications;
-(void)_stopMonitoringForTriggersAndSyncAttemptNotifications;
-(void)_historyItemsWereAddedOrChanged:(id)arg1 ;
-(void)_systemWillSleep:(id)arg1 ;
-(void)_displaysDidSleep:(id)arg1 ;
-(void)_displaysDidWake:(id)arg1 ;
-(void)_invalidateHistoryTimers;
-(void)_cloudHistorySaveAttemptDidComplete:(id)arg1 ;
-(char)_isDeferringTerminationToSaveChanges;
-(void)_saveAttemptDuringTerminationDidFinish;
-(void)_historyItemsWereAddedOrChangedTimerFired:(id)arg1 ;
-(void)_fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_historyItemsWereRemovedTimerFired:(id)arg1 ;
-(void)_saveChangesBeforeTerminationTimerFired:(id)arg1 ;
-(void)syncForDebugPurposesBypassingThrottler:(char)arg1 ;
@end

