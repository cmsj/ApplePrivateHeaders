/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>

@class NSView, ReaderViewController, ReaderContainerView, NSColor;

@interface ReaderContainerViewController : NSViewController {

	NSView* _backgroundView;
	double _amountOfContinuousReadingViewBannerThatIsVisible;
	long long _animationState;
	char _deactivationIsAnimated;
	long long _theme;
	ReaderViewController* _readerViewController;
	/*^block*/id _deactivationAnimationDidFinishBlock;

}

@property (copy) id deactivationAnimationDidFinishBlock;                                     //@synthesize deactivationAnimationDidFinishBlock=_deactivationAnimationDidFinishBlock - In the implementation block
@property (retain) ReaderContainerView * view; 
@property (assign,nonatomic) long long theme;                                                //@synthesize theme=_theme - In the implementation block
@property (getter=isAnimatingActivation,readonly) char animatingActivation; 
@property (getter=isAnimatingDeactivation,readonly) char animatingDeactivation; 
@property (nonatomic,retain) ReaderViewController * readerViewController;                    //@synthesize readerViewController=_readerViewController - In the implementation block
@property (readonly) NSColor * backgroundColor; 
+(id)_fadeAnimationWithStartingOpacity:(double)arg1 endingOpacity:(double)arg2 ;
+(id)_moveAnimationWithStartingRect:(CGRect)arg1 endingRect:(CGRect)arg2 ;
+(id)_animationWithKeyPath:(id)arg1 ;
-(NSColor *)backgroundColor;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidDisappear;
-(void)setTheme:(long long)arg1 ;
-(long long)theme;
-(ReaderViewController *)readerViewController;
-(void)_didReplaceReaderViewController:(id)arg1 ;
-(CGRect)_readerWKViewFrameForStartOfAnimationWhenInterruptingExistingAnimation;
-(CGRect)_frameBelowTheViewFrame;
-(double)_currentBackgroundViewOpacity;
-(void)_updateReaderWKViewFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 backgroundViewFromOpacity:(double)arg3 toOpacity:(double)arg4 animated:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setDeactivationAnimationDidFinishBlock:(id)arg1 ;
-(void)finishAsynchronousDeactivation;
-(id)deactivationAnimationDidFinishBlock;
-(void)activateWithAnimation:(char)arg1 verticalScrollOffsetOfBrowserPage:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)isAnimatingActivation;
-(char)isAnimatingDeactivation;
-(void)setReaderViewController:(ReaderViewController *)arg1 ;
-(void)deactivateWithAnimation:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

