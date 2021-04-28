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

@interface AWDWiFiMetricsManagerNetworkTransitionCumulative : PBCodable <NSCopying> {

	SCD_Struct_AW21* _channelScanCounts;
	unsigned long long _timestamp;
	unsigned _colocatedNetworksFoundCount;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasColocatedNetworksFoundCount; 
@property (assign,nonatomic) unsigned colocatedNetworksFoundCount;                     //@synthesize colocatedNetworksFoundCount=_colocatedNetworksFoundCount - In the implementation block
@property (nonatomic,readonly) unsigned long long channelScanCountsCount; 
@property (nonatomic,readonly) unsigned* channelScanCounts; 
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
-(unsigned long long)channelScanCountsCount;
-(void)clearChannelScanCounts;
-(unsigned)channelScanCountAtIndex:(unsigned long long)arg1 ;
-(void)addChannelScanCount:(unsigned)arg1 ;
-(void)setColocatedNetworksFoundCount:(unsigned)arg1 ;
-(void)setHasColocatedNetworksFoundCount:(char)arg1 ;
-(char)hasColocatedNetworksFoundCount;
-(unsigned*)channelScanCounts;
-(void)setChannelScanCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)colocatedNetworksFoundCount;
@end
