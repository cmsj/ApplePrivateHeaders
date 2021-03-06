/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>
#import <libobjc.A.dylib/SKPaymentQueueClientDelegate.h>

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver, SKPaymentQueueClientDelegate> {

	 paymentQueue;
	 dialogHandler;
	 activeStoreAccountProvider;
	 observers;
	 stateLock;
	 arcadeSubscriptionFamilyId;
	 subscriptionEntitlements;
	 subscriptionState;
	 paymentCallbacks;
	 logger;

}
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)entitlementsDidChange;
@end

