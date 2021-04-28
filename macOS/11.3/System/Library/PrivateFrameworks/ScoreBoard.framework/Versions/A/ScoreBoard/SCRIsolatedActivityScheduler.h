/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/Versions/A/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <ScoreBoard/SCRActivityScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableDictionary* _lock_timerForTask;

}
-(void)dealloc;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)submitActivity:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(void)_timerFiredForActivity:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
@end
