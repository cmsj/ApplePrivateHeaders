/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore, NFUnfairLock;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* __bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;
	NFUnfairLock* _lock;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * _bundleSubscriptionLookUpEntry;               //@synthesize _bundleSubscriptionLookUpEntry=__bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                   //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                                          //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry; 
-(NFUnfairLock *)lock;
-(void)updateEntry:(id)arg1 ;
-(FCKeyValueStore *)localStore;
-(id)initWithLocalStore:(id)arg1 ;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
-(void)cleanupStaleExpiredEntry;
-(void)addBundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 purchaseID:(id)arg3 inTrialPeriod:(char)arg4 isPurchaser:(char)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(char)arg7 ;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
-(FCBundleSubscriptionLookUpEntry *)_bundleSubscriptionLookUpEntry;
-(void)set_bundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
@end

