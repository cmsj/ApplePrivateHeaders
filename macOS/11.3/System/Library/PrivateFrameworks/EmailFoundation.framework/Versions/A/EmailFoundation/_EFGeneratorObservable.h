/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFScheduler;
@class EFCancelationToken;

@interface _EFGeneratorObservable : EFObservable {

	id<EFScheduler> _scheduler;
	EFCancelationToken* _cancelable;
	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextStateForState;
	/*^block*/id _resultFromState;
	/*^block*/id _delayForState;

}
-(char)_isFinished;
-(void)_updateState;
-(id)subscribe:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(void)_scheduleNextResultForObserver:(id)arg1 ;
@end

