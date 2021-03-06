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

@class PBDataReader, GEOVLFLocalizationAlgorithmDetails, GEOVLFFailureDetails, GEOVLFGravityVector, GEOVLFLocation, GEOVLFSuccessDetails, GEOVLFTileDetails;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOVLFPositionContextClassification _positionContextClassification;
	GEOVLFLocalizationAlgorithmDetails* _algorithmDetails;
	double _exposureTargetOffset;
	GEOVLFFailureDetails* _failureDetails;
	GEOVLFGravityVector* _gravityVector;
	GEOVLFLocation* _location;
	GEOVLFSuccessDetails* _successDetails;
	GEOVLFTileDetails* _tileDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _relativeTimestampMs;
	unsigned _runTimeMs;
	struct {
		unsigned has_positionContextClassification : 1;
		unsigned has_exposureTargetOffset : 1;
		unsigned has_relativeTimestampMs : 1;
		unsigned has_runTimeMs : 1;
		unsigned read_algorithmDetails : 1;
		unsigned read_failureDetails : 1;
		unsigned read_gravityVector : 1;
		unsigned read_location : 1;
		unsigned read_successDetails : 1;
		unsigned read_tileDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasTileDetails; 
@property (nonatomic,retain) GEOVLFTileDetails * tileDetails; 
@property (assign,nonatomic) char hasRelativeTimestampMs; 
@property (assign,nonatomic) unsigned relativeTimestampMs; 
@property (assign,nonatomic) char hasRunTimeMs; 
@property (assign,nonatomic) unsigned runTimeMs; 
@property (nonatomic,readonly) char hasAlgorithmDetails; 
@property (nonatomic,retain) GEOVLFLocalizationAlgorithmDetails * algorithmDetails; 
@property (nonatomic,readonly) char hasSuccessDetails; 
@property (nonatomic,retain) GEOVLFSuccessDetails * successDetails; 
@property (nonatomic,readonly) char hasFailureDetails; 
@property (nonatomic,retain) GEOVLFFailureDetails * failureDetails; 
@property (nonatomic,readonly) char hasGravityVector; 
@property (nonatomic,retain) GEOVLFGravityVector * gravityVector; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOVLFLocation * location; 
@property (assign,nonatomic) char hasExposureTargetOffset; 
@property (assign,nonatomic) double exposureTargetOffset; 
@property (assign,nonatomic) char hasPositionContextClassification; 
@property (assign,nonatomic) GEOVLFPositionContextClassification positionContextClassification; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOVLFLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOVLFLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasLocation;
-(GEOVLFTileDetails *)tileDetails;
-(GEOVLFLocalizationAlgorithmDetails *)algorithmDetails;
-(GEOVLFSuccessDetails *)successDetails;
-(GEOVLFFailureDetails *)failureDetails;
-(GEOVLFGravityVector *)gravityVector;
-(void)setTileDetails:(GEOVLFTileDetails *)arg1 ;
-(void)setRelativeTimestampMs:(unsigned)arg1 ;
-(void)setRunTimeMs:(unsigned)arg1 ;
-(void)setAlgorithmDetails:(GEOVLFLocalizationAlgorithmDetails *)arg1 ;
-(void)setSuccessDetails:(GEOVLFSuccessDetails *)arg1 ;
-(void)setFailureDetails:(GEOVLFFailureDetails *)arg1 ;
-(void)setGravityVector:(GEOVLFGravityVector *)arg1 ;
-(void)setExposureTargetOffset:(double)arg1 ;
-(void)setPositionContextClassification:(GEOVLFPositionContextClassification)arg1 ;
-(char)hasTileDetails;
-(unsigned)relativeTimestampMs;
-(void)setHasRelativeTimestampMs:(char)arg1 ;
-(char)hasRelativeTimestampMs;
-(unsigned)runTimeMs;
-(void)setHasRunTimeMs:(char)arg1 ;
-(char)hasRunTimeMs;
-(char)hasAlgorithmDetails;
-(char)hasSuccessDetails;
-(char)hasFailureDetails;
-(char)hasGravityVector;
-(double)exposureTargetOffset;
-(void)setHasExposureTargetOffset:(char)arg1 ;
-(char)hasExposureTargetOffset;
-(GEOVLFPositionContextClassification)positionContextClassification;
-(void)setHasPositionContextClassification:(char)arg1 ;
-(char)hasPositionContextClassification;
@end

