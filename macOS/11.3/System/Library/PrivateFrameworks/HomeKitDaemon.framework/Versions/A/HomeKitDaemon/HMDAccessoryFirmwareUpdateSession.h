/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDDataStreamSocketDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/UARPControllerDelegateProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDDataStreamSocket, HMDAccessoryFirmwareUpdateSessionWingman, OS_dispatch_queue;
@class HMFTimer, HMDHAPAccessory, HMDAccessoryFirmwareUpdateManager, HMDAccessoryFirmwareUpdateConcurrencyLogEventManager, UARPAccessory, UARPAssetID, NSObject, HMFUnfairLock, HMDAccessoryFirmwareUpdateScheduler, NSString;

@interface HMDAccessoryFirmwareUpdateSession : NSObject <HMDDataStreamSocketDelegate, HMFTimerDelegate, UARPControllerDelegateProtocol, HMFLogging> {

	char _userInitiatedStaging;
	char _userInitiatedInstall;
	char _sessionEnded;
	char _assetOfferedForCurrentDataStream;
	HMFTimer* _allowedApplyDurationTimer;
	id<HMDDataStreamSocket> _dataStreamSocket;
	HMFTimer* _expectedApplyDurationTimer;
	HMDHAPAccessory* _hapAccessory;
	unsigned long long _internalState;
	HMFTimer* _socketIdleTimer;
	id<HMDAccessoryFirmwareUpdateSessionWingman> _wingman;
	HMDAccessoryFirmwareUpdateManager* _accessoryFirmwareUpdateManager;
	HMDAccessoryFirmwareUpdateConcurrencyLogEventManager* _logEventManager;
	UARPAccessory* _uarpAccessory;
	UARPAssetID* _assetID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFUnfairLock* _lock;
	HMDAccessoryFirmwareUpdateScheduler* _updateScheduler;
	unsigned long long _currentCommunicationErrorCount;
	NSString* _documentationPath;
	unsigned long long _userInitiatedHDSRetryCount;

}

