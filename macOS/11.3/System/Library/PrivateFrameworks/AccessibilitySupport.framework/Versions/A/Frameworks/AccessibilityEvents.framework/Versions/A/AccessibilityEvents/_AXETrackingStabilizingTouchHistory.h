/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
@class AXETrackingTouchEvent, NSMutableArray;

@interface _AXETrackingStabilizingTouchHistory : NSObject {

	char __allowInstabilityBeforeHold;
	char __hasBeenUnstable;
	id<NSObject><NSCopying> _identity;
	AXETrackingTouchEvent* _firstTouchEvent;
	AXETrackingTouchEvent* _lastTouchEvent;
	NSMutableArray* __stabilizingTouches;
	unsigned long long __state;
	double __maximumHoldDeviation;
	double __minimumHoldDuration;
	double __minimumPreStabilizationDuration;

}

@property (nonatomic,retain) id<NSObject><NSCopying> identity;                     //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) AXETrackingTouchEvent * firstTouchEvent;              //@synthesize firstTouchEvent=_firstTouchEvent - In the implementation block
@property (nonatomic,retain) AXETrackingTouchEvent * lastTouchEvent;               //@synthesize lastTouchEvent=_lastTouchEvent - In the implementation block
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,retain) NSMutableArray * _stabilizingTouches;                 //@synthesize _stabilizingTouches=__stabilizingTouches - In the implementation block
@property (assign,nonatomic) unsigned long long _state;                            //@synthesize _state=__state - In the implementation block
@property (assign,nonatomic) double _maximumHoldDeviation;                         //@synthesize _maximumHoldDeviation=__maximumHoldDeviation - In the implementation block
@property (assign,nonatomic) double _minimumHoldDuration;                          //@synthesize _minimumHoldDuration=__minimumHoldDuration - In the implementation block
@property (assign,nonatomic) double _minimumPreStabilizationDuration;              //@synthesize _minimumPreStabilizationDuration=__minimumPreStabilizationDuration - In the implementation block
@property (assign,nonatomic) char _allowInstabilityBeforeHold;                     //@synthesize _allowInstabilityBeforeHold=__allowInstabilityBeforeHold - In the implementation block
@property (assign,nonatomic) char _hasBeenUnstable;                                //@synthesize _hasBeenUnstable=__hasBeenUnstable - In the implementation block
-(id)description;
-(unsigned long long)_state;
-(id<NSObject><NSCopying>)identity;
-(void)setIdentity:(id<NSObject><NSCopying>)arg1 ;
-(double)touchDuration;
-(AXETrackingTouchEvent *)lastTouchEvent;
-(AXETrackingTouchEvent *)firstTouchEvent;
-(void)setFirstTouchEvent:(AXETrackingTouchEvent *)arg1 ;
-(void)setLastTouchEvent:(AXETrackingTouchEvent *)arg1 ;
-(NSMutableArray *)_stabilizingTouches;
-(double)_maximumHoldDeviation;
-(char)_allowInstabilityBeforeHold;
-(char)_hasBeenUnstable;
-(double)_minimumPreStabilizationDuration;
-(double)_minimumHoldDuration;
-(void)set_state:(unsigned long long)arg1 ;
-(void)set_hasBeenUnstable:(char)arg1 ;
-(id)initWithMaximumHoldDeviation:(double)arg1 minimumHoldDuration:(double)arg2 minimumPreStabilizationDuration:(double)arg3 allowInstabilityBeforeHold:(char)arg4 ;
-(char)appendTouchEvent:(id)arg1 ;
-(void)set_stabilizingTouches:(NSMutableArray *)arg1 ;
-(void)set_maximumHoldDeviation:(double)arg1 ;
-(void)set_minimumHoldDuration:(double)arg1 ;
-(void)set_minimumPreStabilizationDuration:(double)arg1 ;
-(void)set_allowInstabilityBeforeHold:(char)arg1 ;
@end
