/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKPaymentAuthorizationDelegate : NSObject {

	RetainPtr<PKPaymentRequest>* _request;
	RetainPtr<NSArray<PKPaymentSummaryItem *>>* _summaryItems;
	RetainPtr<NSArray<PKShippingMethod *>>* _shippingMethods;
	RetainPtr<NSError>* _sessionError;
	WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter>* _presenter;
	BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
	BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
	BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
	BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
	BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;

}
-(void)invalidate;
-(void)_didFinish;
-(id)summaryItems;
-(id)shippingMethods;
-(void)completeMerchantValidation:(id)arg1 error:(id)arg2 ;
-(void)completePaymentMethodSelection:(id)arg1 ;
-(void)completePaymentSession:(long long)arg1 errors:(id)arg2 ;
-(void)completeShippingContactSelection:(id)arg1 ;
-(void)completeShippingMethodSelection:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 presenter:(PaymentAuthorizationPresenter*)arg2 ;
-(void)_didAuthorizePayment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectPaymentMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willFinishWithError:(id)arg1 ;
-(void)_didRequestMerchantSession:(/*^block*/id)arg1 ;
-(void)_getPaymentServicesMerchantURL:(/*^block*/id)arg1 ;
@end
