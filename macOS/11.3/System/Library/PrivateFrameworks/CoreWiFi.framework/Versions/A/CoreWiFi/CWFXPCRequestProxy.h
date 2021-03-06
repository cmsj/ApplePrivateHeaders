/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CWFXPCRequestProxyDelegate;
@class NSObject, NSMutableDictionary, CWFSCNetworkConfiguration, CWFSCNetworkReachability, CWFIO80211, NSSet, NSOperationQueue;

@interface CWFXPCRequestProxy : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _apple80211Map;
	NSMutableDictionary* _SCNetworkServiceMap;
	NSMutableDictionary* _SCNetworkInterfaceMap;
	NSMutableDictionary* _EAP8021XMap;
	CWFSCNetworkConfiguration* _SCNetworkConfiguration;
	CWFSCNetworkReachability* _SCNetworkReachability;
	CWFIO80211* _IO80211;
	NSSet* _mutableEventIDs;
	char _isMonitoringEvents;
	NSMutableDictionary* _mutableLinkDownStatusMap;
	NSMutableDictionary* _mutableRoamStatusMap;
	NSMutableDictionary* _mutableJoinStatusMap;
	NSMutableDictionary* _mutableAutoJoinTriggerMap;
	NSMutableDictionary* _mutableAutoJoinStatusMap;
	NSMutableDictionary* _mutableLinkQualityMap;
	double _lastLinkQualityMetricLoggedAt;
	NSMutableDictionary* _mutableQueueMap;
	NSOperationQueue* _defaultQueue;
	id<CWFXPCRequestProxyDelegate> _delegate;

}

