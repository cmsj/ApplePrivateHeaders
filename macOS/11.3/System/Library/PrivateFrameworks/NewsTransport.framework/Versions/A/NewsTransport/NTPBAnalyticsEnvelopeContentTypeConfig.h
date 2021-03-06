/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {

	unsigned long long _groupingTag;
	unsigned long long _seedTime;
	NSString* _contentHeaderName;
	NSString* _contentHeaderValue;
	NSString* _endpointURLString;
	unsigned _samplingCeiling;
	unsigned _samplingFloor;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) char hasEndpointURLString; 
@property (nonatomic,retain) NSString * endpointURLString;                //@synthesize endpointURLString=_endpointURLString - In the implementation block
@property (assign,nonatomic) char hasSeedTime; 
@property (assign,nonatomic) unsigned long long seedTime;                 //@synthesize seedTime=_seedTime - In the implementation block
@property (nonatomic,readonly) char hasContentHeaderName; 
@property (nonatomic,retain) NSString * contentHeaderName;                //@synthesize contentHeaderName=_contentHeaderName - In the implementation block
@property (nonatomic,readonly) char hasContentHeaderValue; 
@property (nonatomic,retain) NSString * contentHeaderValue;               //@synthesize contentHeaderValue=_contentHeaderValue - In the implementation block
@property (assign,nonatomic) char hasSamplingFloor; 
@property (assign,nonatomic) unsigned samplingFloor;                      //@synthesize samplingFloor=_samplingFloor - In the implementation block
@property (assign,nonatomic) char hasSamplingCeiling; 
@property (assign,nonatomic) unsigned samplingCeiling;                    //@synthesize samplingCeiling=_samplingCeiling - In the implementation block
@property (assign,nonatomic) char hasGroupingTag; 
@property (assign,nonatomic) unsigned long long groupingTag;              //@synthesize groupingTag=_groupingTag - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)endpointURLString;
-(void)setEndpointURLString:(NSString *)arg1 ;
-(void)setContentHeaderName:(NSString *)arg1 ;
-(void)setContentHeaderValue:(NSString *)arg1 ;
-(char)hasEndpointURLString;
-(void)setSeedTime:(unsigned long long)arg1 ;
-(void)setHasSeedTime:(char)arg1 ;
-(char)hasSeedTime;
-(char)hasContentHeaderName;
-(char)hasContentHeaderValue;
-(void)setSamplingFloor:(unsigned)arg1 ;
-(void)setHasSamplingFloor:(char)arg1 ;
-(char)hasSamplingFloor;
-(void)setSamplingCeiling:(unsigned)arg1 ;
-(void)setHasSamplingCeiling:(char)arg1 ;
-(char)hasSamplingCeiling;
-(void)setGroupingTag:(unsigned long long)arg1 ;
-(void)setHasGroupingTag:(char)arg1 ;
-(char)hasGroupingTag;
-(unsigned long long)seedTime;
-(NSString *)contentHeaderName;
-(NSString *)contentHeaderValue;
-(unsigned)samplingFloor;
-(unsigned)samplingCeiling;
-(unsigned long long)groupingTag;
@end

