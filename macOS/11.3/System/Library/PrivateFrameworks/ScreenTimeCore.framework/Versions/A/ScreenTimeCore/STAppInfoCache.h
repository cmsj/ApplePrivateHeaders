/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPersistentContainer, NSCache, NSObject, NSURLSession, NSMutableSet, NSOperationQueue;

@interface STAppInfoCache : NSObject {

	NSPersistentContainer* _persistentContainer;
	NSCache* _appInfoByBundleIdentifier;
	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSURLSession* _urlSession;
	NSMutableSet* _bundleIdentifiersWithPendingRequests;
	NSOperationQueue* _completionHandlerQueue;

}

@property (nonatomic,readonly) NSCache * appInfoByBundleIdentifier;                              //@synthesize appInfoByBundleIdentifier=_appInfoByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> lookupQueue;                         //@synthesize lookupQueue=_lookupQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                        //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) NSMutableSet * bundleIdentifiersWithPendingRequests;              //@synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * completionHandlerQueue;                        //@synthesize completionHandlerQueue=_completionHandlerQueue - In the implementation block
@property (retain) NSPersistentContainer * persistentContainer;                                  //@synthesize persistentContainer=_persistentContainer - In the implementation block
+(id)sharedCache;
-(void)dealloc;
-(id)init;
-(NSURLSession *)urlSession;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(id)_appInfoForBundleIdentifier:(id)arg1 ;
-(id)_placeholderAppInfoWithBundleIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 ;
-(id)appInfoForBundleIdentifier:(id)arg1 localOnly:(char)arg2 ;
-(void)fetchAppInfoForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)completionHandlerQueue;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSCache *)appInfoByBundleIdentifier;
-(id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg1 ;
-(id)_preloadedAppInfoWithBundleIdentifier:(id)arg1 ;
-(id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)arg1 ;
-(NSMutableSet *)bundleIdentifiersWithPendingRequests;
-(void)_handleiTunesResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg1 ;
-(id)_localAppNameForBundleIdentifier:(id)arg1 ;
-(id)appInfoForBundleIdentifier:(id)arg1 ;
-(void)fetchAppInfoForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3 ;
-(void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

