/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LUIPopoverViewController.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class NSTextField, NSSecureTextField, NSButton, NSProgressIndicator, NSString;

@interface LUIAppleIDViewController : LUIPopoverViewController <NSTextFieldDelegate> {

	NSTextField* _titleTextField;
	NSTextField* _infoTextField;
	NSTextField* _appleIDLabel;
	NSTextField* _appleIDTextField;
	NSTextField* _passwordLabel;
	NSSecureTextField* _passwordSecureTextField;
	NSButton* _cancelButton;
	NSButton* _resetPasswordButton;
	NSProgressIndicator* _progressIndicator;

}

@property (assign) NSTextField * titleTextField;                             //@synthesize titleTextField=_titleTextField - In the implementation block
@property (assign) NSTextField * infoTextField;                              //@synthesize infoTextField=_infoTextField - In the implementation block
@property (assign) NSTextField * appleIDLabel;                               //@synthesize appleIDLabel=_appleIDLabel - In the implementation block
@property (assign) NSTextField * appleIDTextField;                           //@synthesize appleIDTextField=_appleIDTextField - In the implementation block
@property (assign) NSTextField * passwordLabel;                              //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (assign) NSSecureTextField * passwordSecureTextField;              //@synthesize passwordSecureTextField=_passwordSecureTextField - In the implementation block
@property (assign) NSButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) NSButton * resetPasswordButton;                           //@synthesize resetPasswordButton=_resetPasswordButton - In the implementation block
@property (assign) NSProgressIndicator * progressIndicator;                  //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateResetPasswordButton;
-(id)appleIDPassword;
-(void)selectAppropriateFirstResponder;
-(void)setCancelButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setResetPasswordButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(NSTextField *)appleIDTextField;
-(void)setAppleIDTextField:(NSTextField *)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(char)isTransient;
-(NSProgressIndicator *)progressIndicator;
-(NSButton *)cancelButton;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(NSTextField *)titleTextField;
-(id)appleID;
-(void)prepareForDisplay;
-(void)setPasswordLabel:(NSTextField *)arg1 ;
-(NSTextField *)passwordLabel;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(void)stopProgressIndicator;
-(void)startProgressIndicator;
-(void)_layoutContentView;
-(NSSecureTextField *)passwordSecureTextField;
-(void)setPasswordSecureTextField:(NSSecureTextField *)arg1 ;
-(NSTextField *)infoTextField;
-(void)setInfoTextField:(NSTextField *)arg1 ;
-(NSButton *)resetPasswordButton;
-(void)setResetPasswordButton:(NSButton *)arg1 ;
-(NSTextField *)appleIDLabel;
-(void)setAppleIDLabel:(NSTextField *)arg1 ;
@end

