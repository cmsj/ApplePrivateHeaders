/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXETrackingTapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/AXETrackingGestureRecognizer.h>

@protocol AXETrackingHoldGestureRecognizerDelegate, AXETimer;
@class NSArray, NSMutableDictionary, AXETrackingTapGestureRecognizer, NSString;

@interface AXETrackingHoldGestureRecognizer : NSObject <AXETrackingTapGestureRecognizerDelegate, AXETrackingGestureRecognizer> {

	char _allowInstabilityBeforeHold;
	unsigned long long _fingerCount;
	unsigned long long _preHoldTapCount;
	double _maximumHoldDeviation;
	double _minimumHoldDuration;
	double _minimumPreStabilizationDuration;
	id<AXETrackingHoldGestureRecognizerDelegate> _delegate;
	NSArray* __touchingTouches;
	NSMutableDictionary* __touchHistories;
	unsigned long long __currentState;
	id<AXETimer> __preStabilizationTimer;
	id<AXETimer> __holdStartTimeoutTimer;
	id<AXETimer> __holdTimer;
	AXETrackingTapGestureRecognizer* __preHoldTapRecognizer;

}

@property (nonatomic,retain) NSArray * _touchingTouches;                                                //@synthesize _touchingTouches=__touchingTouches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _touchHistories;                                     //@synthesize _touchHistories=__touchHistories - In the implementation block
@property (assign,nonatomic) unsigned long long _currentState;                                          //@synthesize _currentState=__currentState - In the implementation block
@property (nonatomic,retain) id<AXETimer> _preStabilizationTimer;                                       //@synthesize _preStabilizationTimer=__preStabilizationTimer - In the implementation block
@property (nonatomic,retain) id<AXETimer> _holdStartTimeoutTimer;                                       //@synthesize _holdStartTimeoutTimer=__holdStartTimeoutTimer - In the implementation block
@property (nonatomic,retain) id<AXETimer> _holdTimer;                                                   //@synthesize _holdTimer=__holdTimer - In the implementation block
@property (nonatomic,retain) AXETrackingTapGestureRecognizer * _preHoldTapRecognizer;                   //@synthesize _preHoldTapRecognizer=__preHoldTapRecognizer - In the implementation block
@property (nonatomic,readonly) unsigned long long fingerCount;                                          //@synthesize fingerCount=_fingerCount - In the implementation block
@property (nonatomic,readonly) unsigned long long preHoldTapCount;                                      //@synthesize preHoldTapCount=_preHoldTapCount - In the implementation block
@property (nonatomic,readonly) double maximumHoldDeviation;                                             //@synthesize maximumHoldDeviation=_maximumHoldDeviation - In the implementation block
@property (nonatomic,readonly) double minimumHoldDuration;                                              //@synthesize minimumHoldDuration=_minimumHoldDuration - In the implementation block
@property (nonatomic,readonly) double minimumPreStabilizationDuration;                                  //@synthesize minimumPreStabilizationDuration=_minimumPreStabilizationDuration - In the implementation block
@property (nonatomic,readonly) char allowInstabilityBeforeHold;                                         //@synthesize allowInstabilityBeforeHold=_allowInstabilityBeforeHold - In the implementation block
@property (assign,nonatomic,__weak) id<AXETrackingHoldGestureRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AXETrackingHoldGestureRecognizerDelegate>)delegate;
-(void)setDelegate:(id<AXETrackingHoldGestureRecognizerDelegate>)arg1 ;
-(void)reset;
-(NSArray *)_touchingTouches;
-(unsigned long long)_currentState;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(void)set_currentState:(unsigned long long)arg1 ;
-(void)processGestureEvent:(id)arg1 ;
-(id)initWithMaximumHoldDeviation:(double)arg1 minimumHoldDuration:(double)arg2 minimumPreStabilizationDuration:(double)arg3 allowInstabilityBeforeHold:(char)arg4 ;
-(id)initWithFingerCount:(unsigned long long)arg1 preHoldTapCount:(unsigned long long)arg2 maximumHoldDeviation:(double)arg3 minimumHoldDuration:(double)arg4 minimumPreStabilizationDuration:(double)arg5 allowInstabilityBeforeHold:(char)arg6 ;
-(NSMutableDictionary *)_touchHistories;
-(double)maximumHoldDeviation;
-(double)minimumHoldDuration;
-(double)minimumPreStabilizationDuration;
-(char)allowInstabilityBeforeHold;
-(void)set_touchHistories:(NSMutableDictionary *)arg1 ;
-(unsigned long long)preHoldTapCount;
-(unsigned long long)fingerCount;
-(void)set_touchingTouches:(NSArray *)arg1 ;
-(AXETrackingTapGestureRecognizer *)_preHoldTapRecognizer;
-(unsigned long long)_updateTouchHistoriesWithTouches:(id)arg1 ;
-(void)_signalTouchesMovedAfterStabilizing:(id)arg1 ;
-(id<AXETimer>)_preStabilizationTimer;
-(id<AXETimer>)_holdStartTimeoutTimer;
-(id<AXETimer>)_holdTimer;
-(void)_holdStartTimeoutElapsed:(id)arg1 ;
-(void)set_holdStartTimeoutTimer:(id<AXETimer>)arg1 ;
-(void)_minimumPreStabilizationDurationElapsed:(id)arg1 ;
-(void)set_preStabilizationTimer:(id<AXETimer>)arg1 ;
-(void)_signalStartedStabilizing:(id)arg1 ;
-(void)_minimumHoldDurationElapsed:(id)arg1 ;
-(void)set_holdTimer:(id<AXETimer>)arg1 ;
-(void)_signalStabilized:(id)arg1 ;
-(void)_signalAborted:(id)arg1 ;
-(void)tapGestureRecognizer:(id)arg1 tapped:(id)arg2 ;
-(void)tapGestureRecognizer:(id)arg1 tapAborted:(id)arg2 ;
-(id)initWithFingerCount:(unsigned long long)arg1 ;
-(id)initWithPreHoldTapCount:(unsigned long long)arg1 ;
-(id)initWithFingerCount:(unsigned long long)arg1 preHoldTapCount:(unsigned long long)arg2 ;
-(id)initWithPreHoldTapCount:(unsigned long long)arg1 maximumHoldDeviation:(double)arg2 minimumHoldDuration:(double)arg3 minimumPreStabilizationDuration:(double)arg4 allowInstabilityBeforeHold:(char)arg5 ;
-(void)set_preHoldTapRecognizer:(AXETrackingTapGestureRecognizer *)arg1 ;
@end
