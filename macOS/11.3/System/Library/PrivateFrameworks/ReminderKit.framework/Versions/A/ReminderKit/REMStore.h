/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMChangeTrackingProvider.h>

@protocol REMDaemonController;
@class REMStoreContainerToken, _REMInProgressSaveRequestsContainer;

@interface REMStore : NSObject <REMChangeTrackingProvider> {

	char _assertOnMainThreadFetches;
	os_unfair_lock_s _lock;
	REMStoreContainerToken* _storeContainerToken;
	_REMInProgressSaveRequestsContainer* _l_inProgressSaveRequestsContainer;
	id<REMDaemonController> _daemonController;
	unsigned long long _mode;
	REMStore* _nonUserInteractiveStore;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;                                         //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
@property (nonatomic,readonly) _REMInProgressSaveRequestsContainer * l_inProgressSaveRequestsContainer;              //@synthesize l_inProgressSaveRequestsContainer=_l_inProgressSaveRequestsContainer - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                                                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<REMDaemonController> daemonController;                                               //@synthesize daemonController=_daemonController - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char assertOnMainThreadFetches;                                                         //@synthesize assertOnMainThreadFetches=_assertOnMainThreadFetches - In the implementation block
@property (nonatomic,retain) REMStore * nonUserInteractiveStore;                                                     //@synthesize nonUserInteractiveStore=_nonUserInteractiveStore - In the implementation block
+(void)initialize;
+(char)notificationsEnabled;
+(id)storeDidChangeNotificationName;
+(char)siriShouldRouteIntentsToNewRemindersApp;
+(id)createIsolatedStoreContainerWithError:(id*)arg1 ;
+(char)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id*)arg2 ;
+(char)_shouldNotifyReminddOfInteractionWithPeople;
+(void)notifyOfInteractionWithPeople:(id)arg1 ;
+(char)dataaccessDaemonStopSyncingReminders;
+(char)isEventKitSyncEnabledForReminderKit;
-(id)description;
-(id)debugDescription;
-(id)init;
-(os_unfair_lock_s)lock;
-(void)invalidate;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id<REMDaemonController>)daemonController;
-(void)setDaemonController:(id<REMDaemonController>)arg1 ;
-(id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(id)fetchAccountsWithError:(id*)arg1 ;
-(id)fetchListsForEventKitBridgingWithError:(id*)arg1 ;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(void)updateAccountWithAccountID:(id)arg1 restartDA:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(void)enumerateAllRemindersWithBlock:(/*^block*/id)arg1 ;
-(id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)fetchSiriFoundInAppsListWithError:(id*)arg1 ;
-(id)fetchReplicaManagerForAccountID:(id)arg1 error:(id*)arg2 ;
-(id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2 ;
-(REMStoreContainerToken *)storeContainerToken;
-(unsigned long long)storeGeneration;
-(_REMInProgressSaveRequestsContainer *)l_inProgressSaveRequestsContainer;
-(id)_withInProgressSaveRequestContainer:(/*^block*/id)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchSmartListWithSmartListType:(id)arg1 createIfNeeded:(char)arg2 error:(id*)arg3 ;
-(id)fetchSmartListWithSmartListType:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(char)arg3 error:(id*)arg4 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2 ;
-(id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_incrementStoreGeneration;
-(void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 smartListChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 synchronously:(char)arg7 syncToCloudKit:(char)arg8 performer:(id)arg9 completion:(/*^block*/id)arg10 ;
-(id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(char)assertOnMainThreadFetches;
-(char)_isUserInteractiveStore;
-(void)enumerateAllListsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateAllListsIncludingGroups:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(REMStore *)nonUserInteractiveStore;
-(id)initUserInteractive:(char)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(void)nukeDatabase;
-(id)fetchAccountsIncludingInactive:(char)arg1 error:(id*)arg2 ;
-(id)fetchAccountsForDumpingWithError:(id*)arg1 ;
-(id)refreshAccount:(id)arg1 ;
-(id)refreshList:(id)arg1 ;
-(id)refreshReminder:(id)arg1 ;
-(id)optimisticallyMaterializeReminderChangeItem:(id)arg1 ;
-(id)smartListWithSmartListType:(id)arg1 objectID:(id)arg2 error:(id*)arg3 ;
-(id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(char)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 smartListChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 error:(id*)arg8 ;
-(void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 smartListChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 queue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)resultFromPerformingInvocation:(id)arg1 error:(id*)arg2 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4 ;
-(void)enumerateAllGroupsAndListsWithBlock:(/*^block*/id)arg1 ;
-(id)fetchShareForListWithID:(id)arg1 error:(id*)arg2 ;
-(id)createShareForListWithID:(id)arg1 appIconData:(id)arg2 error:(id*)arg3 ;
-(void)updateShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)everConnectedToCar;
-(id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultAccountWithError:(id*)arg1 ;
-(void)setAssertOnMainThreadFetches:(char)arg1 ;
-(void)setNonUserInteractiveStore:(REMStore *)arg1 ;
-(void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 ;
-(id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1 ;
-(void)notifyOfInteractionWithPeople:(id)arg1 force:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id*)arg7 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)MCIsManagedAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAssignmentsWithObjectIDs:(id)arg1 includeLazyDeleteObjects:(char)arg2 error:(id*)arg3 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(char)arg2 discretionary:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateAccountsAndFetchMigrationState:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestToDeleteLocalDataWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(char)arg2 WithCompletion:(/*^block*/id)arg3 ;
-(void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1 ;
-(void)updateAccountsAndSync:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOrphanedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(id)replicaManagerProviderForCalDAVSync;
-(id)debugFetchPhantomListsWithError:(id*)arg1 ;
@end

