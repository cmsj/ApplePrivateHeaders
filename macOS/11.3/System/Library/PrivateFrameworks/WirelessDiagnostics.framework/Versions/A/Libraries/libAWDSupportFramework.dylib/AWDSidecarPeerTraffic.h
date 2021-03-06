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

@interface AWDSidecarPeerTraffic : PBCodable <NSCopying> {

	unsigned long long _txErrorCount;
	unsigned long long _txExpiredCount;
	unsigned long long _txSuccessCount;
	NSMutableArray* _rxDataRates;
	NSMutableArray* _rxFWDelays;
	NSMutableArray* _rxIPCDelays;
	NSMutableArray* _rxRSSIs;
	NSMutableArray* _rxTotalDelays;
	NSMutableArray* _txCCAs;
	NSMutableArray* _txDataRates;
	NSMutableArray* _txFWDelays;
	NSMutableArray* _txHWDelays;
	NSMutableArray* _txIPCDelays;
	NSMutableArray* _txPacketBurstIntervals;
	NSMutableArray* _txPacketBurstSizes;
	NSMutableArray* _txRetries;
	NSMutableArray* _txTotalDelays;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTxSuccessCount; 
@property (assign,nonatomic) unsigned long long txSuccessCount;                    //@synthesize txSuccessCount=_txSuccessCount - In the implementation block
@property (assign,nonatomic) char hasTxExpiredCount; 
@property (assign,nonatomic) unsigned long long txExpiredCount;                    //@synthesize txExpiredCount=_txExpiredCount - In the implementation block
@property (assign,nonatomic) char hasTxErrorCount; 
@property (assign,nonatomic) unsigned long long txErrorCount;                      //@synthesize txErrorCount=_txErrorCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * txTotalDelays;                       //@synthesize txTotalDelays=_txTotalDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * txIPCDelays;                         //@synthesize txIPCDelays=_txIPCDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * txFWDelays;                          //@synthesize txFWDelays=_txFWDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * txHWDelays;                          //@synthesize txHWDelays=_txHWDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * txDataRates;                         //@synthesize txDataRates=_txDataRates - In the implementation block
@property (nonatomic,retain) NSMutableArray * txCCAs;                              //@synthesize txCCAs=_txCCAs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txRetries;                           //@synthesize txRetries=_txRetries - In the implementation block
@property (nonatomic,retain) NSMutableArray * txPacketBurstSizes;                  //@synthesize txPacketBurstSizes=_txPacketBurstSizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * txPacketBurstIntervals;              //@synthesize txPacketBurstIntervals=_txPacketBurstIntervals - In the implementation block
@property (nonatomic,retain) NSMutableArray * rxTotalDelays;                       //@synthesize rxTotalDelays=_rxTotalDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * rxIPCDelays;                         //@synthesize rxIPCDelays=_rxIPCDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * rxFWDelays;                          //@synthesize rxFWDelays=_rxFWDelays - In the implementation block
@property (nonatomic,retain) NSMutableArray * rxDataRates;                         //@synthesize rxDataRates=_rxDataRates - In the implementation block
@property (nonatomic,retain) NSMutableArray * rxRSSIs;                             //@synthesize rxRSSIs=_rxRSSIs - In the implementation block
+(Class)txTotalDelayType;
+(Class)txIPCDelayType;
+(Class)txFWDelayType;
+(Class)txHWDelayType;
+(Class)txDataRateType;
+(Class)txCCAType;
+(Class)txRetriesType;
+(Class)txPacketBurstSizeType;
+(Class)txPacketBurstIntervalType;
+(Class)rxTotalDelayType;
+(Class)rxIPCDelayType;
+(Class)rxFWDelayType;
+(Class)rxDataRateType;
+(Class)rxRSSIType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTxRetries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txRetries;
-(void)setTxTotalDelays:(NSMutableArray *)arg1 ;
-(void)setTxIPCDelays:(NSMutableArray *)arg1 ;
-(void)setTxFWDelays:(NSMutableArray *)arg1 ;
-(void)setTxHWDelays:(NSMutableArray *)arg1 ;
-(void)setTxDataRates:(NSMutableArray *)arg1 ;
-(void)setTxCCAs:(NSMutableArray *)arg1 ;
-(void)setTxPacketBurstSizes:(NSMutableArray *)arg1 ;
-(void)setTxPacketBurstIntervals:(NSMutableArray *)arg1 ;
-(void)setRxTotalDelays:(NSMutableArray *)arg1 ;
-(void)setRxIPCDelays:(NSMutableArray *)arg1 ;
-(void)setRxFWDelays:(NSMutableArray *)arg1 ;
-(void)setRxDataRates:(NSMutableArray *)arg1 ;
-(void)setRxRSSIs:(NSMutableArray *)arg1 ;
-(void)addTxTotalDelay:(id)arg1 ;
-(void)addTxIPCDelay:(id)arg1 ;
-(void)addTxFWDelay:(id)arg1 ;
-(void)addTxHWDelay:(id)arg1 ;
-(void)addTxDataRate:(id)arg1 ;
-(void)addTxCCA:(id)arg1 ;
-(void)addTxRetries:(id)arg1 ;
-(void)addTxPacketBurstSize:(id)arg1 ;
-(void)addTxPacketBurstInterval:(id)arg1 ;
-(void)addRxTotalDelay:(id)arg1 ;
-(void)addRxIPCDelay:(id)arg1 ;
-(void)addRxFWDelay:(id)arg1 ;
-(void)addRxDataRate:(id)arg1 ;
-(void)addRxRSSI:(id)arg1 ;
-(unsigned long long)txTotalDelaysCount;
-(void)clearTxTotalDelays;
-(id)txTotalDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txIPCDelaysCount;
-(void)clearTxIPCDelays;
-(id)txIPCDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txFWDelaysCount;
-(void)clearTxFWDelays;
-(id)txFWDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txHWDelaysCount;
-(void)clearTxHWDelays;
-(id)txHWDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txDataRatesCount;
-(void)clearTxDataRates;
-(id)txDataRateAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txCCAsCount;
-(void)clearTxCCAs;
-(id)txCCAAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txRetriesCount;
-(void)clearTxRetries;
-(id)txRetriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txPacketBurstSizesCount;
-(void)clearTxPacketBurstSizes;
-(id)txPacketBurstSizeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txPacketBurstIntervalsCount;
-(void)clearTxPacketBurstIntervals;
-(id)txPacketBurstIntervalAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rxTotalDelaysCount;
-(void)clearRxTotalDelays;
-(id)rxTotalDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rxIPCDelaysCount;
-(void)clearRxIPCDelays;
-(id)rxIPCDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rxFWDelaysCount;
-(void)clearRxFWDelays;
-(id)rxFWDelayAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rxDataRatesCount;
-(void)clearRxDataRates;
-(id)rxDataRateAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rxRSSIsCount;
-(void)clearRxRSSIs;
-(id)rxRSSIAtIndex:(unsigned long long)arg1 ;
-(void)setTxSuccessCount:(unsigned long long)arg1 ;
-(void)setHasTxSuccessCount:(char)arg1 ;
-(char)hasTxSuccessCount;
-(void)setTxExpiredCount:(unsigned long long)arg1 ;
-(void)setHasTxExpiredCount:(char)arg1 ;
-(char)hasTxExpiredCount;
-(void)setTxErrorCount:(unsigned long long)arg1 ;
-(void)setHasTxErrorCount:(char)arg1 ;
-(char)hasTxErrorCount;
-(unsigned long long)txSuccessCount;
-(unsigned long long)txExpiredCount;
-(unsigned long long)txErrorCount;
-(NSMutableArray *)txTotalDelays;
-(NSMutableArray *)txIPCDelays;
-(NSMutableArray *)txFWDelays;
-(NSMutableArray *)txHWDelays;
-(NSMutableArray *)txDataRates;
-(NSMutableArray *)txCCAs;
-(NSMutableArray *)txPacketBurstSizes;
-(NSMutableArray *)txPacketBurstIntervals;
-(NSMutableArray *)rxTotalDelays;
-(NSMutableArray *)rxIPCDelays;
-(NSMutableArray *)rxFWDelays;
-(NSMutableArray *)rxDataRates;
-(NSMutableArray *)rxRSSIs;
@end

