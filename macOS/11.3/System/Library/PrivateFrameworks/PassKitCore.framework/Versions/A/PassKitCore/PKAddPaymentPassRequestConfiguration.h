/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {

	char _requiresFelicaSecureElement;
	NSString* _encryptionScheme;
	long long _style;
	NSString* _cardholderName;
	NSString* _primaryAccountSuffix;
	NSArray* _cardDetails;
	NSString* _localizedDescription;
	NSString* _primaryAccountIdentifier;
	NSString* _paymentNetwork;
	NSSet* _productIdentifiers;

}

@property (getter=isPaymentAccount,nonatomic,readonly) char paymentAccount; 
@property (nonatomic,copy,readonly) NSString * encryptionScheme;                         //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                    //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountSuffix;                              //@synthesize primaryAccountSuffix=_primaryAccountSuffix - In the implementation block
@property (nonatomic,copy) NSArray * cardDetails;                                        //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;                          //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                                    //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSSet * productIdentifiers;                                   //@synthesize productIdentifiers=_productIdentifiers - In the implementation block
@property (assign,nonatomic) char requiresFelicaSecureElement;                           //@synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(char)requiresFelicaSecureElement;
-(NSString *)primaryAccountSuffix;
-(NSArray *)cardDetails;
-(id)_effectiveDetails;
-(id)_filterWebServices:(id)arg1 primaryAccountIdentifierRequired:(char)arg2 ;
-(char)isPaymentAccount;
-(id)initWithEncryptionScheme:(id)arg1 ;
-(NSString *)encryptionScheme;
-(void)setPrimaryAccountSuffix:(NSString *)arg1 ;
-(void)setCardDetails:(NSArray *)arg1 ;
-(NSSet *)productIdentifiers;
-(void)setProductIdentifiers:(NSSet *)arg1 ;
-(void)setRequiresFelicaSecureElement:(char)arg1 ;
@end

