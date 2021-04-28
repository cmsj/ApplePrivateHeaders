/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACDEClient-Structs.h>
#import <ACDEClient/ACDESignInDialogDelegate.h>
#import <ACDEClient/ACDEUIControllerProtocol.h>

@protocol ACDEAuthenticationRequest, ACDEUIControllerDelegate;
@class NSImage, NSString, NSWindow, ACDStateManager, ACDSignInViewController, ACDDeviceListViewController, ACDVerifyCodeViewController;

@interface ACDUIController : NSObject <ACDESignInDialogDelegate, ACDEUIControllerProtocol> {

	NSWindow* _window;
	NSWindow* _parentWindow;
	ACDStateManager* _stateManager;
	ACDSignInViewController* _signInViewController;
	ACDDeviceListViewController* _deviceListViewController;
	ACDVerifyCodeViewController* _verifyCodeViewController;
	id<ACDEAuthenticationRequest> _request;
	NSImage* _logoImage;
	NSString* _signInDialogTitle;
	NSString* _signInDialogDescription;
	id<ACDEUIControllerDelegate> _delegate;
	NSModalSessionRef _modalSession;

}

@property (nonatomic,retain) NSWindow * window;                                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSWindow * parentWindow;                                             //@synthesize parentWindow=_parentWindow - In the implementation block
@property (nonatomic,retain) ACDSignInViewController * signInViewController;                      //@synthesize signInViewController=_signInViewController - In the implementation block
@property (nonatomic,retain) ACDDeviceListViewController * deviceListViewController;              //@synthesize deviceListViewController=_deviceListViewController - In the implementation block
@property (nonatomic,retain) ACDVerifyCodeViewController * verifyCodeViewController;              //@synthesize verifyCodeViewController=_verifyCodeViewController - In the implementation block
@property (assign,nonatomic) NSModalSessionRef modalSession;                                      //@synthesize modalSession=_modalSession - In the implementation block
@property (nonatomic,retain) ACDStateManager * stateManager;                                      //@synthesize stateManager=_stateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ACDEUIControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<ACDEAuthenticationRequest> request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSImage * logoImage;                                                 //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) NSString * signInDialogTitle;                                        //@synthesize signInDialogTitle=_signInDialogTitle - In the implementation block
@property (nonatomic,retain) NSString * signInDialogDescription;                                  //@synthesize signInDialogDescription=_signInDialogDescription - In the implementation block
@property (nonatomic,readonly) char isWidgetShown; 
@property (assign,nonatomic) NSString * password; 
-(void)dealloc;
-(id<ACDEUIControllerDelegate>)delegate;
-(void)setDelegate:(id<ACDEUIControllerDelegate>)arg1 ;
-(NSString *)password;
-(NSWindow *)window;
-(NSWindow *)parentWindow;
-(id<ACDEAuthenticationRequest>)request;
-(void)setPassword:(NSString *)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)setRequest:(id<ACDEAuthenticationRequest>)arg1 ;
-(NSImage *)logoImage;
-(void)setLogoImage:(NSImage *)arg1 ;
-(ACDStateManager *)stateManager;
-(void)setStateManager:(ACDStateManager *)arg1 ;
-(NSString *)signInDialogTitle;
-(void)setSignInDialogTitle:(NSString *)arg1 ;
-(NSString *)signInDialogDescription;
-(void)setSignInDialogDescription:(NSString *)arg1 ;
-(void)onSignIn:(id)arg1 ;
-(void)onSignInCancel:(id)arg1 ;
-(void)onForgotAppleID:(id)arg1 ;
-(void)onForgotPassword:(id)arg1 ;
-(void)onShowHelp:(id)arg1 ;
-(void)onCreateAppleID:(id)arg1 ;
-(char)isWidgetShown;
-(void)showSignInWidgetWithParentWindow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideSignInWidgetWithCompletion:(/*^block*/id)arg1 ;
-(void)showAlertMessage:(id)arg1 errorTag:(long long)arg2 ;
-(void)setSignInViewController:(ACDSignInViewController *)arg1 ;
-(void)setDeviceListViewController:(ACDDeviceListViewController *)arg1 ;
-(void)setVerifyCodeViewController:(ACDVerifyCodeViewController *)arg1 ;
-(ACDSignInViewController *)signInViewController;
-(void)setModalSession:(NSModalSessionRef)arg1 ;
-(NSModalSessionRef)modalSession;
-(void)onManageAppleID:(id)arg1 ;
-(ACDDeviceListViewController *)deviceListViewController;
-(ACDVerifyCodeViewController *)verifyCodeViewController;
@end
