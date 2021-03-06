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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateSearchableNames;
	NSString* _interpretedCategory;
	NSString* _matchedDisplayNameLanguageCode;
	NSString* _matchedDisplayName;
	NSString* _normalizedQuery;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _isDefaultName;
	struct {
		unsigned has_isDefaultName : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_interpretedCategory : 1;
		unsigned read_matchedDisplayNameLanguageCode : 1;
		unsigned read_matchedDisplayName : 1;
		unsigned read_normalizedQuery : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasMatchedDisplayName; 
@property (nonatomic,retain) NSString * matchedDisplayName; 
@property (assign,nonatomic) char hasIsDefaultName; 
@property (assign,nonatomic) char isDefaultName; 
@property (nonatomic,readonly) char hasNormalizedQuery; 
@property (nonatomic,retain) NSString * normalizedQuery; 
@property (nonatomic,readonly) char hasInterpretedCategory; 
@property (nonatomic,retain) NSString * interpretedCategory; 
@property (nonatomic,readonly) char hasMatchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSString * matchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)alternateSearchableNameType;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(NSMutableArray *)alternateSearchableNames;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)matchedDisplayName;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setIsDefaultName:(char)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(void)addAlternateSearchableName:(id)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(char)hasMatchedDisplayName;
-(char)isDefaultName;
-(void)setHasIsDefaultName:(char)arg1 ;
-(char)hasIsDefaultName;
-(char)hasMatchedDisplayNameLanguageCode;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(NSString *)normalizedQuery;
-(NSString *)interpretedCategory;
-(void)setNormalizedQuery:(NSString *)arg1 ;
-(void)setInterpretedCategory:(NSString *)arg1 ;
-(char)hasNormalizedQuery;
-(char)hasInterpretedCategory;
@end

