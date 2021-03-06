/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/Versions/A/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;
@class NSWindow, NSImage, AKAppleIDAuthenticationController, CDPUIDeviceToDeviceEncryptionFlowContext;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject {

	NSWindow* _hostWindow;
	NSImage* _displayImage;
	id<CDPUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
	AKAppleIDAuthenticationController* _authController;
	CDPUIDeviceToDeviceEncryptionFlowContext* _context;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authController;                           //@synthesize authController=_authController - In the implementation block
@property (nonatomic,retain) CDPUIDeviceToDeviceEncryptionFlowContext * context;                           //@synthesize context=_context - In the implementation block
@property (__weak) NSWindow * hostWindow;                                                                  //@synthesize hostWindow=_hostWindow - In the implementation block
@property (__weak) NSImage * displayImage;                                                                 //@synthesize displayImage=_displayImage - In the implementation block
@property (assign,nonatomic,__weak) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CDPUIDeviceToDeviceEncryptionHelperDelegate>)delegate;
-(void)setDelegate:(id<CDPUIDeviceToDeviceEncryptionHelperDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(CDPUIDeviceToDeviceEncryptionFlowContext *)context;
-(void)setContext:(CDPUIDeviceToDeviceEncryptionFlowContext *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setDisplayImage:(NSImage *)arg1 ;
-(id)_displayImage;
-(NSImage *)displayImage;
-(id)_authController;
-(void)setHostWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostWindow;
-(id)_hostWindow;
-(void)_executeSyncOnMainThreadIfNeeded:(/*^block*/id)arg1 ;
-(char)_hasPasscode;
-(void)_setupPresentedViewController;
-(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(/*^block*/id)arg1 ;
-(id)_encryptionErrorFromError:(id)arg1 ;
-(void)_showUpgradeMessageWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightDeviceToDeviceEncryptionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_hasManatee;
-(char)_isInCircle;
-(void)_checkEligibilityWithCompletionForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_isAccount2FAForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_authContextFromContext:(id)arg1 ;
-(id)_inAppContextFromContext:(id)arg1 ;
-(AKAppleIDAuthenticationController *)authController;
-(void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentCDPUpgradeSpinnerWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentIneligibleAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_legacyAskPermissionToContinueFlowWithCompletion:(/*^block*/id)arg1 ;
-(id)_upgradeUIProvider;
-(void)_repairCDPWithAuthResults:(id)arg1 cachedSecret:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_createPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)_shouldContinueCreationWithCompletion:(/*^block*/id)arg1 ;
-(void)_postBiometricFollowupIfNeeded;
-(id)_cdpStateControllerWithAuthResults:(id)arg1 ;
-(id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1 ;
-(id)_cdpStateControllerWithContext:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configurePresentingViewControllerForModalPresentation;
-(void)setAuthController:(AKAppleIDAuthenticationController *)arg1 ;
@end

