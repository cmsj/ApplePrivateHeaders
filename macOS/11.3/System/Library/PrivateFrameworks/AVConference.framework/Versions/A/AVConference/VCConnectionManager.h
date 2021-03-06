/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionHealthMonitorDelegate.h>
#import <libobjc.A.dylib/VCWifiAssistManagerDelegate.h>
#import <libobjc.A.dylib/VCLinkProbingHandlerDelegate.h>

@protocol VCConnectionProtocol, OS_dispatch_queue;
@class NSMutableArray, NSObject, VCWifiAssistManager, VCConnectionHealthMonitor, VCWRMHandler, VCDuplicationHandler, VCStatsRecorder, VCLinkProbingHandler, NSString;

@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate, VCLinkProbingHandlerDelegate> {

	char _isStarted;
	unsigned _callID;
	int _connectionSelectionVersion;
	int _relayServerProvider;
	opaque_pthread_rwlock_t _stateRWlock;
	id<VCConnectionProtocol> _primaryConnection;
	id<VCConnectionProtocol> _secondaryConnection;
	id<VCConnectionProtocol> _connectionForDuplication;
	id<VCConnectionProtocol> _lastPrimaryConnectionInUse;
	NSMutableArray* _connectionArray;
	opaqueRTCReportingRef _reportingAgent;
	char _isInitialConnectionEstablished;
	unsigned long long _mediaExcessiveCellularTxBytes;
	unsigned long long _mediaExcessiveCellularRxBytes;
	unsigned long long _signalingExcessiveCellularTxBytes;
	unsigned long long _signalingExcessiveCellularRxBytes;
	unsigned long long _budgetConsumingCellularTxBytes;
	unsigned long long _budgetConsumingCellularRxBytes;
	unsigned long long _mediaCellularTxBytes;
	unsigned long long _mediaCellularRxBytes;
	unsigned long long _mediaWifiTxBytes;
	unsigned long long _mediaWifiRxBytes;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	/*function pointer*/void* _duplicationCallback;
	char _enableDuplication;
	double _lastConnectionUnstableTime;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	void* _duplicationContext;
	char _duplicationPending;
	char _supportDuplication;
	int _preferredLocalInterfaceForDuplication;
	int _preferredRemoteInterfaceForDuplication;
	char _isPrimaryLocalUsingCell;
	char _isPreWarmStateEnabled;
	char _remotePreWarmStateEnabled;
	VCWifiAssistManager* _vcWifiAssist;
	char _hasAssertedCell;
	VCConnectionHealthMonitor* _connectionHealthMonitor;
	SCD_Struct_VC111 _localConnectionStats;
	SCD_Struct_VC111 _remoteConnectionStats;
	VCWRMHandler* _wrmHandler;
	VCDuplicationHandler* _duplicationHandler;
	double _remoteNoRemotePacketInterval;
	double _lastDefaultCheckTime;
	char _isAudioOnly;
	double _lastiRATCheckTime;
	double _iRATNotificationRequestTime;
	int _localWRMLinkTypeFromDefaults;
	char _allowRequestForWRMNotification;
	char _forceHandoverToCell;
	char _disableRemoteInterfaceInference;
	/*function pointer*/void* _wrmStatusUpdateCallback;
	/*function pointer*/void* _wrmRequestNotificationCallback;
	void* _wrmCallbacksContext;
	VCStatsRecorder* _statsRecorder;
	char _preferRelayOverP2PEnabled;
	char _fastMediaDuplicationEnabled;
	char _cellPrimaryInterfaceChangeEnabled;
	char _duplicateImportantPktsEnabled;
	char _lowNetworkModeEnabled;
	char _duplicationEnhancementEnabled;
	SCD_Struct_VC97 _connectionSelectionPolicy;
	int _localRATTypeOverride;
	int _localWRMAlertFromDefaults;
	unsigned _realRATType;
	unsigned char _linkProbingCapabilityVersion;
	unsigned char _remoteLinkProbingCapabilityVersion;
	VCLinkProbingHandler* _linkProbingHandler;
	id<VCConnectionProtocol> _lastActivePrimaryConnection;
	char _iRATDuplicationEnabled;
	double _noRemoteDuplicationThresholdFast;

}

