/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RBProcess;


@protocol RBDaemonContextProviding <NSObject>
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager; 
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager; 
@property (nonatomic,readonly) id<RBProcessManaging> processManager; 
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor; 
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager; 
@property (nonatomic,readonly) RBProcess * process; 
@required
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBStateCaptureManaging>)stateCaptureManager;
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBAssertionManaging>)assertionManager;

@end

