/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationUI.framework/Versions/A/LocalAuthenticationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/LAUIUserPasswordFieldRemoteProtocol.h>
#import <libobjc.A.dylib/LAUIDelegate.h>
#import <libobjc.A.dylib/LAUIAuthenticationSheetWindowDelegate.h>
#import <libobjc.A.dylib/AuthenticationHintsDelegate.h>

@protocol AuthenticationHintsProvider, LAUIAuthenticationSheetDelegate;
@class NSWindow, LAUIAuthenticationSheetWindow, LAUIUserPasswordViewController, NSError, NSMutableArray, NSXPCConnection, NSMutableDictionary, NSString, NSData, NSColor, LAContext, NSDictionary, NSImageView, NSTextField, NSView, NSPopUpButton, NSButton;

@interface LAUIAuthenticationSheetController : NSViewController <LAUIUserPasswordFieldRemoteProtocol, LAUIDelegate, LAUIAuthenticationSheetWindowDelegate, AuthenticationHintsDelegate> {

	NSWindow* _window;
	LAUIAuthenticationSheetWindow* _sheet;
	/*^block*/id _completion;
	LAUIUserPasswordViewController* _passwordVC;
	NSError* _touchIdError;
	char _touchIdHasFocus;
	char _touchIdActive;
	NSMutableArray* _activeElements;
	int _noMatchCount;
	char _passwordViewVisible;
	char _isKeyWindow;
	id<AuthenticationHintsProvider> _watchProvider;
	id<AuthenticationHintsProvider> _smartCardProvider;
	NSXPCConnection* _watchConnection;
	NSXPCConnection* _smartCardConnection;
	char _smartCardActivated;
	char _smartCardInserted;
	char _watchActivated;
	NSMutableDictionary* _longNames;
	long long _previousAuthType;
	NSString* _scPamUsername;
	NSString* _scPamService;
	NSData* _scPamToken;
	char _shouldExpandOnCardInsert;
	char _canAuthenticateAsAnyAdmin;
	char _enableUserNameField;
	char _fallbackToAppPassword;
	char _touchIDAvailable;
	char _touchIDInhibited;
	char _smartCardInhibited;
	char _watchInhibited;
	char _passwordExtractable;
	char _pinAuthentication;
	char _skipUserCredentialsVerification;
	NSString* _authTitle;
	NSString* _authSubTitle;
	NSString* _authSubTitleNoTouchID;
	NSColor* _authTitleColor;
	NSColor* _authSubTitleColor;
	NSString* _unlockButtonTitle;
	NSString* _usePasswordButtonTitle;
	NSString* _passwordTitle;
	NSString* _userName;
	id<LAUIAuthenticationSheetDelegate> _delegate;
	NSString* _authDFRPrompt;
	LAContext* _authContext;
	NSString* _pamUsername;
	NSString* _pamService;
	NSData* _pamToken;
	NSDictionary* _backoffStateDict;
	long long _authorizationType;
	NSString* _callerIconBundlePath;
	NSString* _localizedCallerName;
	NSImageView* _appIcon;
	NSImageView* _authIcon;
	NSTextField* _authTitleLabel;
	NSTextField* _authSubTitleLabel;
	NSView* _footerContainerView;
	NSView* _usePasswordOrCancelFooter;
	NSView* _usernameAndPasswordFooter;
	NSTextField* _usernameField;
	NSTextField* _usernameLabel;
	NSView* _passwordFieldContainer;
	NSTextField* _passwordLabel;
	NSPopUpButton* _smartCardPopup;
	NSButton* _cancelButton;
	NSButton* _unlockButton;
	NSButton* _usePasswordButton;

}

