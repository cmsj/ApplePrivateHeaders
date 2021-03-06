/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <libobjc.A.dylib/MMLinkTextFieldDelegate.h>
#import <libobjc.A.dylib/MMCSCProgressIndicatorProtocol.h>

@protocol MMCSCPassPhraseRecoveryViewControllerDelegate;
@class NSString, NSImageView, NSTextField, MMLinkTextField, NSSecureTextField, NSButton, NSProgressIndicator, NSLayoutConstraint, iCloudTouchBarController, NSTouchBar;

@interface MMCSCPassPhraseRecoveryViewController : NSViewController <NSTouchBarProvider, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol> {

	char _needsVerification;
	char _showRandomView;
	NSString* _passPhrase;
	id<MMCSCPassPhraseRecoveryViewControllerDelegate> _delegate;
	NSImageView* _passPhraseImageView;
	NSTextField* _passPhraseTitle;
	MMLinkTextField* _passPhraseMessageTextField;
	MMLinkTextField* _passPhraseAlternateMessageTextField;
	NSSecureTextField* _passPhraseSecurityCodeTextField;
	NSTextField* _passPhraseRandomCodeTextField;
	NSButton* _passPhraseHelpButton;
	NSButton* _passPhraseConfirmButton;
	NSButton* _passPhraseCancelButton;
	NSProgressIndicator* _passPhraseProgressIndicator;
	NSLayoutConstraint* _showErrorConstraint;
	NSLayoutConstraint* _hideErrorConstraint;
	iCloudTouchBarController* _touchBarController;

}

@property (copy) NSString * passPhrase;                                                     //@synthesize passPhrase=_passPhrase - In the implementation block
@property (retain) iCloudTouchBarController * touchBarController;                           //@synthesize touchBarController=_touchBarController - In the implementation block
@property (assign) id<MMCSCPassPhraseRecoveryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char needsVerification;                                                  //@synthesize needsVerification=_needsVerification - In the implementation block
@property (assign) char showRandomView;                                                     //@synthesize showRandomView=_showRandomView - In the implementation block
@property (__weak) NSImageView * passPhraseImageView;                                       //@synthesize passPhraseImageView=_passPhraseImageView - In the implementation block
@property (__weak) NSTextField * passPhraseTitle;                                           //@synthesize passPhraseTitle=_passPhraseTitle - In the implementation block
@property (__weak) MMLinkTextField * passPhraseMessageTextField;                            //@synthesize passPhraseMessageTextField=_passPhraseMessageTextField - In the implementation block
@property (__weak) MMLinkTextField * passPhraseAlternateMessageTextField;                   //@synthesize passPhraseAlternateMessageTextField=_passPhraseAlternateMessageTextField - In the implementation block
@property (__weak) NSSecureTextField * passPhraseSecurityCodeTextField;                     //@synthesize passPhraseSecurityCodeTextField=_passPhraseSecurityCodeTextField - In the implementation block
@property (__weak) NSTextField * passPhraseRandomCodeTextField;                             //@synthesize passPhraseRandomCodeTextField=_passPhraseRandomCodeTextField - In the implementation block
@property (__weak) NSButton * passPhraseHelpButton;                                         //@synthesize passPhraseHelpButton=_passPhraseHelpButton - In the implementation block
@property (__weak) NSButton * passPhraseConfirmButton;                                      //@synthesize passPhraseConfirmButton=_passPhraseConfirmButton - In the implementation block
@property (__weak) NSButton * passPhraseCancelButton;                                       //@synthesize passPhraseCancelButton=_passPhraseCancelButton - In the implementation block
@property (__weak) NSProgressIndicator * passPhraseProgressIndicator;                       //@synthesize passPhraseProgressIndicator=_passPhraseProgressIndicator - In the implementation block
@property (__weak) NSLayoutConstraint * showErrorConstraint;                                //@synthesize showErrorConstraint=_showErrorConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * hideErrorConstraint;                                //@synthesize hideErrorConstraint=_hideErrorConstraint - In the implementation block
@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MMCSCPassPhraseRecoveryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MMCSCPassPhraseRecoveryViewControllerDelegate>)arg1 ;
-(NSTouchBar *)touchBar;
-(void)controlTextDidChange:(id)arg1 ;
-(iCloudTouchBarController *)touchBarController;
-(void)setTouchBarController:(iCloudTouchBarController *)arg1 ;
-(NSLayoutConstraint *)showErrorConstraint;
-(void)setShowErrorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)clickedOnLink:(id)arg1 ;
-(NSString *)passPhrase;
-(void)confirmButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(void)_showErrorMessage:(id)arg1 ;
-(void)_showNormalMessage;
-(void)stopCSCProgressIndicator:(id)arg1 ;
-(char)needsVerification;
-(id)forgotCodeAttributedString;
-(void)startCSCProgressIndicator:(id)arg1 ;
-(void)setupView:(long long)arg1 ;
-(void)setNeedsVerification:(char)arg1 ;
-(void)setShowRandomView:(char)arg1 ;
-(NSButton *)passPhraseConfirmButton;
-(NSButton *)passPhraseCancelButton;
-(NSImageView *)passPhraseImageView;
-(NSTextField *)passPhraseTitle;
-(NSTextField *)passPhraseRandomCodeTextField;
-(NSSecureTextField *)passPhraseSecurityCodeTextField;
-(char)showRandomView;
-(void)setPassPhraseImageView:(NSImageView *)arg1 ;
-(void)setPassPhraseTitle:(NSTextField *)arg1 ;
-(void)setPassPhraseSecurityCodeTextField:(NSSecureTextField *)arg1 ;
-(void)setPassPhraseRandomCodeTextField:(NSTextField *)arg1 ;
-(NSButton *)passPhraseHelpButton;
-(void)setPassPhraseHelpButton:(NSButton *)arg1 ;
-(void)setPassPhraseCancelButton:(NSButton *)arg1 ;
-(void)setPassPhraseConfirmButton:(NSButton *)arg1 ;
-(void)_clearSecureSecurityCode;
-(id)_securityCodeFromEntryField;
-(MMLinkTextField *)passPhraseMessageTextField;
-(MMLinkTextField *)passPhraseAlternateMessageTextField;
-(NSLayoutConstraint *)hideErrorConstraint;
-(NSProgressIndicator *)passPhraseProgressIndicator;
-(void)setPassPhraseMessageTextField:(MMLinkTextField *)arg1 ;
-(void)setPassPhraseAlternateMessageTextField:(MMLinkTextField *)arg1 ;
-(void)setPassPhraseProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setHideErrorConstraint:(NSLayoutConstraint *)arg1 ;
@end