@property (retain) id<CWFXPCRequestProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isMonitoringEvents;
-(void)setTargetQueue:(id)arg1 requestType:(long long)arg2 interfaceName:(id)arg3 ;
-(void)XPCManager:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)__setupEventHandlers;
-(void)__handleWillAssocInternalEvent:(id)arg1 ;
-(void)__handleAssocDoneInternalEvent:(id)arg1 ;
-(void)__handleAutoJoinStateChangedInternalEvent:(id)arg1 ;
-(int)__defaultInterfaceRoleForRequestType:(long long)arg1 ;
-(id)__apple80211WithVirtualInterfaceRole:(int)arg1 parentInterfaceName:(id)arg2 ;
-(id)__queueForXPCRequest:(id)arg1 ;
-(void)__getMACAddress:(id)arg1 ;
-(void)__getIO80211ControllerInfo:(id)arg1 ;
-(void)__getIO80211InterfaceInfo:(id)arg1 ;
-(void)__getEventIDs:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getActivities:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getSystemEventIDs:(id)arg1 XPCManager:(id)arg2 ;
-(void)__getSystemActivities:(id)arg1 XPCManager:(id)arg2 ;
-(void)__getApple80211:(id)arg1 ;
-(void)__getPlatformCapabilities:(id)arg1 ;
-(void)__getNetServiceID:(id)arg1 ;
-(void)__getNetServiceName:(id)arg1 ;
-(void)__getNetServiceEnabled:(id)arg1 ;
-(void)__getIPv4Addresses:(id)arg1 ;
-(void)__getIPv4Router:(id)arg1 ;
-(void)__getIPv6Addresses:(id)arg1 ;
-(void)__getIPv6Router:(id)arg1 ;
-(void)__getDHCPLeaseStartTime:(id)arg1 ;
-(void)__getDHCPLeaseExpirationTime:(id)arg1 ;
-(void)__getDNSServerAddresses:(id)arg1 ;
-(void)__getGlobalIPv4InterfaceName:(id)arg1 ;
-(void)__getGlobalIPv4NetServiceID:(id)arg1 ;
-(void)__getGlobalIPv4NetServiceName:(id)arg1 ;
-(void)__getGlobalIPv6InterfaceName:(id)arg1 ;
-(void)__getGlobalIPv6NetServiceID:(id)arg1 ;
-(void)__getGlobalIPv6NetServiceName:(id)arg1 ;
-(void)__getGlobalIPv4Addresses:(id)arg1 ;
-(void)__getGlobalIPv4Router:(id)arg1 ;
-(void)__getGlobalIPv6Addresses:(id)arg1 ;
-(void)__getGlobalIPv6Router:(id)arg1 ;
-(void)__getGlobalDNSServerAddresses:(id)arg1 ;
-(void)__getNetworkReachability:(id)arg1 ;
-(void)__getEAP8021XSupplicantState:(id)arg1 ;
-(void)__getEAP8021XControlMode:(id)arg1 ;
-(void)__getEAP8021XControlState:(id)arg1 ;
-(void)__getEAP8021XClientStatus:(id)arg1 ;
-(void)__updateEventRegistration:(id)arg1 XPCManager:(id)arg2 ;
-(void)__setChannel:(id)arg1 ;
-(void)__getSecurity:(id)arg1 ;
-(void)__getWAPISubtype:(id)arg1 ;
-(void)__getKnownNetworkMatchingScanResult:(id)arg1 ;
-(void)__getKnownNetworkMatchingNetworkProfile:(id)arg1 ;
-(void)__getRoamStatus:(id)arg1 ;
-(void)__getJoinStatus:(id)arg1 ;
-(void)__getAutoJoinStatus:(id)arg1 ;
-(void)__getLinkDownStatus:(id)arg1 ;
-(void)__getSSID:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getBSSID:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getSSIDForVendor:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getBSSIDForVendor:(id)arg1 XPCConnection:(id)arg2 ;
-(void)__getLinkQualityMetric:(id)arg1 ;
-(void)__cancelRequestsWithNamePrefix:(id)arg1 ;
-(void)__startMonitoringDefaultEventIDs;
-(id)__apple80211WithInterfaceName:(id)arg1 ;
-(void)__startMonitoringDefaultEventIDsForInterfaceName:(id)arg1 ;
-(void)__updateMonitoring:(char)arg1 eventIDs:(id)arg2 ;
-(void)__stopMonitoringDefaultEventIDs;
-(void)__stopMonitoringDefaultEventIDsForInterfaceName:(id)arg1 ;
-(id)__deviceUUID;
-(id)__vendorSpecificIdentifierForXPCConnection:(id)arg1 ;
-(id)__SCNetworkServiceWithInterfaceName:(id)arg1 ;
-(id)__EAP8021XWithInterfaceName:(id)arg1 ;
-(id)__SCNetworkInterfaceWithInterfaceName:(id)arg1 ;
-(void)__updateJoinStatusWithIPv4:(id)arg1 ;
-(void)__updateJoinStatusWithIPv6:(id)arg1 ;
-(void)__updateJoinStatusWithEAP8021X:(id)arg1 ;
-(id)__interfaceSpecificEventIDs:(id)arg1 ;
-(void)__updateJoinStatusWithAssoc:(id)arg1 ;
-(void)__updateJoinStatusWithAuth:(id)arg1 ;
-(id)__roamStatusWithInterfaceName:(id)arg1 ;
-(void)__setRoamStatus:(id)arg1 interfaceName:(id)arg2 ;
-(void)__setLinkDownStatus:(id)arg1 interfaceName:(id)arg2 ;
-(void)__setLinkQualityMetric:(id)arg1 interfaceName:(id)arg2 ;
-(id)apple80211WithInterfaceName:(id)arg1 ;
-(void)__setupEventHandlersWithInterfaceName:(id)arg1 ;
-(void)__updateAutoJoinStatusWithJoin:(id)arg1 ;
-(id)__knownNetworkMatchingScanResult:(id)arg1 ;
-(void)__addJoinStatusWithScanResult:(id)arg1 knownNetworkProfile:(id)arg2 isAutoJoin:(char)arg3 interfaceName:(id)arg4 ;
-(void)__updateJoinStatusWithError:(id)arg1 interaceName:(id)arg2 ;
-(void)__autoJoinStartedWithTrigger:(long long)arg1 interfaceName:(id)arg2 ;
-(void)__autoJoinEndedWithResult:(char)arg1 interfaceName:(id)arg2 ;
-(void)__updateAutoJoinState:(long long)arg1 interfaceName:(id)arg2 ;
-(id)__currentNetworkProfile;
-(id)__currentScanResult;
-(id)EAP8021XWithInterfaceName:(id)arg1 ;
-(id)__knownNetworkProfiles;
-(id)SCNetworkInterfaceWithInterfaceName:(id)arg1 ;
-(id)SCNetworkServiceWithInterfaceName:(id)arg1 ;
-(id)__joinStatusWithInterfaceName:(id)arg1 ;
-(id)__autojoinStatusWithInterfaceName:(id)arg1 ;
-(id)__linkDownStatusWithInterfaceName:(id)arg1 ;
-(id)__hashedSSID:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(id)__hashedBSSID:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(id)__linkQualityMetricWithInterfaceName:(id)arg1 ;
-(void)__setJoinStatus:(id)arg1 interfaceName:(id)arg2 ;
-(void)__setAutoJoinStatus:(id)arg1 interfaceName:(id)arg2 ;
-(void)__setAWDLPeerTrafficRegistration:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(id<CWFXPCRequestProxyDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCRequestProxyDelegate>)arg1 ;
-(void)stopEventMonitoring;
-(void)startEventMonitoring;
-(void)__getWEPSubtype:(id)arg1 ;
-(void)__performScan:(id)arg1 XPCConnection:(id)arg2 ;
-(void)XPCManager:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCManager:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3 ;
-(void)XPCManager:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
@end

