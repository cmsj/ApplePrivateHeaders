/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSString, NSUUID, NSArray, NWL2Report, NWDeviceReport, PBCodable;

@interface NWConnectionStatistics : NSObject {

	unsigned _awdMetricID;
	NSString* _clientIdentifier;
	NSString* _sourceIdentifier;
	NSUUID* _externallyVisibleConnectionUUID;
	NSUUID* _externallyVisibleParentUUID;
	NSArray* _externallyVisibleActivityUUIDs;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSArray* _activities;
	netcore_stats_tcp_report _report;

}

@property (nonatomic,retain) NSString * clientIdentifier;                                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) netcore_stats_tcp_report report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSArray * activities;                                       //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) char delegated; 
@property (nonatomic,readonly) int interfaceType; 
@property (nonatomic,readonly) unsigned timeToDnsResolvedMsecs; 
@property (nonatomic,readonly) unsigned timeToDnsStartMsecs; 
@property (nonatomic,readonly) unsigned dnsResolvedTimeMsecs; 
@property (nonatomic,readonly) char dnsAnswersCached; 
@property (nonatomic,readonly) unsigned timeToConnectionStartMsecs; 
@property (nonatomic,readonly) unsigned timeToConnectionEstablishmentMsecs; 
@property (nonatomic,readonly) unsigned connectionEstablishmentTimeMsecs; 
@property (nonatomic,readonly) unsigned flowDurationMsecs; 
@property (nonatomic,readonly) int connectedInterfaceType; 
@property (nonatomic,readonly) char connected; 
@property (nonatomic,readonly) unsigned trafficClass; 
@property (nonatomic,readonly) char fallbackEligible; 
@property (nonatomic,readonly) char cellularFallback; 
@property (nonatomic,readonly) char cellularRrcConnected; 
@property (nonatomic,readonly) char tls13Configured; 
@property (nonatomic,readonly) char tlsSucceeded; 
@property (nonatomic,readonly) char kernelReportedStalls; 
@property (nonatomic,readonly) char kernelReportingConnectionStalled; 
@property (nonatomic,readonly) char kernelReportingReadStalled; 
@property (nonatomic,readonly) char kernelReportingWriteStalled; 
@property (nonatomic,readonly) unsigned long long bytesIn; 
@property (nonatomic,readonly) unsigned long long bytesOut; 
@property (nonatomic,readonly) unsigned long long bytesDuplicate; 
@property (nonatomic,readonly) unsigned long long bytesOOO; 
@property (nonatomic,readonly) unsigned long long bytesRetransmitted; 
@property (nonatomic,readonly) unsigned long long packetsIn; 
@property (nonatomic,readonly) unsigned long long packetsOut; 
@property (nonatomic,readonly) unsigned long long packetsDuplicate; 
@property (nonatomic,readonly) unsigned long long packetsOOO; 
@property (nonatomic,readonly) unsigned long long packetsRetransmitted; 
@property (nonatomic,readonly) unsigned tcpRTTCurrentMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTSmoothedMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTBestMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTVariance; 
@property (nonatomic,readonly) unsigned tcpSynRetransmissionCount; 
@property (nonatomic,readonly) char tcpFastOpen; 
@property (nonatomic,readonly) unsigned tcpBetterRouteEventCount; 
@property (nonatomic,readonly) unsigned tcpConnectionReuseCount; 
@property (nonatomic,readonly) unsigned tcpAppReportingDataStallCount; 
@property (nonatomic,readonly) unsigned tcpAppDataStallTimerMsecs; 
@property (nonatomic,readonly) unsigned connectionReportReason; 
@property (nonatomic,readonly) NSUUID * connectionUUID; 
@property (nonatomic,retain) NSUUID * externallyVisibleConnectionUUID;                   //@synthesize externallyVisibleConnectionUUID=_externallyVisibleConnectionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                       //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
@property (nonatomic,retain) NSArray * externallyVisibleActivityUUIDs;                   //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * effectiveBundleID; 
-(unsigned)connectionReportReason;
-(unsigned)timeToDnsResolvedMsecs;
-(unsigned)timeToDnsStartMsecs;
-(unsigned)dnsResolvedTimeMsecs;
-(char)dnsAnswersCached;
-(unsigned long long)bytesOOO;
-(unsigned long long)packetsOOO;
-(unsigned)tcpRTTCurrentMsecs;
-(unsigned)tcpRTTSmoothedMsecs;
-(unsigned)tcpRTTBestMsecs;
-(unsigned)tcpRTTVariance;
-(unsigned)tcpSynRetransmissionCount;
-(unsigned)tcpBetterRouteEventCount;
-(unsigned)tcpConnectionReuseCount;
-(unsigned)tcpAppReportingDataStallCount;
-(unsigned)tcpAppDataStallTimerMsecs;
-(char)cellularRrcConnected;
-(char)tls13Configured;
-(char)tlsSucceeded;
-(id)_createDataUsageSnapshotFromStruct:(const netcore_stats_data_usage_snapshot*)arg1 ;
-(id)_createFallbackReportFromStruct:(const netcore_stats_tcp_cell_fallback_report*)arg1 ;
-(id)_createStatisticsReportFromStruct:(const netcore_stats_tcp_statistics_report*)arg1 ;
-(NSUUID *)externallyVisibleConnectionUUID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(char)connected;
-(NSArray *)activities;
-(NSString *)sourceIdentifier;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)interfaceType;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(NSUUID *)connectionUUID;
-(void)setActivities:(NSArray *)arg1 ;
-(netcore_stats_tcp_report)report;
-(unsigned long long)packetsDuplicate;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(int)connectedInterfaceType;
-(unsigned)timeToConnectionEstablishmentMsecs;
-(unsigned)flowDurationMsecs;
-(char)kernelReportedStalls;
-(char)kernelReportingConnectionStalled;
-(char)kernelReportingReadStalled;
-(char)kernelReportingWriteStalled;
-(unsigned long long)bytesDuplicate;
-(unsigned long long)bytesRetransmitted;
-(unsigned long long)packetsRetransmitted;
-(unsigned)trafficClass;
-(char)tcpFastOpen;
-(char)cellularFallback;
-(unsigned)timeToConnectionStartMsecs;
-(unsigned)connectionEstablishmentTimeMsecs;
-(char)delegated;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(NWDeviceReport *)deviceReport;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(char)fallbackEligible;
-(char)tlsHandshakeTimedOut;
-(NSString *)effectiveBundleID;
-(void)setReport:(netcore_stats_tcp_report)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(NSArray *)externallyVisibleActivityUUIDs;
-(id)initWithPBCodableData:(id)arg1 ;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(NSUUID *)parentUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleParentUUID;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(NWL2Report *)layer2Report;
-(void)setExternallyVisibleConnectionUUID:(NSUUID *)arg1 ;
-(id)initWithTCPReport:(netcore_stats_tcp_report*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4 ;
@end

