/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUStateMachine, CUStateEvent;

@interface CKUploadRequestManagerStateMachine : NSObject {

	/*^block*/id _actionHandler;
	/*^block*/id _enterStateHandler;
	/*^block*/id _exitStateHandler;
	CUStateMachine* _stateMachine;
	CUStateEvent* _eventCausingTransition;
	/*^block*/id _internalActionHandler;

}

@property (nonatomic,retain) CUStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) CUStateEvent * eventCausingTransition;              //@synthesize eventCausingTransition=_eventCausingTransition - In the implementation block
@property (nonatomic,copy) id internalActionHandler;                             //@synthesize internalActionHandler=_internalActionHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id enterStateHandler;                                 //@synthesize enterStateHandler=_enterStateHandler - In the implementation block
@property (nonatomic,copy) id exitStateHandler;                                  //@synthesize exitStateHandler=_exitStateHandler - In the implementation block
+(id)nameFromFunction:(long long)arg1 ;
+(id)nameFromResponseAction:(long long)arg1 ;
+(id)nameFromStateEvent:(long long)arg1 ;
+(id)nameFromState:(long long)arg1 ;
-(void)dealloc;
-(void)start;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(id)createStateMachine;
-(void)dispatchEvent:(long long)arg1 ;
-(CUStateMachine *)stateMachine;
-(void)setStateMachine:(CUStateMachine *)arg1 ;
-(char)canPerformFunction:(long long)arg1 ;
-(id)initWithActionHandler:(/*^block*/id)arg1 ;
-(void)setEnterStateHandler:(id)arg1 ;
-(void)setExitStateHandler:(id)arg1 ;
-(/*^block*/id)eventHandlerForState:(id)arg1 withEnterBlock:(/*^block*/id)arg2 exitBlock:(/*^block*/id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)transitionToState:(id)arg1 withEvent:(id)arg2 ;
-(void)dispatchEvent:(long long)arg1 userInfo:(id)arg2 ;
-(void)setInternalActionHandler:(id)arg1 ;
-(id)internalActionHandler;
-(void)setEventCausingTransition:(CUStateEvent *)arg1 ;
-(CUStateEvent *)eventCausingTransition;
-(id)enterStateHandler;
-(id)exitStateHandler;
@end

