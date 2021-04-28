/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding> {

	char _deviceSupportsPeerPaymentAccountPayment;
	PKBankAccountInformation* _bankAccountInformation;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,copy) PKBankAccountInformation * bankAccountInformation;              //@synthesize bankAccountInformation=_bankAccountInformation - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * peerPaymentBalance;                          //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,nonatomic) char deviceSupportsPeerPaymentAccountPayment;                 //@synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(char)deviceSupportsPeerPaymentAccountPayment;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(void)setBankAccountInformation:(PKBankAccountInformation *)arg1 ;
-(void)setDeviceSupportsPeerPaymentAccountPayment:(char)arg1 ;
-(id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(char)arg3 ;
@end
