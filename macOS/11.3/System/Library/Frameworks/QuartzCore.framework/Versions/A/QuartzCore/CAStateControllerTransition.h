/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CAStateController, CALayer, CAStateTransition, NSString, NSMutableArray;

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate> {

	CAStateController* _controller;
	CALayer* _layer;
	CAStateTransition* _transition;
	double _beginTime;
	double _duration;
	float _speed;
	NSString* _masterKey;
	NSMutableArray* _animations;

}

@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAStateTransition * transition;              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double beginTime;                            //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float speed;                                 //@synthesize speed=_speed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(double)duration;
-(CALayer *)layer;
-(double)beginTime;
-(float)speed;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(CAStateTransition *)transition;
-(void)addAnimation:(id)arg1 ;
@end

