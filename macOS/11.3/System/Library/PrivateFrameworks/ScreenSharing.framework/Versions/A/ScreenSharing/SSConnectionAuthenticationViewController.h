/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@protocol SSConnectionPromptObserver;
@class NSObject, NSTextField, NSMatrix, NSView, NSLayoutConstraint, NSSecureTextField, NSButton, NSProgressIndicator, NSString;

@interface SSConnectionAuthenticationViewController : NSViewController <NSTextFieldDelegate> {

	NSObject*<SSConnectionPromptObserver> mPromptObserver;
	double toggleExpandAmount;
	NSTextField* mHostNameLabel;
	NSMatrix* mGuestOrUserMatrix;
	NSView* mNamePassContainer;
	NSLayoutConstraint* mNamePassTopConstraint;
	NSLayoutConstraint* mNamePassBottomConstraint;
	NSLayoutConstraint* mNamePassLeftConstraint;
	NSLayoutConstraint* mNamePassRightConstraint;
	NSTextField* mUsernameLabel;
	NSTextField* mUsernameField;
	NSTextField* mPasswordLabel;
	NSSecureTextField* mPasswordField;
	NSButton* mSaveToKeychainCheckbox;
	NSButton* mConnectButton;
	NSProgressIndicator* mConnectingProgressSpinner;
	NSTextField* mConnectingText;
	NSString* _unlocalizedKeyString;

}

@property (assign) NSString * unlocalizedKeyString;                               //@synthesize unlocalizedKeyString=_unlocalizedKeyString - In the implementation block
@property (assign) id<SSConnectionPromptObserver> promptObserver; 
@property (assign) NSTextField * mHostNameLabel; 
@property (assign) NSMatrix * mGuestOrUserMatrix; 
@property (assign) NSView * mNamePassContainer; 
@property (assign) NSLayoutConstraint * mNamePassTopConstraint; 
@property (assign) NSLayoutConstraint * mNamePassBottomConstraint; 
@property (assign) NSLayoutConstraint * mNamePassLeftConstraint; 
@property (assign) NSLayoutConstraint * mNamePassRightConstraint; 
@property (assign) NSTextField * mUsernameLabel; 
@property (assign) NSTextField * mUsernameField; 
@property (assign) NSTextField * mPasswordLabel; 
@property (assign) NSSecureTextField * mPasswordField; 
@property (assign) NSButton * mSaveToKeychainCheckbox; 
@property (assign) NSButton * mConnectButton; 
@property (assign) NSProgressIndicator * mConnectingProgressSpinner; 
@property (assign) NSTextField * mConnectingText; 
@property (assign) NSString * username; 
@property (assign) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)setPromptObserver:(id<SSConnectionPromptObserver>)arg1 ;
-(void)setUsername:(id)arg1 andPassword:(id)arg2 fromKeychain:(char)arg3 ;
-(NSSecureTextField *)mPasswordField;
-(char)shouldConnectAsGuest;
-(char)shouldSaveCredentialsToKeychain;
-(void)setIsConnecting:(char)arg1 ;
-(char)userPassRadiosVisible;
-(NSTextField *)mUsernameField;
-(void)setHostName:(id)arg1 isVNC:(char)arg2 ;
-(void)setUnlocalizedKeyString:(NSString *)arg1 ;
-(NSMatrix *)mGuestOrUserMatrix;
-(NSButton *)mSaveToKeychainCheckbox;
-(NSButton *)mConnectButton;
-(NSProgressIndicator *)mConnectingProgressSpinner;
-(NSTextField *)mConnectingText;
-(NSString *)unlocalizedKeyString;
-(NSTextField *)mHostNameLabel;
-(void)radioClicked:(id)arg1 ;
-(void)connectClicked:(id)arg1 ;
-(void)adjustViewHeightBy:(double)arg1 ;
-(id<SSConnectionPromptObserver>)promptObserver;
-(void)setMHostNameLabel:(NSTextField *)arg1 ;
-(void)setMGuestOrUserMatrix:(NSMatrix *)arg1 ;
-(NSView *)mNamePassContainer;
-(void)setMNamePassContainer:(NSView *)arg1 ;
-(NSLayoutConstraint *)mNamePassTopConstraint;
-(void)setMNamePassTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassBottomConstraint;
-(void)setMNamePassBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassLeftConstraint;
-(void)setMNamePassLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassRightConstraint;
-(void)setMNamePassRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTextField *)mUsernameLabel;
-(void)setMUsernameLabel:(NSTextField *)arg1 ;
-(void)setMUsernameField:(NSTextField *)arg1 ;
-(NSTextField *)mPasswordLabel;
-(void)setMPasswordLabel:(NSTextField *)arg1 ;
-(void)setMPasswordField:(NSSecureTextField *)arg1 ;
-(void)setMSaveToKeychainCheckbox:(NSButton *)arg1 ;
-(void)setMConnectButton:(NSButton *)arg1 ;
-(void)setMConnectingProgressSpinner:(NSProgressIndicator *)arg1 ;
-(void)setMConnectingText:(NSTextField *)arg1 ;
@end

