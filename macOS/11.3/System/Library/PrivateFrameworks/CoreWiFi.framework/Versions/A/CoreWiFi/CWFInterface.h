/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CWFClient, CWFRequestParameters;

@interface CWFInterface : NSObject {

	char _activated;
	CWFClient* _client;
	CWFRequestParameters* _requestParameters;

}

@property (nonatomic,readonly) CWFClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (assign,getter=isActivated,nonatomic) char activated;                       //@synthesize activated=_activated - In the implementation block
@property (copy) id invalidationHandler; 
@property (copy) id eventHandler; 
-(id)IO80211ControllerInfo;
-(char)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(void)clearAllEventHandlers;
-(id)initWithClient:(id)arg1 requestParameters:(id)arg2 ;
-(id)__adjustedRequestParameters;
-(int)__flagsForChannelWidth:(int)arg1 ;
-(char)beginActivity:(id)arg1 error:(id*)arg2 ;
-(void)stopMonitoringEvent:(id)arg1 ;
-(id)auxiliaryInterface;
-(id)veryLowPriority;
-(id)veryHighPriority;
-(char)cancelRequestsWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)performScanWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)performANQPWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)performANQPWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)associateWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)SSIDForVendor;
-(id)BSSIDForVendor;
-(id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(id)IO80211InterfaceInfo;
-(id)cachedRoamStatus;
-(id)cachedJoinStatus;
-(id)cachedAutoJoinStatus;
-(id)cachedLinkDownStatus;
-(void)endAllActivities;
-(void)performActivity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)systemActivities;
-(id)systemEventIDs;
-(char)startMonitoringEventType:(long long)arg1 error:(id*)arg2 ;
-(void)stopMonitoringEventType:(long long)arg1 ;
-(id)knownNetworkProfileMatchingScanResult:(id)arg1 ;
-(id)knownNetworkProfileMatchingNetworkProfile:(id)arg1 ;
-(char)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(char)addKnownNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(char)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id*)arg3 ;
-(char)isNetworkServiceEnabled;
-(id)DHCPLeaseStartedAt;
-(id)DHCPLeaseExpiresAt;
-(char)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(id)systemAWDLPeerTrafficRegistrations;
-(id)AWDLPreferredChannels;
-(id)AWDLPeerDatabase;
-(id)AWDLElectionID;
-(id)AWDLBTLEStateParameters;
-(id)rangingCapabilities;
-(char)setRangeable:(char)arg1 peerList:(id)arg2 error:(id*)arg3 ;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)init;
-(void)invalidate;
-(void)resume;
-(id)countryCode;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)suspend;
-(void)endActivity:(id)arg1 ;
-(CWFClient *)client;
-(void)activate;
-(id)invalidationHandler;
-(id)capabilities;
-(long long)serviceType;
-(id)deviceUUID;
-(id)utility;
-(id)channel;
-(id)activities;
-(void)setTargetQueue:(id)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(unsigned)reachabilityFlags;
-(id)interfaceName;
-(id)powerState;
-(id)eventHandler;
-(char)wakeOnWirelessEnabled;
-(char)powerOn;
-(unsigned long long)securityType;
-(id)lowPriority;
-(id)initWithServiceType:(long long)arg1 ;
-(char)isActivated;
-(id)highPriority;
-(id)AWDL;
-(CWFRequestParameters *)requestParameters;
-(id)MACAddress;
-(id)userInitiated;
-(id)userInteractive;
-(id)background;
-(id)interfaceNames;
-(char)setPower:(char)arg1 error:(id*)arg2 ;
-(id)targetQueue;
-(id)networkName;
-(long long)noise;
-(id)authType;
-(id)SSID;
-(double)txPower;
-(void)setActivated:(char)arg1 ;
-(int)opMode;
-(double)txRate;
-(unsigned long long)guardInterval;
-(id)networkServiceID;
-(id)chainAck;
-(id)txChainPower;
-(id)desense;
-(id)desenseLevel;
-(int)supportedPHYModes;
-(long long)RSSI;
-(id)BSSID;
-(id)virtualInterfaceNames;
-(int)virtualInterfaceRole;
-(id)networkServiceName;
-(unsigned long long)numberOfSpatialStreams;
-(int)PHYMode;
-(unsigned long long)MCSIndex;
-(int)bluetoothCoexistenceMode;
-(id)eventIDs;
-(id)IPv4RouterAddress;
-(id)IPv6RouterAddress;
-(id)IPv6Addresses;
-(id)DNSServerAddresses;
-(id)IPv4Addresses;
-(id)cachedLinkQualityMetric;
-(unsigned long long)DTIMInterval;
-(id)globalIPv4InterfaceName;
-(id)globalIPv4NetworkServiceName;
-(id)globalIPv4NetworkServiceID;
-(id)globalIPv6InterfaceName;
-(id)globalIPv6NetworkServiceName;
-(id)globalIPv6NetworkServiceID;
-(id)AWDLSyncEnabled;
-(id)AWDLSyncState;
-(id)AWDLSyncChannelSequence;
-(id)AWDLStrategy;
-(id)AWDLElectionParameters;
-(id)AWDLMasterChannel;
-(id)AWDLSecondaryMasterChannel;
-(id)AWDLOpMode;
-(id)AWDLSyncParameters;
-(id)AWDLSidecarDiagnostics;
-(id)globalIPv4Addresses;
-(id)globalIPv6Addresses;
-(id)globalIPv4RouterAddress;
-(id)globalIPv6RouterAddress;
-(id)globalDNSServerAddresses;
-(unsigned)EAP8021XControlMode;
-(unsigned)EAP8021XSupplicantState;
-(id)bluetoothCoexistenceConfig;
-(id)bluetoothCoexistenceProfiles2GHz;
-(id)bluetoothCoexistenceProfiles5GHz;
-(id)knownNetworkProfilesWithProperties:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(char)startMonitoringEvent:(id)arg1 error:(id*)arg2 ;
-(void)stopMonitoringAllEvents;
-(id)supportedChannelsWithCountryCode:(id)arg1 ;
-(id)performScanWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)disassociateWithReason:(long long)arg1 ;
-(char)setChannel:(id)arg1 error:(id*)arg2 ;
-(long long)WEPSubtype;
-(long long)WAPISubtype;
-(id)currentScanResult;
-(id)currentKnownNetworkProfile;
-(unsigned)EAP8021XControlState;
-(int)EAP8021XClientStatus;
-(id)leakyAPStats;
-(id)AWDLPeerTrafficRegistration;
-(id)AWDLElectionMetric;
-(id)AWDLElectionRSSIThresholds;
-(id)AWDLSocialTimeSlots;
-(id)AWDLEncryptionType;
-(id)AWDLPresenceMode;
-(id)AWDLGuardTime;
-(id)AWDLAvailabilityWindowAPAlignment;
-(id)AWDLContinuousElectionAlgorithmEnabled;
-(id)AWDLAFTxMode;
-(id)AWDLExtensionStateMachineParameters;
-(id)AWDLStatistics;
-(id)parentInterfaceName;
-(long long)thermalIndex;
-(char)setThermalIndex:(long long)arg1 error:(id*)arg2 ;
-(id)perAntennaRSSI;
-(char)associateWithParameters:(id)arg1 error:(id*)arg2 ;
@end

