/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _clientMetricIdentifier;
	unsigned _duration;
	int _errorCode;
	unsigned _numAccessories;
	NSString* _transaction;
	int _triggerSource;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasTransaction; 
@property (nonatomic,retain) NSString * transaction;                         //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) char hasTriggerSource; 
@property (assign,nonatomic) int triggerSource;                              //@synthesize triggerSource=_triggerSource - In the implementation block
@property (assign,nonatomic) char hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                        //@synthesize numAccessories=_numAccessories - In the implementation block
@property (nonatomic,readonly) char hasClientMetricIdentifier; 
@property (nonatomic,retain) NSString * clientMetricIdentifier;              //@synthesize clientMetricIdentifier=_clientMetricIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)errorCode;
-(void)setTransaction:(NSString *)arg1 ;
-(NSString *)transaction;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(NSString *)clientMetricIdentifier;
-(void)setClientMetricIdentifier:(NSString *)arg1 ;
-(int)triggerSource;
-(char)hasTransaction;
-(char)hasClientMetricIdentifier;
-(void)setTriggerSource:(int)arg1 ;
-(void)setHasTriggerSource:(char)arg1 ;
-(char)hasTriggerSource;
-(id)triggerSourceAsString:(int)arg1 ;
-(int)StringAsTriggerSource:(id)arg1 ;
-(void)setNumAccessories:(unsigned)arg1 ;
-(void)setHasNumAccessories:(char)arg1 ;
-(char)hasNumAccessories;
-(unsigned)numAccessories;
@end
