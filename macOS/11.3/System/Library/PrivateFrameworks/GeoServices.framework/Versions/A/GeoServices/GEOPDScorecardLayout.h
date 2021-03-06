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

@class PBDataReader, NSMutableArray, NSString;

@interface GEOPDScorecardLayout : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ratingCategorys;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) char hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSMutableArray * ratingCategorys; 
+(char)isValid:(id)arg1 ;
+(Class)ratingCategoryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasVersion;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)ratingCategorys;
-(void)addRatingCategory:(id)arg1 ;
-(unsigned long long)ratingCategorysCount;
-(void)clearRatingCategorys;
-(id)ratingCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setRatingCategorys:(NSMutableArray *)arg1 ;
@end

