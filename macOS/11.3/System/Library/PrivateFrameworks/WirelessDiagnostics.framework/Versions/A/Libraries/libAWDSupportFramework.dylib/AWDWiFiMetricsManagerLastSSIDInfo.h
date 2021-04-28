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

@class NSData;

@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _lastSSIDAttempted;
	NSData* _lastSSIDConnectedTo;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasLastSSIDAttempted; 
@property (nonatomic,retain) NSData * lastSSIDAttempted;                 //@synthesize lastSSIDAttempted=_lastSSIDAttempted - In the implementation block
@property (nonatomic,readonly) char hasLastSSIDConnectedTo; 
@property (nonatomic,retain) NSData * lastSSIDConnectedTo;               //@synthesize lastSSIDConnectedTo=_lastSSIDConnectedTo - In the implementation block
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
-(void)setLastSSIDAttempted:(NSData *)arg1 ;
-(void)setLastSSIDConnectedTo:(NSData *)arg1 ;
-(char)hasLastSSIDAttempted;
-(char)hasLastSSIDConnectedTo;
-(NSData *)lastSSIDAttempted;
-(NSData *)lastSSIDConnectedTo;
@end
