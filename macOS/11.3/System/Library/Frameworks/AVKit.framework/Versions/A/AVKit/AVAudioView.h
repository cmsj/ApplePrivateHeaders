/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <AVKit/AVTrimControlsViewControllerDelegate.h>

@class AVPlayerController, AVPlayerControlsViewController, NSMenu, AVTrimControlsViewController, AVNowPlayingInfoController, AVControlsContainerViewController, AVPlaybackRate, NSString;

@interface AVAudioView : NSView <AVTrimControlsViewControllerDelegate> {

	AVPlayerController* _playerController;
	char _viewHasBeenSetup;
	char _viewHasWindow;
	AVPlayerControlsViewController* _initialControlsViewController;
	AVPlayerControlsViewController* _playbackControlsViewController;
	char _doNotMakePlaybackControlsViewControllerViewFirstResponder;
	char _showsDurationInsteadOfRemainingTime;
	char _showsSharingServiceButton;
	NSMenu* _actionPopUpButtonMenu;
	/*^block*/id _trimCompletionBlock;
	AVTrimControlsViewController* _trimControlsViewController;
	AVPlayerControlsViewController* _editControlsViewController;
	AVNowPlayingInfoController* _nowPlayingInfoController;
	long long _touchBarViewAppearCount;
	char _trimming;
	char _editing;
	AVControlsContainerViewController* _controlsContainerViewController;

}

@property (assign) char showsSharingServiceButton; 
@property (retain) NSMenu * actionPopUpButtonMenu; 
@property (getter=isEditing,readonly) char editing; 
@property (readonly) char canBeginTrimming; 
@property (nonatomic,retain) AVControlsContainerViewController * controlsContainerViewController;              //@synthesize controlsContainerViewController=_controlsContainerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerControlsViewController * playbackControlsViewController; 
@property (nonatomic,retain) AVTrimControlsViewController * trimControlsViewController; 
@property (nonatomic,retain) AVPlayerControlsViewController * editControlsViewController; 
@property (assign,getter=isTrimming,nonatomic) char trimming;                                                  //@synthesize trimming=_trimming - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                                    //@synthesize editing=_editing - In the implementation block
@property (retain) AVPlayerController * playerController; 
@property (retain) AVPlaybackRate * defaultPlaybackRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)restorableStateKeyPaths;
+(id)supportedPlaybackRates;
+(id)keyPathsForValuesAffectingPlayer;
+(id)keyPathsForValuesAffectingCanBeginTrimming;
+(char)automaticallyNotifiesObserversOfPlayerController;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)tabletPoint:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)isEditing;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)tabletProximity:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(id)metricsDelegate;
-(id)player;
-(AVPlaybackRate *)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(AVPlaybackRate *)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setTrimming:(char)arg1 ;
-(AVPlayerController *)playerController;
-(char)showsAlternateMediaTrackPreview;
-(id)trimThumbnailPlayerLayer;
-(void)volumeControlViewDidChangeVolume:(id)arg1 ;
-(void)volumeControlViewDidChangeMutedState:(id)arg1 ;
-(void)trimControlsViewControllerDidTrim:(id)arg1 ;
-(void)trimControlsViewControllerDidCancel:(id)arg1 ;
-(AVPlayerControlsViewController *)playbackControlsViewController;
-(void)setPlaybackControlsViewController:(AVPlayerControlsViewController *)arg1 ;
-(AVTrimControlsViewController *)trimControlsViewController;
-(void)setTrimControlsViewController:(AVTrimControlsViewController *)arg1 ;
-(AVPlayerControlsViewController *)editControlsViewController;
-(void)setEditControlsViewController:(AVPlayerControlsViewController *)arg1 ;
-(void)_setupControlsContainerView;
-(void)_updatePlaybackControlsViewControllerRetainCycle;
-(id)_currentControlsViewController;
-(void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1 ;
-(id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
-(void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1 ;
-(AVControlsContainerViewController *)controlsContainerViewController;
-(void)setControlsContainerViewController:(AVControlsContainerViewController *)arg1 ;
-(char)isTrimming;
-(id)touchBarThumbnailPlayerLayer;
-(char)showsControlsPane;
-(id)pictureInPictureController;
-(void)_updatePictureInPictureButton;
-(char)showsFrameSteppingButtons;
-(char)showsSharingServiceButton;
-(void)setShowsSharingServiceButton:(char)arg1 ;
-(NSMenu *)actionPopUpButtonMenu;
-(void)setActionPopUpButtonMenu:(NSMenu *)arg1 ;
-(char)showsTimecodes;
-(void)setShowsTimecodes:(char)arg1 ;
-(void)beginTrimmingWithMaximumDuration:(SCD_Struct_AV19)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_restorePlaybackControlsAfterTrimmingWithTrimControlsViewController:(id)arg1 ;
-(void)_callTrimCompletionHandlerWithResult:(long long)arg1 ;
-(char)canBeginTrimming;
-(void)beginTrimmingWithCompletionHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_AV20)slowMotionTimeRange;
-(void)showEditControlsViewController:(id)arg1 shouldPausePlayback:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)hideEditControlsViewControllerShouldPausePlayback:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)showEditControlsViewController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)hideEditControlsViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)touchBarControlsViewWillAppear;
-(void)touchBarControlsViewDidDisappear;
-(char)showsDurationInsteadOfRemainingTime;
-(void)setShowsDurationInsteadOfRemainingTime:(char)arg1 ;
-(char)prefersCompactTouchBarScrubber;
-(void)setPrefersCompactTouchBarScrubber:(char)arg1 ;
-(/*^block*/id)playButtonHandlerForLazyPlayerLoading;
-(void)pictureInPictureButtonTapped:(id)arg1 ;
@end

