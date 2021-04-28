/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PCCarrierBundleHelperDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, OS_dispatch_queue, OS_os_log, PCGrowthAlgorithm;
@class NSString, NSRunLoop, NSObject, PCPersistentTimer, PCKeepAliveState;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate> {

	int _connectionClass;
	id<PCConnectionManagerDelegate> _delegate;
	NSString* _serviceIdentifier;
	NSString* _duetIdentifier;
	int _prefsStyle;
	int _onlyAllowedStyle;
	char _onlyAllowedStyleSet;
	long long _interfaceIdentifier;
	unsigned long long _guidancePriority;
	NSRunLoop* _delegateRunLoop;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_log> _logObject;
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
	PCPersistentTimer* _intervalTimer;
	PCPersistentTimer* _reconnectWakeTimer;
	PCPersistentTimer* _delayTimer;
	unsigned _powerAssertionID;
	double _onTimeKeepAliveTime;
	double _lastResumeTime;
	double _lastStopTime;
	double _lastStartTime;
	double _lastReachableTime;
	double _lastReconnectTime;
	double _lastScheduledIntervalTime;
	double _timerGuidance;
	double _keepAliveGracePeriod;
	double _lastElapsedInterval;
	char _minimumIntervalFallbackEnabled;
	char _operatorMinimumIntervalFallbackAllowed;
	unsigned _reconnectIteration;
	int _timerGuidanceToken;
	int _pushIsConnectedToken;
	int _prefsChangedToken;
	double _defaultPollingInterval;
	double _pollingIntervalOverride;
	char _pollingIntervalOverrideSet;
	char _hasStarted;
	char _isRunning;
	char _inCallback;
	char _isInReconnectMode;
	char _reconnectWithKeepAliveDelay;
	char _forceManualWhenRoaming;
	char _enableNonCellularConnections;
	char _isReachable;
	char _disableEarlyFire;
	char _alwaysWantsInterfaceChangeCallbacks;
	int _lastProcessedAction;
	char _deviceUnderGoodCondition;
	int _currentGrowthStage;
	id _duetContextRegistration;
	char _powerOptimizationsForExpensiveNetworkingDisabled;
	double _nonCellularEarlyFireConstantInterval;
	int _currentAddressFamily;

}

