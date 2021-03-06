/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommerceKit/CommerceClient.h>

@protocol CommerceClient <AccountObserver,DownloadQueueObserver,PurchaseQueueObserver,PurchaseQueueDelegate>
@end


@class NSMutableDictionary, NSMapTable, NSString;

@interface CommerceClient : NSObject <CommerceClient> {

	NSMutableDictionary* _accountObservers;
	NSMutableDictionary* _purchaseObservers;
	NSMutableDictionary* _downloadObservers;
	NSMapTable* _purchaseQueueDelegates;

}

@property (retain) NSMutableDictionary * accountObservers;               //@synthesize accountObservers=_accountObservers - In the implementation block
@property (retain) NSMutableDictionary * purchaseObservers;              //@synthesize purchaseObservers=_purchaseObservers - In the implementation block
@property (retain) NSMutableDictionary * downloadObservers;              //@synthesize downloadObservers=_downloadObservers - In the implementation block
@property (retain) NSMapTable * purchaseQueueDelegates;                  //@synthesize purchaseQueueDelegates=_purchaseQueueDelegates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_resetServiceObservers;
-(void)_cleanUpPurchases;
-(NSMutableDictionary *)purchaseObservers;
-(void)purchaseQueueWithIdentifier:(id)arg1 updatedTransactions:(id)arg2 ;
-(NSMutableDictionary *)accountObservers;
-(NSMapTable *)purchaseQueueDelegates;
-(NSMutableDictionary *)downloadObservers;
-(void)unsetDelegateForPurchaseQueueWithIdentifier:(id)arg1 ;
-(id)_dialogContextForTransaction:(id)arg1 ;
-(void)storeClient:(id)arg1 changedPrimaryAccount:(id)arg2 ;
-(void)downloadQueueWithIdentifier:(id)arg1 addedDownloads:(id)arg2 ;
-(void)downloadQueueWithIdentifier:(id)arg1 statusChangedForDownloads:(id)arg2 ;
-(void)purchaseQueueWithIdentifier:(id)arg1 addedTransactions:(id)arg2 ;
-(void)displayDialog:(id)arg1 forTransaction:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)authenticateWithDialog:(id)arg1 settings:(id)arg2 forTransaction:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)signChallenge:(id)arg1 forTransaction:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)promptTouchIDEnableForTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)serviceInterrupted;
-(void)serviceInvalidated;
-(id)addAccountObserver:(id)arg1 forAccountStore:(id)arg2 ;
-(void)removeAccountObserver:(id)arg1 forAccountStore:(id)arg2 ;
-(id)addPurchaseObserver:(id)arg1 forPurchaseQueue:(id)arg2 ;
-(void)removePurchaseObserver:(id)arg1 forPurchaseQueue:(id)arg2 ;
-(id)addDownloadObserver:(id)arg1 forDownloadQueue:(id)arg2 ;
-(void)removeDownloadObserver:(id)arg1 forDownloadQueue:(id)arg2 ;
-(void)setDelegate:(id)arg1 forPurchaseQueue:(id)arg2 ;
-(void)setAccountObservers:(NSMutableDictionary *)arg1 ;
-(void)setPurchaseObservers:(NSMutableDictionary *)arg1 ;
-(void)setDownloadObservers:(NSMutableDictionary *)arg1 ;
-(void)setPurchaseQueueDelegates:(NSMapTable *)arg1 ;
@end

