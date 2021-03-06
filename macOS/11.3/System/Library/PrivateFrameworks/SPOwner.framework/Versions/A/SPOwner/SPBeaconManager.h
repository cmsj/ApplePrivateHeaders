/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPMonitorsWrapperDelegate.h>
#import <SPOwner/SPBLEStateMonitorDelegate.h>

@protocol SPBeaconManagerXPCProtocol, OS_dispatch_queue, OS_dispatch_source;
@class FMXPCServiceDescription, FMXPCSession, SPMacBeaconConfig, NSObject, FMXPCTimer, SPMonitorsWrapper, SPBLEStateMonitor, NSString;

@interface SPBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate> {

	char _currentBeaconingState;
	char _forceBeaconingOff;
	unsigned char _currentStatus;
	char _initialStateChangeSent;
	/*^block*/id _stateChangedBlock;
	/*^block*/id _stateChangedBlockWithCompletion;
	/*^block*/id _statusChangedBlock;
	/*^block*/id _statusChangedBlockWithCompletion;
	/*^block*/id _beaconingKeyChangedBlock;
	/*^block*/id _beaconingKeyChangedBlockWithCompletion;
	/*^block*/id _nearbyTokensChangedBlock;
	/*^block*/id _nearbyTokensChangedBlockWithCompletion;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	FMXPCServiceDescription* _userAgentServiceDescription;
	FMXPCSession* _userAgentSession;
	SPMacBeaconConfig* _macBeaconConfig;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;
	NSObject*<OS_dispatch_queue> _queue;
	FMXPCTimer* _periodicActionXpcTimer;
	NSObject*<OS_dispatch_source> _periodicActionDispatchTimer;
	SPMonitorsWrapper* _monitorWrapper;
	SPBLEStateMonitor* _bleMonitor;
	long long _cachedLocalBeaconManagerState;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                           //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * userAgentServiceDescription;                  //@synthesize userAgentServiceDescription=_userAgentServiceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * userAgentSession;                                        //@synthesize userAgentSession=_userAgentSession - In the implementation block
@property (nonatomic,retain) SPMacBeaconConfig * macBeaconConfig;                                    //@synthesize macBeaconConfig=_macBeaconConfig - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                                   //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;                          //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FMXPCTimer * periodicActionXpcTimer;                                    //@synthesize periodicActionXpcTimer=_periodicActionXpcTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicActionDispatchTimer;              //@synthesize periodicActionDispatchTimer=_periodicActionDispatchTimer - In the implementation block
@property (nonatomic,retain) SPMonitorsWrapper * monitorWrapper;                                     //@synthesize monitorWrapper=_monitorWrapper - In the implementation block
@property (nonatomic,retain) SPBLEStateMonitor * bleMonitor;                                         //@synthesize bleMonitor=_bleMonitor - In the implementation block
@property (assign,nonatomic) char currentBeaconingState;                                             //@synthesize currentBeaconingState=_currentBeaconingState - In the implementation block
@property (assign,nonatomic) char forceBeaconingOff;                                                 //@synthesize forceBeaconingOff=_forceBeaconingOff - In the implementation block
@property (assign,nonatomic) unsigned char currentStatus;                                            //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) long long cachedLocalBeaconManagerState;                                //@synthesize cachedLocalBeaconManagerState=_cachedLocalBeaconManagerState - In the implementation block
@property (assign,nonatomic) char initialStateChangeSent;                                            //@synthesize initialStateChangeSent=_initialStateChangeSent - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                                     //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,copy) id stateChangedBlockWithCompletion;                                       //@synthesize stateChangedBlockWithCompletion=_stateChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id statusChangedBlock;                                                    //@synthesize statusChangedBlock=_statusChangedBlock - In the implementation block
@property (nonatomic,copy) id statusChangedBlockWithCompletion;                                      //@synthesize statusChangedBlockWithCompletion=_statusChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id beaconingKeyChangedBlock;                                              //@synthesize beaconingKeyChangedBlock=_beaconingKeyChangedBlock - In the implementation block
@property (nonatomic,copy) id beaconingKeyChangedBlockWithCompletion;                                //@synthesize beaconingKeyChangedBlockWithCompletion=_beaconingKeyChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id nearbyTokensChangedBlock;                                              //@synthesize nearbyTokensChangedBlock=_nearbyTokensChangedBlock - In the implementation block
@property (nonatomic,copy) id nearbyTokensChangedBlockWithCompletion;                                //@synthesize nearbyTokensChangedBlockWithCompletion=_nearbyTokensChangedBlockWithCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)afterFirstUnlock:(/*^block*/id)arg1 ;
+(id)scheduleDateInterval:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(unsigned char)currentStatus;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setCurrentStatus:(unsigned char)arg1 ;
-(id)remoteInterface;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)timerFired;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setNearbyTokensChangedBlock:(id)arg1 ;
-(void)setStateChangedBlockWithCompletion:(id)arg1 ;
-(void)setBeaconingKeyChangedBlockWithCompletion:(id)arg1 ;
-(void)setStatusChangedBlockWithCompletion:(id)arg1 ;
-(id)nearbyTokensChangedBlock;
-(void)setNearbyTokensChangedBlockWithCompletion:(id)arg1 ;
-(FMXPCSession *)userAgentSession;
-(FMXPCServiceDescription *)userAgentServiceDescription;
-(void)setUserAgentSession:(FMXPCSession *)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)setUserAgentServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)setMacBeaconConfig:(SPMacBeaconConfig *)arg1 ;
-(void)stateDidChange:(char)arg1 powerState:(unsigned long long)arg2 ;
-(void)setForceBeaconingOff:(char)arg1 ;
-(char)isBeaconing;
-(SPMacBeaconConfig *)macBeaconConfig;
-(void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)unacceptedBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)notificationBeaconForSubscriptionId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allBeaconsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)postedLocalNotifyWhenFoundNotificationForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allBeaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 forceGenerate:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)allDuriansWithCompletion:(/*^block*/id)arg1 ;
-(void)roleCategoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateBeacon:(id)arg1 updates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setWildKeyBase:(unsigned long long)arg1 interval:(unsigned long long)arg2 fallback:(unsigned long long)arg3 forBeacon:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setAlignmentUncertainty:(double)arg1 atIndex:(unsigned long long)arg2 date:(id)arg3 forBeacon:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setKeyRollInterval:(unsigned long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentWildKeyIndex:(long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectedToBeacon:(id)arg1 withIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUserStatsForBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFirmwareVersionForBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)repairDataStore:(/*^block*/id)arg1 ;
-(void)connectionTokensForBeaconUUID:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)bleMonitor:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beaconsChanged:(id)arg1 ;
-(void)beaconingStateChangedNotification:(id)arg1 ;
-(void)setMonitorWrapper:(SPMonitorsWrapper *)arg1 ;
-(SPMonitorsWrapper *)monitorWrapper;
-(void)setBleMonitor:(SPBLEStateMonitor *)arg1 ;
-(SPBLEStateMonitor *)bleMonitor;
-(void)setCachedLocalBeaconManagerState:(long long)arg1 ;
-(void)beaconingStateChanged:(long long)arg1 ;
-(void)checkInPeriodicActionXpcTimer;
-(void)periodicActionWithCompletion:(/*^block*/id)arg1 ;
-(char)forceBeaconingOff;
-(char)currentBeaconingState;
-(void)setCurrentBeaconingState:(char)arg1 ;
-(char)initialStateChangeSent;
-(void)notifyStatusChange:(unsigned char)arg1 ;
-(void)notifyStateChange:(char)arg1 ;
-(void)setInitialStateChangeSent:(char)arg1 ;
-(id)stateChangedBlock;
-(id)stateChangedBlockWithCompletion;
-(id)statusChangedBlock;
-(id)statusChangedBlockWithCompletion;
-(FMXPCTimer *)periodicActionXpcTimer;
-(void)setPeriodicActionXpcTimer:(FMXPCTimer *)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicActionDispatchTimer;
-(void)setPeriodicActionDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(void)setBeaconingKeyChangedBlock:(id)arg1 ;
-(void)setPeriodicActionXpcTimerWithDateInterval:(id)arg1 ;
-(void)setPeriodicActionDispatchTimerWithInterval:(double)arg1 ;
-(void)notifyBeaconingKeysChangedBlockWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyNearbyTokensChangedBlockWithCompletion:(/*^block*/id)arg1 ;
-(id)beaconingKeyChangedBlock;
-(id)beaconingKeyChangedBlockWithCompletion;
-(long long)cachedLocalBeaconManagerState;
-(void)allBeaconsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRole:(long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionTokensForBeaconUUID:(id)arg1 criteria:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionTokensForBeaconUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectedToBeacon:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)createKeyReconcilerWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchKeyMapFileDescriptorForBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setStatusChangedBlock:(id)arg1 ;
-(id)nearbyTokensChangedBlockWithCompletion;
@end

