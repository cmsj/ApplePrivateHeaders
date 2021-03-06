/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying> {

	double _statusChangeTimestamp;
	double _transmitTimestamp;
	NSData* _dPID;
	NSData* _iAdID;
	float _timezone;
	char _optedOutStatus;
	SCD_Struct_AD4 _has;

}

@property (nonatomic,readonly) char hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                             //@synthesize iAdID=_iAdID - In the implementation block
@property (assign,nonatomic) char hasOptedOutStatus; 
@property (assign,nonatomic) char optedOutStatus;                        //@synthesize optedOutStatus=_optedOutStatus - In the implementation block
@property (assign,nonatomic) char hasTransmitTimestamp; 
@property (assign,nonatomic) double transmitTimestamp;                   //@synthesize transmitTimestamp=_transmitTimestamp - In the implementation block
@property (assign,nonatomic) char hasStatusChangeTimestamp; 
@property (assign,nonatomic) double statusChangeTimestamp;               //@synthesize statusChangeTimestamp=_statusChangeTimestamp - In the implementation block
@property (assign,nonatomic) char hasTimezone; 
@property (assign,nonatomic) float timezone;                             //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) char hasDPID; 
@property (nonatomic,retain) NSData * dPID;                              //@synthesize dPID=_dPID - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)timezone;
-(void)setTimezone:(float)arg1 ;
-(char)hasTimezone;
-(void)setHasTimezone:(char)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setStatusChangeTimestamp:(double)arg1 ;
-(void)setTransmitTimestamp:(double)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setOptedOutStatus:(char)arg1 ;
-(char)hasIAdID;
-(char)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setHasOptedOutStatus:(char)arg1 ;
-(char)hasOptedOutStatus;
-(void)setHasTransmitTimestamp:(char)arg1 ;
-(char)hasTransmitTimestamp;
-(void)setHasStatusChangeTimestamp:(char)arg1 ;
-(char)hasStatusChangeTimestamp;
-(char)optedOutStatus;
-(double)transmitTimestamp;
-(double)statusChangeTimestamp;
@end

