/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingDispatchQueue;
	CKContainer* _container;
	long long _scope;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDispatchQueue;              //@synthesize underlyingDispatchQueue=_underlyingDispatchQueue - In the implementation block
@property (assign,nonatomic,__weak) CKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) long long scope;                                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) long long databaseScope; 
-(id)description;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(CKContainer *)container;
-(NSOperationQueue *)operationQueue;
-(void)setContainer:(CKContainer *)arg1 ;
-(long long)scope;
-(id)CKPropertiesDescription;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)CKStatusReportArray;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingDispatchQueue;
-(void)setUnderlyingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)databaseScope;
-(void)clearAssetCache;
-(unsigned long long)countAssetCacheItems;
-(void)showAssetCache;
-(void)clearRecordCache;
-(void)clearAuthTokensForRecordWithID:(id)arg1 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCorruptRecordsForAllZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPCSFromCacheForZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

