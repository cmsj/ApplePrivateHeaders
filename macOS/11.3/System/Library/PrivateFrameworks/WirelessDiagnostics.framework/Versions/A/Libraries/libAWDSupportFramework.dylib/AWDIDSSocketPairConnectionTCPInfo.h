/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSSocketPairConnectionTCPInfo : PBCodable <NSCopying> {

	unsigned long long _bandwidth;
	unsigned long long _currentRTT;
	unsigned long long _timestamp;
	unsigned _linkType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) char hasCurrentRTT; 
@property (assign,nonatomic) unsigned long long currentRTT;              //@synthesize currentRTT=_currentRTT - In the implementation block
@property (assign,nonatomic) char hasBandwidth; 
@property (assign,nonatomic) unsigned long long bandwidth;               //@synthesize bandwidth=_bandwidth - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(unsigned)linkType;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasLinkType:(char)arg1 ;
-(char)hasLinkType;
-(void)setCurrentRTT:(unsigned long long)arg1 ;
-(void)setHasCurrentRTT:(char)arg1 ;
-(char)hasCurrentRTT;
-(void)setBandwidth:(unsigned long long)arg1 ;
-(void)setHasBandwidth:(char)arg1 ;
-(char)hasBandwidth;
-(unsigned long long)currentRTT;
-(unsigned long long)bandwidth;
@end

