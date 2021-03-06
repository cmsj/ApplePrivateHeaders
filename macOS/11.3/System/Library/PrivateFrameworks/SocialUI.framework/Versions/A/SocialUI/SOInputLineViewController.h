/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOChatViewController.h>
#import <libobjc.A.dylib/CPKPopoverDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>
#import <libobjc.A.dylib/SOTranscriptEffectPickerDelegate.h>
#import <libobjc.A.dylib/NSUserInterfaceValidations.h>
#import <libobjc.A.dylib/SOInputLineDelegate.h>
#import <libobjc.A.dylib/AVAudioRecorderDelegate.h>

@protocol SOInputLineViewControllerDelegate;
@class CPKPopover, SOInputLineContainer, SOFlexibleScrollView, SOInputLine, SOInputVibrantView, NSButton, NSLayoutConstraint, IMAccount, SORecordingWaveformView, NSTextField, NSView, SORecordingWaveformContainerView, SOPreviewingWaveformContainerView, AVAudioRecorder, AVAudioPlayer, NSPopover, NSString, NSStackView, NSAttributedString, NSTextStorage;

@interface SOInputLineViewController : SOChatViewController <CPKPopoverDelegate, NSTouchBarDelegate, SOTranscriptEffectPickerDelegate, NSUserInterfaceValidations, SOInputLineDelegate, AVAudioRecorderDelegate> {

	CPKPopover* _smileyPopover;
	char _delegateRespondsToInputLineTextDidChange;
	char _delegateRespondsToInputLineDidEnter;
	char _delegateRespondsToUndoManager;
	char _alwaysHideAdditionalControls;
	char _showsSmileyButton;
	char _showsEffectPickerButton;
	char _showAudioMessageButton;
	char _showStopRecordingButton;
	int _viewControllerMode;
	id<SOInputLineViewControllerDelegate> _delegate;
	SOInputLineContainer* _inputLineContainer;
	SOFlexibleScrollView* _scrollView;
	SOInputLine* _inputLine;
	SOInputVibrantView* _vibrantView;
	double _leadingTextInputMargin;
	double _trailingTextInputMargin;
	NSButton* _smileyButton;
	NSButton* _effectPickerButton;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _maximumHeightConstraint;
	NSLayoutConstraint* _fontSubstitutionMinimumHeight;
	NSLayoutConstraint* _smileyButtonWidthConstraint;
	NSLayoutConstraint* _effectPickerButtonWidthConstraint;
	NSLayoutConstraint* _inputBorderContentsTrailingConstraint;
	IMAccount* _watchedAccount;
	SORecordingWaveformView* _waveformView;
	NSTextField* _audioRecordingTimestamp;
	NSButton* _audioMessageButton;
	NSView* _audioRecordingView;
	SORecordingWaveformContainerView* _recordingView;
	NSButton* _stopRecordingButton;
	NSView* _audioPreviewView;
	SOPreviewingWaveformContainerView* _previewingView;
	NSButton* _cancelRecordingButton;
	NSButton* _sendRecordingButton;
	AVAudioRecorder* _recorder;
	AVAudioPlayer* _player;
	NSPopover* _effectPickerPopover;
	NSString* _expressiveSendStyleID;

}

