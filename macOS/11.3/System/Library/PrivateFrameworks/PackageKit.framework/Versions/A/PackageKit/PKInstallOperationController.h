/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKInstallOperationControllerDelegateNSObject;
@class PKInstallRequest, PKInstallAnalyzer, NSMutableArray, PKInstallOperation, NSObject, NSError, NSMutableDictionary;

@interface PKInstallOperationController : NSObject {

	PKInstallRequest* _request;
	PKInstallAnalyzer* _analyzer;
	NSMutableArray* _operations;
	PKInstallOperation* _lastCancellableOp;
	double _queuedTime;
	double _dequeuedTime;
	NSObject*<OS_dispatch_queue> _updateQueue;
	char _isRunning;
	char _isCancelled;
	NSError* _error;
	NSMutableDictionary* _trackingHistory;
	id<PKInstallOperationControllerDelegate><NSObject> _delegate;

}

@property (retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (__weak,readonly) id<PKInstallOperationControllerDelegate><NSObject> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)_verboseMode;
-(id)initWithRequest:(id)arg1 analyzer:(id)arg2 ;
-(void)addStageOperationsIntoSandbox:(id)arg1 inBackground:(char)arg2 ;
-(void)addPreLogoutCommitOperationsIntoSandbox:(id)arg1 ;
-(void)addCommitOperationsFromSandbox:(id)arg1 usingManager:(id)arg2 ;
-(id)currentPackageSpecifier;
-(id)initWithRequest:(id)arg1 analyzer:(id)arg2 delegate:(id)arg3 ;
-(void)addPrepareOperationsIntoSandbox:(id)arg1 ;
-(void)_markEndOfCancellableOperations;
-(id)currentPackage;
-(char)run;
-(void)dealloc;
-(id)description;
-(id<PKInstallOperationControllerDelegate><NSObject>)delegate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(int)installState;
-(char)cancel;
-(char)_isCancelled;
-(double)estimatedTimeRemaining;
-(void)_enqueueOperation:(id)arg1 ;
-(id)_currentOperation;
-(double)progressPercentage;
-(char)canCancel;
-(double)totalEstimatedTime;
@end
