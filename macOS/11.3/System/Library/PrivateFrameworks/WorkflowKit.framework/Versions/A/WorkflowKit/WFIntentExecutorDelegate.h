/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFIntentExecutorDelegate <NSObject>
@optional
-(void)intentExecutorRequestsContinueInApp:(id)arg1;
-(void)intentExecutor:(id)arg1 showConfirmationForSlot:(id)arg2 item:(id)arg3 intent:(id)arg4 completion:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 showConfirmationForInteraction:(id)arg2 confirmationRequired:(char)arg3 authenticationRequired:(char)arg4 completionHandler:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveUpdate:(id)arg2;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveError:(id)arg2;

@end