@property (nonatomic,readonly) NSStackView * stackView; 
@property (nonatomic,retain) NSButton * smileyButton;                                                        //@synthesize smileyButton=_smileyButton - In the implementation block
@property (nonatomic,retain) NSButton * effectPickerButton;                                                  //@synthesize effectPickerButton=_effectPickerButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * minimumHeightConstraint;                            //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * maximumHeightConstraint;                            //@synthesize maximumHeightConstraint=_maximumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fontSubstitutionMinimumHeight;                             //@synthesize fontSubstitutionMinimumHeight=_fontSubstitutionMinimumHeight - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * smileyButtonWidthConstraint;                        //@synthesize smileyButtonWidthConstraint=_smileyButtonWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * effectPickerButtonWidthConstraint;                  //@synthesize effectPickerButtonWidthConstraint=_effectPickerButtonWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * inputBorderContentsTrailingConstraint;              //@synthesize inputBorderContentsTrailingConstraint=_inputBorderContentsTrailingConstraint - In the implementation block
@property (nonatomic,retain) IMAccount * watchedAccount;                                                     //@synthesize watchedAccount=_watchedAccount - In the implementation block
@property (assign,nonatomic) int viewControllerMode;                                                         //@synthesize viewControllerMode=_viewControllerMode - In the implementation block
@property (nonatomic,retain) SORecordingWaveformView * waveformView;                                         //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) NSTextField * audioRecordingTimestamp;                                          //@synthesize audioRecordingTimestamp=_audioRecordingTimestamp - In the implementation block
@property (__weak) NSButton * audioMessageButton;                                                            //@synthesize audioMessageButton=_audioMessageButton - In the implementation block
@property (__weak) NSView * audioRecordingView;                                                              //@synthesize audioRecordingView=_audioRecordingView - In the implementation block
@property (nonatomic,retain) SORecordingWaveformContainerView * recordingView;                               //@synthesize recordingView=_recordingView - In the implementation block
@property (nonatomic,retain) NSButton * stopRecordingButton;                                                 //@synthesize stopRecordingButton=_stopRecordingButton - In the implementation block
@property (__weak) NSView * audioPreviewView;                                                                //@synthesize audioPreviewView=_audioPreviewView - In the implementation block
@property (nonatomic,retain) SOPreviewingWaveformContainerView * previewingView;                             //@synthesize previewingView=_previewingView - In the implementation block
@property (nonatomic,retain) NSButton * cancelRecordingButton;                                               //@synthesize cancelRecordingButton=_cancelRecordingButton - In the implementation block
@property (nonatomic,retain) NSButton * sendRecordingButton;                                                 //@synthesize sendRecordingButton=_sendRecordingButton - In the implementation block
@property (getter=isRecording,readonly) char recording; 
@property (nonatomic,retain) AVAudioRecorder * recorder;                                                     //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) AVAudioPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) char containsAudioMessage; 
@property (assign,nonatomic,__weak) NSPopover * effectPickerPopover;                                         //@synthesize effectPickerPopover=_effectPickerPopover - In the implementation block
@property (nonatomic,retain) NSString * expressiveSendStyleID;                                               //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (assign,nonatomic,__weak) id<SOInputLineViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SOInputLineContainer * inputLineContainer;                                      //@synthesize inputLineContainer=_inputLineContainer - In the implementation block
@property (nonatomic,retain) SOFlexibleScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SOInputLine * inputLine;                                                        //@synthesize inputLine=_inputLine - In the implementation block
@property (nonatomic,retain) SOInputVibrantView * vibrantView;                                               //@synthesize vibrantView=_vibrantView - In the implementation block
@property (assign,nonatomic) double minimumHeight; 
@property (assign,nonatomic) double maximumHeight; 
@property (nonatomic,retain) NSAttributedString * inputLineContents; 
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (assign,nonatomic) double leadingTextInputMargin;                                                  //@synthesize leadingTextInputMargin=_leadingTextInputMargin - In the implementation block
@property (assign,nonatomic) double trailingTextInputMargin;                                                 //@synthesize trailingTextInputMargin=_trailingTextInputMargin - In the implementation block
@property (assign,nonatomic) char alwaysHideAdditionalControls;                                              //@synthesize alwaysHideAdditionalControls=_alwaysHideAdditionalControls - In the implementation block
@property (assign,nonatomic) char showsSmileyButton;                                                         //@synthesize showsSmileyButton=_showsSmileyButton - In the implementation block
@property (assign,nonatomic) char showsEffectPickerButton;                                                   //@synthesize showsEffectPickerButton=_showsEffectPickerButton - In the implementation block
@property (assign,nonatomic) char showAudioMessageButton;                                                    //@synthesize showAudioMessageButton=_showAudioMessageButton - In the implementation block
@property (assign,nonatomic) char showStopRecordingButton;                                                   //@synthesize showStopRecordingButton=_showStopRecordingButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SOInputLineViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SOInputLineViewControllerDelegate>)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(SOFlexibleScrollView *)scrollView;
-(void)doCommandBySelector:(SEL)arg1 ;
-(NSTextStorage *)textStorage;
-(void)textDidChange:(id)arg1 ;
-(id)makeTouchBar;
-(void)viewDidLoad;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(void)setScrollView:(SOFlexibleScrollView *)arg1 ;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3 ;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(id)undoManagerForTextView:(id)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(void)setPlayer:(AVAudioPlayer *)arg1 ;
-(double)maximumHeight;
-(NSStackView *)stackView;
-(void)stopRecording;
-(char)isRecording;
-(void)startRecording;
-(void)stopRecording:(id)arg1 ;
-(AVAudioPlayer *)player;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(NSString *)expressiveSendStyleID;
-(void)setExpressiveSendStyleID:(NSString *)arg1 ;
-(char)characterPickerPopover:(id)arg1 didSelectCharacter:(id)arg2 ;
-(AVAudioRecorder *)recorder;
-(void)_appearanceChanged:(id)arg1 ;
-(NSLayoutConstraint *)maximumHeightConstraint;
-(void)setMaximumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)cancelRecording;
-(void)_updateEdgeInsets;
-(SORecordingWaveformView *)waveformView;
-(void)setRecorder:(AVAudioRecorder *)arg1 ;
-(void)setWaveformView:(SORecordingWaveformView *)arg1 ;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(void)chatDisplayControllerDidChange:(id)arg1 ;
-(void)effectPicker:(id)arg1 didPickEffect:(id)arg2 ;
-(void)effectPickerWasCancelled:(id)arg1 ;
-(SOInputLine *)inputLine;
-(char)inputLine:(id)arg1 canAttachFilesAtURLs:(id)arg2 ;
-(char)inputLine:(id)arg1 didChangeSignificantly:(int)arg2 ;
-(void)inputLineRequestedPriorOutgoingMessage:(id)arg1 ;
-(void)inputLineRequestedNextOutgoingMessage:(id)arg1 ;
-(id)defaultTypingAttributesForInputLine:(id)arg1 ;
-(char)inputLineShouldInsertNewLine:(id)arg1 ;
-(char)containsAudioMessage;
-(void)setInputLine:(SOInputLine *)arg1 ;
-(void)_updateSmileyButtonVisibility;
-(void)_updateEffectPickerButtonVisibility;
-(void)_updateAudioMessageButtonVisibilty;
-(char)showsSmileyButton;
-(char)showAudioMessageButton;
-(char)showsEffectPickerButton;
-(void)_transitionInputLineIntoMessaging;
-(void)_transitionInputLineIntoRecording;
-(void)_transitionInputLineIntoPreviewRecording;
-(void)_updateTouchBar:(id)arg1 ;
-(void)_updatePlaceholderText;
-(int)viewControllerMode;
-(void)_showPlaceholderPopoverOverView:(id)arg1 withPlaceholderString:(id)arg2 ;
-(NSPopover *)effectPickerPopover;
-(void)setEffectPickerPopover:(NSPopover *)arg1 ;
-(NSButton *)effectPickerButton;
-(void)sendRecording;
-(void)clearInputLine;
-(void)applyMessageFormatToInputLine;
-(void)setShowsSmileyButton:(char)arg1 ;
-(void)setShowAudioMessageButton:(char)arg1 ;
-(void)setWatchedAccount:(IMAccount *)arg1 ;
-(char)alwaysHideAdditionalControls;
-(NSButton *)smileyButton;
-(NSLayoutConstraint *)smileyButtonWidthConstraint;
-(NSLayoutConstraint *)inputBorderContentsTrailingConstraint;
-(NSLayoutConstraint *)effectPickerButtonWidthConstraint;
-(NSButton *)audioMessageButton;
-(NSView *)audioRecordingView;
-(NSButton *)stopRecordingButton;
-(SOInputLineContainer *)inputLineContainer;
-(NSView *)audioPreviewView;
-(SORecordingWaveformContainerView *)recordingView;
-(NSButton *)sendRecordingButton;
-(void)setViewControllerMode:(int)arg1 ;
-(void)_updateVoiceMetering;
-(NSTextField *)audioRecordingTimestamp;
-(void)_updateAudioTimeStamp:(id)arg1 ;
-(void)_inputLineUpdateTimeStamp:(id)arg1 ;
-(void)_inputLineUpdateVoiceMetering:(id)arg1 ;
-(void)_cleanupRecording;
-(SOPreviewingWaveformContainerView *)previewingView;
-(double)leadingTextInputMargin;
-(double)trailingTextInputMargin;
-(void)updateAudioMessageButtonForAppearance;
-(SOInputVibrantView *)vibrantView;
-(NSLayoutConstraint *)fontSubstitutionMinimumHeight;
-(void)setFontSubstitutionMinimumHeight:(NSLayoutConstraint *)arg1 ;
-(void)_updateEffectPickerButtonEnabledState;
-(void)_chatDisplayControllerRecipientsDidChange;
-(void)_chatDisplayControllerSendingAccountDidChange;
-(void)_didResignWindowChange:(id)arg1 ;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(char)arg2 ;
-(NSAttributedString *)inputLineContents;
-(void)setInputLineContents:(NSAttributedString *)arg1 ;
-(void)setLeadingTextInputMargin:(double)arg1 ;
-(void)setTrailingTextInputMargin:(double)arg1 ;
-(void)setAlwaysHideAdditionalControls:(char)arg1 ;
-(void)setShowsEffectPickerButton:(char)arg1 ;
-(void)showPhotosPicker:(id)arg1 ;
-(void)showSearchPopover:(id)arg1 ;
-(void)showStickerPicker:(id)arg1 ;
-(void)showSmileyPicker:(id)arg1 ;
-(id)effectPickerGetTextToSend:(id)arg1 ;
-(void)showEffectsPicker:(id)arg1 ;
-(void)selectVoiceMessage:(id)arg1 ;
-(void)cancelRecording:(id)arg1 ;
-(void)sendRecording:(id)arg1 ;
-(void)resetInputLine;
-(void)setInputLineContainer:(SOInputLineContainer *)arg1 ;
-(void)setVibrantView:(SOInputVibrantView *)arg1 ;
-(char)showStopRecordingButton;
-(void)setShowStopRecordingButton:(char)arg1 ;
-(void)setSmileyButton:(NSButton *)arg1 ;
-(void)setEffectPickerButton:(NSButton *)arg1 ;
-(void)setSmileyButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEffectPickerButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInputBorderContentsTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(IMAccount *)watchedAccount;
-(void)setAudioRecordingTimestamp:(NSTextField *)arg1 ;
-(void)setAudioMessageButton:(NSButton *)arg1 ;
-(void)setAudioRecordingView:(NSView *)arg1 ;
-(void)setRecordingView:(SORecordingWaveformContainerView *)arg1 ;
-(void)setStopRecordingButton:(NSButton *)arg1 ;
-(void)setAudioPreviewView:(NSView *)arg1 ;
-(void)setPreviewingView:(SOPreviewingWaveformContainerView *)arg1 ;
-(NSButton *)cancelRecordingButton;
-(void)setCancelRecordingButton:(NSButton *)arg1 ;
-(void)setSendRecordingButton:(NSButton *)arg1 ;
@end

