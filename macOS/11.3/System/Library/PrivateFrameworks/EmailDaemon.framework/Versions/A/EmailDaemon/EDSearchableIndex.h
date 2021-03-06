/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>
#import <libobjc.A.dylib/EDSearchableIndexVerifierDataSource.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/EDSearchableIndexSchedulable.h>
#import <libobjc.A.dylib/EMSearchableIndexInterface.h>

@protocol EFAssertableScheduler, EFCancelable, OS_os_activity, EFSuspendableSchedulerEFAssertableScheduler, EDSearchableIndexDataSource, EDSearchableIndexReasonProvider, EDSearchableIndexSchedulableDelegate;
@class NSString, EFCancelationToken, EFStoppableScheduler, NSObject, NSMutableSet, NSMutableArray, _EMSearchableIndexPendingRemovals, EFLazyCache, CSSearchableIndex, EFFuture, EFObservable;

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface> {

	NSString* _indexName;
	EFCancelationToken* _cancelationToken;
	EFStoppableScheduler*<EFAssertableScheduler> _stateTransitionScheduler;
	id<EFCancelable> _coalescingTimer;
	long long _resumeCount;
	long long _transaction;
	unsigned long long _throttledIndexingBatchSize;
	unsigned long long _throttledDataSourceBatchSize;
	unsigned long long _currentMaximumBatchSize;
	NSObject*<OS_os_activity> _batchIndexingActivity;
	NSMutableSet* _removedIdentifiers;
	NSMutableArray* _preparingItems;
	NSMutableArray* _pendingItems;
	NSMutableArray* _preprocessingItems;
	NSMutableArray* _processingItems;
	NSMutableSet* _pendingDomainRemovals;
	_EMSearchableIndexPendingRemovals* _pendingIdentifierRemovals;
	EFStoppableScheduler*<EFSuspendableScheduler>*<EFAssertableScheduler> _indexingScheduler;
	EFStoppableScheduler* _dataSourceScheduler;
	EFStoppableScheduler* _addIndexItemsScheduler;
	EFStoppableScheduler* _preprocessingScheduler;
	os_unfair_lock_s _mainThreadAccessibleIvarLock;
	EFStoppableScheduler* _indexingBatchScheduler;
	EFLazyCache* _searchResultsCache;
	char _isActive;
	char _needsRefresh;
	char _needsVerification;
	char _coalesceTimerFired;
	char _scheduledProcessing;
	char _scheduledRefresh;
	char _scheduledVerification;
	char _indexImmediately;
	Aq _countOfBlocksAffectingDataSourceAndIndex;
	char _dataSourceIndexingPermitted;
	char _persistenceAvailable;
	char _skipIndexExclusionCheck;
	char _clientStateFetched;
	char _enableSpotlightVerification;
	id<EDSearchableIndexDataSource> _dataSource;
	id<EDSearchableIndexReasonProvider> _reasonProvider;
	id<EDSearchableIndexSchedulableDelegate> _schedulableDelegate;
	CSSearchableIndex* _csIndex;
	NSString* _searchableIndexBundleID;
	double _coalescingDelaySeconds;
	double _dataSourceUpdateTimeLimit;
	EFFuture* _delayDataSourceAssignmentFuture;

}

