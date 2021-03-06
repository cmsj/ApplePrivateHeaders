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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDMapsIdentifier, NSString;

@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _itemDescriptions;
	GEOPDMapsIdentifier* _itemId;
	NSMutableArray* _photos;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _enableImageFallback;
	struct {
		unsigned has_enableImageFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_itemDescriptions : 1;
		unsigned read_itemId : 1;
		unsigned read_photos : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasItemId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * itemId; 
@property (nonatomic,retain) NSMutableArray * photos; 
@property (nonatomic,retain) NSMutableArray * itemDescriptions; 
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) char hasEnableImageFallback; 
@property (assign,nonatomic) char enableImageFallback; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)photoType;
+(Class)itemDescriptionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)photos;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasUrl;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(NSMutableArray *)itemDescriptions;
-(id)itemDescription;
-(unsigned long long)photosCount;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(GEOPDMapsIdentifier *)itemId;
-(void)setItemId:(GEOPDMapsIdentifier *)arg1 ;
-(void)addItemDescription:(id)arg1 ;
-(void)setEnableImageFallback:(char)arg1 ;
-(unsigned long long)itemDescriptionsCount;
-(void)clearItemDescriptions;
-(id)itemDescriptionAtIndex:(unsigned long long)arg1 ;
-(char)hasItemId;
-(void)setItemDescriptions:(NSMutableArray *)arg1 ;
-(char)enableImageFallback;
-(void)setHasEnableImageFallback:(char)arg1 ;
-(char)hasEnableImageFallback;
@end

