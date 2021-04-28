/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISignalMonitorDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingPrivate.h>
#import <PowerUI/PowerUISmartChargeManaging.h>

@protocol _CDLocalContext, _DKKnowledgeQuerying_DKKnowledgeSaving, OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSString, _CDContextualKeyPath, UNUserNotificationCenter, NSDistributedNotificationCenter, NSObject, NSDate, NSDictionary, NSNumber, PowerUIMLTwoStageModelPredictor, PowerUIDesktopModePredictor, PowerUISleepWakeMonitor, NSArray, PowerUIBatteryMitigationManager, NSXPCListener, PowerUITrialManager;

@interface PowerUISmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingPrivate, PowerUISmartChargeManaging> {

	char _enabled;
	char _temporarilyDisabled;
	char __hasLegitimateUsage;
	char _lastChargerWasWireless;
	char _firstNotificationRequested;
	char _firstNotificationDisplayed;
	char _progressNotificationsEnabled;
	char _signalsIgnored;
	char _overrideAllSignals;
	char _encounteredTLCDuringTopOff;
	char _isDesktopDevice;
	unsigned _service;
	unsigned _assertionID;
	int _powerlogToken;
	int _lastBatteryLevel;
	int _lastPluginStatus;
	int _lastFullyCharged;
	int _chargingStateNotification;
	id<_CDLocalContext> _context;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	NSString* _defaultsDomain;
	/*^block*/id _beforeBatteryCallback;
	/*^block*/id _afterBatteryCallback;
	_CDContextualKeyPath* _checkpointKP;
	UNUserNotificationCenter* _unCenter;
	NSDistributedNotificationCenter* _notificationCenter;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _mcmLog;
	unsigned long long _checkpoint;
	unsigned long long _currentState;
	NSDate* _disabledUntilDate;
	NSDate* __fullChargeDeadline;
	NSDate* _uiDeadline;
	NSDictionary* _signalDeadline;
	NSDate* _lastComputedSignalDeadline;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _lastInterruptedTime;
	NSNumber* _engagementsLastMonthBucket;
	NSNumber* _lastReportedNumberOfPluginEvents;
	NSNumber* _medianPluginLength;
	double _empiricalTimeToFullChargeDurationMinutes;
	NSString* _lastScheduledFullChargeNotificationID;
	long long _deadlineSignalID;
	unsigned long long _predictorType;
	long long _previousDecisionMakerID;
	NSDate* _previousDecisionMakerDate;
	PowerUIMLTwoStageModelPredictor* _modelTwoStagePredictor;
	PowerUIDesktopModePredictor* _modelDesktopModePredictor;
	PowerUISleepWakeMonitor* _sleepWakeMonitor;
	NSArray* _monitors;
	NSDictionary* _powerLogStatus;
	NSDictionary* _previousPowerLogStatus;
	NSDate* _engagementTimeOverride;
	NSDate* _fullChargeDeadlineOverride;
	NSDate* _repeatEngagementOverrideEndDate;
	NSDate* _lastDesktopModeChangeDate;
	PowerUIBatteryMitigationManager* _batteryMitigationManager;
	NSXPCListener* _listener;
	PowerUITrialManager* _trialManager;

}

