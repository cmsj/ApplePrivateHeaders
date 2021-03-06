/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCSessionStatsControllerDelegate, OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, NSObject, VCConnectionManager, VCTransportStreamGFT;

@interface VCSessionStatsController : NSObject {

	id<VCSessionStatsControllerDelegate> _weakDelegate;
	AVCStatisticsCollector* _uplinkStatisticsCollector;
	AVCStatisticsCollector* _downlinkStatisticsCollector;
	SCD_Struct_VC177 _remoteStats;
	NSObject*<OS_dispatch_source> _localSessionStatsTimemoutSource;
	unsigned _statsRequestCounter;
	VCConnectionManager* _connectionManager;
	VCTransportStreamGFT* _transportStream;
	double _lastTriggerRateControlTime;
	id _reportingAgentWeak;
	unsigned _uplinkServerStatsByteUsed;
	unsigned _downlinkServerStatsByteUsed;
	tagVCRealTimeThread* _statsReceiveThread;
	unsigned short _streamID;
	unsigned short _statsArrayIndex;
	char _enableStatsReceiveThread;
	unsigned _previousTotalPacketSent;
	unsigned _previousTotalPacketReceived;
	unsigned _uplinkMostRecentSendTimestamp;
	unsigned _downlinkMostRecentSendTimestamp;
	char _didReceiveServerStatsResponse;
	char _enableStatsReporting;
	double _statsReportingInterval;
	double _lastStatsReportTime;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTime;
	double _lastTimeReceiveStatsFailed;
	char _isReceiveStatsFailedSymptomReported;
	unsigned _statsNoResponseCounter;
	unsigned _statsResponseCounter;
	unsigned _numStatsDroppedDueToStatsID;
	unsigned _numStatsDroppedDueToLinkID;
	unsigned _numStatsDroppedDueToTooLate;
	unsigned _numStatsProcessed;
	unsigned _numStatsTriggeredForUplink;
	unsigned _numStatsTriggeredForDownlink;
	double _averageInterCallbackDuration;
	double _lastPacketReceiveCallbackTime;
	double _totalStatsTransportStreamQueueTime;
	double _maxStatsTransportStreamQueueTime;
	double _lastHealthPrintTime;

}

@property (readonly) id reportingAgent; 
@property (assign,nonatomic) double statsReportingInterval;              //@synthesize statsReportingInterval=_statsReportingInterval - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)registerPeriodicTask;
-(void)deregisterPeriodicTask;
-(void)periodicTask:(void*)arg1 ;
-(id)reportingAgent;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(opaqueRTCReportingRef)arg5 transportSessionID:(unsigned)arg6 streamID:(unsigned short)arg7 mediaQueue:(tagVCMediaQueueRef)arg8 ;
-(void)startLocalSessionStatsUpdate;
-(void)stopLocalSessionStatsUpdate;
-(void)setStatsReportingInterval:(double)arg1 ;
-(void)flushRealTimeReportingStats;
-(void)startLocalSessionStatsReceive;
-(void)startLocalSessionStatsSend;
-(void)sendLocalStats;
-(void)triggerRateControlWithLocalSessionStats:(SCD_Struct_VC92)arg1 time:(double)arg2 forUplink:(char)arg3 forDownlink:(char)arg4 fromVCRCExternalThread:(char)arg5 ;
-(char)isRemoteSessionStatsTooLateWithStatsId:(unsigned short)arg1 ;
-(unsigned short)translateTimestampFromMicro:(double)arg1 ;
-(void)handleRemoteSessionStats:(SCD_Struct_VC178*)arg1 ;
-(void)healthPrintForServerStats;
-(void)calculateInterCallbackDurationWithTime:(double)arg1 ;
-(void)updateRemoteSessionStats:(SCD_Struct_VC177)arg1 ;
-(void)resetHealthPrintCounters;
-(void)statsReceiveStatsPayload;
-(double)statsReportingInterval;
@end

