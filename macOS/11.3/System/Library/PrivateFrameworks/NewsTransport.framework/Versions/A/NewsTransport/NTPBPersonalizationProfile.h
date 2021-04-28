/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying> {

	NSMutableArray* _aggregates;
	NSMutableArray* _histories;

}

@property (nonatomic,retain) NSMutableArray * aggregates;              //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,retain) NSMutableArray * histories;               //@synthesize histories=_histories - In the implementation block
+(Class)aggregatesType;
+(Class)historiesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAggregates:(NSMutableArray *)arg1 ;
-(void)setHistories:(NSMutableArray *)arg1 ;
-(void)addAggregates:(id)arg1 ;
-(void)addHistories:(id)arg1 ;
-(void)clearAggregates;
-(unsigned long long)aggregatesCount;
-(id)aggregatesAtIndex:(unsigned long long)arg1 ;
-(void)clearHistories;
-(unsigned long long)historiesCount;
-(id)historiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)aggregates;
-(NSMutableArray *)histories;
@end
