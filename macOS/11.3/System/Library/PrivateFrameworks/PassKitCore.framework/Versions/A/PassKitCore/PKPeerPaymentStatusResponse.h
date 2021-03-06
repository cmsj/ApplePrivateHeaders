/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSArray, NSData;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse {

	long long _status;
	NSString* _paymentIdentifier;
	NSString* _transactionIdentifier;
	NSArray* _actions;
	NSData* _amountHash;

}

@property (nonatomic,readonly) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentIdentifier;                  //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSData * amountHash;                           //@synthesize amountHash=_amountHash - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSArray *)actions;
-(NSString *)transactionIdentifier;
-(NSString *)paymentIdentifier;
-(char)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2 ;
-(NSData *)amountHash;
@end

