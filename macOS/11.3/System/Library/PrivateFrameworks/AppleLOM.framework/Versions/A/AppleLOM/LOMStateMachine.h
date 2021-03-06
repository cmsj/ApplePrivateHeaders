/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, LOMState;

@interface LOMStateMachine : NSObject {

	NSMutableArray* _transactions;
	id _owner;
	LOMState* _currentState;

}

@property (retain) LOMState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)initWithOwner:(id)arg1 ;
-(LOMState *)currentState;
-(void)setCurrentState:(LOMState *)arg1 ;
-(char)postEvent:(id)arg1 ;
-(void)addStateTransitions:(id)arg1 ;
@end

