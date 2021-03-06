/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSWindowController.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class NSBundle, NSTextField, NSSecureTextField, NSButton, NSLayoutConstraint, NSString;

@interface BrowserDataImportPasswordRequestPanelController : NSWindowController <NSTextFieldDelegate> {

	char _showsWrongPasswordWarning;
	NSBundle* _importSource;
	long long _requestReason;
	NSTextField* _titleLabel;
	NSTextField* _explanationLabel;
	NSTextField* _wrongPasswordWarningLabel;
	NSSecureTextField* _passwordField;
	NSButton* _importPasswordsButton;
	NSLayoutConstraint* _warningLabelAndSecureTextFieldSpacingConstraint;

}

@property (assign,nonatomic,__weak) NSTextField * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * explanationLabel;                                             //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * wrongPasswordWarningLabel;                                    //@synthesize wrongPasswordWarningLabel=_wrongPasswordWarningLabel - In the implementation block
@property (assign,nonatomic,__weak) NSSecureTextField * passwordField;                                          //@synthesize passwordField=_passwordField - In the implementation block
@property (assign,nonatomic,__weak) NSButton * importPasswordsButton;                                           //@synthesize importPasswordsButton=_importPasswordsButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * warningLabelAndSecureTextFieldSpacingConstraint;              //@synthesize warningLabelAndSecureTextFieldSpacingConstraint=_warningLabelAndSecureTextFieldSpacingConstraint - In the implementation block
@property (nonatomic,readonly) NSBundle * importSource;                                                         //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,readonly) long long requestReason;                                                         //@synthesize requestReason=_requestReason - In the implementation block
@property (assign,nonatomic) char showsWrongPasswordWarning;                                                    //@synthesize showsWrongPasswordWarning=_showsWrongPasswordWarning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close:(id)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(id)windowNibName;
-(void)windowDidLoad;
-(void)_updateTitle;
-(NSTextField *)titleLabel;
-(NSSecureTextField *)passwordField;
-(void)setTitleLabel:(NSTextField *)arg1 ;
-(void)setPasswordField:(NSSecureTextField *)arg1 ;
-(NSBundle *)importSource;
-(long long)requestReason;
-(id)initWithImportSource:(id)arg1 ;
-(void)setShowsWrongPasswordWarning:(char)arg1 ;
-(void)runModalPasswordRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importClicked:(id)arg1 ;
-(void)_updateLabels;
-(void)_updateWrongPasswordWarning;
-(id)initWithImportSource:(id)arg1 reason:(long long)arg2 ;
-(char)showsWrongPasswordWarning;
-(NSTextField *)explanationLabel;
-(void)setExplanationLabel:(NSTextField *)arg1 ;
-(NSTextField *)wrongPasswordWarningLabel;
-(void)setWrongPasswordWarningLabel:(NSTextField *)arg1 ;
-(NSButton *)importPasswordsButton;
-(void)setImportPasswordsButton:(NSButton *)arg1 ;
-(NSLayoutConstraint *)warningLabelAndSecureTextFieldSpacingConstraint;
-(void)setWarningLabelAndSecureTextFieldSpacingConstraint:(NSLayoutConstraint *)arg1 ;
@end

