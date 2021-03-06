/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, HMDCloudZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDCloudHomeManagerZone, NSMutableDictionary, HMDBackingStore, NSObject, CKServerChangeToken;

@interface HMDCloudCache : HMFObject {

	HMFUnfairLock* _lock;
	HMDCloudZone* _homeDataInformation;
	HMDCloudLegacyZone* _legacyZone;
	HMDCloudMetadataZone* _metadataZone;
	HMDCloudHomeManagerZone* _homeManagerZone;
	NSMutableDictionary* _homeZones;
	HMDBackingStore* _backingStore;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) HMDCloudZone * homeDataInformation;                           //@synthesize homeDataInformation=_homeDataInformation - In the implementation block
@property (nonatomic,retain) HMDCloudLegacyZone * legacyZone;                              //@synthesize legacyZone=_legacyZone - In the implementation block
@property (nonatomic,retain) HMDCloudMetadataZone * metadataZone;                          //@synthesize metadataZone=_metadataZone - In the implementation block
@property (nonatomic,retain) HMDCloudHomeManagerZone * homeManagerZone;                    //@synthesize homeManagerZone=_homeManagerZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeZones;                              //@synthesize homeZones=_homeZones - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                        //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * databaseServerChangeToken; 
-(id)init;
-(HMDBackingStore *)backingStore;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deleteAllZones;
-(HMDCloudLegacyZone *)legacyZone;
-(HMDCloudMetadataZone *)metadataZone;
-(HMDCloudHomeManagerZone *)homeManagerZone;
-(void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteHomeZoneWithName:(id)arg1 ;
-(void)setDatabaseServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)persistDatabaseServerChangeToken;
-(id)allHomeZones;
-(void)createAndFetchZonesFromBackingStore:(/*^block*/id)arg1 ;
-(char)homeZoneExists:(id)arg1 ;
-(CKServerChangeToken *)databaseServerChangeToken;
-(id)_findStoreCacheZone:(id)arg1 byName:(id)arg2 ;
-(void)setHomeDataInformation:(HMDCloudZone *)arg1 ;
-(void)_createZones:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLegacyZone:(HMDCloudLegacyZone *)arg1 ;
-(void)setMetadataZone:(HMDCloudMetadataZone *)arg1 ;
-(void)setHomeManagerZone:(HMDCloudHomeManagerZone *)arg1 ;
-(NSMutableDictionary *)homeZones;
-(HMDCloudZone *)homeDataInformation;
-(void)setHomeZones:(NSMutableDictionary *)arg1 ;
-(id)initWithBackingStore:(id)arg1 workQueue:(id)arg2 ;
@end

