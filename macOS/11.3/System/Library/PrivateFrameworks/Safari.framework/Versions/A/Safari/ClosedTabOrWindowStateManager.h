/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/ClosedTabOrWindowMenuBuilderMenuActionTarget.h>

@protocol OS_dispatch_queue, TabSnapshotSensitiveDataPurging, EncryptionProvider;
@class NSMutableArray, WBSCoalescedAsynchronousWriter, NSObject, NSMutableDictionary, NSString;

@interface ClosedTabOrWindowStateManager : NSObject <ClosedTabOrWindowMenuBuilderMenuActionTarget> {

	NSMutableArray* _closedTabOrWindowPersistentStates;
	WBSCoalescedAsynchronousWriter* _recentlyClosedTabsOrWindowsWriter;
	NSObject*<OS_dispatch_queue> _loadClosedTabsDataFromDiskSynchronizationQueue;
	atomic<LoadingStatus> _savedStateLoadingStatus;
	NSMutableDictionary* _closingWindowUUIDsToClosedTabStateArrays;
	id<TabSnapshotSensitiveDataPurging> _purger;
	id<EncryptionProvider> _encryptionProvider;
	unsigned long long _numberOfSavedTabStates;

}

@property (assign) unsigned long long numberOfSavedTabStates;              //@synthesize numberOfSavedTabStates=_numberOfSavedTabStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id)_dictionaryRepresentation;
-(void)clearStates;
-(void)savePendingChangesBeforeTermination;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)performDelayedLaunchOperations;
-(id)closedStates;
-(id)initWithTabSnapshotSensitiveDataPurger:(id)arg1 encryptionProvider:(id)arg2 ;
-(char)containsAnySavedState;
-(void)didReopenAllWindowsInSession:(id)arg1 ;
-(void)reopenLastClosedTabOrWindow;
-(void)closeTabGroupWhileRedoing:(id)arg1 inWindow:(id)arg2 ;
-(void)windowDidRestoreReplacedTabGroup:(id)arg1 ;
-(void)registerClosedState:(id)arg1 ;
-(void)beginClosingBrowserWindowController:(id)arg1 ;
-(void)endClosingBrowserWindowController:(id)arg1 ;
-(void)cancelClosingBrowserWindowController:(id)arg1 ;
-(void)undoClosedTabWithUUID:(id)arg1 inWindowWithUUID:(id)arg2 ;
-(void)undoCloseTabGroupWithUUID:(id)arg1 ;
-(void)closeTabWithoutConfirmingWithUUID:(id)arg1 inWindow:(id)arg2 ;
-(void)clearStatesAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(id)arg1 ;
-(void)reopenWindowFromPersistentState:(id)arg1 ;
-(void)reopenTabGroupFromPersistentState:(id)arg1 ;
-(void)reopenTabFromPersistentStateIntoActiveWindow:(id)arg1 ;
-(void)_removeAllState;
-(void)_loadRecentlyClosedTabsOrWindowsFromDisk;
-(void)_waitUntilStateHasLoadedFromDisk;
-(void)_removeState:(id)arg1 ;
-(void)_restoreTabWithState:(id)arg1 placement:(long long)arg2 ;
-(void)_restoreWindowWithState:(id)arg1 ;
-(void)_didReopenTabOrWindow;
-(void)_didReopenTabOrWindowFromPersistedState;
-(void)_removeTabPersistentState:(id)arg1 ;
-(id)_destinationBrowserWindowControllerToRestoreTabState;
-(void)_restoreTabWithState:(id)arg1 atIndex:(unsigned long long)arg2 inWindowWithUUID:(id)arg3 ;
-(void)_didUndoTabOrTabGroupClose;
-(void)_performInternalBookkeepingWithAddedState:(id)arg1 ;
-(void)_pruneSavedStates;
-(void)_recentlyClosedTabsOrWindowsStateDidChange;
-(char)_registerTabStateForWindowIfNeeded:(id)arg1 ;
-(void)_updateNumberOfSavedTabStatesWithRemovedState:(id)arg1 ;
-(unsigned long long)_maximumNumberOfTabStatesToPersist;
-(void)_invalidateUndoClosedTabForAllWindows;
-(void)_removeStatesInArray:(id)arg1 ;
-(id)_recentlyClosedTabsOrWindowsFileURL;
-(void)_performInternalBookkeepingWithAddedStates:(id)arg1 ;
-(id)_closedStatesToPersist;
-(long long)typeOfLastClosedTabOrWindowState;
-(unsigned long long)numberOfSavedTabStates;
-(void)setNumberOfSavedTabStates:(unsigned long long)arg1 ;
@end

