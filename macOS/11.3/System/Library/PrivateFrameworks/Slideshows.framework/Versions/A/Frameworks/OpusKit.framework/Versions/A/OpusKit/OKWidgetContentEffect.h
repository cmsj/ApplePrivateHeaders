/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, CAAnimation, OFNSView;

@interface OKWidgetContentEffect : NSObject <OKSettingsSupport> {

	NSString* _uuid;
	CAAnimation* _animation;
	OFNSView* _animatedView;
	char _loop;
	char _autoplay;
	char _isPaused;
	double _animationStartTime;

}

@property (assign,nonatomic) OFNSView * animatedView;               //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) char loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) char autoplay;                         //@synthesize autoplay=_autoplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(id)animationKeyPrefix;
-(void)dealloc;
-(id)init;
-(char)isAnimating;
-(CAAnimation *)animation;
-(void)stopAnimation;
-(double)animationDuration;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(char)loop;
-(void)setLoop:(char)arg1 ;
-(char)autoplay;
-(void)setAutoplay:(char)arg1 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(double)animationBeginTime;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimatedView:(OFNSView *)arg1 ;
-(OFNSView *)animatedView;
-(void)startAnimationWithView:(id)arg1 ;
-(double)animationCurrentTime;
@end