@property (assign,nonatomic,__weak) NSImageView * appIcon;                                        //@synthesize appIcon=_appIcon - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * authIcon;                                       //@synthesize authIcon=_authIcon - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * authTitleLabel;                                 //@synthesize authTitleLabel=_authTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * authSubTitleLabel;                              //@synthesize authSubTitleLabel=_authSubTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) NSView * footerContainerView;                                 //@synthesize footerContainerView=_footerContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSView * usePasswordOrCancelFooter;                           //@synthesize usePasswordOrCancelFooter=_usePasswordOrCancelFooter - In the implementation block
@property (assign,nonatomic,__weak) NSView * usernameAndPasswordFooter;                           //@synthesize usernameAndPasswordFooter=_usernameAndPasswordFooter - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * usernameField;                                  //@synthesize usernameField=_usernameField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * usernameLabel;                                  //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) NSView * passwordFieldContainer;                              //@synthesize passwordFieldContainer=_passwordFieldContainer - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * passwordLabel;                                  //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * smartCardPopup;                               //@synthesize smartCardPopup=_smartCardPopup - In the implementation block
@property (assign,nonatomic,__weak) NSButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * unlockButton;                                      //@synthesize unlockButton=_unlockButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * usePasswordButton;                                 //@synthesize usePasswordButton=_usePasswordButton - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIAuthenticationSheetDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char canAuthenticateAsAnyAdmin;                                      //@synthesize canAuthenticateAsAnyAdmin=_canAuthenticateAsAnyAdmin - In the implementation block
@property (nonatomic,retain) NSString * userName;                                                 //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * passwordTitle;                                            //@synthesize passwordTitle=_passwordTitle - In the implementation block
@property (assign,getter=isUserNameFieldEnabled,nonatomic) char enableUserNameField;              //@synthesize enableUserNameField=_enableUserNameField - In the implementation block
@property (nonatomic,retain) NSString * authTitle;                                                //@synthesize authTitle=_authTitle - In the implementation block
@property (nonatomic,retain) NSString * authSubTitle;                                             //@synthesize authSubTitle=_authSubTitle - In the implementation block
@property (nonatomic,retain) NSString * authSubTitleNoTouchID;                                    //@synthesize authSubTitleNoTouchID=_authSubTitleNoTouchID - In the implementation block
@property (nonatomic,retain) NSString * authDFRPrompt;                                            //@synthesize authDFRPrompt=_authDFRPrompt - In the implementation block
@property (assign,nonatomic) char fallbackToAppPassword;                                          //@synthesize fallbackToAppPassword=_fallbackToAppPassword - In the implementation block
@property (getter=isTouchIDAvailable,nonatomic,readonly) char touchIDAvailable;                   //@synthesize touchIDAvailable=_touchIDAvailable - In the implementation block
@property (assign,nonatomic) char touchIDInhibited;                                               //@synthesize touchIDInhibited=_touchIDInhibited - In the implementation block
@property (assign,nonatomic) char smartCardInhibited;                                             //@synthesize smartCardInhibited=_smartCardInhibited - In the implementation block
@property (assign,nonatomic) char watchInhibited;                                                 //@synthesize watchInhibited=_watchInhibited - In the implementation block
@property (nonatomic,retain) NSColor * authTitleColor;                                            //@synthesize authTitleColor=_authTitleColor - In the implementation block
@property (nonatomic,retain) NSColor * authSubTitleColor;                                         //@synthesize authSubTitleColor=_authSubTitleColor - In the implementation block
@property (nonatomic,retain) NSString * unlockButtonTitle;                                        //@synthesize unlockButtonTitle=_unlockButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * usePasswordButtonTitle;                                   //@synthesize usePasswordButtonTitle=_usePasswordButtonTitle - In the implementation block
@property (nonatomic,retain) LAContext * authContext;                                             //@synthesize authContext=_authContext - In the implementation block
@property (assign,getter=isPasswordExtractable,nonatomic) char passwordExtractable;               //@synthesize passwordExtractable=_passwordExtractable - In the implementation block
@property (assign,getter=isPINAuthentication,nonatomic) char pinAuthentication;                   //@synthesize pinAuthentication=_pinAuthentication - In the implementation block
@property (assign,nonatomic) char skipUserCredentialsVerification;                                //@synthesize skipUserCredentialsVerification=_skipUserCredentialsVerification - In the implementation block
@property (nonatomic,retain) NSString * pamUsername;                                              //@synthesize pamUsername=_pamUsername - In the implementation block
@property (nonatomic,retain) NSString * pamService;                                               //@synthesize pamService=_pamService - In the implementation block
@property (nonatomic,retain) NSData * pamToken;                                                   //@synthesize pamToken=_pamToken - In the implementation block
@property (nonatomic,retain) NSDictionary * backoffStateDict;                                     //@synthesize backoffStateDict=_backoffStateDict - In the implementation block
@property (readonly) long long authorizationType;                                                 //@synthesize authorizationType=_authorizationType - In the implementation block
@property (nonatomic,copy) NSString * callerIconBundlePath;                                       //@synthesize callerIconBundlePath=_callerIconBundlePath - In the implementation block
@property (nonatomic,copy) NSString * localizedCallerName;                                        //@synthesize localizedCallerName=_localizedCallerName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<LAUIAuthenticationSheetDelegate>)delegate;
-(void)setDelegate:(id<LAUIAuthenticationSheetDelegate>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(NSString *)userName;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(id)nibBundle;
-(void)viewDidLoad;
-(void)updateTitles;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(LAContext *)authContext;
-(void)setAuthContext:(LAContext *)arg1 ;
-(NSImageView *)appIcon;
-(void)setAppIcon:(NSImageView *)arg1 ;
-(NSTextField *)usernameField;
-(void)setUsernameField:(NSTextField *)arg1 ;
-(NSString *)passwordTitle;
-(void)setPasswordTitle:(NSString *)arg1 ;
-(void)setUsernameLabel:(NSTextField *)arg1 ;
-(NSTextField *)usernameLabel;
-(void)setPasswordLabel:(NSTextField *)arg1 ;
-(NSTextField *)passwordLabel;
-(void)setTouchIDInhibited:(char)arg1 ;
-(void)setAuthTitle:(NSString *)arg1 ;
-(void)setAuthSubTitle:(NSString *)arg1 ;
-(NSString *)callerIconBundlePath;
-(void)setCallerIconBundlePath:(NSString *)arg1 ;
-(void)setUnlockButtonTitle:(NSString *)arg1 ;
-(void)beginSheetForWindow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)localizedCallerName;
-(void)setFallbackToAppPassword:(char)arg1 ;
-(void)setAuthDFRPrompt:(NSString *)arg1 ;
-(void)endSheet;
-(void)setLocalizedCallerName:(NSString *)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCanAuthenticateAsAnyAdmin:(char)arg1 ;
-(void)setPamUsername:(NSString *)arg1 ;
-(void)setPamService:(NSString *)arg1 ;
-(void)setPamToken:(NSData *)arg1 ;
-(void)externalizedContextInReply:(/*^block*/id)arg1 ;
-(void)didVerifyPassword;
-(void)didSubmitWrongPassword:(char)arg1 ;
-(void)requestCancelAuthentication;
-(void)didSubmitUnverifiedData:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)didShowAccountBackoffBlocked;
-(void)didShowAccountUnblocked;
-(void)enterPressed;
-(void)switchToPasswordViewAnimated:(char)arg1 touchIDAvailable:(char)arg2 ;
-(void)_startTouchID;
-(void)updateSheetIcon;
-(id)_currentUserName:(char)arg1 ;
-(id)_sheetSubtitle;
-(id)_sheetUsePasswordButtonTitle;
-(id)_sheetPasswordTitle;
-(char)_isTouchIDAvailable:(id*)arg1 ;
-(id)_createProviderWithServiceName:(id)arg1 options:(unsigned long long)arg2 connection:(id*)arg3 ;
-(void)setUpViewWithCompletion:(/*^block*/id)arg1 ;
-(void)submitPamUser;
-(void)_finishUiWithError:(id)arg1 ;
-(void)_createTouchBar;
-(void)_createPasswordViewWithReply:(/*^block*/id)arg1 ;
-(void)usePasswordButtonAction:(id)arg1 ;
-(void)event:(long long)arg1 eventHints:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_startStopTouchID:(char)arg1 ;
-(void)sessionDidBecomeActive:(id)arg1 ;
-(void)sessionDidResignActive:(id)arg1 ;
-(long long)_touchIDPolicy;
-(void)_stopTouchID;
-(void)cancelButtonAction:(id)arg1 ;
-(void)resetAHPValues;
-(NSDictionary *)backoffStateDict;
-(void)enabledObjects:(id)arg1 forView:(id)arg2 ;
-(id)_longNameForShortName:(id)arg1 ;
-(char)_wasCanceledOnWatch:(id)arg1 ;
-(void)watchResetUI;
-(void)didEditSmartCardUser:(id)arg1 ;
-(void)didEditUsername:(id)arg1 ;
-(void)unlockButtonAction:(id)arg1 ;
-(void)setEnableUserNameField:(char)arg1 ;
-(NSString *)authTitle;
-(NSString *)authSubTitle;
-(NSString *)authSubTitleNoTouchID;
-(void)setAuthSubTitleNoTouchID:(NSString *)arg1 ;
-(NSColor *)authTitleColor;
-(void)setAuthTitleColor:(NSColor *)arg1 ;
-(NSColor *)authSubTitleColor;
-(void)setAuthSubTitleColor:(NSColor *)arg1 ;
-(NSString *)unlockButtonTitle;
-(NSString *)usePasswordButtonTitle;
-(void)setUsePasswordButtonTitle:(NSString *)arg1 ;
-(void)setSkipUserCredentialsVerification:(char)arg1 ;
-(char)canAuthenticateAsAnyAdmin;
-(char)isUserNameFieldEnabled;
-(NSString *)authDFRPrompt;
-(char)fallbackToAppPassword;
-(char)isTouchIDAvailable;
-(char)touchIDInhibited;
-(char)smartCardInhibited;
-(void)setSmartCardInhibited:(char)arg1 ;
-(char)watchInhibited;
-(void)setWatchInhibited:(char)arg1 ;
-(char)isPasswordExtractable;
-(void)setPasswordExtractable:(char)arg1 ;
-(char)isPINAuthentication;
-(void)setPinAuthentication:(char)arg1 ;
-(char)skipUserCredentialsVerification;
-(NSString *)pamUsername;
-(NSString *)pamService;
-(NSData *)pamToken;
-(void)setBackoffStateDict:(NSDictionary *)arg1 ;
-(long long)authorizationType;
-(NSImageView *)authIcon;
-(void)setAuthIcon:(NSImageView *)arg1 ;
-(NSTextField *)authTitleLabel;
-(void)setAuthTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)authSubTitleLabel;
-(void)setAuthSubTitleLabel:(NSTextField *)arg1 ;
-(NSView *)footerContainerView;
-(void)setFooterContainerView:(NSView *)arg1 ;
-(NSView *)usePasswordOrCancelFooter;
-(void)setUsePasswordOrCancelFooter:(NSView *)arg1 ;
-(NSView *)usernameAndPasswordFooter;
-(void)setUsernameAndPasswordFooter:(NSView *)arg1 ;
-(NSView *)passwordFieldContainer;
-(void)setPasswordFieldContainer:(NSView *)arg1 ;
-(NSPopUpButton *)smartCardPopup;
-(void)setSmartCardPopup:(NSPopUpButton *)arg1 ;
-(NSButton *)unlockButton;
-(void)setUnlockButton:(NSButton *)arg1 ;
-(NSButton *)usePasswordButton;
-(void)setUsePasswordButton:(NSButton *)arg1 ;
@end

