/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	NSData* _occurrenceRouteId;
	NSData* _switchedToRouteId;
	NSString* _synthesizedStepInstructions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _occurrenceResponseIndex;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	int _synthesizedStepManeuverType;
	int _type;
	struct {
		unsigned has_errorCode : 1;
		unsigned has_occurrenceResponseIndex : 1;
		unsigned has_occurrenceStepIndex : 1;
		unsigned has_switchedToResponseIndex : 1;
		unsigned has_synthesizedStepManeuverType : 1;
		unsigned has_type : 1;
		unsigned read_errorDomain : 1;
		unsigned read_occurrenceLatLng : 1;
		unsigned read_occurrenceRouteId : 1;
		unsigned read_switchedToRouteId : 1;
		unsigned read_synthesizedStepInstructions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasOccurrenceResponseIndex; 
@property (assign,nonatomic) unsigned occurrenceResponseIndex; 
@property (nonatomic,readonly) char hasOccurrenceRouteId; 
@property (nonatomic,retain) NSData * occurrenceRouteId; 
@property (assign,nonatomic) char hasOccurrenceStepIndex; 
@property (assign,nonatomic) unsigned occurrenceStepIndex; 
@property (nonatomic,readonly) char hasOccurrenceLatLng; 
@property (nonatomic,retain) GEOLatLng * occurrenceLatLng; 
@property (assign,nonatomic) char hasSwitchedToResponseIndex; 
@property (assign,nonatomic) unsigned switchedToResponseIndex; 
@property (nonatomic,readonly) char hasSwitchedToRouteId; 
@property (nonatomic,retain) NSData * switchedToRouteId; 
@property (assign,nonatomic) char hasSynthesizedStepManeuverType; 
@property (assign,nonatomic) int synthesizedStepManeuverType; 
@property (nonatomic,readonly) char hasSynthesizedStepInstructions; 
@property (nonatomic,retain) NSString * synthesizedStepInstructions; 
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(long long)errorCode;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSData *)occurrenceRouteId;
-(GEOLatLng *)occurrenceLatLng;
-(NSData *)switchedToRouteId;
-(NSString *)synthesizedStepInstructions;
-(NSString *)errorDomain;
-(void)setOccurrenceResponseIndex:(unsigned)arg1 ;
-(void)setOccurrenceRouteId:(NSData *)arg1 ;
-(void)setOccurrenceStepIndex:(unsigned)arg1 ;
-(void)setOccurrenceLatLng:(GEOLatLng *)arg1 ;
-(void)setSwitchedToResponseIndex:(unsigned)arg1 ;
-(void)setSwitchedToRouteId:(NSData *)arg1 ;
-(void)setSynthesizedStepManeuverType:(int)arg1 ;
-(void)setSynthesizedStepInstructions:(NSString *)arg1 ;
-(unsigned)occurrenceResponseIndex;
-(void)setHasOccurrenceResponseIndex:(char)arg1 ;
-(char)hasOccurrenceResponseIndex;
-(char)hasOccurrenceRouteId;
-(unsigned)occurrenceStepIndex;
-(void)setHasOccurrenceStepIndex:(char)arg1 ;
-(char)hasOccurrenceStepIndex;
-(char)hasOccurrenceLatLng;
-(unsigned)switchedToResponseIndex;
-(void)setHasSwitchedToResponseIndex:(char)arg1 ;
-(char)hasSwitchedToResponseIndex;
-(char)hasSwitchedToRouteId;
-(int)synthesizedStepManeuverType;
-(void)setHasSynthesizedStepManeuverType:(char)arg1 ;
-(char)hasSynthesizedStepManeuverType;
-(id)synthesizedStepManeuverTypeAsString:(int)arg1 ;
-(int)StringAsSynthesizedStepManeuverType:(id)arg1 ;
-(char)hasSynthesizedStepInstructions;
-(char)hasErrorDomain;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
@end

