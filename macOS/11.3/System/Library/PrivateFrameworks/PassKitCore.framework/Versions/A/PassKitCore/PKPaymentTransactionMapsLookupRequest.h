/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKPaymentTransaction, PKPaymentApplication, NSObject;

@interface PKPaymentTransactionMapsLookupRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentApplication* _paymentApplication;
	NSObject*<OS_dispatch_queue> _internalQueue;
	char _clearingAttempt;

}

@property (assign,getter=isClearingAttempt,nonatomic) char clearingAttempt;              //@synthesize clearingAttempt=_clearingAttempt - In the implementation block
-(id)_merchantLookupRequest;
-(id)_brandFromMapItem:(id)arg1 ;
-(id)_merchantFromMapItem:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2 ;
-(void)startLookupWithCompletion:(/*^block*/id)arg1 ;
-(char)isClearingAttempt;
-(void)setClearingAttempt:(char)arg1 ;
@end
