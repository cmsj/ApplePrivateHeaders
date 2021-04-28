/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKSignInPromptViewController.h>

@class NSImageCell, NSButton, NSTextField, AKPaddedTextFieldCell, NSView, NSProgressIndicator, NSLayoutConstraint;

@interface AKDefaultSignInPromptViewController : AKSignInPromptViewController {

	char _showReauthentication;
	long long _selectedButton;
	NSImageCell* _imageView;
	NSButton* _forgotButtonForReauthentication;
	NSButton* _helpButton;
	NSTextField* _usernameTitle;
	AKPaddedTextFieldCell* _paddedUsernameCell;
	NSTextField* _passwordTitle;
	NSTextField* _passwordFieldForReauthentication;
	NSButton* _rememberPasswordCheckbox;
	NSView* _standardAuthenticationLoginView;
	NSView* _reauthenticationLoginView;
	NSProgressIndicator* _progressIndicatorForStandardAuthentication;
	NSLayoutConstraint* _standardAuthenticationForgotPasswordBottom;
	NSLayoutConstraint* _titleToMessageConstraint;
	NSLayoutConstraint* _messageToErrorConstraint;
	NSLayoutConstraint* _titleWidthConstraint;
	NSLayoutConstraint* _usernameToForgotConstraint;
	NSView* _standardAuthenticationLoginUsernamePassword;
	NSLayoutConstraint* _messageToViewConstraint;
	NSLayoutConstraint* _titleToViewConstraint;
	NSLayoutConstraint* _titleToErrorConstraint;
	NSLayoutConstraint* _errorToViewConstraint;
	NSLayoutConstraint* _standardAuthenticationLoginViewHeight;
	NSView* _authenticationView;

}

