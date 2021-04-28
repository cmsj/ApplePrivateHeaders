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

@class AWDWiFiMetricsManagerStateMachine;

@interface AWDWiFiMetricsManagerBTCoexStats : PBCodable <NSCopying> {

	SCD_Struct_AW23* _rxMPDUCountPerMCSs;
	SCD_Struct_AW23* _txMPDUCountPerMCSs;
	unsigned long long _antennaGrants;
	unsigned long long _antennaRequests;
	unsigned long long _beaconLostCnt;
	unsigned long long _envelopeLowToHighAccumulatedMsec;
	unsigned long long _guardTimeMicroseconds;
	unsigned long long _highUcodeLatency;
	unsigned long long _psRequestTxCnt;
	unsigned long long _psnullExceeded;
	unsigned long long _requestsA2DP;
	unsigned long long _requestsACL;
	unsigned long long _requestsBLE;
	unsigned long long _requestsBLEScan;
	unsigned long long _requestsInquiry;
	unsigned long long _requestsInquiryScan;
	unsigned long long _requestsMSS;
	unsigned long long _requestsOther;
	unsigned long long _requestsPARK;
	unsigned long long _requestsPage;
	unsigned long long _requestsPageScan;
	unsigned long long _requestsSCO;
	unsigned long long _requestsSniff;
	unsigned long long _requestseSCO;
	unsigned long long _resumeTimeAccumulatedMsec;
	unsigned long long _scoReservedSlotDenyCount;
	unsigned long long _scoRetransmission1DenyCount;
	unsigned long long _scoRetransmission2DenyCount;
	unsigned long long _timeTillResumeAccumulatedMsec;
	unsigned long long _timestamp;
	unsigned long long _txCTS2Self;
	unsigned long long _wlanPreempted;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2BT;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2WLAN;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOff;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOn;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOff;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOn;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOff;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOn;
	SCD_Struct_AW25 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasAntennaRequests; 
@property (assign,nonatomic) unsigned long long antennaRequests;                                     //@synthesize antennaRequests=_antennaRequests - In the implementation block
@property (assign,nonatomic) char hasAntennaGrants; 
@property (assign,nonatomic) unsigned long long antennaGrants;                                       //@synthesize antennaGrants=_antennaGrants - In the implementation block
@property (assign,nonatomic) char hasWlanPreempted; 
@property (assign,nonatomic) unsigned long long wlanPreempted;                                       //@synthesize wlanPreempted=_wlanPreempted - In the implementation block
@property (assign,nonatomic) char hasPsnullExceeded; 
@property (assign,nonatomic) unsigned long long psnullExceeded;                                      //@synthesize psnullExceeded=_psnullExceeded - In the implementation block
@property (assign,nonatomic) char hasHighUcodeLatency; 
@property (assign,nonatomic) unsigned long long highUcodeLatency;                                    //@synthesize highUcodeLatency=_highUcodeLatency - In the implementation block
@property (nonatomic,readonly) char hasAntennaOwnership2BT; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2BT;                //@synthesize antennaOwnership2BT=_antennaOwnership2BT - In the implementation block
@property (nonatomic,readonly) char hasAntennaOwnership2WLAN; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2WLAN;              //@synthesize antennaOwnership2WLAN=_antennaOwnership2WLAN - In the implementation block
@property (nonatomic,readonly) char hasEnbledStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOn;                      //@synthesize enbledStateOn=_enbledStateOn - In the implementation block
@property (nonatomic,readonly) char hasEnbledStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOff;                     //@synthesize enbledStateOff=_enbledStateOff - In the implementation block
@property (nonatomic,readonly) char hasHybridStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOn;                      //@synthesize hybridStateOn=_hybridStateOn - In the implementation block
@property (nonatomic,readonly) char hasHybridStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOff;                     //@synthesize hybridStateOff=_hybridStateOff - In the implementation block
@property (nonatomic,readonly) char hasTdmStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOn;                         //@synthesize tdmStateOn=_tdmStateOn - In the implementation block
@property (nonatomic,readonly) char hasTdmStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOff;                        //@synthesize tdmStateOff=_tdmStateOff - In the implementation block
@property (assign,nonatomic) char hasRequestsACL; 
@property (assign,nonatomic) unsigned long long requestsACL;                                         //@synthesize requestsACL=_requestsACL - In the implementation block
@property (assign,nonatomic) char hasRequestsSCO; 
@property (assign,nonatomic) unsigned long long requestsSCO;                                         //@synthesize requestsSCO=_requestsSCO - In the implementation block
@property (assign,nonatomic) char hasRequestseSCO; 
@property (assign,nonatomic) unsigned long long requestseSCO;                                        //@synthesize requestseSCO=_requestseSCO - In the implementation block
@property (assign,nonatomic) char hasRequestsA2DP; 
@property (assign,nonatomic) unsigned long long requestsA2DP;                                        //@synthesize requestsA2DP=_requestsA2DP - In the implementation block
@property (assign,nonatomic) char hasRequestsSniff; 
@property (assign,nonatomic) unsigned long long requestsSniff;                                       //@synthesize requestsSniff=_requestsSniff - In the implementation block
@property (assign,nonatomic) char hasRequestsPageScan; 
@property (assign,nonatomic) unsigned long long requestsPageScan;                                    //@synthesize requestsPageScan=_requestsPageScan - In the implementation block
@property (assign,nonatomic) char hasRequestsInquiryScan; 
@property (assign,nonatomic) unsigned long long requestsInquiryScan;                                 //@synthesize requestsInquiryScan=_requestsInquiryScan - In the implementation block
@property (assign,nonatomic) char hasRequestsPage; 
@property (assign,nonatomic) unsigned long long requestsPage;                                        //@synthesize requestsPage=_requestsPage - In the implementation block
@property (assign,nonatomic) char hasRequestsInquiry; 
@property (assign,nonatomic) unsigned long long requestsInquiry;                                     //@synthesize requestsInquiry=_requestsInquiry - In the implementation block
@property (assign,nonatomic) char hasRequestsBLE; 
@property (assign,nonatomic) unsigned long long requestsBLE;                                         //@synthesize requestsBLE=_requestsBLE - In the implementation block
@property (assign,nonatomic) char hasRequestsOther; 
@property (assign,nonatomic) unsigned long long requestsOther;                                       //@synthesize requestsOther=_requestsOther - In the implementation block
@property (assign,nonatomic) char hasRequestsBLEScan; 
@property (assign,nonatomic) unsigned long long requestsBLEScan;                                     //@synthesize requestsBLEScan=_requestsBLEScan - In the implementation block
@property (assign,nonatomic) char hasRequestsMSS; 
@property (assign,nonatomic) unsigned long long requestsMSS;                                         //@synthesize requestsMSS=_requestsMSS - In the implementation block
@property (assign,nonatomic) char hasRequestsPARK; 
@property (assign,nonatomic) unsigned long long requestsPARK;                                        //@synthesize requestsPARK=_requestsPARK - In the implementation block
@property (assign,nonatomic) char hasBeaconLostCnt; 
@property (assign,nonatomic) unsigned long long beaconLostCnt;                                       //@synthesize beaconLostCnt=_beaconLostCnt - In the implementation block
@property (nonatomic,readonly) unsigned long long rxMPDUCountPerMCSsCount; 
@property (nonatomic,readonly) unsigned long long* rxMPDUCountPerMCSs; 
@property (nonatomic,readonly) unsigned long long txMPDUCountPerMCSsCount; 
@property (nonatomic,readonly) unsigned long long* txMPDUCountPerMCSs; 
@property (assign,nonatomic) char hasTimeTillResumeAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long timeTillResumeAccumulatedMsec;                       //@synthesize timeTillResumeAccumulatedMsec=_timeTillResumeAccumulatedMsec - In the implementation block
@property (assign,nonatomic) char hasResumeTimeAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long resumeTimeAccumulatedMsec;                           //@synthesize resumeTimeAccumulatedMsec=_resumeTimeAccumulatedMsec - In the implementation block
@property (assign,nonatomic) char hasEnvelopeLowToHighAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long envelopeLowToHighAccumulatedMsec;                    //@synthesize envelopeLowToHighAccumulatedMsec=_envelopeLowToHighAccumulatedMsec - In the implementation block
@property (assign,nonatomic) char hasScoReservedSlotDenyCount; 
@property (assign,nonatomic) unsigned long long scoReservedSlotDenyCount;                            //@synthesize scoReservedSlotDenyCount=_scoReservedSlotDenyCount - In the implementation block
@property (assign,nonatomic) char hasScoRetransmission1DenyCount; 
@property (assign,nonatomic) unsigned long long scoRetransmission1DenyCount;                         //@synthesize scoRetransmission1DenyCount=_scoRetransmission1DenyCount - In the implementation block
@property (assign,nonatomic) char hasScoRetransmission2DenyCount; 
@property (assign,nonatomic) unsigned long long scoRetransmission2DenyCount;                         //@synthesize scoRetransmission2DenyCount=_scoRetransmission2DenyCount - In the implementation block
@property (assign,nonatomic) char hasGuardTimeMicroseconds; 
@property (assign,nonatomic) unsigned long long guardTimeMicroseconds;                               //@synthesize guardTimeMicroseconds=_guardTimeMicroseconds - In the implementation block
@property (assign,nonatomic) char hasPsRequestTxCnt; 
@property (assign,nonatomic) unsigned long long psRequestTxCnt;                                      //@synthesize psRequestTxCnt=_psRequestTxCnt - In the implementation block
@property (assign,nonatomic) char hasTxCTS2Self; 
@property (assign,nonatomic) unsigned long long txCTS2Self;                                          //@synthesize txCTS2Self=_txCTS2Self - In the implementation block
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
-(void)setAntennaOwnership2BT:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAntennaOwnership2WLAN:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setEnbledStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setEnbledStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHybridStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHybridStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setTdmStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setTdmStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(unsigned long long)rxMPDUCountPerMCSsCount;
-(void)clearRxMPDUCountPerMCSs;
-(unsigned long long)rxMPDUCountPerMCSAtIndex:(unsigned long long)arg1 ;
-(void)addRxMPDUCountPerMCS:(unsigned long long)arg1 ;
-(unsigned long long)txMPDUCountPerMCSsCount;
-(void)clearTxMPDUCountPerMCSs;
-(unsigned long long)txMPDUCountPerMCSAtIndex:(unsigned long long)arg1 ;
-(void)addTxMPDUCountPerMCS:(unsigned long long)arg1 ;
-(void)setAntennaRequests:(unsigned long long)arg1 ;
-(void)setHasAntennaRequests:(char)arg1 ;
-(char)hasAntennaRequests;
-(void)setAntennaGrants:(unsigned long long)arg1 ;
-(void)setHasAntennaGrants:(char)arg1 ;
-(char)hasAntennaGrants;
-(void)setWlanPreempted:(unsigned long long)arg1 ;
-(void)setHasWlanPreempted:(char)arg1 ;
-(char)hasWlanPreempted;
-(void)setPsnullExceeded:(unsigned long long)arg1 ;
-(void)setHasPsnullExceeded:(char)arg1 ;
-(char)hasPsnullExceeded;
-(void)setHighUcodeLatency:(unsigned long long)arg1 ;
-(void)setHasHighUcodeLatency:(char)arg1 ;
-(char)hasHighUcodeLatency;
-(char)hasAntennaOwnership2BT;
-(char)hasAntennaOwnership2WLAN;
-(char)hasEnbledStateOn;
-(char)hasEnbledStateOff;
-(char)hasHybridStateOn;
-(char)hasHybridStateOff;
-(char)hasTdmStateOn;
-(char)hasTdmStateOff;
-(void)setRequestsACL:(unsigned long long)arg1 ;
-(void)setHasRequestsACL:(char)arg1 ;
-(char)hasRequestsACL;
-(void)setRequestsSCO:(unsigned long long)arg1 ;
-(void)setHasRequestsSCO:(char)arg1 ;
-(char)hasRequestsSCO;
-(void)setRequestseSCO:(unsigned long long)arg1 ;
-(void)setHasRequestseSCO:(char)arg1 ;
-(char)hasRequestseSCO;
-(void)setRequestsA2DP:(unsigned long long)arg1 ;
-(void)setHasRequestsA2DP:(char)arg1 ;
-(char)hasRequestsA2DP;
-(void)setRequestsSniff:(unsigned long long)arg1 ;
-(void)setHasRequestsSniff:(char)arg1 ;
-(char)hasRequestsSniff;
-(void)setRequestsPageScan:(unsigned long long)arg1 ;
-(void)setHasRequestsPageScan:(char)arg1 ;
-(char)hasRequestsPageScan;
-(void)setRequestsInquiryScan:(unsigned long long)arg1 ;
-(void)setHasRequestsInquiryScan:(char)arg1 ;
-(char)hasRequestsInquiryScan;
-(void)setRequestsPage:(unsigned long long)arg1 ;
-(void)setHasRequestsPage:(char)arg1 ;
-(char)hasRequestsPage;
-(void)setRequestsInquiry:(unsigned long long)arg1 ;
-(void)setHasRequestsInquiry:(char)arg1 ;
-(char)hasRequestsInquiry;
-(void)setRequestsBLE:(unsigned long long)arg1 ;
-(void)setHasRequestsBLE:(char)arg1 ;
-(char)hasRequestsBLE;
-(void)setRequestsOther:(unsigned long long)arg1 ;
-(void)setHasRequestsOther:(char)arg1 ;
-(char)hasRequestsOther;
-(void)setRequestsBLEScan:(unsigned long long)arg1 ;
-(void)setHasRequestsBLEScan:(char)arg1 ;
-(char)hasRequestsBLEScan;
-(void)setRequestsMSS:(unsigned long long)arg1 ;
-(void)setHasRequestsMSS:(char)arg1 ;
-(char)hasRequestsMSS;
-(void)setRequestsPARK:(unsigned long long)arg1 ;
-(void)setHasRequestsPARK:(char)arg1 ;
-(char)hasRequestsPARK;
-(void)setBeaconLostCnt:(unsigned long long)arg1 ;
-(void)setHasBeaconLostCnt:(char)arg1 ;
-(char)hasBeaconLostCnt;
-(unsigned long long*)rxMPDUCountPerMCSs;
-(void)setRxMPDUCountPerMCSs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)txMPDUCountPerMCSs;
-(void)setTxMPDUCountPerMCSs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeTillResumeAccumulatedMsec:(unsigned long long)arg1 ;
-(void)setHasTimeTillResumeAccumulatedMsec:(char)arg1 ;
-(char)hasTimeTillResumeAccumulatedMsec;
-(void)setResumeTimeAccumulatedMsec:(unsigned long long)arg1 ;
-(void)setHasResumeTimeAccumulatedMsec:(char)arg1 ;
-(char)hasResumeTimeAccumulatedMsec;
-(void)setEnvelopeLowToHighAccumulatedMsec:(unsigned long long)arg1 ;
-(void)setHasEnvelopeLowToHighAccumulatedMsec:(char)arg1 ;
-(char)hasEnvelopeLowToHighAccumulatedMsec;
-(void)setScoReservedSlotDenyCount:(unsigned long long)arg1 ;
-(void)setHasScoReservedSlotDenyCount:(char)arg1 ;
-(char)hasScoReservedSlotDenyCount;
-(void)setScoRetransmission1DenyCount:(unsigned long long)arg1 ;
-(void)setHasScoRetransmission1DenyCount:(char)arg1 ;
-(char)hasScoRetransmission1DenyCount;
-(void)setScoRetransmission2DenyCount:(unsigned long long)arg1 ;
-(void)setHasScoRetransmission2DenyCount:(char)arg1 ;
-(char)hasScoRetransmission2DenyCount;
-(void)setGuardTimeMicroseconds:(unsigned long long)arg1 ;
-(void)setHasGuardTimeMicroseconds:(char)arg1 ;
-(char)hasGuardTimeMicroseconds;
-(void)setPsRequestTxCnt:(unsigned long long)arg1 ;
-(void)setHasPsRequestTxCnt:(char)arg1 ;
-(char)hasPsRequestTxCnt;
-(void)setTxCTS2Self:(unsigned long long)arg1 ;
-(void)setHasTxCTS2Self:(char)arg1 ;
-(char)hasTxCTS2Self;
-(unsigned long long)antennaRequests;
-(unsigned long long)antennaGrants;
-(unsigned long long)wlanPreempted;
-(unsigned long long)psnullExceeded;
-(unsigned long long)highUcodeLatency;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2BT;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2WLAN;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOn;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOff;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOn;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOff;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOn;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOff;
-(unsigned long long)requestsACL;
-(unsigned long long)requestsSCO;
-(unsigned long long)requestseSCO;
-(unsigned long long)requestsA2DP;
-(unsigned long long)requestsSniff;
-(unsigned long long)requestsPageScan;
-(unsigned long long)requestsInquiryScan;
-(unsigned long long)requestsPage;
-(unsigned long long)requestsInquiry;
-(unsigned long long)requestsBLE;
-(unsigned long long)requestsOther;
-(unsigned long long)requestsBLEScan;
-(unsigned long long)requestsMSS;
-(unsigned long long)requestsPARK;
-(unsigned long long)beaconLostCnt;
-(unsigned long long)timeTillResumeAccumulatedMsec;
-(unsigned long long)resumeTimeAccumulatedMsec;
-(unsigned long long)envelopeLowToHighAccumulatedMsec;
-(unsigned long long)scoReservedSlotDenyCount;
-(unsigned long long)scoRetransmission1DenyCount;
-(unsigned long long)scoRetransmission2DenyCount;
-(unsigned long long)guardTimeMicroseconds;
-(unsigned long long)psRequestTxCnt;
-(unsigned long long)txCTS2Self;
@end
