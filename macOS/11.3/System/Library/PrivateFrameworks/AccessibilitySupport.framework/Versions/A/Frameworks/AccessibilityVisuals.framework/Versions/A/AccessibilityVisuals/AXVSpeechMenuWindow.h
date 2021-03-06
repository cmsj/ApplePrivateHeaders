/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVSpeechStyleWindow.h>
#import <libobjc.A.dylib/AXVSpeechMenuWindowButtonEventDelegate.h>

@protocol AXVSpeechMenuWindowButtonEventDelegate;
@class NSButton, AXVSpeechMenuButton, NSVisualEffectView, NSImageView, NSImage, NSTextField, NSString;

@interface AXVSpeechMenuWindow : AXVSpeechStyleWindow <AXVSpeechMenuWindowButtonEventDelegate> {

	id<AXVSpeechMenuWindowButtonEventDelegate> _buttonEventDelegate;
	unsigned long long _currentSpeakingState;
	NSButton* __closeButton;
	NSButton* __placeholderButton;
	NSButton* __minimizeButton;
	AXVSpeechMenuButton* __slowerButton;
	AXVSpeechMenuButton* __previousButton;
	AXVSpeechMenuButton* __playPauseButton;
	AXVSpeechMenuButton* __nextButton;
	AXVSpeechMenuButton* __fasterButton;
	AXVSpeechMenuButton* __stopButton;
	NSVisualEffectView* __slowerButtonView;
	NSVisualEffectView* __previousButtonView;
	NSVisualEffectView* __playPauseButtonView;
	NSVisualEffectView* __nextButtonView;
	NSVisualEffectView* __fasterButtonView;
	NSVisualEffectView* __stopButtonView;
	NSImageView* __slowerButtonImageView;
	NSImageView* __fasterButtonImageView;
	NSImageView* __playPauseButtonImageView;
	NSImageView* __nextButtonImageView;
	NSImageView* __previousButtonImageView;
	NSImageView* __stopButtonImageView;
	NSImage* __turtleIcon;
	NSImage* __playIcon;
	NSImage* __pauseIcon;
	NSImage* __hareIcon;
	NSImage* __nextIcon;
	NSImage* __previousIcon;
	NSImage* __stopIcon;
	NSTextField* __titleField;

}