@property (assign) char showReauthentication;                                                               //@synthesize showReauthentication=_showReauthentication - In the implementation block
@property (nonatomic,retain) NSImageCell * imageView;                                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSButton * forgotButtonForReauthentication;                                    //@synthesize forgotButtonForReauthentication=_forgotButtonForReauthentication - In the implementation block
@property (nonatomic,retain) NSButton * helpButton;                                                         //@synthesize helpButton=_helpButton - In the implementation block
@property (nonatomic,retain) NSTextField * usernameTitle;                                                   //@synthesize usernameTitle=_usernameTitle - In the implementation block
@property (nonatomic,retain) AKPaddedTextFieldCell * paddedUsernameCell;                                    //@synthesize paddedUsernameCell=_paddedUsernameCell - In the implementation block
@property (nonatomic,retain) NSTextField * passwordTitle;                                                   //@synthesize passwordTitle=_passwordTitle - In the implementation block
@property (nonatomic,retain) NSTextField * passwordFieldForReauthentication;                                //@synthesize passwordFieldForReauthentication=_passwordFieldForReauthentication - In the implementation block
@property (nonatomic,retain) NSButton * rememberPasswordCheckbox;                                           //@synthesize rememberPasswordCheckbox=_rememberPasswordCheckbox - In the implementation block
@property (nonatomic,retain) NSView * standardAuthenticationLoginView;                                      //@synthesize standardAuthenticationLoginView=_standardAuthenticationLoginView - In the implementation block
@property (nonatomic,retain) NSView * reauthenticationLoginView;                                            //@synthesize reauthenticationLoginView=_reauthenticationLoginView - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * progressIndicatorForStandardAuthentication;              //@synthesize progressIndicatorForStandardAuthentication=_progressIndicatorForStandardAuthentication - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * standardAuthenticationForgotPasswordBottom;               //@synthesize standardAuthenticationForgotPasswordBottom=_standardAuthenticationForgotPasswordBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToMessageConstraint;                                 //@synthesize titleToMessageConstraint=_titleToMessageConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageToErrorConstraint;                                 //@synthesize messageToErrorConstraint=_messageToErrorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleWidthConstraint;                                     //@synthesize titleWidthConstraint=_titleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * usernameToForgotConstraint;                               //@synthesize usernameToForgotConstraint=_usernameToForgotConstraint - In the implementation block
@property (nonatomic,retain) NSView * standardAuthenticationLoginUsernamePassword;                          //@synthesize standardAuthenticationLoginUsernamePassword=_standardAuthenticationLoginUsernamePassword - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageToViewConstraint;                                  //@synthesize messageToViewConstraint=_messageToViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToViewConstraint;                                    //@synthesize titleToViewConstraint=_titleToViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToErrorConstraint;                                   //@synthesize titleToErrorConstraint=_titleToErrorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * errorToViewConstraint;                                    //@synthesize errorToViewConstraint=_errorToViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * standardAuthenticationLoginViewHeight;                    //@synthesize standardAuthenticationLoginViewHeight=_standardAuthenticationLoginViewHeight - In the implementation block
@property (assign,nonatomic) NSView * authenticationView;                                                   //@synthesize authenticationView=_authenticationView - In the implementation block
-(id)init;
-(void)setMessage:(id)arg1 ;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(NSImageCell *)imageView;
-(void)setImageView:(NSImageCell *)arg1 ;
-(void)stopSpinner;
-(id)_activePasswordField;
-(id)_activeForgotButton;
-(id)_activeProgressIndicator;
-(void)enablePasswordInputField;
-(void)showError:(id)arg1 ;
-(void)startSpinner;
-(long long)selectedButton;
-(void)setSelectedButton:(long long)arg1 ;
-(void)_configureWindow;
-(void)_hideError;
-(void)forgotPasswordPressed:(id)arg1 ;
-(NSTextField *)passwordTitle;
-(void)defaultButtonPressed:(id)arg1 ;
-(NSTextField *)usernameTitle;
-(void)setUsernameTitle:(NSTextField *)arg1 ;
-(void)setPasswordTitle:(NSTextField *)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(void)otherButtonPressed:(id)arg1 ;
-(void)_setPasswordFieldHidden:(char)arg1 animated:(char)arg2 ;
-(void)setShowReauthentication:(char)arg1 ;
-(NSButton *)rememberPasswordCheckbox;
-(NSLayoutConstraint *)standardAuthenticationForgotPasswordBottom;
-(NSButton *)helpButton;
-(void)_updatePlaceholderIfneeded;
-(NSView *)standardAuthenticationLoginUsernamePassword;
-(void)setUsernameToForgotConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)usernameToForgotConstraint;
-(NSView *)standardAuthenticationLoginView;
-(void)setAuthenticationView:(NSView *)arg1 ;
-(char)showReauthentication;
-(NSView *)reauthenticationLoginView;
-(NSLayoutConstraint *)titleWidthConstraint;
-(NSView *)authenticationView;
-(NSProgressIndicator *)progressIndicatorForStandardAuthentication;
-(NSLayoutConstraint *)messageToViewConstraint;
-(void)setErrorToViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToErrorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageToViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleToMessageConstraint;
-(NSLayoutConstraint *)messageToErrorConstraint;
-(NSLayoutConstraint *)errorToViewConstraint;
-(NSLayoutConstraint *)titleToViewConstraint;
-(NSLayoutConstraint *)titleToErrorConstraint;
-(char)_isRememberPasswordSelected;
-(NSLayoutConstraint *)standardAuthenticationLoginViewHeight;
-(AKPaddedTextFieldCell *)paddedUsernameCell;
-(NSButton *)forgotButtonForReauthentication;
-(NSTextField *)passwordFieldForReauthentication;
-(id)initWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)helpButtonPressed:(id)arg1 ;
-(void)setForgotButtonForReauthentication:(NSButton *)arg1 ;
-(void)setHelpButton:(NSButton *)arg1 ;
-(void)setPaddedUsernameCell:(AKPaddedTextFieldCell *)arg1 ;
-(void)setPasswordFieldForReauthentication:(NSTextField *)arg1 ;
-(void)setRememberPasswordCheckbox:(NSButton *)arg1 ;
-(void)setStandardAuthenticationLoginView:(NSView *)arg1 ;
-(void)setReauthenticationLoginView:(NSView *)arg1 ;
-(void)setProgressIndicatorForStandardAuthentication:(NSProgressIndicator *)arg1 ;
-(void)setStandardAuthenticationForgotPasswordBottom:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToMessageConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageToErrorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStandardAuthenticationLoginUsernamePassword:(NSView *)arg1 ;
-(void)setStandardAuthenticationLoginViewHeight:(NSLayoutConstraint *)arg1 ;
@end
