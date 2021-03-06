/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationDataControllerDelegate
@required
-(void)paymentAuthorizationDataController:(id)arg1 didSelectPaymentPass:(id)arg2 paymentApplication:(id)arg3;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectRemotePaymentInstrument:(id)arg2 paymentApplication:(id)arg3;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectBillingAddress:(id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewBillingAddressWithCompletion:(/*^block*/id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingBillingAddress:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingMethod:(id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingAddress:(id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingAddressWithCompletion:(/*^block*/id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingShippingAddress:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingContact:(id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingContactWithCompletion:(/*^block*/id)arg2;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingShippingContact:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4;

@end

