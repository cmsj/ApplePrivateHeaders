/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate.h>

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSource, OS_dispatch_queue;
@class HMFTimer, HMDIDSActivityMonitor, NSObject, NSString;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> {

	HMFTimer* _debounceTimer;
	HMDIDSActivityMonitor* _activityMonitor;
	id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) HMDIDSActivityMonitor * activityMonitor;                                       //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (retain) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource>)dataSource;
-(void)setDataSource:(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource>)arg1 ;
-(HMDIDSActivityMonitor *)activityMonitor;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)configureWithQueue:(id)arg1 ;
-(id)initWithActivityMonitor:(id)arg1 timer:(id)arg2 ;
-(void)dataSourceDidUpdate:(id)arg1 ;
@end
