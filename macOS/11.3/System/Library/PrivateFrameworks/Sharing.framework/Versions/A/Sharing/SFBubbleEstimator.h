/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFRSSIQueue;

@interface SFBubbleEstimator : NSObject {

	SFRSSIQueue* _rssiQueue;
	unsigned long long _thresholdStartTicks;
	char _insideBubble;
	char _insideBubbleWithThreshold;
	char _preventBoost;
	long long _rssiEnter;
	long long _rssiExit;
	double _thresholdSeconds;

}

@property (nonatomic,readonly) char insideBubble;                           //@synthesize insideBubble=_insideBubble - In the implementation block
@property (nonatomic,readonly) char insideBubbleWithThreshold;              //@synthesize insideBubbleWithThreshold=_insideBubbleWithThreshold - In the implementation block
@property (assign,nonatomic) char preventBoost;                             //@synthesize preventBoost=_preventBoost - In the implementation block
@property (assign,nonatomic) long long rssiEnter;                           //@synthesize rssiEnter=_rssiEnter - In the implementation block
@property (assign,nonatomic) long long rssiExit;                            //@synthesize rssiExit=_rssiExit - In the implementation block
@property (assign,nonatomic) double thresholdSeconds;                       //@synthesize thresholdSeconds=_thresholdSeconds - In the implementation block
@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
+(id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 ;
+(id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 threshold:(double)arg3 ;
-(char)insideBubble;
-(double)velocitySmoothed;
-(void)setRssiEnter:(long long)arg1 ;
-(void)setRssiExit:(long long)arg1 ;
-(void)setThresholdSeconds:(double)arg1 ;
-(char)shouldExpandBubble;
-(long long)updateWithRSSI:(long long)arg1 ;
-(char)insideBubbleWithThreshold;
-(char)preventBoost;
-(void)setPreventBoost:(char)arg1 ;
-(long long)rssiEnter;
-(long long)rssiExit;
-(double)thresholdSeconds;
-(void)reset;
-(double)velocity;
@end

