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

@class NSString;

@interface AWDWRMWiFiCallingEnd : PBCodable <NSCopying> {

	long long _lTECTRSRP;
	long long _lTERSRP;
	unsigned long long _timestamp;
	long long _wiFiRSSI;
	long long _wiFiSINR;
	unsigned _bBAudioErasures;
	unsigned _bBAudioPacketLoss;
	unsigned _bSSLoad;
	unsigned _beaconRate;
	NSString* _callEndReason;
	NSString* _callId;
	unsigned _hOBool;
	unsigned _lTEDataLQM;
	int _lTESINR;
	unsigned _lTETxPower;
	unsigned _lTEVoiceLQM;
	unsigned _latteDejitterBufferUnderflow;
	unsigned _latteErasures;
	unsigned _latteNominalJitterBufferSize;
	unsigned _latteRTPPacketLoss;
	unsigned _sessionId;
	unsigned _signalBar;
	NSString* _wRMRecommendedRAT;
	unsigned _wiFiRxRetry;
	unsigned _wiFiTxPER;
	char _aTMRegistrationState;
	char _captiveNetwork;
	char _hOCapability;
	char _iPSecTunnelStatus;
	char _iWLANStatus;
	char _lTEQoSAvailable;
	char _wOWEnabled;
	char _wiFiBSSIDChange;
	char _wiFiPreferred;
	SCD_Struct_AW39 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasWiFiRSSI; 
@property (assign,nonatomic) long long wiFiRSSI;                                 //@synthesize wiFiRSSI=_wiFiRSSI - In the implementation block
@property (assign,nonatomic) char hasWiFiTxPER; 
@property (assign,nonatomic) unsigned wiFiTxPER;                                 //@synthesize wiFiTxPER=_wiFiTxPER - In the implementation block
@property (assign,nonatomic) char hasWiFiSINR; 
@property (assign,nonatomic) long long wiFiSINR;                                 //@synthesize wiFiSINR=_wiFiSINR - In the implementation block
@property (assign,nonatomic) char hasWiFiBSSIDChange; 
@property (assign,nonatomic) char wiFiBSSIDChange;                               //@synthesize wiFiBSSIDChange=_wiFiBSSIDChange - In the implementation block
@property (assign,nonatomic) char hasBeaconRate; 
@property (assign,nonatomic) unsigned beaconRate;                                //@synthesize beaconRate=_beaconRate - In the implementation block
@property (assign,nonatomic) char hasCaptiveNetwork; 
@property (assign,nonatomic) char captiveNetwork;                                //@synthesize captiveNetwork=_captiveNetwork - In the implementation block
@property (assign,nonatomic) char hasWOWEnabled; 
@property (assign,nonatomic) char wOWEnabled;                                    //@synthesize wOWEnabled=_wOWEnabled - In the implementation block
@property (assign,nonatomic) char hasWiFiRxRetry; 
@property (assign,nonatomic) unsigned wiFiRxRetry;                               //@synthesize wiFiRxRetry=_wiFiRxRetry - In the implementation block
@property (assign,nonatomic) char hasLTEDataLQM; 
@property (assign,nonatomic) unsigned lTEDataLQM;                                //@synthesize lTEDataLQM=_lTEDataLQM - In the implementation block
@property (assign,nonatomic) char hasLTETxPower; 
@property (assign,nonatomic) unsigned lTETxPower;                                //@synthesize lTETxPower=_lTETxPower - In the implementation block
@property (assign,nonatomic) char hasLTEQoSAvailable; 
@property (assign,nonatomic) char lTEQoSAvailable;                               //@synthesize lTEQoSAvailable=_lTEQoSAvailable - In the implementation block
@property (assign,nonatomic) char hasBSSLoad; 
@property (assign,nonatomic) unsigned bSSLoad;                                   //@synthesize bSSLoad=_bSSLoad - In the implementation block
@property (assign,nonatomic) char hasLTEVoiceLQM; 
@property (assign,nonatomic) unsigned lTEVoiceLQM;                               //@synthesize lTEVoiceLQM=_lTEVoiceLQM - In the implementation block
@property (assign,nonatomic) char hasLTESINR; 
@property (assign,nonatomic) int lTESINR;                                        //@synthesize lTESINR=_lTESINR - In the implementation block
@property (assign,nonatomic) char hasLTERSRP; 
@property (assign,nonatomic) long long lTERSRP;                                  //@synthesize lTERSRP=_lTERSRP - In the implementation block
@property (assign,nonatomic) char hasLTECTRSRP; 
@property (assign,nonatomic) long long lTECTRSRP;                                //@synthesize lTECTRSRP=_lTECTRSRP - In the implementation block
@property (assign,nonatomic) char hasSignalBar; 
@property (assign,nonatomic) unsigned signalBar;                                 //@synthesize signalBar=_signalBar - In the implementation block
@property (assign,nonatomic) char hasLatteNominalJitterBufferSize; 
@property (assign,nonatomic) unsigned latteNominalJitterBufferSize;              //@synthesize latteNominalJitterBufferSize=_latteNominalJitterBufferSize - In the implementation block
@property (assign,nonatomic) char hasLatteDejitterBufferUnderflow; 
@property (assign,nonatomic) unsigned latteDejitterBufferUnderflow;              //@synthesize latteDejitterBufferUnderflow=_latteDejitterBufferUnderflow - In the implementation block
@property (assign,nonatomic) char hasLatteRTPPacketLoss; 
@property (assign,nonatomic) unsigned latteRTPPacketLoss;                        //@synthesize latteRTPPacketLoss=_latteRTPPacketLoss - In the implementation block
@property (assign,nonatomic) char hasLatteErasures; 
@property (assign,nonatomic) unsigned latteErasures;                             //@synthesize latteErasures=_latteErasures - In the implementation block
@property (assign,nonatomic) char hasHOCapability; 
@property (assign,nonatomic) char hOCapability;                                  //@synthesize hOCapability=_hOCapability - In the implementation block
@property (assign,nonatomic) char hasHOBool; 
@property (assign,nonatomic) unsigned hOBool;                                    //@synthesize hOBool=_hOBool - In the implementation block
@property (nonatomic,readonly) char hasWRMRecommendedRAT; 
@property (nonatomic,retain) NSString * wRMRecommendedRAT;                       //@synthesize wRMRecommendedRAT=_wRMRecommendedRAT - In the implementation block
@property (assign,nonatomic) char hasIWLANStatus; 
@property (assign,nonatomic) char iWLANStatus;                                   //@synthesize iWLANStatus=_iWLANStatus - In the implementation block
@property (nonatomic,readonly) char hasCallId; 
@property (nonatomic,retain) NSString * callId;                                  //@synthesize callId=_callId - In the implementation block
@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) unsigned sessionId;                                 //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) char hasIPSecTunnelStatus; 
@property (assign,nonatomic) char iPSecTunnelStatus;                             //@synthesize iPSecTunnelStatus=_iPSecTunnelStatus - In the implementation block
@property (nonatomic,readonly) char hasCallEndReason; 
@property (nonatomic,retain) NSString * callEndReason;                           //@synthesize callEndReason=_callEndReason - In the implementation block
@property (assign,nonatomic) char hasATMRegistrationState; 
@property (assign,nonatomic) char aTMRegistrationState;                          //@synthesize aTMRegistrationState=_aTMRegistrationState - In the implementation block
@property (assign,nonatomic) char hasBBAudioPacketLoss; 
@property (assign,nonatomic) unsigned bBAudioPacketLoss;                         //@synthesize bBAudioPacketLoss=_bBAudioPacketLoss - In the implementation block
@property (assign,nonatomic) char hasBBAudioErasures; 
@property (assign,nonatomic) unsigned bBAudioErasures;                           //@synthesize bBAudioErasures=_bBAudioErasures - In the implementation block
@property (assign,nonatomic) char hasWiFiPreferred; 
@property (assign,nonatomic) char wiFiPreferred;                                 //@synthesize wiFiPreferred=_wiFiPreferred - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setSessionId:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)sessionId;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)captiveNetwork;
-(void)setHasSessionId:(char)arg1 ;
-(char)hasSessionId;
-(void)setHasTimestamp:(char)arg1 ;
-(NSString *)callId;
-(void)setCallId:(NSString *)arg1 ;
-(void)setSignalBar:(unsigned)arg1 ;
-(void)setHasSignalBar:(char)arg1 ;
-(char)hasSignalBar;
-(unsigned)signalBar;
-(void)setWRMRecommendedRAT:(NSString *)arg1 ;
-(void)setCallEndReason:(NSString *)arg1 ;
-(void)setWiFiRSSI:(long long)arg1 ;
-(void)setHasWiFiRSSI:(char)arg1 ;
-(char)hasWiFiRSSI;
-(void)setWiFiTxPER:(unsigned)arg1 ;
-(void)setHasWiFiTxPER:(char)arg1 ;
-(char)hasWiFiTxPER;
-(void)setWiFiSINR:(long long)arg1 ;
-(void)setHasWiFiSINR:(char)arg1 ;
-(char)hasWiFiSINR;
-(void)setWiFiBSSIDChange:(char)arg1 ;
-(void)setHasWiFiBSSIDChange:(char)arg1 ;
-(char)hasWiFiBSSIDChange;
-(void)setBeaconRate:(unsigned)arg1 ;
-(void)setHasBeaconRate:(char)arg1 ;
-(char)hasBeaconRate;
-(void)setCaptiveNetwork:(char)arg1 ;
-(void)setHasCaptiveNetwork:(char)arg1 ;
-(char)hasCaptiveNetwork;
-(void)setWOWEnabled:(char)arg1 ;
-(void)setHasWOWEnabled:(char)arg1 ;
-(char)hasWOWEnabled;
-(void)setWiFiRxRetry:(unsigned)arg1 ;
-(void)setHasWiFiRxRetry:(char)arg1 ;
-(char)hasWiFiRxRetry;
-(void)setLTEDataLQM:(unsigned)arg1 ;
-(void)setHasLTEDataLQM:(char)arg1 ;
-(char)hasLTEDataLQM;
-(void)setLTETxPower:(unsigned)arg1 ;
-(void)setHasLTETxPower:(char)arg1 ;
-(char)hasLTETxPower;
-(void)setLTEQoSAvailable:(char)arg1 ;
-(void)setHasLTEQoSAvailable:(char)arg1 ;
-(char)hasLTEQoSAvailable;
-(void)setBSSLoad:(unsigned)arg1 ;
-(void)setHasBSSLoad:(char)arg1 ;
-(char)hasBSSLoad;
-(void)setLTEVoiceLQM:(unsigned)arg1 ;
-(void)setHasLTEVoiceLQM:(char)arg1 ;
-(char)hasLTEVoiceLQM;
-(void)setLTESINR:(int)arg1 ;
-(void)setHasLTESINR:(char)arg1 ;
-(char)hasLTESINR;
-(void)setLTERSRP:(long long)arg1 ;
-(void)setHasLTERSRP:(char)arg1 ;
-(char)hasLTERSRP;
-(void)setLTECTRSRP:(long long)arg1 ;
-(void)setHasLTECTRSRP:(char)arg1 ;
-(char)hasLTECTRSRP;
-(void)setLatteNominalJitterBufferSize:(unsigned)arg1 ;
-(void)setHasLatteNominalJitterBufferSize:(char)arg1 ;
-(char)hasLatteNominalJitterBufferSize;
-(void)setLatteDejitterBufferUnderflow:(unsigned)arg1 ;
-(void)setHasLatteDejitterBufferUnderflow:(char)arg1 ;
-(char)hasLatteDejitterBufferUnderflow;
-(void)setLatteRTPPacketLoss:(unsigned)arg1 ;
-(void)setHasLatteRTPPacketLoss:(char)arg1 ;
-(char)hasLatteRTPPacketLoss;
-(void)setLatteErasures:(unsigned)arg1 ;
-(void)setHasLatteErasures:(char)arg1 ;
-(char)hasLatteErasures;
-(void)setHOCapability:(char)arg1 ;
-(void)setHasHOCapability:(char)arg1 ;
-(char)hasHOCapability;
-(void)setHOBool:(unsigned)arg1 ;
-(void)setHasHOBool:(char)arg1 ;
-(char)hasHOBool;
-(char)hasWRMRecommendedRAT;
-(void)setIWLANStatus:(char)arg1 ;
-(void)setHasIWLANStatus:(char)arg1 ;
-(char)hasIWLANStatus;
-(char)hasCallId;
-(void)setIPSecTunnelStatus:(char)arg1 ;
-(void)setHasIPSecTunnelStatus:(char)arg1 ;
-(char)hasIPSecTunnelStatus;
-(char)hasCallEndReason;
-(void)setATMRegistrationState:(char)arg1 ;
-(void)setHasATMRegistrationState:(char)arg1 ;
-(char)hasATMRegistrationState;
-(void)setBBAudioPacketLoss:(unsigned)arg1 ;
-(void)setHasBBAudioPacketLoss:(char)arg1 ;
-(char)hasBBAudioPacketLoss;
-(void)setBBAudioErasures:(unsigned)arg1 ;
-(void)setHasBBAudioErasures:(char)arg1 ;
-(char)hasBBAudioErasures;
-(void)setWiFiPreferred:(char)arg1 ;
-(void)setHasWiFiPreferred:(char)arg1 ;
-(char)hasWiFiPreferred;
-(long long)wiFiRSSI;
-(unsigned)wiFiTxPER;
-(long long)wiFiSINR;
-(char)wiFiBSSIDChange;
-(unsigned)beaconRate;
-(char)wOWEnabled;
-(unsigned)wiFiRxRetry;
-(unsigned)lTEDataLQM;
-(unsigned)lTETxPower;
-(char)lTEQoSAvailable;
-(unsigned)bSSLoad;
-(unsigned)lTEVoiceLQM;
-(int)lTESINR;
-(long long)lTERSRP;
-(long long)lTECTRSRP;
-(unsigned)latteNominalJitterBufferSize;
-(unsigned)latteDejitterBufferUnderflow;
-(unsigned)latteRTPPacketLoss;
-(unsigned)latteErasures;
-(char)hOCapability;
-(unsigned)hOBool;
-(NSString *)wRMRecommendedRAT;
-(char)iWLANStatus;
-(char)iPSecTunnelStatus;
-(NSString *)callEndReason;
-(char)aTMRegistrationState;
-(unsigned)bBAudioPacketLoss;
-(unsigned)bBAudioErasures;
-(char)wiFiPreferred;
@end

