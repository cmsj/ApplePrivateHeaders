/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/FCPersonalizationDataSource.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSData, NSMutableDictionary, NSMutableArray, CKRecord, NSObject, FCPersonalizationTreatment, NSString;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource> {

	char _attemptingUpload;
	NSData* _pbData;
	NSMutableDictionary* _aggregates;
	NSMutableDictionary* _openChangeGroupDeltas;
	NSMutableArray* _closedChangeGroups;
	CKRecord* _remoteRecord;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCPersonalizationTreatment* _treatment;
	id<FCOperationThrottler> _saveThrottler;

}

@property (nonatomic,readonly) FCPersonalizationTreatment * personalizationTreatment; 
@property (nonatomic,readonly) NSData * pbData;                                                    //@synthesize pbData=_pbData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(char)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)activityObservingApplicationWillTerminate;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)activityObservingApplicationWindowDidBecomeBackground;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(id)aggregatesForFeatures:(id)arg1 ;
-(id)initWithAggregates:(id)arg1 ;
-(NSData *)pbData;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(id)d_allGlobalAggregates;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(void)clearPersonalizationData;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(void)updateAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)lookupAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)createAggregateWith:(id)arg1 clicks:(double)arg2 impressions:(double)arg3 ;
-(id)initWithPBData:(id)arg1 treatment:(id)arg2 ;
-(id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 groupBias:(double)arg7 ;
-(void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateAggregatesUsingBlock:(/*^block*/id)arg1 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 groupType:(long long)arg5 individually:(char)arg6 configurableValues:(id)arg7 featuresUpdatedBlock:(/*^block*/id)arg8 ;
-(void)prepareAggregatesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)d_allResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

