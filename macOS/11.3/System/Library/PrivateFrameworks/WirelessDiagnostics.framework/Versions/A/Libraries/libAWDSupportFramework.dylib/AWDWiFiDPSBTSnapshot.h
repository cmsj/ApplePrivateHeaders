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

@interface AWDWiFiDPSBTSnapshot : PBCodable <NSCopying> {

	unsigned long long _ts;
	unsigned _duration;
	unsigned _use;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTs; 
@property (assign,nonatomic) unsigned long long ts;              //@synthesize ts=_ts - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasUse; 
@property (assign,nonatomic) unsigned use;                       //@synthesize use=_use - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned)use;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setTs:(unsigned long long)arg1 ;
-(void)setHasTs:(char)arg1 ;
-(char)hasTs;
-(void)setUse:(unsigned)arg1 ;
-(void)setHasUse:(char)arg1 ;
-(char)hasUse;
-(unsigned long long)ts;
@end
