/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {

	NSMutableDictionary* _paymentSetupProducts;

}
-(id)init;
-(id)productsForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)addPaymentSetupProducts:(id)arg1 ;
-(id)productForProductIdentifier:(id)arg1 ;
-(id)setupProductsOfType:(unsigned long long)arg1 ;
-(id)allSetupProducts;
-(void)setPaymentSetupProducts:(id)arg1 ;
@end

