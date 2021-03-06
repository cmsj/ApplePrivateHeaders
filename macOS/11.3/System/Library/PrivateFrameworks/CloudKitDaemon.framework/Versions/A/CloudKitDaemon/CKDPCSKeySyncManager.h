/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDPCSKeySyncManager : NSObject {

	NSMutableDictionary* _keySyncTrackerByServiceName;
	NSObject*<OS_dispatch_queue> _keySyncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * keySyncTrackerByServiceName;              //@synthesize keySyncTrackerByServiceName=_keySyncTrackerByServiceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> keySyncQueue;                      //@synthesize keySyncQueue=_keySyncQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)getKeySyncEligibilityForService:(id)arg1 isManatee:(char)arg2 zonePCSModificationDate:(id)arg3 testOverrideProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)syncUserKeysForService:(id)arg1 context:(id)arg2 bundleID:(id)arg3 serviceIsManatee:(char)arg4 account:(id)arg5 shouldThrottle:(char)arg6 testOverrideProvider:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(NSObject*<OS_dispatch_queue>)keySyncQueue;
-(NSMutableDictionary *)keySyncTrackerByServiceName;
-(id)createSyncTrackerForService:(id)arg1 manatee:(char)arg2 ;
-(id)syncTrackerForService:(id)arg1 manatee:(char)arg2 shortThrottlePeriod:(char)arg3 ;
-(void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setKeySyncTrackerByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setKeySyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

