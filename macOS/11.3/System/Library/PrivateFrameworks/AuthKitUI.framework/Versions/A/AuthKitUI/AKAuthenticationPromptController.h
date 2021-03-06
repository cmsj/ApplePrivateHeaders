/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKPromptWindowController.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <AuthKitUI/AuthWebViewDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>

@class NSView, NSString, AKServerRequestConfiguration, CDPEnrollViewController, AKIDPHandler, NSImageView, AKDefaultSignInPromptViewController, AKLargeSignInPromptViewController, AKTooManyAttemptsController, AKSecondFactorCodeEntryController, AKNoCodeReceivedController, AKKeepUsingController, AKAuthWebTabView, AKIDPProvidedSignInViewController, NSMutableArray, NSTouchBar;

@interface AKAuthenticationPromptController : AKPromptWindowController <NSTouchBarProvider, AuthWebViewDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate> {

	char _useLargePrompt;
	char __currentlyActive;
	NSView* _view;
	NSString* _windowTitle;
	NSView* _hostView;
	long long _mode;
	AKServerRequestConfiguration* _serverRequestConfiguration;
	id _clientInfo;
	NSView* _icscView;
	CDPEnrollViewController* _iCSCController;
	AKIDPHandler* _idpHandler;
	/*^block*/id _passwordHandler;
	NSImageView* _highlightingView;
	AKDefaultSignInPromptViewController* _signInPromptController;
	AKLargeSignInPromptViewController* _bigSignInPromptController;
	AKTooManyAttemptsController* _tooManyAttemptsController;
	AKSecondFactorCodeEntryController* _secondFactorController;
	AKNoCodeReceivedController* _noCodeReceivedController;
	AKKeepUsingController* _keepUsingController;
	AKAuthWebTabView* _webviewController;
	AKIDPProvidedSignInViewController* _idpViewController;
	NSView* _signInView;
	NSView* _tooManyAttemptsView;
	NSView* _secondFactorView;
	NSView* _noCodeReceivedView;
	NSView* _keepUsingView;
	NSView* _webView;
	NSMutableArray* _viewStack;
	long long _previousMode;

}

