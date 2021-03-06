/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCEVASSelectEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _mobileCapabilities;
	unsigned _swStatus;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasMobileCapabilities; 
@property (assign,nonatomic) unsigned mobileCapabilities;                            //@synthesize mobileCapabilities=_mobileCapabilities - In the implementation block
@property (assign,nonatomic) char hasSwStatus; 
@property (assign,nonatomic) unsigned swStatus;                                      //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,readonly) char hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) char hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(void)setUuidReference:(NSData *)arg1 ;
-(char)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(char)arg1 ;
-(char)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setSwStatus:(unsigned)arg1 ;
-(void)setHasSwStatus:(char)arg1 ;
-(char)hasSwStatus;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(void)setHasMobileCapabilities:(char)arg1 ;
-(char)hasMobileCapabilities;
-(unsigned)mobileCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)hasVersion;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasVersion:(char)arg1 ;
@end

