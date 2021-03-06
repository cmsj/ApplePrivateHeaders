/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFScreenOnObserverDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFDialogPresenter.h>

@protocol OS_dispatch_queue;
@class WFScreenOnObserver, WFWorkflowRunningContext, VCVoiceShortcutClient, WFDialogRequest, NSObject, NSString;

@interface WFDaemonDialogPresenter : NSObject <WFScreenOnObserverDelegate, WFApplicationStateObserver, WFDialogPresenter> {

	char _screenDidTurnOffDuringActiveRequest;
	WFScreenOnObserver* _screenOnObserver;
	WFWorkflowRunningContext* _runningContext;
	VCVoiceShortcutClient* _voiceShortcutClient;
	WFDialogRequest* _suspendedRequest;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _suspendedRequestCompletion;

}

@property (nonatomic,readonly) WFScreenOnObserver * screenOnObserver;                    //@synthesize screenOnObserver=_screenOnObserver - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;                //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutClient * voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (nonatomic,retain) WFDialogRequest * suspendedRequest;                         //@synthesize suspendedRequest=_suspendedRequest - In the implementation block
@property (assign,nonatomic) char screenDidTurnOffDuringActiveRequest;                   //@synthesize screenDidTurnOffDuringActiveRequest=_screenDidTurnOffDuringActiveRequest - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id suspendedRequestCompletion;                                //@synthesize suspendedRequestCompletion=_suspendedRequestCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(VCVoiceShortcutClient *)voiceShortcutClient;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)screenOnStateDidChange:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFScreenOnObserver *)screenOnObserver;
-(void)showDialogRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFWorkflowRunningContext *)runningContext;
-(id)initWithRunningContext:(id)arg1 ;
-(void)beginObservingApplicationStateIfNecessary;
-(void)stopObservingApplicationStateIfNecessary;
-(WFDialogRequest *)suspendedRequest;
-(void)setSuspendedRequest:(WFDialogRequest *)arg1 ;
-(char)screenDidTurnOffDuringActiveRequest;
-(void)setScreenDidTurnOffDuringActiveRequest:(char)arg1 ;
-(id)suspendedRequestCompletion;
-(void)setSuspendedRequestCompletion:(id)arg1 ;
@end

