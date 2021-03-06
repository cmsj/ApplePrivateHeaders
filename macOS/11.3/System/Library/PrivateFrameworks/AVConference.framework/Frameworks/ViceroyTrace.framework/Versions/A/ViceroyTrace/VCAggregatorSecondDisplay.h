/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/Versions/A/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViceroyTrace/ViceroyTrace-Structs.h>
#import <ViceroyTrace/VCAggregator.h>

@class VCHistogram, NSMutableDictionary, NSString;

@interface VCAggregatorSecondDisplay : VCAggregator {

	double _sessionTotalDuration;
	double _lastReportedVideoStallTime;
	double _totalVideoStallTime;
	double _maxVideoStallInterval;
	int _videoStallCount;
	int _avgFramerate;
	int _averageReceiveBitrate;
	int _averageSendBitrate;
	int _maxSendBitrate;
	int _averageTargetBitrate;
	int _maxTargetBitrate;
	int _maxPLR;
	int _totalFIRCounter;
	int _videoWidth;
	int _videoHeight;
	int _codec;
	int _transportType;
	double _averageExpirationTime;
	double _maxExpirationTime;
	double _averageWiFiPacketDelay;
	double _averageMaxAverageWiFiPacketDelay;
	unsigned _averageWiFiThroughput;
	unsigned _totalNACKCounter;
	unsigned _averageBurstyPacketLossCount;
	unsigned _maxBurstyPacketLossCount;
	unsigned _averagePacketLossRate;
	unsigned _averageBandwidthEstimation;
	unsigned _maxBandwidthEstimation;
	unsigned _averageJitterQueueSize;
	unsigned _averageJitterQueueSizeChanges;
	double _timeSpentWithNonZeroJitterQueueSize;
	double _timeWeightedJitterQueueSize;
	unsigned _maxJitterQueueSize;
	double _averagePlaybackOffset;
	double _maxPlaybackOffset;
	unsigned _accumVideoFrameErasureCount;
	unsigned _maxVideoFrameErasureCount;
	unsigned _maxVideoStallCount;
	unsigned _minVideoFrameRate;
	unsigned _averageRoundTripTime;
	unsigned _maxRoundTripTime;
	unsigned _averageHIDEventLatencySampleCount;
	unsigned _averageHIDEventLatency;
	unsigned _maxHIDEventLatency;
	unsigned _minHIDEventLatency;
	unsigned _videoFrameNonFECTotalCounter;
	unsigned _videoFrameNonFECCompleteCounter;
	unsigned _videoFrameDisplayedCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _videoFrameReceivedCounter;
	unsigned _videoFrameExpectedCounter;
	unsigned _rtcpTimeoutCount;
	unsigned _evictedFramesLikelyRecoverableCount;
	unsigned _evictedFramesTrackedCount;
	unsigned _evictedFramesAnalysisValidIntervals;
	double _evictedFramesAverageLatePacketDelay;
	VCHistogram* _RBR;
	VCHistogram* _TBR;
	VCHistogram* _SBR;
	VCHistogram* _VST;
	VCHistogram* _PLR;
	VCHistogram* _BPL;
	VCHistogram* _EXT;
	VCHistogram* _BWE;
	VCHistogram* _VJS;
	VCHistogram* _RTT;
	VCHistogram* _HEL;
	NSMutableDictionary* _fecStatsDict;
	int _twoPtFourGhzChannelCount;
	int _fiveGhzChannelCount;
	int _dfsChannelCount;
	int _inactiveSlotCount;
	NSString* _channelSequence;
	SCD_Struct_VC1 _channelSequenceStats;
	NSString* _previousChannelSequence;
	SCD_Struct_VC1 _previousChannelSequenceStats;
	NSString* _remoteOSBuildVersion;
	NSString* _remoteFrameworkVersion;
	NSString* _remoteDeviceModel;

}

@property (nonatomic,copy) NSString * channelSequence;                        //@synthesize channelSequence=_channelSequence - In the implementation block
@property (nonatomic,retain) NSString * previousChannelSequence;              //@synthesize previousChannelSequence=_previousChannelSequence - In the implementation block
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)previousChannelSequence;
-(NSString *)channelSequence;
-(id)sessionFECReport;
-(void)setPreviousChannelSequence:(NSString *)arg1 ;
-(void)setChannelSequence:(NSString *)arg1 ;
-(void)flushCurrentSegment;
-(void)processRealtimeStats:(id)arg1 ;
-(void)updateReceiverVideoStreamConfiguration:(id)arg1 ;
-(void)updateSenderVideoStreamConfiguration:(id)arg1 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(void)updateVideoFECStats:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(id)aggregatedSegmentQRReport;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
@end