@property (__weak,readonly) HMDAccessoryFirmwareUpdateManager * accessoryFirmwareUpdateManager;                  //@synthesize accessoryFirmwareUpdateManager=_accessoryFirmwareUpdateManager - In the implementation block
@property (__weak,readonly) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager * logEventManager;              //@synthesize logEventManager=_logEventManager - In the implementation block
@property (readonly) id<HMDAccessoryFirmwareUpdateSessionWingman> wingman;                                       //@synthesize wingman=_wingman - In the implementation block
@property (readonly) UARPAccessory * uarpAccessory;                                                              //@synthesize uarpAccessory=_uarpAccessory - In the implementation block
@property (retain) UARPAssetID * assetID;                                                                        //@synthesize assetID=_assetID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<HMDDataStreamSocket> dataStreamSocket;                                           //@synthesize dataStreamSocket=_dataStreamSocket - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                                       //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) unsigned long long internalState;                                                   //@synthesize internalState=_internalState - In the implementation block
@property (nonatomic,retain) HMDAccessoryFirmwareUpdateScheduler * updateScheduler;                              //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,retain) HMFTimer * allowedApplyDurationTimer;                                               //@synthesize allowedApplyDurationTimer=_allowedApplyDurationTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * expectedApplyDurationTimer;                                              //@synthesize expectedApplyDurationTimer=_expectedApplyDurationTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * socketIdleTimer;                                                         //@synthesize socketIdleTimer=_socketIdleTimer - In the implementation block
@property (assign) char sessionEnded;                                                                            //@synthesize sessionEnded=_sessionEnded - In the implementation block
@property (assign) char assetOfferedForCurrentDataStream;                                                        //@synthesize assetOfferedForCurrentDataStream=_assetOfferedForCurrentDataStream - In the implementation block
@property (getter=isFirmwareVersionUpToDate,readonly) char firmwareVersionUpToDate; 
@property (getter=isCurrentUpdateLatest,readonly) char currentUpdateLatest; 
@property (getter=isCurrentlyStaging,readonly) char currentlyStaging; 
@property (assign,nonatomic) unsigned long long currentCommunicationErrorCount;                                  //@synthesize currentCommunicationErrorCount=_currentCommunicationErrorCount - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionState; 
@property (getter=isUserInitiatedStaging,nonatomic,readonly) char userInitiatedStaging;                          //@synthesize userInitiatedStaging=_userInitiatedStaging - In the implementation block
@property (getter=isUserInitiatedInstall,nonatomic,readonly) char userInitiatedInstall;                          //@synthesize userInitiatedInstall=_userInitiatedInstall - In the implementation block
@property (nonatomic,retain) NSString * documentationPath;                                                       //@synthesize documentationPath=_documentationPath - In the implementation block
@property (assign,nonatomic) unsigned long long userInitiatedHDSRetryCount;                                      //@synthesize userInitiatedHDSRetryCount=_userInitiatedHDSRetryCount - In the implementation block
@property (nonatomic,readonly) double expectedApplyDuration; 
@property (nonatomic,readonly) double allowedApplyDuration; 
@property (nonatomic,__weak,readonly) HMDHAPAccessory * hapAccessory;                                            //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)__calculateDigestDataFromFile:(id)arg1 maxDataSize:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)pause;
-(void)_schedule;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned long long)sessionState;
-(UARPAssetID *)assetID;
-(void)firmwareStagingComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3 ;
-(void)firmwareStagingProgress:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4 ;
-(char)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(void)firmwareUpdateResult:(id)arg1 vendorSpecificStatus:(unsigned)arg2 error:(id)arg3 ;
-(unsigned long long)internalState;
-(id)logIdentifier;
-(void)socketDidClose:(id)arg1 ;
-(void)socket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setAssetID:(UARPAssetID *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)configure;
-(char)documentationAvailable;
-(void)_endSession;
-(HMDAccessoryFirmwareUpdateScheduler *)updateScheduler;
-(void)setUpdateScheduler:(HMDAccessoryFirmwareUpdateScheduler *)arg1 ;
-(void)setInternalState:(unsigned long long)arg1 ;
-(HMDAccessoryFirmwareUpdateManager *)accessoryFirmwareUpdateManager;
-(char)startManualUpdate:(id)arg1 error:(id*)arg2 ;
-(HMDHAPAccessory *)hapAccessory;
-(void)socketDidReceiveData:(id)arg1 ;
-(id<HMDAccessoryFirmwareUpdateSessionWingman>)wingman;
-(char)isUserInitiatedStaging;
-(char)isUserInitiatedInstall;
-(void)updateAvailableSoftwareUpdateState:(long long)arg1 ;
-(id)initWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4 wingman:(id)arg5 ;
-(void)_handleAutomaticUpdateEnabledChanged:(id)arg1 ;
-(void)handleAccessoryFirmwareVersionChangedNotification:(id)arg1 ;
-(void)handleStagedFirmwareVersionChangedNotification:(id)arg1 ;
-(void)handleFirmwareUpdateStateChangedNotification:(id)arg1 ;
-(void)handleNotReadyReasonsChanged:(id)arg1 ;
-(void)_updateAvailableSoftwareUpdate;
-(unsigned long long)nextStateToSchedule;
-(UARPAccessory *)uarpAccessory;
-(void)_syncStateWithAccessoryOnResume;
-(void)setUserInitiatedInstall:(char)arg1 ;
-(void)_updateAvailableSoftwareUpdateState:(long long)arg1 ;
-(id<HMDDataStreamSocket>)dataStreamSocket;
-(void)setCurrentCommunicationErrorCount:(unsigned long long)arg1 ;
-(void)resumeUARP;
-(void)stageFirmware;
-(void)applyFirmware;
-(char)assetOfferedForCurrentDataStream;
-(void)_evaluateHDSRetryForUserInitiatedInstall;
-(unsigned long long)currentCommunicationErrorCount;
-(void)_withOpenSocketDoBlock:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)setSocketIdleTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)socketIdleTimer;
-(void)_cancelSocketIdleTimer;
-(void)setDataStreamSocket:(id<HMDDataStreamSocket>)arg1 ;
-(void)setAssetOfferedForCurrentDataStream:(char)arg1 ;
-(void)setUserInitiatedHDSRetryCount:(unsigned long long)arg1 ;
-(void)_startSocketIdleTimer;
-(HMFTimer *)allowedApplyDurationTimer;
-(unsigned long long)userInitiatedHDSRetryCount;
-(void)_logDebugStates:(const char*)arg1 ;
-(char)sessionEnded;
-(char)isFirmwareVersionUpToDate;
-(char)isCurrentlyStaging;
-(char)isCurrentlyApplying;
-(HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *)logEventManager;
-(void)_applyFirmware;
-(double)_allowedApplyDuration;
-(void)setAllowedApplyDurationTimer:(HMFTimer *)arg1 ;
-(double)_expectedApplyDuration;
-(void)setExpectedApplyDurationTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)expectedApplyDurationTimer;
-(void)_automaticUpdateEnabledChanged:(char)arg1 ;
-(void)setSessionEnded:(char)arg1 ;
-(void)updateAccessoryFirmwareVersion;
-(void)_verifyUpdateComplete;
-(void)stagingComplete;
-(void)_updateSoftwareUpdateNotReadyReasons;
-(void)_resetAvailableSoftwareUpdate;
-(char)isCurrentUpdateLatest;
-(id)newSoftwareUpdateWithState:(long long)arg1 ;
-(id)newDocumentationMetadata;
-(void)_resetSocketIdleTimer;
-(void)setUserInitiatedStaging:(char)arg1 ;
-(void)_updateAvailableSoftwareUpdateDocumentation;
-(void)_stagingFailed;
-(void)_logApplyEventWithStatus:(long long)arg1 ;
-(void)_handleSocketTimeout;
-(void)_cancelApplyTimer;
-(void)_handleApplyTimerFiredForManualInstall;
-(id)initWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4 ;
-(void)resumeWithState:(unsigned long long)arg1 ;
-(double)allowedApplyDuration;
-(double)expectedApplyDuration;
-(NSString *)documentationPath;
-(void)setDocumentationPath:(NSString *)arg1 ;
@end

