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

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackIdLookupResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _feedbackInfos;

}

@property (nonatomic,retain) NSMutableArray * feedbackInfos; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)feedbackInfoType;
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
-(void)addFeedbackInfo:(id)arg1 ;
-(unsigned long long)feedbackInfosCount;
-(void)clearFeedbackInfos;
-(id)feedbackInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)feedbackInfos;
-(void)setFeedbackInfos:(NSMutableArray *)arg1 ;
@end

