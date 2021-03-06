/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	NSDictionary* _readerModeMetadata;
	NSString* _cardSessionToken;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                   //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * readerModeMetadata;              //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,copy) NSString * cardSessionToken;                    //@synthesize cardSessionToken=_cardSessionToken - In the implementation block
-(id)init;
-(PKPaymentSetupProduct *)product;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(NSDictionary *)readerModeMetadata;
-(void)setRequirementsResponse:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 ;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(long long)_cardTypeFromSetupProductType:(unsigned long long)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2 ;
-(NSString *)cardSessionToken;
-(void)setCardSessionToken:(NSString *)arg1 ;
@end

