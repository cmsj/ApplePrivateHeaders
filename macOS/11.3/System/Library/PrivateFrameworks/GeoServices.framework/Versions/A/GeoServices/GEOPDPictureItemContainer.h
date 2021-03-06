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

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _pictureItems;
	char _allowFullScreenPhoto;
	struct {
		unsigned has_allowFullScreenPhoto : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * pictureItems; 
@property (assign,nonatomic) char hasAllowFullScreenPhoto; 
@property (assign,nonatomic) char allowFullScreenPhoto; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)pictureItemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
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
-(NSMutableArray *)pictureItems;
-(char)allowFullScreenPhoto;
-(void)addPictureItem:(id)arg1 ;
-(void)setAllowFullScreenPhoto:(char)arg1 ;
-(unsigned long long)pictureItemsCount;
-(void)clearPictureItems;
-(id)pictureItemAtIndex:(unsigned long long)arg1 ;
-(void)setPictureItems:(NSMutableArray *)arg1 ;
-(void)setHasAllowFullScreenPhoto:(char)arg1 ;
-(char)hasAllowFullScreenPhoto;
@end

