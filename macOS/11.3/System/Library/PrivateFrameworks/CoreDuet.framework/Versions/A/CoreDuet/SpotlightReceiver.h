/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SpotlightReceiver <NSObject>
@optional
-(id)supportedContentTypes;
-(id)supportedBundleIDs;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(void)deleteAllUserActivities:(id)arg1;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
-(id)supportedINIntentClassNames;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
-(void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2;

@end

