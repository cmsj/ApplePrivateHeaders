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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedNames;
	int _level;
	struct {
		unsigned has_level : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasLevel; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(char)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(Class)localizedNameType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)localizedNames;
-(int)level;
-(id)dictionaryRepresentation;
-(void)setLevel:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasLevel;
-(unsigned long long)localizedNamesCount;
-(void)addLocalizedName:(id)arg1 ;
-(void)clearLocalizedNames;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasLevel:(char)arg1 ;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
@end

