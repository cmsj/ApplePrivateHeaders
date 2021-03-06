/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying> {

	NSMutableArray* _visibleViews;

}

@property (nonatomic,retain) NSMutableArray * visibleViews;              //@synthesize visibleViews=_visibleViews - In the implementation block
+(Class)visibleViewsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)visibleViews;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addVisibleViews:(id)arg1 ;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
@end

