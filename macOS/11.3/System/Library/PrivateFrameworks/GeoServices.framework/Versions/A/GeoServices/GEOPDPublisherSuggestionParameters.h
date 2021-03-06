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

@class PBUnknownFields, GEOPDViewportInfo;

@interface GEOPDPublisherSuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	GEOPDViewportInfo* _viewportInfo;
	struct {
		unsigned has_requestLocalTimestamp : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) char hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(char)arg1 ;
-(char)hasRequestLocalTimestamp;
@end

