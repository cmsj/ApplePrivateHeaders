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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE88* _abstractOfBrandMuids;
	SCD_Struct_GE88* _childBrandMuids;
	SCD_Struct_GE88* _variantBrandMuids;
	NSMutableArray* _geoHashs;
	unsigned long long _muid;
	unsigned long long _relatedGlobalBrandMuid;
	NSString* _scope;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _isPrimaryVariant;
	struct {
		unsigned has_muid : 1;
		unsigned has_relatedGlobalBrandMuid : 1;
		unsigned has_isPrimaryVariant : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abstractOfBrandMuids : 1;
		unsigned read_childBrandMuids : 1;
		unsigned read_variantBrandMuids : 1;
		unsigned read_geoHashs : 1;
		unsigned read_scope : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) char hasScope; 
@property (nonatomic,retain) NSString * scope; 
@property (nonatomic,retain) NSMutableArray * geoHashs; 
@property (nonatomic,readonly) unsigned long long childBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* childBrandMuids; 
@property (nonatomic,readonly) unsigned long long variantBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* variantBrandMuids; 
@property (assign,nonatomic) char hasIsPrimaryVariant; 
@property (assign,nonatomic) char isPrimaryVariant; 
@property (assign,nonatomic) char hasRelatedGlobalBrandMuid; 
@property (assign,nonatomic) unsigned long long relatedGlobalBrandMuid; 
@property (nonatomic,readonly) unsigned long long abstractOfBrandMuidsCount; 
@property (nonatomic,readonly) unsigned long long* abstractOfBrandMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)geoHashType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)scope;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(void)setScope:(NSString *)arg1 ;
-(char)hasMuid;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSMutableArray *)geoHashs;
-(void)addGeoHash:(id)arg1 ;
-(void)addChildBrandMuid:(unsigned long long)arg1 ;
-(void)addVariantBrandMuid:(unsigned long long)arg1 ;
-(void)setIsPrimaryVariant:(char)arg1 ;
-(void)setRelatedGlobalBrandMuid:(unsigned long long)arg1 ;
-(void)addAbstractOfBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)geoHashsCount;
-(void)clearGeoHashs;
-(id)geoHashAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childBrandMuidsCount;
-(void)clearChildBrandMuids;
-(unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)variantBrandMuidsCount;
-(void)clearVariantBrandMuids;
-(unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)abstractOfBrandMuidsCount;
-(void)clearAbstractOfBrandMuids;
-(unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)arg1 ;
-(char)hasScope;
-(void)setGeoHashs:(NSMutableArray *)arg1 ;
-(unsigned long long*)childBrandMuids;
-(void)setChildBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)variantBrandMuids;
-(void)setVariantBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(char)isPrimaryVariant;
-(void)setHasIsPrimaryVariant:(char)arg1 ;
-(char)hasIsPrimaryVariant;
-(unsigned long long)relatedGlobalBrandMuid;
-(void)setHasRelatedGlobalBrandMuid:(char)arg1 ;
-(char)hasRelatedGlobalBrandMuid;
-(unsigned long long*)abstractOfBrandMuids;
-(void)setAbstractOfBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end
