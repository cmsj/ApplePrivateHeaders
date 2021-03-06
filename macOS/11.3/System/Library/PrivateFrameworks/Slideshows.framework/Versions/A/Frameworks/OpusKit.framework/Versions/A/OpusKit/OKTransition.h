/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OFViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/OFViewControllerInteractiveTransitioning.h>

@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning> {

	char _reversed;
	char _isForward;
	double _duration;
	CGPoint _currentLocation;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char reversed;                         //@synthesize reversed=_reversed - In the implementation block
@property (assign,nonatomic) char isForward;                        //@synthesize isForward=_isForward - In the implementation block
@property (readonly) CGPoint currentLocation;                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(CGPoint)currentLocation;
-(char)reversed;
-(void)setReversed:(char)arg1 ;
-(char)isForward;
-(void)animateTransitionWithContext:(id)arg1 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setIsForward:(char)arg1 ;
-(void)transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(char)arg4 duration:(double)arg5 doEaseIn:(char)arg6 isCompleting:(char)arg7 wasCancelled:(char)arg8 fromProgress:(double)arg9 completionHandler:(/*^block*/id)arg10 ;
-(double)transitionDurationWithContext:(id)arg1 ;
-(void)setSettingDuration:(double)arg1 ;
-(void)setSettingReversed:(char)arg1 ;
-(CGPoint)resolveLocation:(CGPoint)arg1 ;
@end

