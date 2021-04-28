/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential {

	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                     //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 ;
-(char)_isEqualToCredential:(id)arg1 ;
@end