@property (nonatomic,retain) id<_CDLocalContext> context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSString * defaultsDomain;                                                //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,copy) id beforeBatteryCallback;                                                   //@synthesize beforeBatteryCallback=_beforeBatteryCallback - In the implementation block
@property (nonatomic,copy) id afterBatteryCallback;                                                    //@synthesize afterBatteryCallback=_afterBatteryCallback - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * checkpointKP;                                      //@synthesize checkpointKP=_checkpointKP - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * unCenter;                                      //@synthesize unCenter=_unCenter - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * notificationCenter;                     //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                 //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> mcmLog;                                              //@synthesize mcmLog=_mcmLog - In the implementation block
@property (assign,nonatomic) unsigned long long checkpoint;                                            //@synthesize checkpoint=_checkpoint - In the implementation block
@property (assign,nonatomic) unsigned service;                                                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                                                     //@synthesize assertionID=_assertionID - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                          //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) char enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (retain) NSDate * disabledUntilDate;                                                         //@synthesize disabledUntilDate=_disabledUntilDate - In the implementation block
@property (assign,nonatomic) char temporarilyDisabled;                                                 //@synthesize temporarilyDisabled=_temporarilyDisabled - In the implementation block
@property (nonatomic,retain) NSDate * _fullChargeDeadline;                                             //@synthesize _fullChargeDeadline=__fullChargeDeadline - In the implementation block
@property (nonatomic,retain) NSDate * uiDeadline;                                                      //@synthesize uiDeadline=_uiDeadline - In the implementation block
@property (nonatomic,retain) NSDictionary * signalDeadline;                                            //@synthesize signalDeadline=_signalDeadline - In the implementation block
@property (nonatomic,retain) NSDate * lastComputedSignalDeadline;                                      //@synthesize lastComputedSignalDeadline=_lastComputedSignalDeadline - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) int powerlogToken;                                                        //@synthesize powerlogToken=_powerlogToken - In the implementation block
@property (assign,nonatomic) char _hasLegitimateUsage;                                                 //@synthesize _hasLegitimateUsage=__hasLegitimateUsage - In the implementation block
@property (assign,nonatomic) int lastBatteryLevel;                                                     //@synthesize lastBatteryLevel=_lastBatteryLevel - In the implementation block
@property (assign,nonatomic) int lastPluginStatus;                                                     //@synthesize lastPluginStatus=_lastPluginStatus - In the implementation block
@property (assign,nonatomic) int lastFullyCharged;                                                     //@synthesize lastFullyCharged=_lastFullyCharged - In the implementation block
@property (assign,nonatomic) char lastChargerWasWireless;                                              //@synthesize lastChargerWasWireless=_lastChargerWasWireless - In the implementation block
@property (nonatomic,retain) NSDate * lastInterruptedTime;                                             //@synthesize lastInterruptedTime=_lastInterruptedTime - In the implementation block
@property (nonatomic,retain) NSNumber * engagementsLastMonthBucket;                                    //@synthesize engagementsLastMonthBucket=_engagementsLastMonthBucket - In the implementation block
@property (nonatomic,retain) NSNumber * lastReportedNumberOfPluginEvents;                              //@synthesize lastReportedNumberOfPluginEvents=_lastReportedNumberOfPluginEvents - In the implementation block
@property (nonatomic,retain) NSNumber * medianPluginLength;                                            //@synthesize medianPluginLength=_medianPluginLength - In the implementation block
@property (assign,nonatomic) double empiricalTimeToFullChargeDurationMinutes;                          //@synthesize empiricalTimeToFullChargeDurationMinutes=_empiricalTimeToFullChargeDurationMinutes - In the implementation block
@property (nonatomic,retain) NSString * lastScheduledFullChargeNotificationID;                         //@synthesize lastScheduledFullChargeNotificationID=_lastScheduledFullChargeNotificationID - In the implementation block
@property (assign,nonatomic) long long deadlineSignalID;                                               //@synthesize deadlineSignalID=_deadlineSignalID - In the implementation block
@property (assign,nonatomic) char firstNotificationRequested;                                          //@synthesize firstNotificationRequested=_firstNotificationRequested - In the implementation block
@property (assign,nonatomic) char firstNotificationDisplayed;                                          //@synthesize firstNotificationDisplayed=_firstNotificationDisplayed - In the implementation block
@property (assign,nonatomic) char progressNotificationsEnabled;                                        //@synthesize progressNotificationsEnabled=_progressNotificationsEnabled - In the implementation block
@property (assign,nonatomic) char signalsIgnored;                                                      //@synthesize signalsIgnored=_signalsIgnored - In the implementation block
@property (assign,nonatomic) unsigned long long predictorType;                                         //@synthesize predictorType=_predictorType - In the implementation block
@property (assign,nonatomic) long long previousDecisionMakerID;                                        //@synthesize previousDecisionMakerID=_previousDecisionMakerID - In the implementation block
@property (nonatomic,retain) NSDate * previousDecisionMakerDate;                                       //@synthesize previousDecisionMakerDate=_previousDecisionMakerDate - In the implementation block
@property (nonatomic,retain) PowerUIMLTwoStageModelPredictor * modelTwoStagePredictor;                 //@synthesize modelTwoStagePredictor=_modelTwoStagePredictor - In the implementation block
@property (nonatomic,retain) PowerUIDesktopModePredictor * modelDesktopModePredictor;                  //@synthesize modelDesktopModePredictor=_modelDesktopModePredictor - In the implementation block
@property (nonatomic,retain) PowerUISleepWakeMonitor * sleepWakeMonitor;                               //@synthesize sleepWakeMonitor=_sleepWakeMonitor - In the implementation block
@property (nonatomic,retain) NSArray * monitors;                                                       //@synthesize monitors=_monitors - In the implementation block
@property (retain) NSDictionary * powerLogStatus;                                                      //@synthesize powerLogStatus=_powerLogStatus - In the implementation block
@property (retain) NSDictionary * previousPowerLogStatus;                                              //@synthesize previousPowerLogStatus=_previousPowerLogStatus - In the implementation block
@property (retain) NSDate * engagementTimeOverride;                                                    //@synthesize engagementTimeOverride=_engagementTimeOverride - In the implementation block
@property (retain) NSDate * fullChargeDeadlineOverride;                                                //@synthesize fullChargeDeadlineOverride=_fullChargeDeadlineOverride - In the implementation block
@property (retain) NSDate * repeatEngagementOverrideEndDate;                                           //@synthesize repeatEngagementOverrideEndDate=_repeatEngagementOverrideEndDate - In the implementation block
@property (assign,nonatomic) char overrideAllSignals;                                                  //@synthesize overrideAllSignals=_overrideAllSignals - In the implementation block
@property (assign,nonatomic) char encounteredTLCDuringTopOff;                                          //@synthesize encounteredTLCDuringTopOff=_encounteredTLCDuringTopOff - In the implementation block
@property (assign,nonatomic) char isDesktopDevice;                                                     //@synthesize isDesktopDevice=_isDesktopDevice - In the implementation block
@property (nonatomic,retain) NSDate * lastDesktopModeChangeDate;                                       //@synthesize lastDesktopModeChangeDate=_lastDesktopModeChangeDate - In the implementation block
@property (nonatomic,retain) PowerUIBatteryMitigationManager * batteryMitigationManager;               //@synthesize batteryMitigationManager=_batteryMitigationManager - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                 //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) int chargingStateNotification;                                            //@synthesize chargingStateNotification=_chargingStateNotification - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;                                       //@synthesize trialManager=_trialManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(NSDistributedNotificationCenter *)notificationCenter;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)resetState;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)currentState;
-(char)temporarilyDisabled;
-(void)setTemporarilyDisabled:(char)arg1 ;
-(unsigned)service;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setService:(unsigned)arg1 ;
-(unsigned long long)checkpoint;
-(NSString *)defaultsDomain;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(unsigned)assertionID;
-(id)timeStringFromDate:(id)arg1 ;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(PowerUITrialManager *)trialManager;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)statusWithHandler:(/*^block*/id)arg1 ;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1 ;
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(char)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)enterDevelopmentMode;
-(void)resetDevelopmentMode;
-(void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(char)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)resetEngagementOverrideWithHandler:(/*^block*/id)arg1 ;
-(void)setDesktopMode:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)resetDesktopModeWithHandler:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 setChargingStatus:(char)arg2 withHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)powerLogStatus;
-(char)setChargingStatus:(char)arg1 ;
-(void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2 ;
-(id)readStringForPreferenceKey:(id)arg1 ;
-(void)setString:(id)arg1 forPreferenceKey:(id)arg2 ;
-(char)isExternalConnected;
-(id)readNumberForPreferenceKey:(id)arg1 ;
-(id)readDateForPreferenceKey:(id)arg1 ;
-(PowerUIMLTwoStageModelPredictor *)modelTwoStagePredictor;
-(PowerUIDesktopModePredictor *)modelDesktopModePredictor;
-(void)handleXPCActivityOnBoot;
-(void)loadDefaults;
-(void)loadCheckpoint;
-(void)setCheckpoint:(unsigned long long)arg1 ;
-(void)updateSleepWakeNotificationsState;
-(void)registerForFirstWakeupNotification;
-(void)handleCallback;
-(UNUserNotificationCenter *)unCenter;
-(int)lastBatteryLevel;
-(id)requestAtCheckpoint:(unsigned long long)arg1 atBatteryLevel:(int)arg2 ;
-(void)handleNewBatteryLevel:(int)arg1 whileExternalConnected:(char)arg2 fullyCharged:(char)arg3 ;
-(NSArray *)monitors;
-(void)enableCharging;
-(void)disableCharging;
-(id)smartTopOffEngagedRequest:(char)arg1 ;
-(id)smartTopOffFailureNotificationAtBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(id)firsUseNotificationRequest;
-(void)reportHistoricalEngagements;
-(id)initWithDefaultsDomain:(id)arg1 knowledgeStore:(id)arg2 contextStore:(id)arg3 beforeHandlingBatteryChangeCallback:(/*^block*/id)arg4 afterHandlingBatteryChangeCallback:(/*^block*/id)arg5 ;
-(void)startAllMonitoring;
-(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 ;
-(NSDictionary *)previousPowerLogStatus;
-(void)setPreviousPowerLogStatus:(NSDictionary *)arg1 ;
-(id)checkpointNameFromCheckpoint:(unsigned long long)arg1 ;
-(id)eligibleEngagementIntervalFromTimelineEvents:(id)arg1 ;
-(id)dailyStatsFromLastReported:(id)arg1 ;
-(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 ;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 ;
-(double)totalTemporarilyDisabledHours:(id)arg1 withEngagements:(id)arg2 withPluginEnd:(id)arg3 ;
-(double)idleDurationWithEngagedCheckpoints:(id)arg1 withTopOffStartCheckpoints:(id)arg2 withDisabledCheckpoints:(id)arg3 withTopOffStart:(id)arg4 withIdleStart:(id)arg5 withTemporarilyDisabledStart:(id)arg6 withPluginEnd:(id)arg7 ;
-(unsigned long long)projectedBatteryLevelForDuration:(unsigned long long)arg1 withInitialBatteryLevel:(unsigned long long)arg2 ;
-(double)totalTopOffDurationWithTopOffStartCheckpoints:(id)arg1 withFullyChargedCheckpoints:(id)arg2 withTopOffStart:(id)arg3 withFullyChargedDate:(id)arg4 withPluginEnd:(id)arg5 ;
-(char)isDeviceWithLegitimateUsage;
-(id)constructAnalyticsStatusFromEvents:(id)arg1 ;
-(void)pluginTimelineAddEvent:(id)arg1 atDate:(id)arg2 withBatteryLevel:(unsigned long long)arg3 ;
-(void)addPowerLogEventForCheckpoint:(unsigned long long)arg1 decisionSignalID:(id)arg2 decisionDate:(id)arg3 ;
-(void)setCheckpoint:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(void)setTemporarilyDisabled:(char)arg1 until:(id)arg2 ;
-(void)setEngagementTimeOverride:(NSDate *)arg1 ;
-(void)setFullChargeDeadlineOverride:(NSDate *)arg1 ;
-(void)setRepeatEngagementOverrideEndDate:(NSDate *)arg1 ;
-(void)cleanupOverrides;
-(void)setPowerLogStatus:(NSDictionary *)arg1 ;
-(NSDate *)engagementTimeOverride;
-(NSDate *)fullChargeDeadlineOverride;
-(NSDate *)repeatEngagementOverrideEndDate;
-(int)lastPluginStatus;
-(void)evaluateIfDesktopDevice;
-(void)recallPeriodicCheck;
-(void)handleTopOffSupervisorEventInternal;
-(double)periodicCheckDuration;
-(void)handleTopOffSupervisorEvent;
-(void)handleInternalCarryPromptEvent;
-(void)handleCallback:(char)arg1 ;
-(void)updateNotificationSettings:(char)arg1 ;
-(void)setLastBatteryLevel:(int)arg1 ;
-(void)resetDeviceHasLegitimateUsage;
-(id)updateAnalyticsWithPluginMetrics:(id)arg1 withBatteryLevel:(int)arg2 ;
-(void)recordAnalytics;
-(void)clearPluginTimeline;
-(void)setLastFullyCharged:(int)arg1 ;
-(void)setLastPluginStatus:(int)arg1 ;
-(void)reportAggDKeys:(id)arg1 ;
-(id)constructAnalyticsStatus;
-(id)constructDailyStats:(id)arg1 ;
-(id)setFullChargeDeadline:(id)arg1 withOCVMitigationWaitTime:(double)arg2 ;
-(void)setOverrideAllSignals:(char)arg1 ;
-(void)createPowerAssertion;
-(id)chargePrediction:(unsigned long long)arg1 fullyCharged:(char)arg2 previousCheckpoint:(unsigned long long)arg3 predictor:(unsigned long long)arg4 ;
-(void)updateDecisionMakerID:(long long)arg1 withCheckpoint:(unsigned long long)arg2 ;
-(void)stopAllMonitoring;
-(void)requestPeriodicCheck;
-(void)updateChargingTimeSaved;
-(void)releasePowerAssertion;
-(void)clearAllNotificationState;
-(id)shouldDisableChargingAsOfDate:(id)arg1 atBatteryLevel:(unsigned long long)arg2 overrideAllSignals:(char)arg3 withPredictor:(id)arg4 bypassSaved:(char)arg5 ;
-(id)computeSignalDeadline;
-(id)adjustedFullChargeDeadlineWithSignals:(id)arg1 andBatteryMitigationAdvancement:(double)arg2 withDesktopMode:(char)arg3 withFullChargeDeadline:(id)arg4 withResult:(id)arg5 ;
-(void)recomputeEmpiricalTimeToFullCharge;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 includeTLCDelay:(char)arg2 ;
-(NSDictionary *)signalDeadline;
-(char)shouldDisableChargingOverrideModel:(unsigned long long)arg1 ;
-(id)shouldDisableChargingAtBatteryLevel:(unsigned long long)arg1 withPredictor:(id)arg2 ;
-(char)predictor:(unsigned long long)arg1 suggestsDiablingChargingAtBatteryLevel:(unsigned long long)arg2 ;
-(void)evaluateIfDesktopDeviceForced:(char)arg1 ;
-(id)desktopModeOverride;
-(char)deviceHasOverriddenLegitimateUsageDetection;
-(char)deviceHasEnoughPluggedInTime;
-(id)uiDeadlineFromFullChargeDeadline:(id)arg1 atDate:(id)arg2 ;
-(id)smartTopOffEngagedContent:(char)arg1 ;
-(void)addEngagementFromDate:(id)arg1 withDuration:(double)arg2 ;
-(id)lastAcquiredLocation;
-(id)ttrURLforBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(id)fullChargeDeadline;
-(id)fullChargeDeadlineStringFromDate:(id)arg1 ;
-(id)readAndRemoveRecentEngagements;
-(id)stringFromDecisionMaker:(long long)arg1 decisionDate:(id)arg2 ;
-(id)recentEngagements;
-(id)stringFromState:(unsigned long long)arg1 ;
-(id)defaultDateToDisableUntilGivenDate:(id)arg1 ;
-(void)reportBatteryHealthMetrics;
-(void)handleAlarmEvent:(id)arg1 ;
-(void)dispatchAlarmAfter:(long long)arg1 withName:(id)arg2 ;
-(id)shouldDisableChargingMLPredictor:(unsigned long long)arg1 ;
-(id)stringFromInterval:(id)arg1 ;
-(char)deviceHasSeveralInteractions;
-(char)watchIsInternalAndCarrySwitchDisabled;
-(char)deviceWasRecentlyActive;
-(char)deviceWasRecentlyConnectedToCharger;
-(void)cleanupPluginHistoryWithActivity:(id)arg1 ;
-(id)beforeBatteryCallback;
-(void)setBeforeBatteryCallback:(id)arg1 ;
-(id)afterBatteryCallback;
-(void)setAfterBatteryCallback:(id)arg1 ;
-(_CDContextualKeyPath *)checkpointKP;
-(void)setCheckpointKP:(_CDContextualKeyPath *)arg1 ;
-(void)setUnCenter:(UNUserNotificationCenter *)arg1 ;
-(void)setNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(NSObject*<OS_os_log>)mcmLog;
-(void)setMcmLog:(NSObject*<OS_os_log>)arg1 ;
-(NSDate *)disabledUntilDate;
-(void)setDisabledUntilDate:(NSDate *)arg1 ;
-(NSDate *)_fullChargeDeadline;
-(void)set_fullChargeDeadline:(NSDate *)arg1 ;
-(NSDate *)uiDeadline;
-(void)setUiDeadline:(NSDate *)arg1 ;
-(void)setSignalDeadline:(NSDictionary *)arg1 ;
-(NSDate *)lastComputedSignalDeadline;
-(void)setLastComputedSignalDeadline:(NSDate *)arg1 ;
-(int)powerlogToken;
-(void)setPowerlogToken:(int)arg1 ;
-(char)_hasLegitimateUsage;
-(void)set_hasLegitimateUsage:(char)arg1 ;
-(int)lastFullyCharged;
-(char)lastChargerWasWireless;
-(void)setLastChargerWasWireless:(char)arg1 ;
-(NSDate *)lastInterruptedTime;
-(void)setLastInterruptedTime:(NSDate *)arg1 ;
-(NSNumber *)engagementsLastMonthBucket;
-(void)setEngagementsLastMonthBucket:(NSNumber *)arg1 ;
-(NSNumber *)lastReportedNumberOfPluginEvents;
-(void)setLastReportedNumberOfPluginEvents:(NSNumber *)arg1 ;
-(NSNumber *)medianPluginLength;
-(void)setMedianPluginLength:(NSNumber *)arg1 ;
-(double)empiricalTimeToFullChargeDurationMinutes;
-(void)setEmpiricalTimeToFullChargeDurationMinutes:(double)arg1 ;
-(NSString *)lastScheduledFullChargeNotificationID;
-(void)setLastScheduledFullChargeNotificationID:(NSString *)arg1 ;
-(long long)deadlineSignalID;
-(void)setDeadlineSignalID:(long long)arg1 ;
-(char)firstNotificationRequested;
-(void)setFirstNotificationRequested:(char)arg1 ;
-(char)firstNotificationDisplayed;
-(void)setFirstNotificationDisplayed:(char)arg1 ;
-(char)progressNotificationsEnabled;
-(void)setProgressNotificationsEnabled:(char)arg1 ;
-(char)signalsIgnored;
-(void)setSignalsIgnored:(char)arg1 ;
-(unsigned long long)predictorType;
-(void)setPredictorType:(unsigned long long)arg1 ;
-(long long)previousDecisionMakerID;
-(void)setPreviousDecisionMakerID:(long long)arg1 ;
-(NSDate *)previousDecisionMakerDate;
-(void)setPreviousDecisionMakerDate:(NSDate *)arg1 ;
-(void)setModelTwoStagePredictor:(PowerUIMLTwoStageModelPredictor *)arg1 ;
-(void)setModelDesktopModePredictor:(PowerUIDesktopModePredictor *)arg1 ;
-(PowerUISleepWakeMonitor *)sleepWakeMonitor;
-(void)setSleepWakeMonitor:(PowerUISleepWakeMonitor *)arg1 ;
-(void)setMonitors:(NSArray *)arg1 ;
-(char)overrideAllSignals;
-(char)encounteredTLCDuringTopOff;
-(void)setEncounteredTLCDuringTopOff:(char)arg1 ;
-(char)isDesktopDevice;
-(void)setIsDesktopDevice:(char)arg1 ;
-(NSDate *)lastDesktopModeChangeDate;
-(void)setLastDesktopModeChangeDate:(NSDate *)arg1 ;
-(PowerUIBatteryMitigationManager *)batteryMitigationManager;
-(void)setBatteryMitigationManager:(PowerUIBatteryMitigationManager *)arg1 ;
-(int)chargingStateNotification;
-(void)setChargingStateNotification:(int)arg1 ;
@end
