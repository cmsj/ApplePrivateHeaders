/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {

	GEOSessionID _navSessionId;
	GEOSessionID _sessionId;
	GEOLocalTime* _eventTime;
	double _navSessionRelativeTimestamp;
	double _relativeTimestamp;
	unsigned long long _sessionEpoch;
	unsigned _sequenceNumber;
	struct {
		unsigned has_navSessionId : 1;
		unsigned has_sessionId : 1;
		unsigned has_navSessionRelativeTimestamp : 1;
		unsigned has_relativeTimestamp : 1;
		unsigned has_sessionEpoch : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) char hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
@property (assign,nonatomic) char hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId; 
@property (assign,nonatomic) char hasNavSessionRelativeTimestamp; 
@property (assign,nonatomic) double navSessionRelativeTimestamp; 
@property (nonatomic,readonly) char hasEventTime; 
@property (nonatomic,retain) GEOLocalTime * eventTime; 
@property (assign,nonatomic) char hasSessionEpoch; 
@property (assign,nonatomic) unsigned long long sessionEpoch; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOSessionID)sessionId;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionId:(char)arg1 ;
-(char)hasSessionId;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setRelativeTimestamp:(double)arg1 ;
-(double)relativeTimestamp;
-(void)setHasRelativeTimestamp:(char)arg1 ;
-(char)hasRelativeTimestamp;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setNavSessionRelativeTimestamp:(double)arg1 ;
-(void)setSessionEpoch:(unsigned long long)arg1 ;
-(void)setEventTime:(GEOLocalTime *)arg1 ;
-(GEOSessionID)navSessionId;
-(void)setHasNavSessionId:(char)arg1 ;
-(char)hasNavSessionId;
-(GEOLocalTime *)eventTime;
-(double)navSessionRelativeTimestamp;
-(void)setHasNavSessionRelativeTimestamp:(char)arg1 ;
-(char)hasNavSessionRelativeTimestamp;
-(char)hasEventTime;
-(unsigned long long)sessionEpoch;
-(void)setHasSessionEpoch:(char)arg1 ;
-(char)hasSessionEpoch;
@end

