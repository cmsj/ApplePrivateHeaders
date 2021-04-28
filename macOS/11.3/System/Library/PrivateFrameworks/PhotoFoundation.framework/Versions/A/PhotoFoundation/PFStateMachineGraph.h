/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject {

	NSMutableDictionary* _nodes;
	NSMutableDictionary* _globalTransitions;
	PFStateMachineNode* _initialNode;

}

@property (retain) PFStateMachineNode * initialNode;              //@synthesize initialNode=_initialNode - In the implementation block
-(id)init;
-(id)transitionForEventName:(id)arg1 ;
-(PFStateMachineNode *)initialNode;
-(id)addNode:(id)arg1 ;
-(void)addGlobalTransition:(id)arg1 ;
-(void)addGlobalTransitionOn:(id)arg1 to:(id)arg2 ;
-(id)findNodeWithName:(id)arg1 ;
-(id)dot:(char)arg1 ;
-(void)setInitialNode:(PFStateMachineNode *)arg1 ;
@end
