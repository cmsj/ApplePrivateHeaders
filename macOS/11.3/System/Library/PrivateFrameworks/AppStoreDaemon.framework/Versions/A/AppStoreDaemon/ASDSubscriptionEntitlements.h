/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {

	ASDServiceBroker* _serviceBroker;
	int _newsCacheUpdatedNotificationToken;
	int _appStoreCacheUpdatedNotificationToken;
	int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
	int _activityCacheUpdatedNotificationToken;
	int _musicCacheUpdatedNotificationToken;
	int _tvCacheUpdatedNotificationToken;
	int _iCloudCacheUpdatedNotificationToken;
	int _podcastCacheUpdatedNotificationToken;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 ;
-(void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(char)arg2 requestingBundleId:(id)arg3 withCacheInfoResultHandler:(/*^block*/id)arg4 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(char)arg1 forActiveAccountWithResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(char)arg1 forActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(char)arg2 withCacheInfoResultHandler:(/*^block*/id)arg3 ;
-(void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(char)arg2 withResultHandler:(/*^block*/id)arg3 ;
@end

