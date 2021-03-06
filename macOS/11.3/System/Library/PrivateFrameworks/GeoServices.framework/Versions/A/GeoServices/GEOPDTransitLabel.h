/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLabelItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBDataReader, PBUnknownFields, GEOPBTransitArtwork;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _labelType;
	struct {
		unsigned has_labelType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labelArtwork : 1;
		unsigned read_labelTextString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasLabelType; 
@property (assign,nonatomic) int labelType; 
@property (nonatomic,readonly) char hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString; 
@property (nonatomic,readonly) char hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)labelTextString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setLabelTextString:(NSString *)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setHasLabelType:(char)arg1 ;
-(char)hasLabelType;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(char)hasLabelTextString;
-(char)hasLabelArtwork;
-(NSString *)labelString;
@end

