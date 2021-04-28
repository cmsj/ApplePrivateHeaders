/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/Versions/A/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <ReplayKit/RPBorderlessEffectWindow.h>

@class CALayer, NSWindow;

@interface RPDimAndShadowWindow : RPBorderlessEffectWindow {

	char animatesTransitions;
	CALayer* groupLayer;
	CALayer* dimLayer;
	CALayer* shadowLayer;
	CALayer* shadowCenterKnockoutLayer;
	NSWindow* _remoteWindow;
	NSWindow* _sourceWindow;

}

@property (__weak) NSWindow * remoteWindow;               //@synthesize remoteWindow=_remoteWindow - In the implementation block
@property (__weak) NSWindow * sourceWindow;               //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (assign) char animatesTransitions; 
-(NSWindow *)sourceWindow;
-(void)setSourceWindow:(NSWindow *)arg1 ;
-(NSWindow *)remoteWindow;
-(id)initWithFrame:(CGRect)arg1 noSourceWindow:(char)arg2 ;
-(void)setRemoteWindow:(NSWindow *)arg1 ;
-(void)updateShadowFrame:(CGRect)arg1 ;
-(void)animateLayersToFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 ;
-(void)startTransitionInWithDimFrame:(CGRect)arg1 serviceScreenFrame:(CGRect)arg2 initialLayerTransform:(CGAffineTransform)arg3 ;
-(void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 ;
-(void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 currentMediaTime:(double)arg3 ;
-(void)startTransitionOut;
-(void)setAnimatesTransitions:(char)arg1 ;
-(char)animatesTransitions;
@end
