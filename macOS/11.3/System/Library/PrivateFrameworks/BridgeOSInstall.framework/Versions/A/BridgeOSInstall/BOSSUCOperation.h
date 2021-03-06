/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BridgeOSInstall.framework/Versions/A/BridgeOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgeOSInstall/BOSOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSDate;

@interface BOSSUCOperation : BOSOperation {

	char _controllerOperationInProgress;
	char _delegateQueueActivated;
	int _controllerEndingState;
	NSObject*<OS_dispatch_semaphore> _controllerOperationComplete;
	NSObject*<OS_dispatch_semaphore> _inProgressOperationComplete;
	NSDate* _lastProgressLogDate;

}

@property (retain) NSObject*<OS_dispatch_semaphore> controllerOperationComplete;              //@synthesize controllerOperationComplete=_controllerOperationComplete - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> inProgressOperationComplete;              //@synthesize inProgressOperationComplete=_inProgressOperationComplete - In the implementation block
@property (assign) char controllerOperationInProgress;                                        //@synthesize controllerOperationInProgress=_controllerOperationInProgress - In the implementation block
@property (assign) char delegateQueueActivated;                                               //@synthesize delegateQueueActivated=_delegateQueueActivated - In the implementation block
@property (retain) NSDate * lastProgressLogDate;                                              //@synthesize lastProgressLogDate=_lastProgressLogDate - In the implementation block
@property (readonly) int controllerOperation; 
@property (readonly) int controllerEndingState;                                               //@synthesize controllerEndingState=_controllerEndingState - In the implementation block
@property (readonly) char controllerEndingStateMustMatchExactly; 
@property (readonly) char shouldWaitForInProgressOperationToFinish; 
-(id)initWithRequest:(id)arg1 controller:(id)arg2 ;
-(char)controllerEndingStateMustMatchExactly;
-(int)controllerEndingState;
-(int)controllerOperation;
-(char)shouldWaitForInProgressOperationToFinish;
-(void)_activateDelegateQueue;
-(NSObject*<OS_dispatch_semaphore>)inProgressOperationComplete;
-(void)startControllerOperation;
-(NSObject*<OS_dispatch_semaphore>)controllerOperationComplete;
-(void)controllerOperationDidComplete;
-(void)_reportRateLimitedProgressWithPercentComplete:(double)arg1 ;
-(char)delegateQueueActivated;
-(void)setDelegateQueueActivated:(char)arg1 ;
-(NSDate *)lastProgressLogDate;
-(void)controllerOperationDidProgress:(float)arg1 ;
-(void)setLastProgressLogDate:(NSDate *)arg1 ;
-(int)endingState;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 updateBrainTransferProgress:(double)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 updateBrainTransferComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 updateBundleTransferProgress:(double)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 updateBundleTransferComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 preflightProgress:(double)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 preflightComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 prepareProgress:(double)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 prepareComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 applyProgress:(double)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 applyComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 cancelComplete:(id)arg2 ;
-(void)bridgeOSSoftwareUpdateController:(id)arg1 purgeComplete:(id)arg2 ;
-(void)setControllerOperationComplete:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setInProgressOperationComplete:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(char)controllerOperationInProgress;
-(void)setControllerOperationInProgress:(char)arg1 ;
-(void)cancel;
-(void)main;
@end

