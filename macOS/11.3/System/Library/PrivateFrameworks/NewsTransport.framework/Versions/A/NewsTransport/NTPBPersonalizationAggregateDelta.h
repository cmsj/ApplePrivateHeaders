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

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {

	SCD_Struct_NT15* _events;
	double _defaultClicks;
	double _defaultImpressions;
	double _groupBias;
	double _impressionBias;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT11 _has;

}

@property (nonatomic,readonly) char hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                         //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) char hasDefaultClicks; 
@property (assign,nonatomic) double defaultClicks;                          //@synthesize defaultClicks=_defaultClicks - In the implementation block
@property (assign,nonatomic) char hasDefaultImpressions; 
@property (assign,nonatomic) double defaultImpressions;                     //@synthesize defaultImpressions=_defaultImpressions - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasImpressionBias; 
@property (assign,nonatomic) double impressionBias;                         //@synthesize impressionBias=_impressionBias - In the implementation block
@property (assign,nonatomic) char hasGroupBias; 
@property (assign,nonatomic) double groupBias;                              //@synthesize groupBias=_groupBias - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)events;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)addEvents:(unsigned)arg1 ;
-(unsigned)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setFeatureKey:(NSString *)arg1 ;
-(char)hasFeatureKey;
-(void)setDefaultClicks:(double)arg1 ;
-(void)setHasDefaultClicks:(char)arg1 ;
-(char)hasDefaultClicks;
-(void)setDefaultImpressions:(double)arg1 ;
-(void)setHasDefaultImpressions:(char)arg1 ;
-(char)hasDefaultImpressions;
-(void)setImpressionBias:(double)arg1 ;
-(void)setHasImpressionBias:(char)arg1 ;
-(char)hasImpressionBias;
-(void)setGroupBias:(double)arg1 ;
-(void)setHasGroupBias:(char)arg1 ;
-(char)hasGroupBias;
-(NSString *)featureKey;
-(double)defaultClicks;
-(double)defaultImpressions;
-(double)impressionBias;
-(double)groupBias;
@end
