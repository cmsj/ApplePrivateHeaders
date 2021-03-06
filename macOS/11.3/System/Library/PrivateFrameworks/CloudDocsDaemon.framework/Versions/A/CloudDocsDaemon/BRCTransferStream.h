/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCLifeCycle.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_workloop, OS_dispatch_group;
@class BRCAccountSession, BRCSyncContext, NSMutableDictionary, BRCDeadlineSource, NSObject, NSArray, NSString;

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {

	BRCAccountSession* _session;
	BRCSyncContext* _syncContext;
	long long _nextFire;
	NSMutableDictionary* _inFlightOpByID;
	BRCDeadlineSource* _schedulingSource;
	NSObject*<OS_dispatch_workloop> _transferWorkloop;
	unsigned long long _inFlightSize;
	NSObject*<OS_dispatch_group> _transferBatchRequestWaiter;
	char _isWaitingForTransferBatch;
	char _hasReachedCap;
	Ai _multipleItemsInteractiveSchedulingCount;
	char _isCancelled;
	/*^block*/id _streamDidBecomeReadyToTransferRecords;
	unsigned long long _maxCountOfBatchesInFlight;

}

@property (nonatomic,copy) id streamDidBecomeReadyToTransferRecords;                    //@synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountOfBatchesInFlight;              //@synthesize maxCountOfBatchesInFlight=_maxCountOfBatchesInFlight - In the implementation block
@property (readonly) NSArray * operations; 
@property (nonatomic,readonly) unsigned long long inFlightSize;                         //@synthesize inFlightSize=_inFlightSize - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                        //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)resume;
-(void)cancel;
-(void)suspend;
-(char)isCancelled;
-(void)signal;
-(NSArray *)operations;
-(void)_schedule;
-(void)signalWithDeadline:(long long)arg1 ;
-(double)progressForTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)forceSchedulingPendingInteractiveTransfers;
-(void)cancelTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3 ;
-(void)addBatchOperation:(id)arg1 ;
-(unsigned long long)inFlightSize;
-(void)_scheduleOneBatchWithQoS:(long long)arg1 ;
-(void)_setReachedCap:(char)arg1 ;
-(void)_evaluateCap;
-(void)_addBatchOperation:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 ;
-(void)startSchedulingMultipleItemsInteractively;
-(void)endSchedulingMultipleItemsInteractively;
-(id)streamDidBecomeReadyToTransferRecords;
-(void)setStreamDidBecomeReadyToTransferRecords:(id)arg1 ;
-(unsigned long long)maxCountOfBatchesInFlight;
-(void)setMaxCountOfBatchesInFlight:(unsigned long long)arg1 ;
@end

