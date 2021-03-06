/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBClientInheritanceManagerDelegate;
#import <RunningBoard/RunningBoard-Structs.h>
@class NSMutableSet;

@interface RBClientInheritanceManager : NSObject {

	NSMutableSet* _inheritances;
	NSMutableSet* _queuedGainedInheritances;
	NSMutableSet* _queuedLostInheritances;
	char _awaitingAck;
	os_unfair_lock_s _lock;
	id<RBClientInheritanceManagerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<RBClientInheritanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithInheritances:(id)arg1 delegate:(id)arg2 ;
-(void)setInheritances:(id)arg1 ;
-(id)description;
-(id)init;
-(id<RBClientInheritanceManagerDelegate>)delegate;
@end

