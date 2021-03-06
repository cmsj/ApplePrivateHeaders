/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSProcessHandle, RBSProcessState, RBSProcessExitEvent;

@interface RBSProcessStateUpdate : NSObject {

	RBSProcessHandle* _process;
	RBSProcessState* _state;
	RBSProcessState* _previousState;
	RBSProcessExitEvent* _exitEvent;

}

@property (nonatomic,readonly) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSProcessState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RBSProcessState * previousState;              //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,readonly) RBSProcessExitEvent * exitEvent;              //@synthesize exitEvent=_exitEvent - In the implementation block
+(id)updateWithState:(id)arg1 previousState:(id)arg2 exitEvent:(id)arg3 ;
-(id)description;
-(RBSProcessState *)state;
-(RBSProcessHandle *)process;
-(RBSProcessState *)previousState;
-(RBSProcessExitEvent *)exitEvent;
@end

