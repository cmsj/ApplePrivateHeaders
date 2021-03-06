/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLBackgroundJobWorkerCoordinatorDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;

@interface PLBackgroundJobWorkerCoordinator : NSObject {

	NSArray* _workerClassesAsStrings;
	NSMutableArray* _pendingWorkers;
	PLBackgroundJobWorkerPriorityTuple* _currentWorker;
	os_unfair_lock_s _lock;
	id<PLBackgroundJobWorkerCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PLBackgroundJobWorkerCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PLBackgroundJobWorkerCoordinatorDelegate>)arg1 ;
-(void)submitBundleForProcessingOnAllWorkerPriorities:(id)arg1 ;
-(char)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)stopAllBackgorundJobs;
-(void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)initWithWorkerClassesAsStrings:(id)arg1 ;
-(id)_workersForBundle:(id)arg1 ;
-(void)_submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2 ignorePriority:(char)arg3 ;
-(void)_processNextWorker;
-(void)_handleAllWorkersCompleted;
@end

