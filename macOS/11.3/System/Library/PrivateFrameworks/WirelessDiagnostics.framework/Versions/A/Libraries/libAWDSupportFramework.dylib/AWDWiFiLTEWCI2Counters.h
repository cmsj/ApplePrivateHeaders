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

@interface AWDWiFiLTEWCI2Counters : PBCodable <NSCopying> {

	unsigned long long _lteTxPowerLimitCount;
	unsigned long long _lteTxPowerLimitTimeInMS;
	unsigned long long _timeSharingWLANIntervalCount;
	unsigned long long _timeSharingWLANTimeInMS;
	unsigned long long _timestamp;
	unsigned long long _type4DueToTimerExpiryCount;
	unsigned long long _type4HonouredCount;
	unsigned long long _type4HonouredTimeInMS;
	unsigned long long _wlanProtectionFramesDueToLTECoexCount;
	unsigned long long _wlanRxPriCount;
	unsigned long long _wlanRxPriTimeInMS;
	NSMutableArray* _wci2Counters;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasWlanRxPriTimeInMS; 
@property (assign,nonatomic) unsigned long long wlanRxPriTimeInMS;                                  //@synthesize wlanRxPriTimeInMS=_wlanRxPriTimeInMS - In the implementation block
@property (assign,nonatomic) char hasWlanRxPriCount; 
@property (assign,nonatomic) unsigned long long wlanRxPriCount;                                     //@synthesize wlanRxPriCount=_wlanRxPriCount - In the implementation block
@property (assign,nonatomic) char hasLteTxPowerLimitTimeInMS; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitTimeInMS;                            //@synthesize lteTxPowerLimitTimeInMS=_lteTxPowerLimitTimeInMS - In the implementation block
@property (assign,nonatomic) char hasLteTxPowerLimitCount; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitCount;                               //@synthesize lteTxPowerLimitCount=_lteTxPowerLimitCount - In the implementation block
@property (assign,nonatomic) char hasType4HonouredTimeInMS; 
@property (assign,nonatomic) unsigned long long type4HonouredTimeInMS;                              //@synthesize type4HonouredTimeInMS=_type4HonouredTimeInMS - In the implementation block
@property (assign,nonatomic) char hasType4HonouredCount; 
@property (assign,nonatomic) unsigned long long type4HonouredCount;                                 //@synthesize type4HonouredCount=_type4HonouredCount - In the implementation block
@property (assign,nonatomic) char hasTimeSharingWLANTimeInMS; 
@property (assign,nonatomic) unsigned long long timeSharingWLANTimeInMS;                            //@synthesize timeSharingWLANTimeInMS=_timeSharingWLANTimeInMS - In the implementation block
@property (assign,nonatomic) char hasTimeSharingWLANIntervalCount; 
@property (assign,nonatomic) unsigned long long timeSharingWLANIntervalCount;                       //@synthesize timeSharingWLANIntervalCount=_timeSharingWLANIntervalCount - In the implementation block
@property (assign,nonatomic) char hasWlanProtectionFramesDueToLTECoexCount; 
@property (assign,nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;              //@synthesize wlanProtectionFramesDueToLTECoexCount=_wlanProtectionFramesDueToLTECoexCount - In the implementation block
@property (assign,nonatomic) char hasType4DueToTimerExpiryCount; 
@property (assign,nonatomic) unsigned long long type4DueToTimerExpiryCount;                         //@synthesize type4DueToTimerExpiryCount=_type4DueToTimerExpiryCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * wci2Counters;                                         //@synthesize wci2Counters=_wci2Counters - In the implementation block
+(Class)wci2CountersType;
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
-(void)setWci2Counters:(NSMutableArray *)arg1 ;
-(void)addWci2Counters:(id)arg1 ;
-(unsigned long long)wci2CountersCount;
-(void)clearWci2Counters;
-(id)wci2CountersAtIndex:(unsigned long long)arg1 ;
-(void)setWlanRxPriTimeInMS:(unsigned long long)arg1 ;
-(void)setHasWlanRxPriTimeInMS:(char)arg1 ;
-(char)hasWlanRxPriTimeInMS;
-(void)setWlanRxPriCount:(unsigned long long)arg1 ;
-(void)setHasWlanRxPriCount:(char)arg1 ;
-(char)hasWlanRxPriCount;
-(void)setLteTxPowerLimitTimeInMS:(unsigned long long)arg1 ;
-(void)setHasLteTxPowerLimitTimeInMS:(char)arg1 ;
-(char)hasLteTxPowerLimitTimeInMS;
-(void)setLteTxPowerLimitCount:(unsigned long long)arg1 ;
-(void)setHasLteTxPowerLimitCount:(char)arg1 ;
-(char)hasLteTxPowerLimitCount;
-(void)setType4HonouredTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType4HonouredTimeInMS:(char)arg1 ;
-(char)hasType4HonouredTimeInMS;
-(void)setType4HonouredCount:(unsigned long long)arg1 ;
-(void)setHasType4HonouredCount:(char)arg1 ;
-(char)hasType4HonouredCount;
-(void)setTimeSharingWLANTimeInMS:(unsigned long long)arg1 ;
-(void)setHasTimeSharingWLANTimeInMS:(char)arg1 ;
-(char)hasTimeSharingWLANTimeInMS;
-(void)setTimeSharingWLANIntervalCount:(unsigned long long)arg1 ;
-(void)setHasTimeSharingWLANIntervalCount:(char)arg1 ;
-(char)hasTimeSharingWLANIntervalCount;
-(void)setWlanProtectionFramesDueToLTECoexCount:(unsigned long long)arg1 ;
-(void)setHasWlanProtectionFramesDueToLTECoexCount:(char)arg1 ;
-(char)hasWlanProtectionFramesDueToLTECoexCount;
-(void)setType4DueToTimerExpiryCount:(unsigned long long)arg1 ;
-(void)setHasType4DueToTimerExpiryCount:(char)arg1 ;
-(char)hasType4DueToTimerExpiryCount;
-(unsigned long long)wlanRxPriTimeInMS;
-(unsigned long long)wlanRxPriCount;
-(unsigned long long)lteTxPowerLimitTimeInMS;
-(unsigned long long)lteTxPowerLimitCount;
-(unsigned long long)type4HonouredTimeInMS;
-(unsigned long long)type4HonouredCount;
-(unsigned long long)timeSharingWLANTimeInMS;
-(unsigned long long)timeSharingWLANIntervalCount;
-(unsigned long long)wlanProtectionFramesDueToLTECoexCount;
-(unsigned long long)type4DueToTimerExpiryCount;
-(NSMutableArray *)wci2Counters;
@end