@property (assign,nonatomic,__weak) id<PCConnectionManagerDelegate> delegate; 
@property (nonatomic,copy) NSString * duetIdentifier; 
@property (nonatomic,readonly) char isRunning; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) PCKeepAliveState * currentKeepAliveState; 
@property (assign,nonatomic) double serverStatsMaxKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsExpectedKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsMinKeepAliveInterval; 
@property (assign,nonatomic) char usingServerStatsAggressively; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (assign,nonatomic) char disableEarlyFire; 
@property (assign,nonatomic) char minimumIntervalFallbackEnabled;                                //@synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled - In the implementation block
@property (assign,nonatomic) long long interfaceIdentifier;                                      //@synthesize interfaceIdentifier=_interfaceIdentifier - In the implementation block
@property (assign,nonatomic) char alwaysWantsInterfaceChangeCallbacks;                           //@synthesize alwaysWantsInterfaceChangeCallbacks=_alwaysWantsInterfaceChangeCallbacks - In the implementation block
@property (assign,nonatomic) char powerOptimizationsForExpensiveNetworkingDisabled;              //@synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled - In the implementation block
@property (assign,nonatomic) int currentAddressFamily; 
@property (nonatomic,readonly) int lastProcessedAction;                                          //@synthesize lastProcessedAction=_lastProcessedAction - In the implementation block
@property (assign,nonatomic) double keepAliveGracePeriod;                                        //@synthesize keepAliveGracePeriod=_keepAliveGracePeriod - In the implementation block
@property (assign,nonatomic) double nonCellularEarlyFireConstantInterval;                        //@synthesize nonCellularEarlyFireConstantInterval=_nonCellularEarlyFireConstantInterval - In the implementation block
@property (nonatomic,readonly) double pollingInterval; 
@property (nonatomic,readonly) int currentGrowthStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
+(id)intervalCacheDictionaries;
+(char)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(double)minimumKeepAliveInterval;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(double)maximumKeepAliveInterval;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMinKeepAliveInterval;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(void)setMinimumIntervalFallbackEnabled:(char)arg1 ;
-(char)usingServerStatsAggressively;
-(void)setUsingServerStatsAggressively:(char)arg1 ;
-(unsigned long long)countOfGrowthActions;
-(id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1 ;
-(id)_stringForAddressFamily:(int)arg1 ;
-(void)_setTimerGuidance:(double)arg1 ;
-(id)persistentInterfaceManager;
-(void)_preferencesChanged;
-(void)_loadPreferencesGeneratingEvent:(char)arg1 ;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)setOperatorMinimumIntervalFallbackAllowed:(char)arg1 ;
-(void)_adjustInterfaceAssertions;
-(void)_registerForDeviceConditionsNotifications;
-(void)_deregisterForDeviceConditionsNotifications;
-(void)_calloutWithEvent:(int)arg1 context:(id)arg2 ;
-(void)_processDeviceConditionChanges;
-(void)_setupTimerForPollForAdjustment:(char)arg1 ;
-(void)_pauseTimers;
-(id)_currentGrowthAlgorithm;
-(void)resumeManagerWithAction:(int)arg1 forceGrow:(char)arg2 ;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)_resolveStateWithAction:(int)arg1 ;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(void)_saveWWANKeepAliveInterval;
-(void)_setupKeepAliveForReconnect;
-(id)_growthAlgorithmOnInterface:(long long)arg1 ;
-(char)_isPushConnected;
-(void)_adjustMinimumIntervalFallback;
-(void)_intervalTimerFired;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(char)_hasBudgetRemaining;
-(void)_clearTimersReleasingPowerAssertion:(char)arg1 ;
-(id)_stringForEvent:(int)arg1 ;
-(void)_callDelegateWithEventAndContext:(id)arg1 ;
-(void)_adjustPollTimerIfNecessary;
-(void)carrierBundleDidChange;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4 ;
-(void)setDuetIdentifier:(NSString *)arg1 ;
-(NSString *)duetIdentifier;
-(void)_handleDeviceConditionChangeCallback;
-(void)stopAndResetManager;
-(PCKeepAliveState *)currentKeepAliveState;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3 ;
-(void)setNonCellularEarlyFireConstantInterval:(double)arg1 ;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(void)cancelPollingIntervalOverride;
-(char)shouldClientScheduleReconnectDueToFailure;
-(char)disableEarlyFire;
-(void)setDisableEarlyFire:(char)arg1 ;
-(char)operatorMinimumIntervalFallbackAllowed;
-(void)setCurrentAddressFamily:(int)arg1 ;
-(int)currentAddressFamily;
-(double)keepAliveGracePeriod;
-(int)lastProcessedAction;
-(double)nonCellularEarlyFireConstantInterval;
-(char)alwaysWantsInterfaceChangeCallbacks;
-(void)setAlwaysWantsInterfaceChangeCallbacks:(char)arg1 ;
-(void)dealloc;
-(id<PCConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PCConnectionManagerDelegate>)arg1 ;
-(char)isRunning;
-(void)startManager;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(void)setEnableNonCellularConnections:(char)arg1 ;
-(void)stopManager;
-(void)resumeManagerWithAction:(int)arg1 ;
-(void)setInterfaceIdentifier:(long long)arg1 ;
-(long long)interfaceIdentifier;
-(int)currentStyle;
-(void)_releasePowerAssertion;
-(id)_stringForStyle:(int)arg1 ;
-(void)_clearTimers;
-(double)pollingInterval;
-(int)currentGrowthStage;
-(double)currentKeepAliveInterval;
-(char)minimumIntervalFallbackEnabled;
-(char)powerOptimizationsForExpensiveNetworkingDisabled;
-(void)setPowerOptimizationsForExpensiveNetworkingDisabled:(char)arg1 ;
-(id)_stringForAction:(int)arg1 ;
-(void)_delayTimerFired;
@end