@property (assign,nonatomic) char _currentlyActive;                                            //@synthesize _currentlyActive=__currentlyActive - In the implementation block
@property (retain) NSImageView * highlightingView;                                             //@synthesize highlightingView=_highlightingView - In the implementation block
@property (retain) AKDefaultSignInPromptViewController * signInPromptController;               //@synthesize signInPromptController=_signInPromptController - In the implementation block
@property (retain) AKLargeSignInPromptViewController * bigSignInPromptController;              //@synthesize bigSignInPromptController=_bigSignInPromptController - In the implementation block
@property (retain) AKTooManyAttemptsController * tooManyAttemptsController;                    //@synthesize tooManyAttemptsController=_tooManyAttemptsController - In the implementation block
@property (retain) AKSecondFactorCodeEntryController * secondFactorController;                 //@synthesize secondFactorController=_secondFactorController - In the implementation block
@property (retain) AKNoCodeReceivedController * noCodeReceivedController;                      //@synthesize noCodeReceivedController=_noCodeReceivedController - In the implementation block
@property (retain) AKKeepUsingController * keepUsingController;                                //@synthesize keepUsingController=_keepUsingController - In the implementation block
@property (retain) AKAuthWebTabView * webviewController;                                       //@synthesize webviewController=_webviewController - In the implementation block
@property (retain) AKIDPProvidedSignInViewController * idpViewController;                      //@synthesize idpViewController=_idpViewController - In the implementation block
@property (retain) NSView * signInView;                                                        //@synthesize signInView=_signInView - In the implementation block
@property (retain) NSView * tooManyAttemptsView;                                               //@synthesize tooManyAttemptsView=_tooManyAttemptsView - In the implementation block
@property (retain) NSView * secondFactorView;                                                  //@synthesize secondFactorView=_secondFactorView - In the implementation block
@property (retain) NSView * noCodeReceivedView;                                                //@synthesize noCodeReceivedView=_noCodeReceivedView - In the implementation block
@property (retain) NSView * keepUsingView;                                                     //@synthesize keepUsingView=_keepUsingView - In the implementation block
@property (retain) NSView * webView;                                                           //@synthesize webView=_webView - In the implementation block
@property (retain) NSMutableArray * viewStack;                                                 //@synthesize viewStack=_viewStack - In the implementation block
@property (assign) long long previousMode;                                                     //@synthesize previousMode=_previousMode - In the implementation block
@property (retain) NSView * view;                                                              //@synthesize view=_view - In the implementation block
@property (retain) NSString * windowTitle;                                                     //@synthesize windowTitle=_windowTitle - In the implementation block
@property (__weak) NSView * hostView;                                                          //@synthesize hostView=_hostView - In the implementation block
@property (readonly) long long mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign) char useLargePrompt;                                                        //@synthesize useLargePrompt=_useLargePrompt - In the implementation block
@property (retain) AKServerRequestConfiguration * serverRequestConfiguration;                  //@synthesize serverRequestConfiguration=_serverRequestConfiguration - In the implementation block
@property (retain) id clientInfo;                                                              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (retain) NSView * icscView;                                                          //@synthesize icscView=_icscView - In the implementation block
@property (retain) CDPEnrollViewController * iCSCController;                                   //@synthesize iCSCController=_iCSCController - In the implementation block
@property (retain) AKIDPHandler * idpHandler;                                                  //@synthesize idpHandler=_idpHandler - In the implementation block
@property (copy) id passwordHandler;                                                           //@synthesize passwordHandler=_passwordHandler - In the implementation block
@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMode:(long long)arg1 ;
-(NSView *)view;
-(void)runModal;
-(long long)mode;
-(void)setView:(NSView *)arg1 ;
-(NSTouchBar *)touchBar;
-(void)awakeFromNib;
-(NSString *)windowTitle;
-(NSView *)hostView;
-(void)present;
-(NSView *)webView;
-(id)clientInfo;
-(void)setClientInfo:(id)arg1 ;
-(void)setWebView:(NSView *)arg1 ;
-(char)_currentlyActive;
-(void)set_currentlyActive:(char)arg1 ;
-(void)setWebviewController:(AKAuthWebTabView *)arg1 ;
-(AKAuthWebTabView *)webviewController;
-(void)switchToView:(id)arg1 ;
-(void)endWebView:(id)arg1 ;
-(void)sizeChangedFrom:(CGSize)arg1 toSize:(CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4 ;
-(void)loadFailed:(id)arg1 withError:(id)arg2 ;
-(void)skipAndContinueSignIn;
-(AKIDPHandler *)idpHandler;
-(void)setIdpHandler:(AKIDPHandler *)arg1 ;
-(id)passwordHandler;
-(void)setPasswordHandler:(id)arg1 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(AKServerRequestConfiguration *)serverRequestConfiguration;
-(id)initAtMode:(long long)arg1 ;
-(void)setViewStack:(NSMutableArray *)arg1 ;
-(void)windowWillClose;
-(void)_setupHighlightingView;
-(id)_viewForMode:(long long)arg1 ;
-(void)_addSubView:(id)arg1 ;
-(void)settleNewMode;
-(id)currentViewController;
-(void)setupViewsForActiveMode;
-(char)isViewBasedContext;
-(char)useLargePrompt;
-(void)setPreviousMode:(long long)arg1 ;
-(NSMutableArray *)viewStack;
-(AKIDPProvidedSignInViewController *)idpViewController;
-(void)setIdpViewController:(AKIDPProvidedSignInViewController *)arg1 ;
-(char)leaveMode;
-(NSImageView *)highlightingView;
-(void)setHighlightingView:(NSImageView *)arg1 ;
-(AKSecondFactorCodeEntryController *)secondFactorController;
-(CDPEnrollViewController *)iCSCController;
-(void)_refreshForMode:(long long)arg1 ;
-(id)viewControllerForMode:(long long)arg1 ;
-(AKLargeSignInPromptViewController *)bigSignInPromptController;
-(void)setBigSignInPromptController:(AKLargeSignInPromptViewController *)arg1 ;
-(AKDefaultSignInPromptViewController *)signInPromptController;
-(void)setSignInPromptController:(AKDefaultSignInPromptViewController *)arg1 ;
-(NSView *)icscView;
-(NSView *)signInView;
-(NSView *)tooManyAttemptsView;
-(NSView *)secondFactorView;
-(NSView *)noCodeReceivedView;
-(NSView *)keepUsingView;
-(void)setSignInView:(NSView *)arg1 ;
-(void)setTooManyAttemptsView:(NSView *)arg1 ;
-(void)setSecondFactorView:(NSView *)arg1 ;
-(void)setNoCodeReceivedView:(NSView *)arg1 ;
-(void)setKeepUsingView:(NSView *)arg1 ;
-(id)_signInPrompt;
-(AKTooManyAttemptsController *)tooManyAttemptsController;
-(void)setTooManyAttemptsController:(AKTooManyAttemptsController *)arg1 ;
-(void)setSecondFactorController:(AKSecondFactorCodeEntryController *)arg1 ;
-(AKNoCodeReceivedController *)noCodeReceivedController;
-(void)setNoCodeReceivedController:(AKNoCodeReceivedController *)arg1 ;
-(AKKeepUsingController *)keepUsingController;
-(void)setKeepUsingController:(AKKeepUsingController *)arg1 ;
-(long long)previousMode;
-(void)switchToView:(id)arg1 fromView:(id)arg2 ;
-(void)leaveAllModes;
-(double)animationResizeTime;
-(void)refreshForMode:(long long)arg1 ;
-(void)setWindowTitle:(NSString *)arg1 ;
-(void)setHostView:(NSView *)arg1 ;
-(void)setUseLargePrompt:(char)arg1 ;
-(void)setServerRequestConfiguration:(AKServerRequestConfiguration *)arg1 ;
-(void)setIcscView:(NSView *)arg1 ;
-(void)setICSCController:(CDPEnrollViewController *)arg1 ;
@end

