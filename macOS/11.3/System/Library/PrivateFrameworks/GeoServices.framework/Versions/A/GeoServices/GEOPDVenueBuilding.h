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

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE88* _directoryGroupingIds;
	SCD_Struct_GE88* _levelIds;
	unsigned long long _buildingId;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_directoryGroupingIds : 1;
		unsigned read_levelIds : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,readonly) unsigned long long levelIdsCount; 
@property (nonatomic,readonly) unsigned long long* levelIds; 
@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) unsigned long long directoryGroupingIdsCount; 
@property (nonatomic,readonly) unsigned long long* directoryGroupingIds; 
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
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)addLevelId:(unsigned long long)arg1 ;
-(void)addDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long)levelIdsCount;
-(void)clearLevelIds;
-(unsigned long long)levelIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directoryGroupingIdsCount;
-(void)clearDirectoryGroupingIds;
-(unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)buildingId;
-(void)setHasBuildingId:(char)arg1 ;
-(char)hasBuildingId;
-(unsigned long long*)levelIds;
-(void)setLevelIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)directoryGroupingIds;
-(void)setDirectoryGroupingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

