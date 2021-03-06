/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServiceGap.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _displayMessage;
	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _appearsBeforeSuggestedRouteIndex;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasAppearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) unsigned appearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) char hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime; 
@property (assign,nonatomic) char hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime; 
@property (nonatomic,readonly) char hasDisplayMessage; 
@property (nonatomic,retain) GEOFormattedString * displayMessage; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOFormattedString *)displayMessage;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(char)arg1 ;
-(char)hasAppearsBeforeSuggestedRouteIndex;
-(unsigned)absStartTime;
-(void)setHasAbsStartTime:(char)arg1 ;
-(char)hasAbsStartTime;
-(unsigned)absEndTime;
-(void)setHasAbsEndTime:(char)arg1 ;
-(char)hasAbsEndTime;
-(char)hasDisplayMessage;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
@end

