/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/Versions/A/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LARemoteAuthenticationOwnership;
@class AuthenticationInProgress, NSMutableArray, NSMapTable;

@interface AuthenticationManager : NSObject {

	AuthenticationInProgress* _runningAuthentication;
	/*^block*/id _completionHandler;
	NSMutableArray* _idleBlocks;
	char _daemon;
	id<LARemoteAuthenticationOwnership> _remoteAuthenticationOwnership;
	NSMapTable* _remoteAuthentications;
	int _bkOperationToken;
	AuthenticationInProgress* _pendingAuthentication;

}

@property (nonatomic,readonly) AuthenticationInProgress * pendingAuthentication;              //@synthesize pendingAuthentication=_pendingAuthentication - In the implementation block
@property (nonatomic,readonly) AuthenticationInProgress * runningAuthentication;              //@synthesize runningAuthentication=_runningAuthentication - In the implementation block
+(id)sharedInstance;
-(void)remoteAuthenticationFinished;
-(void)remoteAuthenticationInProgressWithPriority:(long long)arg1 pid:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)_bkOperationChanged;
-(long long)_priorityForPolicy:(long long)arg1 ;
-(char)canStartAuthenticationWithPolicy:(long long)arg1 ;
-(void)_runAuthentication:(id)arg1 ;
-(void)_runIdleBlocks;
-(char)_bkIsBusy;
-(void)_runIdleBlocksNow;
-(id)runningMechanism;
-(void)authenticateForPolicy:(long long)arg1 constraintData:(id)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 mechanism:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)init;
-(void)runWhenIdle:(/*^block*/id)arg1 ;
-(AuthenticationInProgress *)pendingAuthentication;
-(AuthenticationInProgress *)runningAuthentication;
-(void)cancelWithError:(id)arg1 originatorId:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
@end

