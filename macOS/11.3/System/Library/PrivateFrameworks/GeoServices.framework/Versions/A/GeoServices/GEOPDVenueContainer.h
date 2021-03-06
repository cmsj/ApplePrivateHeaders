/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE88* _buildingIds;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned long long _venueId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _browseType;
	struct {
		unsigned has_muid : 1;
		unsigned has_venueId : 1;
		unsigned has_browseType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buildingIds : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (nonatomic,readonly) unsigned long long buildingIdsCount; 
@property (nonatomic,readonly) unsigned long long* buildingIds; 
@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) char hasBrowseType; 
@property (assign,nonatomic) int browseType; 
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasLabel;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)addBuildingId:(unsigned long long)arg1 ;
-(void)setBrowseType:(int)arg1 ;
-(unsigned long long)buildingIdsCount;
-(void)clearBuildingIds;
-(unsigned long long)buildingIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)venueId;
-(void)setHasVenueId:(char)arg1 ;
-(char)hasVenueId;
-(unsigned long long*)buildingIds;
-(void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)browseType;
-(void)setHasBrowseType:(char)arg1 ;
-(char)hasBrowseType;
-(id)browseTypeAsString:(int)arg1 ;
-(int)StringAsBrowseType:(id)arg1 ;
@end

