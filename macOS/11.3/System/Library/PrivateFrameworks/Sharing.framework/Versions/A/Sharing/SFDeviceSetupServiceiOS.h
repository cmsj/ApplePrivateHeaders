/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, SFClient, NSData, NSString, SFService, SFSession, NSObject;

@interface SFDeviceSetupServiceiOS : NSObject {

	char _activateCalled;
	char _advertiseFast;
	char _invalidateCalled;
	char _invalidateDone;
	NSUUID* _peer;
	char _pinShowing;
	SFClient* _preventExitForLocaleClient;
	NSData* _resumeAuthTag;
	NSString* _resumePassword;
	int _resumeState;
	SFService* _sfService;
	char _sfServiceActivated;
	SFSession* _sfSession;
	char _suspendPending;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _progressHandlerEx;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                       //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id progressHandlerEx;                                      //@synthesize progressHandlerEx=_progressHandlerEx - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                  //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)receivedObjectHandler;
-(int)_runResumeIfNeeded;
-(void)_handleSessionSecured:(id)arg1 ;
-(void)_handleConfigRequestReceived:(id)arg1 ;
-(void)_handleAppEventReceived:(id)arg1 ;
-(void)_handleSetupActionSuspend;
-(void)_handleSetupActionResume;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)progressHandlerEx;
-(void)setProgressHandlerEx:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_invalidated;
-(void)_cleanup;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(id)showPINHandlerEx;
-(id)showPINHandler;
-(id)hidePINHandler;
-(void)_completed:(int)arg1 ;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(void)setShowPINHandler:(id)arg1 ;
-(void)setHidePINHandler:(id)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)sendObject:(id)arg1 ;
@end