@property (nonatomic,retain) NSButton * _closeButton;                                                            //@synthesize _closeButton=__closeButton - In the implementation block
@property (nonatomic,retain) NSButton * _placeholderButton;                                                      //@synthesize _placeholderButton=__placeholderButton - In the implementation block
@property (nonatomic,retain) NSButton * _minimizeButton;                                                         //@synthesize _minimizeButton=__minimizeButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _slowerButton;                                                //@synthesize _slowerButton=__slowerButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _previousButton;                                              //@synthesize _previousButton=__previousButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _playPauseButton;                                             //@synthesize _playPauseButton=__playPauseButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _nextButton;                                                  //@synthesize _nextButton=__nextButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _fasterButton;                                                //@synthesize _fasterButton=__fasterButton - In the implementation block
@property (nonatomic,retain) AXVSpeechMenuButton * _stopButton;                                                  //@synthesize _stopButton=__stopButton - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _slowerButtonView;                                             //@synthesize _slowerButtonView=__slowerButtonView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _previousButtonView;                                           //@synthesize _previousButtonView=__previousButtonView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _playPauseButtonView;                                          //@synthesize _playPauseButtonView=__playPauseButtonView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _nextButtonView;                                               //@synthesize _nextButtonView=__nextButtonView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _fasterButtonView;                                             //@synthesize _fasterButtonView=__fasterButtonView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * _stopButtonView;                                               //@synthesize _stopButtonView=__stopButtonView - In the implementation block
@property (nonatomic,retain) NSImageView * _slowerButtonImageView;                                               //@synthesize _slowerButtonImageView=__slowerButtonImageView - In the implementation block
@property (nonatomic,retain) NSImageView * _fasterButtonImageView;                                               //@synthesize _fasterButtonImageView=__fasterButtonImageView - In the implementation block
@property (nonatomic,retain) NSImageView * _playPauseButtonImageView;                                            //@synthesize _playPauseButtonImageView=__playPauseButtonImageView - In the implementation block
@property (nonatomic,retain) NSImageView * _nextButtonImageView;                                                 //@synthesize _nextButtonImageView=__nextButtonImageView - In the implementation block
@property (nonatomic,retain) NSImageView * _previousButtonImageView;                                             //@synthesize _previousButtonImageView=__previousButtonImageView - In the implementation block
@property (nonatomic,retain) NSImageView * _stopButtonImageView;                                                 //@synthesize _stopButtonImageView=__stopButtonImageView - In the implementation block
@property (nonatomic,retain) NSImage * _turtleIcon;                                                              //@synthesize _turtleIcon=__turtleIcon - In the implementation block
@property (nonatomic,retain) NSImage * _playIcon;                                                                //@synthesize _playIcon=__playIcon - In the implementation block
@property (nonatomic,retain) NSImage * _pauseIcon;                                                               //@synthesize _pauseIcon=__pauseIcon - In the implementation block
@property (nonatomic,retain) NSImage * _hareIcon;                                                                //@synthesize _hareIcon=__hareIcon - In the implementation block
@property (nonatomic,retain) NSImage * _nextIcon;                                                                //@synthesize _nextIcon=__nextIcon - In the implementation block
@property (nonatomic,retain) NSImage * _previousIcon;                                                            //@synthesize _previousIcon=__previousIcon - In the implementation block
@property (nonatomic,retain) NSImage * _stopIcon;                                                                //@synthesize _stopIcon=__stopIcon - In the implementation block
@property (nonatomic,retain) NSTextField * _titleField;                                                          //@synthesize _titleField=__titleField - In the implementation block
@property (assign,nonatomic,__weak) id<AXVSpeechMenuWindowButtonEventDelegate> buttonEventDelegate;              //@synthesize buttonEventDelegate=_buttonEventDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentSpeakingState;                                            //@synthesize currentSpeakingState=_currentSpeakingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeVisibleWithoutLogin;
-(NSTextField *)_titleField;
-(char)isFloatingPanel;
-(char)becomesKeyOnlyIfNeeded;
-(char)_preventsActivation;
-(NSButton *)_closeButton;
-(id)initWithContentRect:(CGRect)arg1 ;
-(AXVSpeechMenuButton *)_previousButton;
-(AXVSpeechMenuButton *)_nextButton;
-(AXVSpeechMenuButton *)_playPauseButton;
-(NSImage *)_hareIcon;
-(void)_setupStackView;
-(void)setCurrentSpeakingStateToPlaying;
-(void)_setupCloseButton;
-(void)_setupTitleField;
-(void)_setupPlaceholderButton;
-(NSButton *)_placeholderButton;
-(void)_setupSpeechControlButtons;
-(void)_setupVisualEffectViews;
-(NSVisualEffectView *)_slowerButtonView;
-(AXVSpeechMenuButton *)_slowerButton;
-(NSVisualEffectView *)_previousButtonView;
-(NSVisualEffectView *)_playPauseButtonView;
-(NSVisualEffectView *)_stopButtonView;
-(AXVSpeechMenuButton *)_stopButton;
-(NSVisualEffectView *)_nextButtonView;
-(NSVisualEffectView *)_fasterButtonView;
-(AXVSpeechMenuButton *)_fasterButton;
-(void)_constrainVisualEffectViews;
-(void)_addButtonContraints;
-(void)set_slowerButtonView:(NSVisualEffectView *)arg1 ;
-(void)_setupVisualEffectView:(id)arg1 ;
-(void)set_fasterButtonView:(NSVisualEffectView *)arg1 ;
-(void)set_playPauseButtonView:(NSVisualEffectView *)arg1 ;
-(void)set_previousButtonView:(NSVisualEffectView *)arg1 ;
-(void)set_nextButtonView:(NSVisualEffectView *)arg1 ;
-(void)set_stopButtonView:(NSVisualEffectView *)arg1 ;
-(void)_constrainVisualEffectView:(id)arg1 ;
-(void)_constraintTitleField;
-(void)set_titleField:(NSTextField *)arg1 ;
-(void)set_placeholderButton:(NSButton *)arg1 ;
-(void)_handleCloseButtonPress;
-(void)set_closeButton:(NSButton *)arg1 ;
-(void)set_turtleIcon:(NSImage *)arg1 ;
-(void)set_playIcon:(NSImage *)arg1 ;
-(void)set_pauseIcon:(NSImage *)arg1 ;
-(void)set_hareIcon:(NSImage *)arg1 ;
-(void)set_nextIcon:(NSImage *)arg1 ;
-(void)set_previousIcon:(NSImage *)arg1 ;
-(void)set_stopIcon:(NSImage *)arg1 ;
-(NSImage *)_turtleIcon;
-(void)_handleSlowerButtonPress;
-(void)set_slowerButton:(AXVSpeechMenuButton *)arg1 ;
-(void)_setupSpeechControlButton:(id)arg1 ;
-(NSImage *)_playIcon;
-(void)_handlePlayPauseButtonPress;
-(void)set_playPauseButton:(AXVSpeechMenuButton *)arg1 ;
-(void)_handleFasterButtonPress;
-(void)set_fasterButton:(AXVSpeechMenuButton *)arg1 ;
-(NSImage *)_nextIcon;
-(void)_handleNextButtonPress;
-(void)set_nextButton:(AXVSpeechMenuButton *)arg1 ;
-(NSImage *)_previousIcon;
-(void)_handlePreviousButtonPress;
-(void)set_previousButton:(AXVSpeechMenuButton *)arg1 ;
-(NSImage *)_stopIcon;
-(void)_handleStopButtonPress;
-(void)set_stopButton:(AXVSpeechMenuButton *)arg1 ;
-(void)_constrainButtonToSquare:(id)arg1 ;
-(void)setCurrentSpeakingState:(unsigned long long)arg1 ;
-(NSImage *)_pauseIcon;
-(unsigned long long)currentSpeakingState;
-(id<AXVSpeechMenuWindowButtonEventDelegate>)buttonEventDelegate;
-(void)setCurrentSpeakingStateToPaused;
-(void)setSpeechMenuTitle:(id)arg1 ;
-(void)setButtonEventDelegate:(id<AXVSpeechMenuWindowButtonEventDelegate>)arg1 ;
-(NSButton *)_minimizeButton;
-(void)set_minimizeButton:(NSButton *)arg1 ;
-(NSImageView *)_slowerButtonImageView;
-(void)set_slowerButtonImageView:(NSImageView *)arg1 ;
-(NSImageView *)_fasterButtonImageView;
-(void)set_fasterButtonImageView:(NSImageView *)arg1 ;
-(NSImageView *)_playPauseButtonImageView;
-(void)set_playPauseButtonImageView:(NSImageView *)arg1 ;
-(NSImageView *)_nextButtonImageView;
-(void)set_nextButtonImageView:(NSImageView *)arg1 ;
-(NSImageView *)_previousButtonImageView;
-(void)set_previousButtonImageView:(NSImageView *)arg1 ;
-(NSImageView *)_stopButtonImageView;
-(void)set_stopButtonImageView:(NSImageView *)arg1 ;
@end

