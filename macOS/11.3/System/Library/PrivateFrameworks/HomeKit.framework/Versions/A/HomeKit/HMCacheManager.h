/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMCacheDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMPersistentCache, OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, HMFTimer, NSObject, NSString;

@interface HMCacheManager : HMFObject <HMCacheDelegate, HMFTimerDelegate> {

	os_unfair_lock_s _lock;
	id<HMPersistentCache> _persistentCache;
	NSMapTable* _cacheMap;
	NSMutableDictionary* _pendingWrites;
	HMFTimer* _writeDebounceTimer;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) id<HMPersistentCache> persistentCache;               //@synthesize persistentCache=_persistentCache - In the implementation block
@property (readonly) NSMapTable * cacheMap;                               //@synthesize cacheMap=_cacheMap - In the implementation block
@property (readonly) NSMutableDictionary * pendingWrites;                 //@synthesize pendingWrites=_pendingWrites - In the implementation block
@property (readonly) HMFTimer * writeDebounceTimer;                       //@synthesize writeDebounceTimer=_writeDebounceTimer - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMapTable *)cacheMap;
-(void)timerDidFire:(id)arg1 ;
-(void)_cacheWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_loadCacheNamed:(id)arg1 ;
-(id<HMPersistentCache>)persistentCache;
-(HMFTimer *)writeDebounceTimer;
-(void)_saveCache:(id)arg1 ;
-(void)cacheDidUpdate:(id)arg1 ;
-(id)initWithTimerFactory:(/*^block*/id)arg1 persistentCache:(id)arg2 ;
-(void)cacheWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingWrites;
@end
