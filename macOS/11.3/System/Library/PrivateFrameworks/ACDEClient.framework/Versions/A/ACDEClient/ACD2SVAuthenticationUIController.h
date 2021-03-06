/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACM2SVTrustedDevicesViewControllerDelegate.h>
#import <ACDEClient/ACD2SVCodeVerificationViewControllerDelegate.h>
#import <ACDEClient/ACC2SVAuthenticationUIControllerProtocol.h>

@protocol ACC2SVAuthenticationUIControllerDelegate;
@class ACDDeviceListViewController, ACDVerifyCodeViewController, ACDStateManager, ACFMessage, ACC2SVTrustedDeviceObject, NSString;

@interface ACD2SVAuthenticationUIController : NSObject <ACM2SVTrustedDevicesViewControllerDelegate, ACD2SVCodeVerificationViewControllerDelegate, ACC2SVAuthenticationUIControllerProtocol> {

	id<ACC2SVAuthenticationUIControllerDelegate> _delegate;
	ACDDeviceListViewController* _trustedDevicesViewController;
	ACDVerifyCodeViewController* _codeVerificationViewController;
	ACDStateManager* _stateManager;
	ACFMessage* _currentRequest;

}

@property (nonatomic,readonly) ACC2SVTrustedDeviceObject * selectedTrustedDevice; 
@property (nonatomic,retain) ACDDeviceListViewController * trustedDevicesViewController;                //@synthesize trustedDevicesViewController=_trustedDevicesViewController - In the implementation block
@property (nonatomic,retain) ACDVerifyCodeViewController * codeVerificationViewController;              //@synthesize codeVerificationViewController=_codeVerificationViewController - In the implementation block
@property (assign,nonatomic) ACDStateManager * stateManager;                                            //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,retain) ACFMessage * currentRequest;                                               //@synthesize currentRequest=_currentRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ACC2SVAuthenticationUIControllerDelegate>)delegate;
-(void)setDelegate:(id<ACC2SVAuthenticationUIControllerDelegate>)arg1 ;
-(ACFMessage *)currentRequest;
-(void)setCurrentRequest:(ACFMessage *)arg1 ;
-(ACDStateManager *)stateManager;
-(ACDDeviceListViewController *)trustedDevicesViewController;
-(void)setStateManager:(ACDStateManager *)arg1 ;
-(void)setTrustedDevicesViewController:(ACDDeviceListViewController *)arg1 ;
-(ACDVerifyCodeViewController *)codeVerificationViewController;
-(void)setCodeVerificationViewController:(ACDVerifyCodeViewController *)arg1 ;
-(void)handleFailoverWithCompletion:(/*^block*/id)arg1 ;
-(ACC2SVTrustedDeviceObject *)selectedTrustedDevice;
-(void)trustedDevicesViewControllerNeedsRefresh:(id)arg1 ;
-(void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)arg1 ;
-(void)codeVerificationViewControllerNeedsResendCode:(id)arg1 ;
-(id)selectedTrustedDeviceName;
-(void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideUIAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)showAlertWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetCodeVerificationViewController;
-(void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1 ;
-(void)downloadImageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelInProgressImageDownloads;
@end

