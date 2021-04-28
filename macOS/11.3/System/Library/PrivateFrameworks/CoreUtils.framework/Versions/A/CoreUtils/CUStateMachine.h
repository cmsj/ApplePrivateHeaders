/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUState, NSMutableArray, NSPointerArray, NSArray;

@interface CUStateMachine : NSObject {

	CUState* _currentState;
	NSMutableArray* _eventQueue;
	char _dispatching;
	NSPointerArray* _lcaPath;
	char _started;
	CUState* _targetState;
	CUState* _initialState;
	NSArray* _states;

}

@property (nonatomic,retain) CUState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSArray * states;                    //@synthesize states=_states - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(NSArray *)states;
-(void)dispatchEvent:(id)arg1 ;
-(void)setStates:(NSArray *)arg1 ;
-(void)setInitialState:(CUState *)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(CUState *)initialState;
-(void)_firstTimeInit;
@end
