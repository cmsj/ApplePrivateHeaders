/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiP2PAirplayMetrics : PBCodable <NSCopying> {

	unsigned long long _rxBytes;
	unsigned long long _timestamp;
	unsigned long long _txBytes;
	NSMutableArray* _avgCCAPeerInfraChannels;
	NSMutableArray* _avgCCASelfInfraChannels;
	NSMutableArray* _avgCCASocialChannels;
	unsigned _awdlVersion;
	unsigned _clientModeDuration;
	unsigned _infraDisconnectedCount;
	unsigned _missingAWStartEventCount;
	unsigned _peerInfraChannel;
	NSMutableArray* _peerRSSIs;
	unsigned _psfEnabledCount;
	unsigned _routablePeerCount;
	unsigned _selfInfraChannel;
	unsigned _senderPlatform;
	unsigned _sequenceNumberNotUpdatedCount;
	unsigned _serverModeDuration;
	unsigned _splitModeDuration;
	int _startingRSSI;
	unsigned _totalDuration;
	unsigned _totalPeerCount;
	char _csaDuringDfspMode;
	char _csaToDfsChannel;
	char _dfsProxyMode;
	char _inRetroMode;
	char _peerIsSDB;
	char _selfIsSDB;
	SCD_Struct_AW40 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasTotalDuration; 
@property (assign,nonatomic) unsigned totalDuration;                                //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) char hasServerModeDuration; 
@property (assign,nonatomic) unsigned serverModeDuration;                           //@synthesize serverModeDuration=_serverModeDuration - In the implementation block
@property (assign,nonatomic) char hasClientModeDuration; 
@property (assign,nonatomic) unsigned clientModeDuration;                           //@synthesize clientModeDuration=_clientModeDuration - In the implementation block
@property (assign,nonatomic) char hasSplitModeDuration; 
@property (assign,nonatomic) unsigned splitModeDuration;                            //@synthesize splitModeDuration=_splitModeDuration - In the implementation block
@property (assign,nonatomic) char hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                            //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) char hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                            //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) char hasStartingRSSI; 
@property (assign,nonatomic) int startingRSSI;                                      //@synthesize startingRSSI=_startingRSSI - In the implementation block
@property (assign,nonatomic) char hasAwdlVersion; 
@property (assign,nonatomic) unsigned awdlVersion;                                  //@synthesize awdlVersion=_awdlVersion - In the implementation block
@property (assign,nonatomic) char hasTotalPeerCount; 
@property (assign,nonatomic) unsigned totalPeerCount;                               //@synthesize totalPeerCount=_totalPeerCount - In the implementation block
@property (assign,nonatomic) char hasRoutablePeerCount; 
@property (assign,nonatomic) unsigned routablePeerCount;                            //@synthesize routablePeerCount=_routablePeerCount - In the implementation block
@property (assign,nonatomic) char hasInfraDisconnectedCount; 
@property (assign,nonatomic) unsigned infraDisconnectedCount;                       //@synthesize infraDisconnectedCount=_infraDisconnectedCount - In the implementation block
@property (assign,nonatomic) char hasSequenceNumberNotUpdatedCount; 
@property (assign,nonatomic) unsigned sequenceNumberNotUpdatedCount;                //@synthesize sequenceNumberNotUpdatedCount=_sequenceNumberNotUpdatedCount - In the implementation block
@property (assign,nonatomic) char hasMissingAWStartEventCount; 
@property (assign,nonatomic) unsigned missingAWStartEventCount;                     //@synthesize missingAWStartEventCount=_missingAWStartEventCount - In the implementation block
@property (assign,nonatomic) char hasPsfEnabledCount; 
@property (assign,nonatomic) unsigned psfEnabledCount;                              //@synthesize psfEnabledCount=_psfEnabledCount - In the implementation block
@property (assign,nonatomic) char hasSelfInfraChannel; 
@property (assign,nonatomic) unsigned selfInfraChannel;                             //@synthesize selfInfraChannel=_selfInfraChannel - In the implementation block
@property (assign,nonatomic) char hasPeerInfraChannel; 
@property (assign,nonatomic) unsigned peerInfraChannel;                             //@synthesize peerInfraChannel=_peerInfraChannel - In the implementation block
@property (assign,nonatomic) char hasSenderPlatform; 
@property (assign,nonatomic) unsigned senderPlatform;                               //@synthesize senderPlatform=_senderPlatform - In the implementation block
@property (assign,nonatomic) char hasCsaToDfsChannel; 
@property (assign,nonatomic) char csaToDfsChannel;                                  //@synthesize csaToDfsChannel=_csaToDfsChannel - In the implementation block
@property (assign,nonatomic) char hasCsaDuringDfspMode; 
@property (assign,nonatomic) char csaDuringDfspMode;                                //@synthesize csaDuringDfspMode=_csaDuringDfspMode - In the implementation block
@property (assign,nonatomic) char hasDfsProxyMode; 
@property (assign,nonatomic) char dfsProxyMode;                                     //@synthesize dfsProxyMode=_dfsProxyMode - In the implementation block
@property (assign,nonatomic) char hasSelfIsSDB; 
@property (assign,nonatomic) char selfIsSDB;                                        //@synthesize selfIsSDB=_selfIsSDB - In the implementation block
@property (assign,nonatomic) char hasPeerIsSDB; 
@property (assign,nonatomic) char peerIsSDB;                                        //@synthesize peerIsSDB=_peerIsSDB - In the implementation block
@property (assign,nonatomic) char hasInRetroMode; 
@property (assign,nonatomic) char inRetroMode;                                      //@synthesize inRetroMode=_inRetroMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * peerRSSIs;                            //@synthesize peerRSSIs=_peerRSSIs - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCASocialChannels;                 //@synthesize avgCCASocialChannels=_avgCCASocialChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCASelfInfraChannels;              //@synthesize avgCCASelfInfraChannels=_avgCCASelfInfraChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCAPeerInfraChannels;              //@synthesize avgCCAPeerInfraChannels=_avgCCAPeerInfraChannels - In the implementation block
+(Class)peerRSSIType;
+(Class)avgCCASocialChannelType;
+(Class)avgCCASelfInfraChannelType;
+(Class)avgCCAPeerInfraChannelType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned)totalDuration;
-(void)setSelfInfraChannel:(unsigned)arg1 ;
-(void)setHasSelfInfraChannel:(char)arg1 ;
-(char)hasSelfInfraChannel;
-(unsigned)selfInfraChannel;
-(void)setInfraDisconnectedCount:(unsigned)arg1 ;
-(void)setHasInfraDisconnectedCount:(char)arg1 ;
-(char)hasInfraDisconnectedCount;
-(unsigned)infraDisconnectedCount;
-(void)setSelfIsSDB:(char)arg1 ;
-(void)setHasSelfIsSDB:(char)arg1 ;
-(char)hasSelfIsSDB;
-(char)selfIsSDB;
-(void)setPeerInfraChannel:(unsigned)arg1 ;
-(void)setHasPeerInfraChannel:(char)arg1 ;
-(char)hasPeerInfraChannel;
-(unsigned)peerInfraChannel;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(void)setHasRxBytes:(char)arg1 ;
-(char)hasRxBytes;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setHasTxBytes:(char)arg1 ;
-(char)hasTxBytes;
-(unsigned long long)rxBytes;
-(unsigned long long)txBytes;
-(void)setPeerRSSIs:(NSMutableArray *)arg1 ;
-(void)setAvgCCASocialChannels:(NSMutableArray *)arg1 ;
-(void)setAvgCCASelfInfraChannels:(NSMutableArray *)arg1 ;
-(void)setAvgCCAPeerInfraChannels:(NSMutableArray *)arg1 ;
-(void)addPeerRSSI:(id)arg1 ;
-(void)addAvgCCASocialChannel:(id)arg1 ;
-(void)addAvgCCASelfInfraChannel:(id)arg1 ;
-(void)addAvgCCAPeerInfraChannel:(id)arg1 ;
-(unsigned long long)peerRSSIsCount;
-(void)clearPeerRSSIs;
-(id)peerRSSIAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCASocialChannelsCount;
-(void)clearAvgCCASocialChannels;
-(id)avgCCASocialChannelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCASelfInfraChannelsCount;
-(void)clearAvgCCASelfInfraChannels;
-(id)avgCCASelfInfraChannelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCAPeerInfraChannelsCount;
-(void)clearAvgCCAPeerInfraChannels;
-(id)avgCCAPeerInfraChannelAtIndex:(unsigned long long)arg1 ;
-(void)setTotalDuration:(unsigned)arg1 ;
-(void)setHasTotalDuration:(char)arg1 ;
-(char)hasTotalDuration;
-(void)setServerModeDuration:(unsigned)arg1 ;
-(void)setHasServerModeDuration:(char)arg1 ;
-(char)hasServerModeDuration;
-(void)setClientModeDuration:(unsigned)arg1 ;
-(void)setHasClientModeDuration:(char)arg1 ;
-(char)hasClientModeDuration;
-(void)setSplitModeDuration:(unsigned)arg1 ;
-(void)setHasSplitModeDuration:(char)arg1 ;
-(char)hasSplitModeDuration;
-(void)setStartingRSSI:(int)arg1 ;
-(void)setHasStartingRSSI:(char)arg1 ;
-(char)hasStartingRSSI;
-(void)setAwdlVersion:(unsigned)arg1 ;
-(void)setHasAwdlVersion:(char)arg1 ;
-(char)hasAwdlVersion;
-(void)setTotalPeerCount:(unsigned)arg1 ;
-(void)setHasTotalPeerCount:(char)arg1 ;
-(char)hasTotalPeerCount;
-(void)setRoutablePeerCount:(unsigned)arg1 ;
-(void)setHasRoutablePeerCount:(char)arg1 ;
-(char)hasRoutablePeerCount;
-(void)setSequenceNumberNotUpdatedCount:(unsigned)arg1 ;
-(void)setHasSequenceNumberNotUpdatedCount:(char)arg1 ;
-(char)hasSequenceNumberNotUpdatedCount;
-(void)setMissingAWStartEventCount:(unsigned)arg1 ;
-(void)setHasMissingAWStartEventCount:(char)arg1 ;
-(char)hasMissingAWStartEventCount;
-(void)setPsfEnabledCount:(unsigned)arg1 ;
-(void)setHasPsfEnabledCount:(char)arg1 ;
-(char)hasPsfEnabledCount;
-(void)setSenderPlatform:(unsigned)arg1 ;
-(void)setHasSenderPlatform:(char)arg1 ;
-(char)hasSenderPlatform;
-(void)setCsaToDfsChannel:(char)arg1 ;
-(void)setHasCsaToDfsChannel:(char)arg1 ;
-(char)hasCsaToDfsChannel;
-(void)setCsaDuringDfspMode:(char)arg1 ;
-(void)setHasCsaDuringDfspMode:(char)arg1 ;
-(char)hasCsaDuringDfspMode;
-(void)setDfsProxyMode:(char)arg1 ;
-(void)setHasDfsProxyMode:(char)arg1 ;
-(char)hasDfsProxyMode;
-(void)setPeerIsSDB:(char)arg1 ;
-(void)setHasPeerIsSDB:(char)arg1 ;
-(char)hasPeerIsSDB;
-(void)setInRetroMode:(char)arg1 ;
-(void)setHasInRetroMode:(char)arg1 ;
-(char)hasInRetroMode;
-(unsigned)serverModeDuration;
-(unsigned)clientModeDuration;
-(unsigned)splitModeDuration;
-(int)startingRSSI;
-(unsigned)awdlVersion;
-(unsigned)totalPeerCount;
-(unsigned)routablePeerCount;
-(unsigned)sequenceNumberNotUpdatedCount;
-(unsigned)missingAWStartEventCount;
-(unsigned)psfEnabledCount;
-(unsigned)senderPlatform;
-(char)csaToDfsChannel;
-(char)csaDuringDfspMode;
-(char)dfsProxyMode;
-(char)peerIsSDB;
-(char)inRetroMode;
-(NSMutableArray *)peerRSSIs;
-(NSMutableArray *)avgCCASocialChannels;
-(NSMutableArray *)avgCCASelfInfraChannels;
-(NSMutableArray *)avgCCAPeerInfraChannels;
@end

