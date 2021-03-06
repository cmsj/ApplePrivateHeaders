/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWInternalEventDelegate
@optional
-(void)interfaceAddedWithName:(id)arg1;
-(void)interfaceRemovedWithName:(id)arg1;
-(void)rsnHandshakeDidCompleteForWiFiInterfaceWithName:(id)arg1;
-(void)autoJoinDidStartForWiFiInterfaceWithName:(id)arg1;
-(void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)arg1;
-(void)autoJoinDidUpdate:(id)arg1;
-(void)joinDidStartForWiFiInterfaceWithName:(id)arg1 ssid:(id)arg2;
-(void)joinDidCompleteForWiFiInterfaceWithName:(id)arg1 error:(id)arg2;
-(void)realTimeModeDidStartForWiFiInterfaceWithName:(id)arg1;
-(void)realTimeModeDidEndForWiFiInterfaceWithName:(id)arg1;
-(void)wowStateDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)deviceAvailabilityChangedForWiFiInterfaceWithName:(id)arg1 isAvailable:(char)arg2;
-(void)preferencesDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)arg1;
-(void)rangingReportEventForWiFiInterfaceWithName:(id)arg1 data:(id)arg2 error:(id)arg3;
-(void)internal_startUserMode8021XWithSSID:(id)arg1 interfaceWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)internal_associateToWiFiNetworkUsingUserKeychain:(id)arg1 interfaceWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)internal_associateToEnterpriseWiFiNetworkUsingUserKeychain:(id)arg1 interfaceWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)internal_associateToPasspointWiFiNetworkUsingUserKeychain:(id)arg1 domainName:(id)arg2 interfaceWithName:(id)arg3 reply:(/*^block*/id)arg4;
-(void)internal_showAvailableWiFiNetworks:(id)arg1 interfaceName:(id)arg2;
-(void)internal_showMICErrorWithNetworkName:(id)arg1;
-(void)internal_showDHCPMessage:(id)arg1 networkName:(id)arg2;
-(void)internal_foundTetherDevices:(id)arg1;
-(void)internal_startBrowsingForTetherDevicesAndReply:(/*^block*/id)arg1;
-(void)internal_stopBrowsingForTetherDevicesAndReply:(/*^block*/id)arg1;
-(void)internal_enableTetherDevice:(id)arg1 reply:(/*^block*/id)arg2;
-(void)joinWiFiNetworkWithUserAgent:(id)arg1 interfaceName:(id)arg2 timestamp:(double)arg3 reply:(/*^block*/id)arg4;
-(void)willShowJoinUIForWiFiNetwork:(id)arg1 interfaceName:(id)arg2;
-(void)internal_showAutoHotspotNotificationForTetherDevice:(id)arg1 retry:(char)arg2 interfaceName:(id)arg3;
-(void)internal_showLowBatteryNotificationForTetherDevice:(id)arg1 interfaceName:(id)arg2;
-(void)internal_setupSidecarMetricsSocketManager:(id)arg1 reply:(/*^block*/id)arg2;
-(void)internal_cleanupSidecarMetricsSocketManager:(/*^block*/id)arg1;
-(void)internal_dumpWiFiLogsAndReply:(/*^block*/id)arg1;
-(void)rangingStartedForWiFiInterfaceWithName:(id)arg1;
-(void)rangingEndedForWiFiInterfaceWithName:(id)arg1;

@end

