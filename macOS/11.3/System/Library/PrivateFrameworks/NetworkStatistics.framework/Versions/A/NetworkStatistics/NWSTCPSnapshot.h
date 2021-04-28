/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/Versions/A/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSTCPSnapshot : NWSProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor _descriptor;
	unsigned _provider;
	unsigned long long _eventFlags;

}

@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) NSString * TCPState; 
@property (readonly) unsigned sendBufferSize; 
@property (readonly) unsigned sendBufferUsed; 
@property (readonly) unsigned txUnacked; 
@property (readonly) unsigned txWindow; 
@property (readonly) unsigned txCongestionWindow; 
@property (readonly) unsigned trafficManagementFlags; 
@property (readonly) NSString * congestionAlgorithm; 
@property (readonly) char probeActivated; 
@property (readonly) char connProbeFailed; 
@property (readonly) char readProbeFailed; 
@property (readonly) char writeProbeFailed; 
@property (readonly) char flowIsLocal; 
@property (readonly) char flowIsNonLocal; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
-(id)description;
-(id)uuid;
-(id)processName;
-(id)provider;
-(unsigned)interfaceIndex;
-(id)remoteAddress;
-(unsigned)rxOutOfOrderBytes;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)sendBufferSize;
-(unsigned)connectAttempts;
-(unsigned)connectSuccesses;
-(unsigned)rxDuplicateBytes;
-(unsigned long long)eventFlags;
-(id)localAddress;
-(id)traditionalDictionary;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(unsigned)txRetransmittedBytes;
-(id)flowStartTimestamp;
-(double)flowDuration;
-(unsigned long long)flowStartContinuousTime;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(int)epid;
-(id)euuid;
-(id)vuuid;
-(char)interfaceUnknown;
-(char)interfaceLoopback;
-(char)interfaceCellular;
-(char)interfaceCellularViaFallback;
-(char)interfaceWifi;
-(char)interfaceWired;
-(char)interfaceAWDL;
-(char)interfaceExpensive;
-(char)interfaceCompanionLink;
-(char)countsIncludeHeaderOverhead;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(NSString *)TCPState;
-(NSString *)congestionAlgorithm;
-(unsigned)sendBufferUsed;
-(unsigned)txUnacked;
-(unsigned)txWindow;
-(unsigned)txCongestionWindow;
-(unsigned)trafficManagementFlags;
-(unsigned)connstatusProbeActivated;
-(unsigned)connstatusConnProbeFailed;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)connstatusWriteProbeFailed;
-(char)flowIsLocal;
-(char)flowIsNonLocal;
-(char)probeActivated;
-(char)connProbeFailed;
-(char)readProbeFailed;
-(char)writeProbeFailed;
-(id)initWithCounts:(const nstat_counts*)arg1 TCPDescriptor:(nstat_tcp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
@end
