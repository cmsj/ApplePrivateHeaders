/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>

@protocol FCTagRanking;
@class NSOrderedSet, NSSet, NSMutableDictionary, FCMTWriterLock, NSDictionary;

@interface FCSubscriptionList : FCPrivateDataController {

	id<FCTagRanking> _subscribedTagRanker;
	NSOrderedSet* _orderedSubscribedTagIDsInternal;
	NSSet* _subscribedTagIDsInternal;
	NSSet* _mutedTagIDsInternal;
	NSSet* _autoFavoriteTagIDsInternal;
	NSSet* _groupableTagIDsInternal;
	NSSet* _ignoredTagIDsInternal;
	NSMutableDictionary* _mutableSubscriptionsBySubscriptionID;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,copy,readonly) NSOrderedSet * orderedSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * subscribedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * groupableTagIDs; 
@property (nonatomic,copy,readonly) NSSet * ignoredTagIDs; 
@property (nonatomic,copy,readonly) NSSet * allSubscribedTagIDs; 
@property (nonatomic,retain) id<FCTagRanking> subscribedTagRanker;                             //@synthesize subscribedTagRanker=_subscribedTagRanker - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subscriptionsBySubscriptionID; 
+(id)desiredKeys;
+(char)requiresPushNotificationSupport;
+(char)requiresBatchedSync;
+(char)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
+(id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSDictionary *)subscriptionsBySubscriptionID;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(char)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(NSSet *)autoFavoriteTagIDs;
-(NSSet *)mutedTagIDs;
-(NSSet *)allSubscribedTagIDs;
-(NSSet *)subscribedTagIDs;
-(void)handleSyncCompletion;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1 ;
-(NSOrderedSet *)orderedSubscribedTagIDs;
-(NSSet *)ignoredTagIDs;
-(NSSet *)groupableTagIDs;
-(id)subscriptionsForType:(unsigned long long)arg1 ;
-(id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(char)canAddSubscription;
-(id)subscriptionForTagID:(id)arg1 ;
-(id)subscriptionForTagIDOfAnyType:(id)arg1 ;
-(char)hasMutedSubscriptionForTagID:(id)arg1 ;
-(void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(char)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(char)arg5 eventInitiationLevel:(long long)arg6 ;
-(char)setNotificationsEnabled:(char)arg1 forTagID:(id)arg2 ;
-(char)hasNotificationsEnabledForTagID:(id)arg1 ;
-(char)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(char)hasAutoFavoriteSubscriptionForTagID:(id)arg1 ;
-(char)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5 ;
-(char)hasIgnoredSubscriptionForTagID:(id)arg1 ;
-(void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 eventInitiationLevel:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 originProvider:(/*^block*/id)arg3 eventInitiationLevelProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(char)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4 ;
-(char)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(char)hasSubscriptionForTagID:(id)arg1 ;
-(void)assignOrderToTagSubscriptionsIfNeeded;
-(id<FCTagRanking>)subscribedTagRanker;
-(id)t_reconcileSubscriptions:(id)arg1 ;
-(void)setSubscribedTagRanker:(id<FCTagRanking>)arg1 ;
@end

