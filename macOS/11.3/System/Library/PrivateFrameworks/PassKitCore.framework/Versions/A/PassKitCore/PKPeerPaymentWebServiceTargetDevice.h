/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@protocol PKPeerPaymentTargetDeviceDelegate;
@class PKPeerPaymentService, NSString;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	PKPeerPaymentService* _peerPaymentService;
	id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)preferences;
-(id)account;
-(id)deviceClass;
-(id)deviceRegion;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)secureElementIdentifiers;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(void)_handleAccountChangedNotification:(id)arg1 ;
-(void)_handlePreferencesChangedNotification:(id)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(char)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithTargetDeviceDelegate:(id)arg1 ;
@end

