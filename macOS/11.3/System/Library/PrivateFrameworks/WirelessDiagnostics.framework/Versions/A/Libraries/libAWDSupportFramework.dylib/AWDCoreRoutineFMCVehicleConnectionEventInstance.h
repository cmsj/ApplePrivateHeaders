/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineFMCVehicleConnectionEventInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _eventType;
	int _value;
	SCD_Struct_AW7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) int eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) char hasValue; 
@property (assign,nonatomic) int value;                                 //@synthesize value=_value - In the implementation block
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)value;
-(id)dictionaryRepresentation;
-(void)setValue:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)eventType;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)hasValue;
-(void)setEventType:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasValue:(char)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
@end

