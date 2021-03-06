/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <SiriUI/SiriUITalkGestureTargetDelegate.h>

@protocol SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;
@class SiriUITalkGestureTarget, NSPressGestureRecognizer, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, SRFLockStateNotifier, SiriUITextInputField, SiriUIOrbView, NSString;

@interface SiriUISiriStatusView : NSView <NSGestureRecognizerDelegate, SiriUITalkGestureTargetDelegate> {

	SiriUITalkGestureTarget* _gestureTarget;
	NSPressGestureRecognizer* _pressRecognizer;
	double _lastStateChangeTime;
	double _orbViewTargetAlpha;
	AVPlayerLayer* _orbLayer;
	AVPlayerLooper* _orbPlayerLooper;
	AVQueuePlayer* _orbQueuePlayer;
	SRFLockStateNotifier* _lockStateNotifier;
	char _reduceMotionEnabled;
	SiriUITextInputField* _textInputField;
	SiriUIOrbView* _orbView;
	double _disabledMicOpacity;
	id<SiriUISiriStatusViewDelegate> _delegate;
	id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
	long long _mode;

}

@property (assign,nonatomic) long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isReduceMotionEnabled,nonatomic) char reduceMotionEnabled;                           //@synthesize reduceMotionEnabled=_reduceMotionEnabled - In the implementation block
@property (retain) SiriUITextInputField * textInputField;                                                     //@synthesize textInputField=_textInputField - In the implementation block
@property (retain) SiriUIOrbView * orbView;                                                                   //@synthesize orbView=_orbView - In the implementation block
@property (assign,nonatomic) double disabledMicOpacity;                                                       //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (nonatomic,readonly) id voiceOverJumpTarget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
+(double)statusViewHeightForWidthSizeClass:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISiriStatusViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)awakeFromNib;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(void)setAnimationDelegate:(id<SiriUISiriStatusViewAnimationDelegate>)arg1 ;
-(id<SiriUISiriStatusViewAnimationDelegate>)animationDelegate;
-(void)setReduceMotionEnabled:(char)arg1 ;
-(char)isReduceMotionEnabled;
-(SiriUIOrbView *)orbView;
-(void)setOrbView:(SiriUIOrbView *)arg1 ;
-(void)setMode:(long long)arg1 withAnimationCompletion:(/*^block*/id)arg2 ;
-(void)forceOrbVisible:(char)arg1 ;
-(SiriUITextInputField *)textInputField;
-(void)_siriStatusViewWasClickedFromOrbButton;
-(void)initInputMode;
-(void)_orbButtonClicked:(id)arg1 ;
-(void)_orbButtonHeld:(id)arg1 ;
-(void)didLockDevice:(id)arg1 ;
-(void)didUnlockDevice:(id)arg1 ;
-(void)updateTextInputForLockedScreen:(char)arg1 ;
-(CGRect)_orbFrame;
-(CGRect)_orbGlyphTappableRect;
-(void)_animateInputHidden:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isOrbGlyphHidden;
-(void)initOrbIfNecesary;
-(void)_updateOrbViewState;
-(void)_siriStatusViewHoldDidBegin;
-(void)_siriStatusViewHoldDidEnd;
-(void)_animateOrbGlyphHidden:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_animateInputHidden:(char)arg1 ;
-(void)textInputFieldAction:(id)arg1 ;
-(id)voiceOverJumpTarget;
-(void)setInputVoiceOverJumpTarget:(id)arg1 ;
-(void)setTextInputField:(SiriUITextInputField *)arg1 ;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1 ;
@end

