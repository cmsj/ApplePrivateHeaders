/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SpotlightReceiver.h>
#import <libobjc.A.dylib/CSSearchableIndexObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction, _DKKnowledgeQuerying_DKKnowledgeSaving_DKKnowledgeEventStreamDeleting, _CDInteractionQuerying_CDInteractionRecording_CDInteractionDeleting;
@class NSObject, NSMutableArray, NSMutableDictionary, _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer, NSString;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver> {

	NSObject*<OS_dispatch_source> _batchExecutionSource;
	NSObject*<OS_dispatch_queue> _batchExecutionSourceQueue;
	NSObject*<OS_dispatch_queue> _pendingOperationsQueue;
	NSMutableArray* _pendingOperations;
	NSObject*<OS_os_transaction> _pendingOperationsTransaction;
	NSObject*<OS_dispatch_queue> _activityRateLimiterQueue;
	NSMutableDictionary* _activityPerBundleRateLimit;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> _knowledgeStore;
	_DKRateLimitPolicyEnforcer* _rateLimitEnforcer;
	_DKPrivacyPolicyEnforcer* _privacyEnforcer;
	id<_CDInteractionQuerying><_CDInteractionRecording><_CDInteractionDeleting> _recorder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 ;
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 ;
+(id)spotlightItemRecorder;
+(id)spotlightItemRecorderWithKnowledgeStore:(id)arg1 ;
-(id)supportedContentTypes;
-(id)initWithInteractionRecorder:(id)arg1 ;
-(id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 rateLimitEnforcer:(id)arg3 ;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 ;
-(id)supportedUTIs;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addUserAction:(id)arg1 withItem:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 ;
-(void)addUserAction:(id)arg1 withItem:(id)arg2 ;
-(void)deleteAllUserActivities:(id)arg1 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(id)supportedINIntentClassNames;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2 ;
-(void)addOrUpdateSearchableItems:(id)arg1 ;
-(void)registerSpotlightRecorderWithServiceName:(id)arg1 ;
@end
