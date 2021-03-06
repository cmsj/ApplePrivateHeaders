/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <AVKit/AVCaptureControllerDelegate.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@protocol OS_dispatch_semaphore, AVCaptureViewDelegate;
@class NSObject, AVCaptureVideoPreviewLayer, NSString, AVCameraDisabledView, AVLoadingIndicatorView, AVControlsContainerViewController, AVCaptureControlsViewController, NSTimer, NSTrackingArea, AVCaptureController, AVCaptureDevice, AVCaptureSession, AVCaptureFileOutput, NSTouchBar;

@interface AVCaptureView : NSView <AVCaptureControllerDelegate, NSTouchBarProvider> {

	NSObject*<OS_dispatch_semaphore> _propertySemaphore;
	id<AVCaptureViewDelegate> _delegate;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	NSString* _videoGravity;
	AVCameraDisabledView* _cameraDisabledView;
	AVLoadingIndicatorView* _loadingIndicatorView;
	AVControlsContainerViewController* _controlsContainerViewController;
	AVCaptureControlsViewController* _initialControlsViewController;
	AVCaptureControlsViewController* _captureControlsViewController;
	long long _showControlsCount;
	char _isShowingControlsForMouseMovingInsideView;
	NSTimer* _controlsTimer;
	NSTimer* _temporaryControlsTimer;
	NSTrackingArea* _trackingArea;
	char _viewHasBeenSetup;
	char _showsControlsPane;
	char _canHideControls;
	char _hideControlsOnMouseUp;
	char _doNotMakeCurrentControlsViewControllerViewFirstResponder;
	char _viewNeedsResetupInViewDidMoveToWindow;
	char _usesDefaultSession;
	NSEdgeInsets _floatingCaptureControlsMargin;
	long long _controlsStyle;
	AVCaptureController* _captureController;

}

@property (readonly) char showsControlsPane; 
@property (assign) char canHideControls; 
@property (readonly) char prefersUnobscuredContent; 
@property (assign) NSEdgeInsets floatingCaptureControlsMargin; 
@property (copy) NSString * selectedCompressionOptionsIdentifier; 
@property (readonly) AVCaptureDevice * videoDevice; 
@property (readonly) AVCaptureDevice * audioDevice; 
@property (getter=isFinishingRecording) char finishingRecording; 
@property (retain) AVCaptureController * captureController;                                      //@synthesize captureController=_captureController - In the implementation block
@property (retain) AVCaptureControlsViewController * captureControlsViewController; 
@property (readonly) AVCaptureSession * session; 
@property (readonly) AVCaptureFileOutput * fileOutput; 
@property (__weak) id<AVCaptureViewDelegate> delegate; 
@property (assign) long long controlsStyle;                                                      //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (copy) NSString * videoGravity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTouchBar * touchBar; 
+(void)initialize;
+(id)keyPathsForValuesAffectingTouchBar;
+(id)keyPathsForValuesAffectingPrefersUnobscuredContent;
+(char)automaticallyNotifiesObserversOfSession;
+(id)keyPathsForValuesAffectingSession;
+(char)automaticallyNotifiesObserversOfFileOutput;
+(id)keyPathsForValuesAffectingFileOutput;
+(id)keyPathsForValuesAffectingSelectedCompressionOptionsIdentifier;
+(id)keyPathsForValuesAffectingVideoDevice;
+(id)keyPathsForValuesAffectingAudioDevice;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AVCaptureViewDelegate>)delegate;
-(void)setDelegate:(id<AVCaptureViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)tabletPoint:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(NSTouchBar *)touchBar;
-(void)rightMouseDown:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)setCompressionOptions:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
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
-(void)setControlsStyle:(long long)arg1 ;
-(AVCaptureSession *)session;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVCaptureDevice *)videoDevice;
-(AVCaptureController *)captureController;
-(void)setCaptureController:(AVCaptureController *)arg1 ;
-(AVCaptureDevice *)audioDevice;
-(long long)controlsStyle;
-(void)volumeControlButton:(id)arg1 didShowVolumeSlider:(id)arg2 ;
-(void)volumeControlButton:(id)arg1 didHideVolumeSlider:(id)arg2 ;
-(id)volumeControlButton:(id)arg1 viewContainingVolumeSlider:(id)arg2 ;
-(void)volumeControlViewDidChangeVolume:(id)arg1 ;
-(void)volumeControlViewDidChangeMutedState:(id)arg1 ;
-(void)_setupControlsContainerView;
-(void)_setupLoadingIndicatorView;
-(void)_showControlsIfNeeded;
-(void)_hideControlsIfPossible;
-(void)_hideControlsIfPossibleAfterDelay;
-(void)_showControlsTemporarily;
-(void)_fireTemporaryControlsTimer:(id)arg1 ;
-(void)_showOrHideControls;
-(id)_currentControlsViewController;
-(void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1 ;
-(id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
-(void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1 ;
-(void)_fireControlsTimer:(id)arg1 ;
-(char)showsControlsPane;
-(char)canHideControls;
-(void)setCanHideControls:(char)arg1 ;
-(char)prefersUnobscuredContent;
-(AVCaptureFileOutput *)fileOutput;
-(char)isFinishingRecording;
-(void)setFinishingRecording:(char)arg1 ;
-(void)captureController:(id)arg1 startRecordingToFileOutput:(id)arg2 ;
-(AVCaptureControlsViewController *)captureControlsViewController;
-(void)setCaptureControlsViewController:(AVCaptureControlsViewController *)arg1 ;
-(void)_setupCameraDisabledView;
-(void)_updateVideoPreviewLayerIfNeeded;
-(void)setSession:(id)arg1 showVideoPreview:(char)arg2 showAudioPreview:(char)arg3 ;
-(NSEdgeInsets)floatingCaptureControlsMargin;
-(void)setFloatingCaptureControlsMargin:(NSEdgeInsets)arg1 ;
-(NSString *)selectedCompressionOptionsIdentifier;
-(void)setSelectedCompressionOptionsIdentifier:(NSString *)arg1 ;
@end