@property (nonatomic,retain) id<VCConnectionProtocol> lastPrimaryConnectionInUse;                              //@synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplication;                                //@synthesize connectionForDuplication=_connectionForDuplication - In the implementation block
@property (assign) unsigned callID;                                                                            //@synthesize callID=_callID - In the implementation block
@property (assign) int relayServerProvider;                                                                    //@synthesize relayServerProvider=_relayServerProvider - In the implementation block
@property (readonly) char isPreWarmStateEnabled;                                                               //@synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled - In the implementation block
@property (assign,nonatomic) char remotePreWarmStateEnabled;                                                   //@synthesize remotePreWarmStateEnabled=_remotePreWarmStateEnabled - In the implementation block
@property (assign) int preferredLocalInterfaceForDuplication;                                                  //@synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication - In the implementation block
@property (assign) int preferredRemoteInterfaceForDuplication;                                                 //@synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication - In the implementation block
@property (readonly) char isLocalCellularInterfaceUsed; 
@property (assign) id<VCConnectionManagerDelegate> delegate; 
@property (assign) char isAudioOnly;                                                                           //@synthesize isAudioOnly=_isAudioOnly - In the implementation block
@property (assign) char supportDuplication;                                                                    //@synthesize supportDuplication=_supportDuplication - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> primaryConnection;                                       //@synthesize primaryConnection=_primaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> secondaryConnection;                                     //@synthesize secondaryConnection=_secondaryConnection - In the implementation block
@property (readonly) int connectionCount; 
@property (readonly) unsigned long long mediaExcessiveCellularTxBytes;                                         //@synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes - In the implementation block
@property (readonly) unsigned long long mediaExcessiveCellularRxBytes;                                         //@synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes - In the implementation block
@property (readonly) unsigned long long signalingExcessiveCellularTxBytes;                                     //@synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes - In the implementation block
@property (readonly) unsigned long long signalingExcessiveCellularRxBytes;                                     //@synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes - In the implementation block
@property (readonly) unsigned long long budgetConsumingCellularTxBytes;                                        //@synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes - In the implementation block
@property (readonly) unsigned long long budgetConsumingCellularRxBytes;                                        //@synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes - In the implementation block
@property (readonly) unsigned long long mediaCellularTxBytes;                                                  //@synthesize mediaCellularTxBytes=_mediaCellularTxBytes - In the implementation block
@property (readonly) unsigned long long mediaCellularRxBytes;                                                  //@synthesize mediaCellularRxBytes=_mediaCellularRxBytes - In the implementation block
@property (readonly) unsigned long long mediaWifiTxBytes;                                                      //@synthesize mediaWifiTxBytes=_mediaWifiTxBytes - In the implementation block
@property (readonly) unsigned long long mediaWifiRxBytes;                                                      //@synthesize mediaWifiRxBytes=_mediaWifiRxBytes - In the implementation block
@property (readonly) double remoteNoRemotePacketInterval;                                                      //@synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval - In the implementation block
@property (nonatomic,readonly) VCStatsRecorder * statsRecorder;                                                //@synthesize statsRecorder=_statsRecorder - In the implementation block
@property (assign,setter=setPreferRelayOverP2PEnabled:,nonatomic) char preferRelayOverP2PEnabled;              //@synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled - In the implementation block
@property (assign) char fastMediaDuplicationEnabled;                                                           //@synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled - In the implementation block
@property (assign) char cellPrimaryInterfaceChangeEnabled;                                                     //@synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled - In the implementation block
@property (assign) char duplicateImportantPktsEnabled;                                                         //@synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled - In the implementation block
@property (assign) char lowNetworkModeEnabled;                                                                 //@synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled - In the implementation block
@property (assign) char duplicationEnhancementEnabled;                                                         //@synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled - In the implementation block
@property (assign,setter=setiRATDuplicationEnabled:,nonatomic) char iRATDuplicationEnabled;                    //@synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled - In the implementation block
@property (assign) double noRemoteDuplicationThresholdFast;                                                    //@synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast - In the implementation block
@property (assign) unsigned realRATType;                                                                       //@synthesize realRATType=_realRATType - In the implementation block
@property (readonly) unsigned char linkProbingCapabilityVersion;                                               //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
@property (assign,nonatomic) unsigned char remoteLinkProbingCapabilityVersion;                                 //@synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion - In the implementation block
@property (readonly) double primaryConnHealthAllowedDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<VCConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<VCConnectionManagerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(id<VCConnectionProtocol>)secondaryConnection;
-(int)relayServerProvider;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(int)addConnection:(id)arg1 ;
-(int)removeConnection:(id)arg1 ;
-(char)isAudioOnly;
-(int)connectionCount;
-(void)setIsAudioOnly:(char)arg1 ;
-(id)activeConnectionRegistry;
-(id)suggestedLinkTypeCombo;
-(double)primaryConnHealthAllowedDelay;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(unsigned char)linkProbingCapabilityVersion;
-(char)fastMediaDuplicationEnabled;
-(void)setFastMediaDuplicationEnabled:(char)arg1 ;
-(char)duplicateImportantPktsEnabled;
-(void)setDuplicateImportantPktsEnabled:(char)arg1 ;
-(char)isBetterConnection:(id)arg1 asPrimary:(char)arg2 ;
-(id<VCConnectionProtocol>)primaryConnection;
-(id<VCConnectionProtocol>)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(int)getNumberOfConnectionsInternal;
-(void)checkpointPrimaryConnection:(id)arg1 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)useCellPrimayInterface:(char)arg1 ;
-(void)setDuplicationEnabledInternal:(char)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(char)arg2 ;
-(void)setPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)promoteSecondaryConnectionToPrimary:(id)arg1 ;
-(void)addTelemetryForConnection:(id)arg1 dictionary:(id)arg2 ;
-(char)isOptimalConnection:(id)arg1 asPrimary:(char)arg2 interfaceMask:(int)arg3 ;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(char)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(char*)arg2 isSourceIPv6:(char*)arg3 ;
-(char)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)copyConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(char*)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(char)arg4 isOutgoing:(char)arg5 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg1 ;
-(unsigned)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(char)arg2 ;
-(unsigned)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(char)arg2 ;
-(void)updateConnectionForDuplication;
-(void)reportLinkProbingStatsWithDuplicationJustStarted:(char)arg1 ;
-(void)setConnectionForDuplication:(id<VCConnectionProtocol>)arg1 ;
-(void)setLastPrimaryConnectionInUse:(id<VCConnectionProtocol>)arg1 ;
-(SCD_Struct_VC97*)getConnectionSelectionPolicy;
-(id<VCConnectionProtocol>)connectionForDuplication;
-(int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(char)arg2 ;
-(void)setRealRATType:(unsigned)arg1 ;
-(void)disableRemotePreferredInterfaceInference:(char)arg1 ;
-(int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1 ;
-(void)updateConnectionSelectionPolicy;
-(char)isDuplicationEnabled;
-(void)setActiveLinkProbingEnabled:(char)arg1 ;
-(id)connectionForQualityInternal:(int)arg1 ;
-(const char*)reasonStringWithDuplicationReason:(unsigned char)arg1 ;
-(void)addDuplicationSelectionLogicTelemetryForConnection:(id)arg1 activeConnectionRegistry:(id)arg2 suggestedLinkTypeCombo:(id)arg3 payload:(id)arg4 ;
-(void)addLinkProbingTelemetry:(id)arg1 ;
-(void)alertStateUpdated:(char)arg1 isLocal:(char)arg2 ;
-(void)resetMediaByteCounters;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(char)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(char)arg2 ;
-(SCD_Struct_VC112)processDuplicationStateUpdateEvent:(SCD_Struct_VC113)arg1 didLocalHandover:(char)arg2 timeDurationMs:(unsigned)arg3 linkType:(int)arg4 wrmCallbackScenario:(unsigned char)arg5 ;
-(id)copyConnectionForQuality:(int)arg1 ;
-(void)updateCellularExcessiveBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytes:(int)arg2 isMediaData:(char)arg3 isOutgoing:(char)arg4 ;
-(void)updateWRMDuplicationForHandover;
-(void)checklocalRATTypeOverrideDefaultValue:(char)arg1 ;
-(void)checkWRMSuggestionDefaultValue;
-(void)checkActivelyRequestWRMRecommendation:(double)arg1 isLocalUsingCellular:(char)arg2 ;
-(char)shouldDuplicatePacket:(BOOL)arg1 ;
-(int)processWRMNotification:(SCD_Struct_VC101*)arg1 ;
-(void)setPreWarmState:(char)arg1 ;
-(void)requestWRMNotification;
-(void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(char)arg2 isIPv6:(char)arg3 ;
-(void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(char)arg2 isIPv6:(char)arg3 ;
-(void)updateTransmittedBytes:(int)arg1 isOnCell:(char)arg2 isIPv6:(char)arg3 ;
-(void)updateReceivedBytes:(int)arg1 isOnCell:(char)arg2 isIPv6:(char)arg3 ;
-(void)updateConnectionStatsWithIndicatorNoPacket:(SCD_Struct_VC111*)arg1 ;
-(void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(SCD_Struct_VC111*)arg1 ;
-(void)updateConnectionStatsWithIndicatorNone:(SCD_Struct_VC111*)arg1 ;
-(void)updateConnectionStatsWithIndicatorPrimaryImproved:(SCD_Struct_VC111*)arg1 ;
-(char)shouldDropCurrentPrimaryConnectionWithConnectionStats:(SCD_Struct_VC111*)arg1 ;
-(char)isDuplicationConnectionCandidate:(id)arg1 ;
-(char)areAllLinkProbingTriggersInactive;
-(void)updateProbingResults:(id)arg1 ;
-(void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(char)arg2 ;
-(void)didChangeWifiAssistAvailable:(char)arg1 reason:(unsigned char)arg2 ;
-(void)setupConnectionHealthMonitor;
-(void)setPreferRelayOverP2PEnabled:(char)arg1 ;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2 ;
-(void)setDuplicationCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)setConnectionPause:(char)arg1 isLocalConnection:(char)arg2 ;
-(void)setiRATDuplicationEnabled:(char)arg1 ;
-(void)setDuplicationEnabled:(char)arg1 ;
-(int)setWRMUpdateCallback:(/*function pointer*/void*)arg1 requestNotificationCallback:(/*function pointer*/void*)arg2 withContext:(void*)arg3 ;
-(void)setRemotePreWarmStateEnabled:(char)arg1 ;
-(void)processWRMCoexMetrics:(id)arg1 ;
-(int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(char)arg2 ;
-(int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(char)arg2 ;
-(int)getCellularMTUForActiveConnectionWithQuality:(int)arg1 ;
-(char)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1 ;
-(char)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1 ;
-(void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesSent:(int)arg2 isMediaData:(char)arg3 shouldCountPacket:(char)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(char)arg6 ;
-(void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesReceived:(int)arg2 isMediaData:(char)arg3 shouldCountPacket:(char)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(char)arg6 ;
-(tagVCSourceDestinationInfo*)createSourceDestinationInfoListWithForceDuplication:(BOOL)arg1 ;
-(char)isLocalCellularInterfaceUsed;
-(void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg1 ;
-(void)setRemoteLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(int)setConnectionHealthOnControlInfo:(void*)arg1 ;
-(int)processConnectionHealthFromControlInfo:(void*)arg1 ;
-(void)setRelayServerProvider:(int)arg1 ;
-(int)preferredLocalInterfaceForDuplication;
-(int)preferredRemoteInterfaceForDuplication;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(char)supportDuplication;
-(void)setSupportDuplication:(char)arg1 ;
-(unsigned long long)mediaExcessiveCellularTxBytes;
-(unsigned long long)mediaExcessiveCellularRxBytes;
-(unsigned long long)signalingExcessiveCellularTxBytes;
-(unsigned long long)signalingExcessiveCellularRxBytes;
-(unsigned long long)mediaCellularTxBytes;
-(unsigned long long)mediaCellularRxBytes;
-(unsigned long long)mediaWifiTxBytes;
-(unsigned long long)mediaWifiRxBytes;
-(double)remoteNoRemotePacketInterval;
-(VCStatsRecorder *)statsRecorder;
-(char)isPreWarmStateEnabled;
-(char)remotePreWarmStateEnabled;
-(char)preferRelayOverP2PEnabled;
-(char)cellPrimaryInterfaceChangeEnabled;
-(void)setCellPrimaryInterfaceChangeEnabled:(char)arg1 ;
-(double)noRemoteDuplicationThresholdFast;
-(void)setNoRemoteDuplicationThresholdFast:(double)arg1 ;
-(char)lowNetworkModeEnabled;
-(void)setLowNetworkModeEnabled:(char)arg1 ;
-(char)duplicationEnhancementEnabled;
-(void)setDuplicationEnhancementEnabled:(char)arg1 ;
-(char)iRATDuplicationEnabled;
-(unsigned)realRATType;
-(unsigned char)remoteLinkProbingCapabilityVersion;
-(unsigned long long)budgetConsumingCellularTxBytes;
-(unsigned long long)budgetConsumingCellularRxBytes;
@end

