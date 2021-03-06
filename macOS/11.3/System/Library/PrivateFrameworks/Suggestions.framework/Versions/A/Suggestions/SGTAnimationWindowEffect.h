/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/SGTWindowEffect.h>
#import <libobjc.A.dylib/NSAnimationDelegate.h>

@class SGTWindowAnimation, NSArray, NSString;

@interface SGTAnimationWindowEffect : SGTWindowEffect <NSAnimationDelegate> {

	unsigned _windowID;
	unsigned _cid;
	SGTWindowAnimation* _animation;
	NSArray* _subEffects;
	char _mainEffect;
	char _inverted;

}

@property (retain) SGTWindowAnimation * animation; 
@property (readonly) double additionalDuration; 
@property (assign) float progress; 
@property (assign) char inverted; 
@property (retain) NSArray * subEffects;                            //@synthesize subEffects=_subEffects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invoke;
-(void)setValue:(float)arg1 ;
-(char)stop;
-(float)progress;
-(SGTWindowAnimation *)animation;
-(id)prepare;
-(void)animationDidEnd:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)abort;
-(void)done;
-(void)setAnimation:(SGTWindowAnimation *)arg1 ;
-(void)setInverted:(char)arg1 ;
-(char)inverted;
-(id)subEffectWithID:(unsigned)arg1 ;
-(id)initWithWindow:(id)arg1 animation:(id)arg2 ;
-(void)invertWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)additionalDuration;
-(void)_setProgress:(float)arg1 ;
-(NSArray *)subEffects;
-(void)setSubEffects:(NSArray *)arg1 ;
@end

