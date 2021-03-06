/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDepartureFrequency.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, PBUnknownFields, NSString;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _displayDepartureFrequency;
	unsigned _earliestDepartureTime;
	unsigned _latestDepartureTime;
	unsigned _maxDepartureFrequency;
	unsigned _minDepartureFrequency;
	char _isEstimated;
	struct {
		unsigned has_displayDepartureFrequency : 1;
		unsigned has_earliestDepartureTime : 1;
		unsigned has_latestDepartureTime : 1;
		unsigned has_maxDepartureFrequency : 1;
		unsigned has_minDepartureFrequency : 1;
		unsigned has_isEstimated : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) long long frequencyType; 
@property (nonatomic,readonly) char isEstimate; 
@property (nonatomic,readonly) long long displayFrequency; 
@property (nonatomic,readonly) long long minFrequency; 
@property (nonatomic,readonly) long long maxFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasMinDepartureFrequency; 
@property (assign,nonatomic) unsigned minDepartureFrequency; 
@property (assign,nonatomic) char hasMaxDepartureFrequency; 
@property (assign,nonatomic) unsigned maxDepartureFrequency; 
@property (assign,nonatomic) char hasEarliestDepartureTime; 
@property (assign,nonatomic) unsigned earliestDepartureTime; 
@property (assign,nonatomic) char hasLatestDepartureTime; 
@property (assign,nonatomic) unsigned latestDepartureTime; 
@property (assign,nonatomic) char hasIsEstimated; 
@property (assign,nonatomic) char isEstimated; 
@property (assign,nonatomic) char hasDisplayDepartureFrequency; 
@property (assign,nonatomic) unsigned displayDepartureFrequency; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)isEstimated;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setMinDepartureFrequency:(unsigned)arg1 ;
-(void)setMaxDepartureFrequency:(unsigned)arg1 ;
-(void)setEarliestDepartureTime:(unsigned)arg1 ;
-(void)setLatestDepartureTime:(unsigned)arg1 ;
-(void)setIsEstimated:(char)arg1 ;
-(void)setDisplayDepartureFrequency:(unsigned)arg1 ;
-(unsigned)minDepartureFrequency;
-(void)setHasMinDepartureFrequency:(char)arg1 ;
-(char)hasMinDepartureFrequency;
-(unsigned)maxDepartureFrequency;
-(void)setHasMaxDepartureFrequency:(char)arg1 ;
-(char)hasMaxDepartureFrequency;
-(unsigned)earliestDepartureTime;
-(void)setHasEarliestDepartureTime:(char)arg1 ;
-(char)hasEarliestDepartureTime;
-(unsigned)latestDepartureTime;
-(void)setHasLatestDepartureTime:(char)arg1 ;
-(char)hasLatestDepartureTime;
-(void)setHasIsEstimated:(char)arg1 ;
-(char)hasIsEstimated;
-(unsigned)displayDepartureFrequency;
-(void)setHasDisplayDepartureFrequency:(char)arg1 ;
-(char)hasDisplayDepartureFrequency;
-(NSDate *)firstTimeInFrequency;
-(char)isValidAtDate:(id)arg1 ;
-(double)frequencyForSorting;
-(long long)minFrequency;
-(long long)maxFrequency;
-(long long)frequencyType;
-(NSDate *)lastTimeInFrequency;
-(long long)displayFrequency;
-(char)isEstimate;
@end

