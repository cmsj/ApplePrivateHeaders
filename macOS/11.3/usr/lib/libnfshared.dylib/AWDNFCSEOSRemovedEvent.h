/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSEOSRemovedEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hardwareType;
	unsigned _reason;
	NSData* _uuidReference;
	char _hasCardEmulationStarted;
	char _hasExpressTransactionStarted;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) unsigned reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) char hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                            //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) char hasHasExpressTransactionStarted; 
@property (assign,nonatomic) char hasExpressTransactionStarted;                 //@synthesize hasExpressTransactionStarted=_hasExpressTransactionStarted - In the implementation block
@property (assign,nonatomic) char hasHasCardEmulationStarted; 
@property (assign,nonatomic) char hasCardEmulationStarted;                      //@synthesize hasCardEmulationStarted=_hasCardEmulationStarted - In the implementation block
@property (assign,nonatomic) char hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                             //@synthesize hardwareType=_hardwareType - In the implementation block
-(void)setUuidReference:(NSData *)arg1 ;
-(char)hasUuidReference;
-(NSData *)uuidReference;
-(void)setHasExpressTransactionStarted:(char)arg1 ;
-(void)setHasHasExpressTransactionStarted:(char)arg1 ;
-(char)hasHasExpressTransactionStarted;
-(void)setHasCardEmulationStarted:(char)arg1 ;
-(void)setHasHasCardEmulationStarted:(char)arg1 ;
-(char)hasHasCardEmulationStarted;
-(char)hasExpressTransactionStarted;
-(char)hasCardEmulationStarted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setReason:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasReason;
-(void)setHasReason:(char)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setHasHardwareType:(char)arg1 ;
-(char)hasHardwareType;
@end

