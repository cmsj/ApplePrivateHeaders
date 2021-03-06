/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, WBSEncryptedCloudKeyValueStore, NSMutableDictionary, NSDate;

@interface CloudTabKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _keyValueStoreAccessQueue;
	WBSEncryptedCloudKeyValueStore* _syncedTabsKeyValueStore;
	NSMutableDictionary* _cachedSyncedTabsKeyValueStoreDictionaryRepresentation;
	id _syncedTabsKeyValueStoreChangeObserver;
	WBSEncryptedCloudKeyValueStore* _userRequestsKeyValueStore;
	NSMutableDictionary* _cachedUserRequestsKeyValueStoreDictionaryRepresentation;
	id _userRequestsKeyValueStoreChangeObserver;
	NSDate* _lastKeyValueStoreModDate;
	long long _numberOfInFlightDictionaryRepresentationUpdates;
	/*^block*/id _keyValueStoreChangeNotificationHandler;

}

@property (getter=isUpdatingKeyValueStoreDictionaryRepresentation,nonatomic,readonly) char isUpdatingKeyValueStoreDictionaryRepresentation; 
@property (nonatomic,copy) id keyValueStoreChangeNotificationHandler;                                                                                    //@synthesize keyValueStoreChangeNotificationHandler=_keyValueStoreChangeNotificationHandler - In the implementation block
+(id)sharedCloudTabKeyValueStore;
-(void)dealloc;
-(id)init;
-(void)_cachedDictionaryRepresentationWasUpdated;
-(void)_updateCachedDictionaryRepresentationFromKeyValueStore:(long long)arg1 ;
-(id)_keyValueStoreForIdentifier:(long long)arg1 ;
-(id)_cachedKeyValueStoreDictionaryForIdentifier:(long long)arg1 ;
-(void)_willModifyKeyValueStore;
-(void)removeObjectInKeyValueStore:(long long)arg1 forKey:(id)arg2 blockUntilDone:(char)arg3 bypassingCache:(char)arg4 ;
-(char)isUpdatingKeyValueStoreDictionaryRepresentation;
-(void)waitForOperationsToComplete;
-(void)keyValueStoreDidChangeExternally:(long long)arg1 ;
-(void)synchronizeKeyValueStore:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)dictionaryRepresentationForKeyValueStore:(long long)arg1 ;
-(void)setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 blockUntilDone:(char)arg4 ;
-(id)dictionaryInKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(void)removeObjectInKeyValueStore:(long long)arg1 forKey:(id)arg2 blockUntilDone:(char)arg3 ;
-(id)keyValueStoreChangeNotificationHandler;
-(void)setKeyValueStoreChangeNotificationHandler:(id)arg1 ;
@end

