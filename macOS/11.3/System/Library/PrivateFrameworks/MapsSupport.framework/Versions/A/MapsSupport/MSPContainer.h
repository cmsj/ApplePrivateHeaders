/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerPersisterDelegate.h>

@protocol OS_dispatch_queue, MSPContainerStateSnapshot, NSObjectNSCopying;
@class NSObject, NSArray, NSHashTable, MSPContainerPersister, NSCountedSet, NSMutableSet, NSMutableArray, MSPQuerySource, NSString;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<MSPContainerStateSnapshot> _currentStateSnapshot;
	NSArray* _currentProcessedContents;
	NSHashTable* _observers;
	MSPContainerPersister* _persister;
	NSCountedSet* _editCoalescingContexts;
	char _isCommittingEnqueuedEdits;
	id<NSObject><NSCopying> _contextCoalescingFor;
	char _coalescedEditsNeedEntireContents;
	NSMutableSet* _coalescedPartialContentIdentifiersToFetch;
	NSMutableArray* _enqueuedCoalescingEditBarrierBlocks;
	NSMutableArray* _enqueuedCoalescingCompletionBlocks;
	char _hasScheduledDelayedCommitForCoalescedEdits;
	char _hasLoadedContents;
	char _preventsAssertionsForDuplicateStorageIdentifiers;
	char _simulatesClearingDiscardableDataAfterOperations;

}

@property (nonatomic,readonly) MSPQuerySource * entireContentsQuerySource; 
@property (nonatomic,readonly) MSPContainerPersister * persister;                                                                                                                                                   //@synthesize persister=_persister - In the implementation block
@property (getter=_accessQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) char _preventsAssertionsForDuplicateStorageIdentifiers;                                                                                                                              //@synthesize preventsAssertionsForDuplicateStorageIdentifiers=_preventsAssertionsForDuplicateStorageIdentifiers - In the implementation block
@property (assign,setter=_setSimulatesClearingDiscardableDataAfterOperations:,getter=_simulatesClearingDiscardableDataAfterOperations,nonatomic) char simulatesClearingDiscardableDataAfterOperations;              //@synthesize simulatesClearingDiscardableDataAfterOperations=_simulatesClearingDiscardableDataAfterOperations - In the implementation block
@property (nonatomic,readonly) char containerHasLoadedContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_disableLogging;
+(void)mutableObjectContentDidUpdate:(id)arg1 ;
+(void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(/*^block*/id)arg1 ;
+(void)clearDiscardableDataFromAllContainers;
+(char)_deletes:(unsigned long long)arg1 mayRepresentDataLossIfAppliedTo:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_accessQueue;
-(void)_forEachObserver:(/*^block*/id)arg1 ;
-(void)editByMergingStateSnapshot:(id)arg1 mergeOptions:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)accessStateSnapshotUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(void)accessContentsUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPersister:(id)arg1 ;
-(void)persisterContentsDidChangeExternally:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(MSPQuerySource *)entireContentsQuerySource;
-(void)eraseFromStorageTypes:(unsigned long long)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_clearObjectCacheIfNeeded;
-(void)_performInitialLoadNotifyingObservers:(char)arg1 kickOffSynchronously:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_processedContentsForPersisterContents:(id)arg1 ;
-(id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1 ;
-(char)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(/*^block*/id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)_simulatesClearingDiscardableDataAfterOperations;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_commitPendingCoalescedEditsIfAny;
-(id)beginCoalescingEditsWithContext:(id)arg1 ;
-(char)containerHasLoadedContents;
-(void)eraseWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_endCoalescingEditsForContext:(id)arg1 ;
-(void)coalesceEditsForContext:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(MSPContainerPersister *)persister;
-(char)_preventsAssertionsForDuplicateStorageIdentifiers;
-(void)_setSimulatesClearingDiscardableDataAfterOperations:(char)arg1 ;
@end

