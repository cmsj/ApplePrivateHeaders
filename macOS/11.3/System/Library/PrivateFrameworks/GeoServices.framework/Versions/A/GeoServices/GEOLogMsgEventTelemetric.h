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

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {

	NSMutableArray* _telemetricEntitys;

}

@property (nonatomic,retain) NSMutableArray * telemetricEntitys; 
+(char)isValid:(id)arg1 ;
+(Class)telemetricEntityType;
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
-(NSMutableArray *)telemetricEntitys;
-(void)setTelemetricEntitys:(NSMutableArray *)arg1 ;
-(void)addTelemetricEntity:(id)arg1 ;
-(unsigned long long)telemetricEntitysCount;
-(void)clearTelemetricEntitys;
-(id)telemetricEntityAtIndex:(unsigned long long)arg1 ;
@end

