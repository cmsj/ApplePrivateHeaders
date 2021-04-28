/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying> {

	NSMutableArray* _locationConsumptionScoreInfos;

}

@property (nonatomic,retain) NSMutableArray * locationConsumptionScoreInfos;              //@synthesize locationConsumptionScoreInfos=_locationConsumptionScoreInfos - In the implementation block
+(Class)locationConsumptionScoreInfoType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addLocationConsumptionScoreInfo:(id)arg1 ;
-(unsigned long long)locationConsumptionScoreInfosCount;
-(void)clearLocationConsumptionScoreInfos;
-(id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationConsumptionScoreInfos;
-(void)setLocationConsumptionScoreInfos:(NSMutableArray *)arg1 ;
@end
