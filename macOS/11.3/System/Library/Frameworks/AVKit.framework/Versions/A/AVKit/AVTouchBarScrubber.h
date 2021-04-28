/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <AVKit/AVTouchBarMediaSelectionButtonViewControllerDelegate.h>
#import <AVKit/AVTouchBarMediaSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/NSStackViewDelegate.h>

@protocol AVTouchBarPlaybackControlsControlling, AVTouchBarMediaSelectionControllingAVTouchBarPlaybackControlsControllingInternalAVTouchBarScrubberControllingAVTouchBarTrackControllingAVTimeControlling, AVTouchBarScrubberDelegate;
@class NSMutableArray, NSView, NSStackView, NSButton, NSLayoutConstraint, AVTouchBarScrubberController, AVTouchBarMediaSelectionButtonViewController, AVTouchBarMediaSelectionViewController, AVObservationController, AVPlayerControllerTimeResolver, NSColor, NSString;

@interface AVTouchBarScrubber : NSView <CAAnimationDelegate, AVTouchBarMediaSelectionButtonViewControllerDelegate, AVTouchBarMediaSelectionViewControllerDelegate, NSStackViewDelegate> {

	NSMutableArray* _bindingsInfos;
	char _bindingsActive;
	id<AVTouchBarPlaybackControlsControlling> _playbackControlsController;
	id<AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling> _playerController;
	char _collapsesIntoPlayButton;
	char _drawsBackground;
	char _showsInlinePlayButton;
	char _canShowMediaSelectionButton;
	char _collapsed;
	long long _expandCollapseAnimationCount;
	long long _appearAnimationCount;
	long long _disappearAnimationCount;
	NSView* _containerView;
	NSStackView* _controlsContainerView;
	NSView* _collapsedRepresentation;
	NSButton* _pictureInPictureButton;
	NSButton* _inlinePlayButton;
	NSView* _inlinePlayButtonSeparatorView;
	NSView* _mediaSelectionButtonSeparatorView;
	NSView* _pictureInPictureButtonSeparatorView;
	NSLayoutConstraint* _inlinePlayButtonWidthConstraint;
	AVTouchBarScrubberController* _touchBarScrubberController;
	NSView* _scrubberContainerView;
	AVTouchBarMediaSelectionButtonViewController* _mediaSelectionButtonViewController;
	AVTouchBarMediaSelectionViewController* _mediaSelectionViewController;
	NSStackView* _liveStreamContainerView;
	NSButton* _liveStreamPictureInPictureButton;
	AVTouchBarMediaSelectionButtonViewController* _liveStreamMediaSelectionButtonViewController;
	NSLayoutConstraint* _containerViewFixedWidthLayoutConstraint;
	NSLayoutConstraint* _containerViewRightAnchorLayoutConstraint;
	NSLayoutConstraint* _scrubberLeftAnchorLayoutConstraint;
	AVObservationController* _keyValueObservationController;
	id<AVTouchBarScrubberDelegate> _delegate;
	SCD_Struct_AV9 _delegateRespondsTo;
	char _canCollapse;
	AVPlayerControllerTimeResolver* _timeResolver;

}

@property (retain) id<AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (retain) AVPlayerControllerTimeResolver * timeResolver;                                                                                                                                                      //@synthesize timeResolver=_timeResolver - In the implementation block
@property (retain) id<AVTouchBarPlaybackControlsControlling> playbackControlsController; 
@property (__weak) id<AVTouchBarScrubberDelegate> delegate; 
@property (assign) char drawsBackground; 
@property (assign) char showsInlinePlayButton;                                                                                                                                                                         //@synthesize showsInlinePlayButton=_showsInlinePlayButton - In the implementation block
@property (assign) char canShowMediaSelectionButton;                                                                                                                                                                   //@synthesize canShowMediaSelectionButton=_canShowMediaSelectionButton - In the implementation block
@property (assign) char canCollapse;                                                                                                                                                                                   //@synthesize canCollapse=_canCollapse - In the implementation block
@property (assign) char collapsesIntoPlayButton; 
@property (retain) NSColor * audioWaveformColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<AVTouchBarScrubberDelegate>)delegate;
-(void)setDelegate:(id<AVTouchBarScrubberDelegate>)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(char)drawsBackground;
-(void)_commonInit;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)canCollapse;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setCanCollapse:(char)arg1 ;
-(void)stackView:(id)arg1 willDetachViews:(id)arg2 ;
-(void)stackView:(id)arg1 didReattachViews:(id)arg2 ;
-(id<AVTouchBarPlaybackControlsControlling>)playbackControlsController;
-(void)setPlaybackControlsController:(id<AVTouchBarPlaybackControlsControlling>)arg1 ;
-(void)setPlayerController:(id<AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling>)arg1 ;
-(void)setCanShowMediaSelectionButton:(char)arg1 ;
-(void)_unbindAllObjects;
-(void)skipBackwardButtonPressed:(id)arg1 ;
-(id<AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling>)playerController;
-(NSColor *)audioWaveformColor;
-(void)setAudioWaveformColor:(NSColor *)arg1 ;
-(AVPlayerControllerTimeResolver *)timeResolver;
-(void)setTimeResolver:(AVPlayerControllerTimeResolver *)arg1 ;
-(char)showsInlinePlayButton;
-(void)setShowsInlinePlayButton:(char)arg1 ;
-(char)collapsesIntoPlayButton;
-(void)setCollapsesIntoPlayButton:(char)arg1 ;
-(void)_updateTimeResolver;
-(id)_makePlayButton;
-(id)_makeSkipAheadButton;
-(id)_makeExpandButton;
-(id)_makeSeparatorView;
-(CATransform3D)_makeScaleTransform:(double)arg1 origin:(CGPoint)arg2 ;
-(void)_animateAppearDisappearTransition:(char)arg1 animationDuration:(double)arg2 ;
-(void)_animateExpandCollapseTransition:(char)arg1 oldBounds:(CGRect)arg2 newBounds:(CGRect)arg3 animationDuration:(double)arg4 ;
-(void)_unbindObject:(id)arg1 ;
-(void)_activateBindings;
-(void)_deactivateBindings;
-(void)touchBarMediaSelectionButtonViewControllerPresentMediaSelectionPopover:(id)arg1 ;
-(void)touchBarMediaSelectionViewController:(id)arg1 didSelectAudioTouchBarMediaSelectionOption:(id)arg2 ;
-(void)touchBarMediaSelectionViewController:(id)arg1 didSelectLegibleTouchBarMediaSelectionOption:(id)arg2 ;
-(void)actionExpandButtonTapped:(id)arg1 ;
-(void)actionPictureInPictureButtonTapped:(id)arg1 ;
-(void)_updateScrubberHasRoundedCorners;
-(void)_updateScrubberHasRoundedCornersWithDetachedViews:(id)arg1 ;
-(void)_updateScrubberLeftAnchorLayoutConstraint;
-(id)_makeSkipBackwardsButton;
-(id)_makeMediaSelectionButtonViewController;
-(id)_makeMediaSelectionViewController;
-(id)_makePictureInPictureButton;
-(void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5 setToNilWhenUnbinding:(char)arg6 ;
-(char)canShowMediaSelectionButton;
@end
