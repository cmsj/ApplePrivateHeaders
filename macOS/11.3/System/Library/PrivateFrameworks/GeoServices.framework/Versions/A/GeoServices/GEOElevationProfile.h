/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMinimumVisibleElevationRange, NSMutableArray;

@interface GEOElevationProfile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMinimumVisibleElevationRange* _minimumVisibleElevationRange;
	NSMutableArray* _points;
	NSMutableArray* _segmentDescriptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sumElevationGainCm;
	unsigned _sumElevationLossCm;
	struct {
		unsigned has_sumElevationGainCm : 1;
		unsigned has_sumElevationLossCm : 1;
		unsigned read_unknownFields : 1;
		unsigned read_minimumVisibleElevationRange : 1;
		unsigned read_points : 1;
		unsigned read_segmentDescriptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * points; 
@property (assign,nonatomic) char hasSumElevationGainCm; 
@property (assign,nonatomic) unsigned sumElevationGainCm; 
@property (assign,nonatomic) char hasSumElevationLossCm; 
@property (assign,nonatomic) unsigned sumElevationLossCm; 
@property (nonatomic,readonly) char hasMinimumVisibleElevationRange; 
@property (nonatomic,retain) GEOMinimumVisibleElevationRange * minimumVisibleElevationRange; 
@property (nonatomic,retain) NSMutableArray * segmentDescriptions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)pointType;
+(Class)segmentDescriptionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addPoint:(id)arg1 ;
-(NSMutableArray *)points;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearPoints;
-(unsigned long long)pointsCount;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOMinimumVisibleElevationRange *)minimumVisibleElevationRange;
-(void)setSumElevationGainCm:(unsigned)arg1 ;
-(void)setSumElevationLossCm:(unsigned)arg1 ;
-(void)setMinimumVisibleElevationRange:(GEOMinimumVisibleElevationRange *)arg1 ;
-(void)addSegmentDescription:(id)arg1 ;
-(id)pointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)segmentDescriptionsCount;
-(void)clearSegmentDescriptions;
-(id)segmentDescriptionAtIndex:(unsigned long long)arg1 ;
-(unsigned)sumElevationGainCm;
-(void)setHasSumElevationGainCm:(char)arg1 ;
-(char)hasSumElevationGainCm;
-(unsigned)sumElevationLossCm;
-(void)setHasSumElevationLossCm:(char)arg1 ;
-(char)hasSumElevationLossCm;
-(char)hasMinimumVisibleElevationRange;
-(NSMutableArray *)segmentDescriptions;
-(void)setSegmentDescriptions:(NSMutableArray *)arg1 ;
@end
