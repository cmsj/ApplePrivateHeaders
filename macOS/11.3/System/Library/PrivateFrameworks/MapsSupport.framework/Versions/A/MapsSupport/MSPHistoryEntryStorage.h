/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPDirectionsSearch, NSString, MSPPlaceDisplay, MSPQuerySearch, MSPRidesharingTrip, MSPTransitStorageLineItem;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDirectionsSearch* _directionsSearch;
	NSString* _identifier;
	MSPPlaceDisplay* _placeDisplay;
	MSPQuerySearch* _querySearch;
	MSPRidesharingTrip* _ridesharingTrip;
	int _searchType;
	MSPTransitStorageLineItem* _transitLineItem;
	char _tracksRAPRecordingOnly;
	SCD_Struct_MS6 _has;

}

@property (assign,nonatomic) char hasSearchType; 
@property (assign,nonatomic) int searchType;                                           //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                          //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) char hasQuerySearch; 
@property (nonatomic,retain) MSPQuerySearch * querySearch;                             //@synthesize querySearch=_querySearch - In the implementation block
@property (nonatomic,readonly) char hasDirectionsSearch; 
@property (nonatomic,retain) MSPDirectionsSearch * directionsSearch;                   //@synthesize directionsSearch=_directionsSearch - In the implementation block
@property (nonatomic,readonly) char hasPlaceDisplay; 
@property (nonatomic,retain) MSPPlaceDisplay * placeDisplay;                           //@synthesize placeDisplay=_placeDisplay - In the implementation block
@property (nonatomic,readonly) char hasTransitLineItem; 
@property (nonatomic,retain) MSPTransitStorageLineItem * transitLineItem;              //@synthesize transitLineItem=_transitLineItem - In the implementation block
@property (nonatomic,readonly) char hasRidesharingTrip; 
@property (nonatomic,retain) MSPRidesharingTrip * ridesharingTrip;                     //@synthesize ridesharingTrip=_ridesharingTrip - In the implementation block
@property (assign,nonatomic) char hasTracksRAPRecordingOnly; 
@property (assign,nonatomic) char tracksRAPRecordingOnly;                              //@synthesize tracksRAPRecordingOnly=_tracksRAPRecordingOnly - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)position;
-(double)timestamp;
-(void)setPosition:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(char)hasTimestamp;
-(PBUnknownFields *)unknownFields;
-(char)hasIdentifier;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasPosition;
-(void)setSearchType:(int)arg1 ;
-(int)searchType;
-(void)setHasSearchType:(char)arg1 ;
-(char)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(MSPTransitStorageLineItem *)transitLineItem;
-(void)setTransitLineItem:(MSPTransitStorageLineItem *)arg1 ;
-(void)setHasPosition:(char)arg1 ;
-(char)tracksRAPRecordingOnly;
-(void)setTracksRAPRecordingOnly:(char)arg1 ;
-(void)setQuerySearch:(MSPQuerySearch *)arg1 ;
-(MSPQuerySearch *)querySearch;
-(void)setDirectionsSearch:(MSPDirectionsSearch *)arg1 ;
-(MSPDirectionsSearch *)directionsSearch;
-(MSPRidesharingTrip *)ridesharingTrip;
-(void)setRidesharingTrip:(MSPRidesharingTrip *)arg1 ;
-(void)setPlaceDisplay:(MSPPlaceDisplay *)arg1 ;
-(MSPPlaceDisplay *)placeDisplay;
-(char)hasQuerySearch;
-(char)hasDirectionsSearch;
-(char)hasPlaceDisplay;
-(char)hasTransitLineItem;
-(char)hasRidesharingTrip;
-(void)setHasTracksRAPRecordingOnly:(char)arg1 ;
-(char)hasTracksRAPRecordingOnly;
@end

