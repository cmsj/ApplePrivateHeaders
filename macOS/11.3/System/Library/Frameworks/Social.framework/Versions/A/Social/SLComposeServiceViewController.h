/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTextViewDelegate.h>

@class SLXShareWindowBackgroundView, NSTextView, NSTextField, NSView, NSButton, NSProgressIndicator, NSPopUpButton, SHKShareImageView, NSLayoutConstraint, NSNumber, NSString, SLXShareLocationController, NSImage;

@interface SLComposeServiceViewController : NSViewController <NSTextViewDelegate> {

	SLXShareWindowBackgroundView* _backgroundView;
	NSTextView* _messageTextView;
	NSTextField* _characterCountTextField;
	NSView* _locationContainerView;
	NSButton* _cancelButton;
	NSButton* _sendButton;
	NSProgressIndicator* _progressIndicator;
	NSTextField* _titleTextField;
	NSTextField* _errorTextField;
	NSTextField* _accountsFromTextField;
	NSPopUpButton* _accountsPopUpButton;
	NSTextField* _audienceTextField;
	NSPopUpButton* _audiencePopUpButton;
	SHKShareImageView* _imageView;
	NSLayoutConstraint* _constraintBetweenImageAndPopUp;
	NSLayoutConstraint* _constraintForAccountsPopUpWidth;
	NSLayoutConstraint* _constraintForAudiencePopUpWidth;
	NSLayoutConstraint* _constraintForImagePreviewWidth;
	double _minWindowHeight;
	double _baseWindowHeight;
	char _timedOutComputingThumbnail;
	unsigned long long _mainItemIndex;
	char _showsCompletionPopUpInMessage;
	NSNumber* _charactersRemaining;
	NSString* _placeholder;
	SLXShareLocationController* _locationController;
	id _selectedAccount;

}

@property (readonly) NSButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (readonly) NSButton * sendButton;                                        //@synthesize sendButton=_sendButton - In the implementation block
@property (retain) NSString * message; 
@property (assign) char showsProgressIndicator; 
@property (assign) char showsAccountsPopUp; 
@property (assign) char showsAudiencePopUp; 
@property (assign) char showsRemainingCharactersCounter; 
@property (assign) char showsLocationPin; 
@property (assign) char showsCompletionPopUpInMessage;                             //@synthesize showsCompletionPopUpInMessage=_showsCompletionPopUpInMessage - In the implementation block
@property (readonly) NSTextView * messageTextView;                                 //@synthesize messageTextView=_messageTextView - In the implementation block
@property (readonly) NSPopUpButton * accountsPopUpButton;                          //@synthesize accountsPopUpButton=_accountsPopUpButton - In the implementation block
@property (readonly) NSPopUpButton * audiencePopUpButton;                          //@synthesize audiencePopUpButton=_audiencePopUpButton - In the implementation block
@property (readonly) SLXShareLocationController * locationController;              //@synthesize locationController=_locationController - In the implementation block
@property (retain,readonly) id selectedAccount;                                    //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (assign) int textureStyle; 
@property (readonly) NSImage * image; 
@property (readonly) NSImage * decoratedImage; 
@property (readonly) CGRect imageFrame; 
@property (readonly) CGRect imageContentFrame; 
@property (assign) char timedOutComputingThumbnail;                                //@synthesize timedOutComputingThumbnail=_timedOutComputingThumbnail - In the implementation block
@property (assign) unsigned long long mainItemIndex;                               //@synthesize mainItemIndex=_mainItemIndex - In the implementation block
@property (readonly) NSTextView * textView; 
@property (readonly) NSString * contentText; 
@property (copy) NSString * placeholder;                                           //@synthesize placeholder=_placeholder - In the implementation block
@property (retain) NSNumber * charactersRemaining;                                 //@synthesize charactersRemaining=_charactersRemaining - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingImage;
-(NSString *)placeholder;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)cancel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSImage *)image;
-(void)loadView;
-(id)nibName;
-(id)nibBundle;
-(NSTextView *)textView;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(NSButton *)cancelButton;
-(id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3 ;
-(id)imageView;
-(NSString *)contentText;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(int)textureStyle;
-(void)setTextureStyle:(int)arg1 ;
-(void)_updateCharactersCountField;
-(NSTextView *)messageTextView;
-(char)showsRemainingCharactersCounter;
-(NSNumber *)charactersRemaining;
-(char)_canSendMediaWithNoText;
-(void)_validateUI;
-(void)_messageTextViewDidScroll:(id)arg1 ;
-(void)_setupUIWithInputItems;
-(char)supportsLocation;
-(void)setShowsLocationPin:(char)arg1 ;
-(void)adjustAccountsPopUpFrame;
-(void)adjustAudiencePopUpFrame;
-(void)_updateSpaceBetweenImageAndPopUp;
-(void)validateContent;
-(void)activateFirstResponder;
-(void)presentationAnimationDidFinish;
-(char)isContentValid;
-(char)_areAttachmentsReady;
-(void)setShowsRemainingCharactersCounter:(char)arg1 ;
-(void)_validateSendButton;
-(NSButton *)sendButton;
-(void)setShowsProgressIndicator:(char)arg1 ;
-(SLXShareLocationController *)locationController;
-(char)showsAccountsPopUp;
-(char)showsAudiencePopUp;
-(void)setPreviewImageVisible:(char)arg1 ;
-(void)adjustTextFrame;
-(id)mainItem;
-(id)imageForItemProvider:(id)arg1 ;
-(CGRect)imageFrameForItemProvider:(id)arg1 ;
-(CGRect)imageContentFrameForItemProvider:(id)arg1 ;
-(void)displayErrorString:(id)arg1 ;
-(void)_makeUIBusy:(char)arg1 showsProgressIndicator:(char)arg2 ;
-(void)didSelectCancel;
-(void)didSelectPost;
-(void)contentDidChange;
-(id)displayNameForLocation:(id)arg1 ;
-(void)setCharactersRemaining:(NSNumber *)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(id)placeholderText;
-(unsigned long long)_alertCharacterThreshold;
-(void)accountsPopUpChanged:(id)arg1 ;
-(void)audiencePopUpChanged:(id)arg1 ;
-(char)showsLocationPin;
-(char)showsProgressIndicator;
-(void)setShowsAccountsPopUp:(char)arg1 ;
-(void)setShowsAudiencePopUp:(char)arg1 ;
-(CGRect)_imageFrame;
-(void)setPreviewImage:(id)arg1 ;
-(id)previewImage;
-(char)wantsPaperclip;
-(NSImage *)decoratedImage;
-(CGRect)imageFrame;
-(CGRect)imageContentFrame;
-(char)isPreviewImageVisible;
-(id)previewImageLayer;
-(void)_cancel:(id)arg1 ;
-(void)_send:(id)arg1 ;
-(id)locationController:(id)arg1 displayNameForLocation:(id)arg2 ;
-(char)showsCompletionPopUpInMessage;
-(void)setShowsCompletionPopUpInMessage:(char)arg1 ;
-(NSPopUpButton *)accountsPopUpButton;
-(NSPopUpButton *)audiencePopUpButton;
-(id)selectedAccount;
-(char)timedOutComputingThumbnail;
-(void)setTimedOutComputingThumbnail:(char)arg1 ;
-(unsigned long long)mainItemIndex;
-(void)setMainItemIndex:(unsigned long long)arg1 ;
@end
