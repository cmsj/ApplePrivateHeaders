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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _incidentIndexs;
	NSMutableArray* _advisoryCards;
	GEOFormattedString* _noticeText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _shouldAlwaysShowAdvisoryCard;
	struct {
		unsigned has_shouldAlwaysShowAdvisoryCard : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentIndexs : 1;
		unsigned read_advisoryCards : 1;
		unsigned read_noticeText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasNoticeText; 
@property (nonatomic,retain) GEOFormattedString * noticeText; 
@property (nonatomic,readonly) unsigned long long incidentIndexsCount; 
@property (nonatomic,readonly) unsigned* incidentIndexs; 
@property (nonatomic,retain) NSMutableArray * advisoryCards; 
@property (assign,nonatomic) char hasShouldAlwaysShowAdvisoryCard; 
@property (assign,nonatomic) char shouldAlwaysShowAdvisoryCard; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)advisoryCardType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(unsigned long long)incidentIndexsCount;
-(unsigned)incidentIndexAtIndex:(unsigned long long)arg1 ;
-(GEOFormattedString *)noticeText;
-(void)setNoticeText:(GEOFormattedString *)arg1 ;
-(void)addIncidentIndex:(unsigned)arg1 ;
-(void)addAdvisoryCard:(id)arg1 ;
-(void)setShouldAlwaysShowAdvisoryCard:(char)arg1 ;
-(void)clearIncidentIndexs;
-(unsigned long long)advisoryCardsCount;
-(void)clearAdvisoryCards;
-(id)advisoryCardAtIndex:(unsigned long long)arg1 ;
-(char)hasNoticeText;
-(unsigned*)incidentIndexs;
-(void)setIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)advisoryCards;
-(void)setAdvisoryCards:(NSMutableArray *)arg1 ;
-(char)shouldAlwaysShowAdvisoryCard;
-(void)setHasShouldAlwaysShowAdvisoryCard:(char)arg1 ;
-(char)hasShouldAlwaysShowAdvisoryCard;
@end
