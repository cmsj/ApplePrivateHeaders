/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction {

	PKPaymentTransaction* _relatedTopUpFundingSourceWithdrawlTransaction;
	PKPaymentTransaction* _relatedTopUpPeerPaymentAccountDepositTransaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpFundingSourceWithdrawlTransaction;                 //@synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpPeerPaymentAccountDepositTransaction;              //@synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction - In the implementation block
-(unsigned long long)hash;
-(id)eventType;
-(char)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(char)arg4 ;
-(PKPaymentTransaction *)relatedTopUpFundingSourceWithdrawlTransaction;
-(PKPaymentTransaction *)relatedTopUpPeerPaymentAccountDepositTransaction;
@end