@property (getter=_transaction,readonly) long long transaction; 
@property (nonatomic,retain) CSSearchableIndex * csIndex;                                                                              //@synthesize csIndex=_csIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * copyDiagnosticInformation; 
@property (assign,nonatomic) char skipIndexExclusionCheck;                                                                             //@synthesize skipIndexExclusionCheck=_skipIndexExclusionCheck - In the implementation block
@property (assign,nonatomic) char clientStateFetched;                                                                                  //@synthesize clientStateFetched=_clientStateFetched - In the implementation block
@property (assign,nonatomic) char enableSpotlightVerification;                                                                         //@synthesize enableSpotlightVerification=_enableSpotlightVerification - In the implementation block
@property (nonatomic,copy) NSString * searchableIndexBundleID;                                                                         //@synthesize searchableIndexBundleID=_searchableIndexBundleID - In the implementation block
@property (assign,nonatomic) double coalescingDelaySeconds;                                                                            //@synthesize coalescingDelaySeconds=_coalescingDelaySeconds - In the implementation block
@property (assign,nonatomic) double dataSourceUpdateTimeLimit;                                                                         //@synthesize dataSourceUpdateTimeLimit=_dataSourceUpdateTimeLimit - In the implementation block
@property (readonly) long long resumeCount; 
@property (getter=isActive,readonly) char active; 
@property (nonatomic,retain) EFFuture * delayDataSourceAssignmentFuture;                                                               //@synthesize delayDataSourceAssignmentFuture=_delayDataSourceAssignmentFuture - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (assign,nonatomic,__weak) id<EDSearchableIndexDataSource> dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexReasonProvider> reasonProvider;                                                //@synthesize reasonProvider=_reasonProvider - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexSchedulableDelegate> schedulableDelegate;                                      //@synthesize schedulableDelegate=_schedulableDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@property (getter=isPerformingBlockAffectingDataSourceAndIndex,readonly) char performingBlockAffectingDataSourceAndIndex; 
@property (getter=isPersistenceAvailable) char persistenceAvailable;                                                                   //@synthesize persistenceAvailable=_persistenceAvailable - In the implementation block
@property (nonatomic,readonly) EFObservable * powerObservable; 
@property (getter=isPluggedIn,nonatomic,readonly) char pluggedIn; 
@property (nonatomic,readonly) char shouldCancelSearchQuery; 
@property (nonatomic,readonly) char canIndexAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) char dataSourceIndexingPermitted;                                    //@synthesize dataSourceIndexingPermitted=_dataSourceIndexingPermitted - In the implementation block
+(id)log;
+(id)signpostLog;
+(id)userHandle;
+(id)_localClientStateURL;
+(id)_localClientState;
+(void)_saveLocalClientState:(id)arg1 ;
+(char)isIncrementalIndexingType:(long long)arg1 ;
+(char)isValidTransaction:(long long)arg1 ;
-(void)dealloc;
-(void)_suspend;
-(void)_resume;
-(void)resume;
-(char)isActive;
-(void)suspend;
-(void)_invalidateCache;
-(void)removeAllItems;
-(long long)_transaction;
-(id<EDSearchableIndexDataSource>)dataSource;
-(void)setDataSource:(id<EDSearchableIndexDataSource>)arg1 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(unsigned long long)signpostID;
-(char)isPluggedIn;
-(void)refresh;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(void)setForeground:(char)arg1 ;
-(void)setPersistenceAvailable:(char)arg1 ;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)applicationWillSuspend;
-(NSString *)indexName;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;
-(void)applicationWillResume;
-(id)messageIDsMatchingQuery:(id)arg1 ;
-(void)_suspendIndexingScheduler;
-(id)purgeReasons;
-(id)exclusionReasons;
-(EFObservable *)powerObservable;
-(void)_powerStateChanged;
-(void)_registerDistantFutureSpotlightVerification;
-(NSString *)searchableIndexBundleID;
-(id<EDSearchableIndexSchedulableDelegate>)schedulableDelegate;
-(void)_queueRefresh;
-(void)_queueTransitionActive:(char)arg1 fromRefresh:(char)arg2 ;
-(void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearOrphanedSearchableMessagesFromDatabase;
-(void)_dataSourceScheduleWork:(/*^block*/id)arg1 ;
-(void)_handleFailingTransactionIDs:(id)arg1 ;
-(void)_scheduleSpotlightVerification;
-(void)_processSpotlightVerificationWithCompletion:(/*^block*/id)arg1 ;
-(void)_transitionWithBudgetTimeUsed:(double)arg1 ;
-(char)enableSpotlightVerification;
-(void)_verifySpotlightIndex;
-(void)_invalidateItemsInTransactions:(id)arg1 ;
-(CSSearchableIndex *)csIndex;
-(void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_countOfItemsInPendingQueues;
-(id)_eventDataForTransitionState:(id)arg1 ;
-(EFFuture *)delayDataSourceAssignmentFuture;
-(void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)isPerformingBlockAffectingDataSourceAndIndex;
-(double)dataSourceUpdateTimeLimit;
-(id)dataSourceRefreshReasons;
-(void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 fromRefresh:(char)arg3 ;
-(void)_indexItems:(id)arg1 fromRefresh:(char)arg2 immediately:(char)arg3 ;
-(void)removeItemsForDomainIdentifier:(id)arg1 ;
-(void)_resumeIndexingScheduler;
-(char)isDataSourceIndexingPermitted;
-(double)_throttleRequestedSize:(unsigned long long*)arg1 targetTime:(double)arg2 action:(/*^block*/id)arg3 ;
-(void)_queueConsumeBudgetElapsedPeriod:(double)arg1 ;
-(id)_pendingIdentifiers;
-(void)_coalescingTimerFired;
-(void)_fetchLastClientState;
-(void)_stopCoalescingTimer;
-(void)_scheduleProcessPendingItemsFromRefresh:(char)arg1 ;
-(void)_startCoalescingTimer;
-(char)_queueContentsAllowsRefresh;
-(void)_scheduleDataSourceRefresh;
-(void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg1 ;
-(id)_consumeBatchOfSize:(unsigned long long)arg1 ;
-(void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2 ;
-(long long)_nextTransaction;
-(id)_identifiersStringForItems:(id)arg1 maxLength:(unsigned long long)arg2 ;
-(id)_processDomainRemovals:(id)arg1 ;
-(void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(unsigned long long)arg1 ;
-(char)_processIndexingBatch:(id)arg1 clientState:(id)arg2 itemsNotIndexed:(id)arg3 ;
-(void)_processIdentifierRemovals:(id)arg1 ;
-(void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(unsigned long long)arg1 ;
-(void)_noteNeedsLastClientStateFetch;
-(char)canIndexAttachments;
-(void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg1 ;
-(void)_processRefreshRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)beginUpdatesAffectingDataSourceAndIndex;
-(void)endUpdatesAffectingDataSourceAndIndex;
-(id)_identifiersForItems:(id)arg1 ;
-(char)skipIndexExclusionCheck;
-(void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dataSourceVerifyRepresentativeSampleWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reindexAllItemsWithOptions:(unsigned long long)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)indexItems:(id)arg1 immediately:(char)arg2 ;
-(void)indexItems:(id)arg1 fromRefresh:(char)arg2 immediately:(char)arg3 ;
-(void)_doIndexItems:(id)arg1 fromRefresh:(char)arg2 immediately:(char)arg3 ;
-(void)_dataSourcePrepareToIndexItems:(id)arg1 fromRefresh:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(char)_preprocessItemIfNecessary:(id)arg1 fromRefresh:(char)arg2 ;
-(void)_queueConsumeBudgetItemCount:(unsigned long long)arg1 ;
-(id)currentReasons;
-(void)removeAllItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(void)addSearchQueryCancelable:(id)arg1 ;
-(void)removeSearchQueryCancelable:(id)arg1 ;
-(char)shouldCancelSearchQuery;
-(id<EDSearchableIndexReasonProvider>)reasonProvider;
-(id)bundleIdentifierForSearchableIndexVerifier:(id)arg1 ;
-(id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2 count:(unsigned long long)arg3 lastVerifiedMessageID:(long long)arg4 ;
-(id)searchableIndexForSearchableIndexVerifier:(id)arg1 ;
-(void)setDataSourceIndexingPermitted:(char)arg1 ;
-(unsigned long long)pendingIndexItemsCount;
-(id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3 ;
-(NSString *)copyDiagnosticInformation;
-(char)isPersistenceAvailable;
-(long long)resumeCount;
-(void)performBlockAffectingDataSourceAndIndex:(/*^block*/id)arg1 ;
-(id)issueDiagnosticsRequestForMessageRowId:(id)arg1 ;
-(id)indexedEmptySubjectIdentifers;
-(void)indexItems:(id)arg1 ;
-(id)identifiersMatchingCriterion:(id)arg1 ;
-(void)removeMessages:(id)arg1 ;
-(void)indexAttachmentsForMessageWithIdentifier:(id)arg1 ;
-(void)indexMessages:(id)arg1 includeBody:(char)arg2 indexingType:(long long)arg3 ;
-(void)markMessagesAsPrinted:(id)arg1 ;
-(void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(void)setReasonProvider:(id<EDSearchableIndexReasonProvider>)arg1 ;
-(void)setSchedulableDelegate:(id<EDSearchableIndexSchedulableDelegate>)arg1 ;
-(void)setCsIndex:(CSSearchableIndex *)arg1 ;
-(void)setSkipIndexExclusionCheck:(char)arg1 ;
-(char)clientStateFetched;
-(void)setClientStateFetched:(char)arg1 ;
-(void)setEnableSpotlightVerification:(char)arg1 ;
-(void)setSearchableIndexBundleID:(NSString *)arg1 ;
-(double)coalescingDelaySeconds;
-(void)setCoalescingDelaySeconds:(double)arg1 ;
-(void)setDataSourceUpdateTimeLimit:(double)arg1 ;
-(void)setDelayDataSourceAssignmentFuture:(EFFuture *)arg1 ;
@end

