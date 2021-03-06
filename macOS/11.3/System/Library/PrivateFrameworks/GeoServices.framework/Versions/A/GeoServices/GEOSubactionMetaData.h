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

@class NSString;

@interface GEOSubactionMetaData : PBCodable <NSCopying> {

	NSString* _displayedString;
	int _selectedSubactionIndex;
	int _subactionType;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasSelectedSubactionIndex; 
@property (assign,nonatomic) int selectedSubactionIndex; 
@property (assign,nonatomic) char hasSubactionType; 
@property (assign,nonatomic) int subactionType; 
@property (nonatomic,readonly) char hasDisplayedString; 
@property (nonatomic,retain) NSString * displayedString; 
+(char)isValid:(id)arg1 ;
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
-(NSString *)displayedString;
-(void)setSelectedSubactionIndex:(int)arg1 ;
-(void)setSubactionType:(int)arg1 ;
-(void)setDisplayedString:(NSString *)arg1 ;
-(int)selectedSubactionIndex;
-(void)setHasSelectedSubactionIndex:(char)arg1 ;
-(char)hasSelectedSubactionIndex;
-(int)subactionType;
-(void)setHasSubactionType:(char)arg1 ;
-(char)hasSubactionType;
-(id)subactionTypeAsString:(int)arg1 ;
-(int)StringAsSubactionType:(id)arg1 ;
-(char)hasDisplayedString;
@end

