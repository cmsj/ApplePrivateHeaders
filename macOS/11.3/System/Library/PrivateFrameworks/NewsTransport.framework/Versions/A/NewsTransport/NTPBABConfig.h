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

@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable <NSCopying> {

	long long _populationCeiling;
	long long _populationFloor;
	NSMutableArray* _configBuckets;
	NTPBConfig* _configControl;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) char hasPopulationFloor; 
@property (assign,nonatomic) long long populationFloor;                   //@synthesize populationFloor=_populationFloor - In the implementation block
@property (assign,nonatomic) char hasPopulationCeiling; 
@property (assign,nonatomic) long long populationCeiling;                 //@synthesize populationCeiling=_populationCeiling - In the implementation block
@property (nonatomic,readonly) char hasConfigControl; 
@property (nonatomic,retain) NTPBConfig * configControl;                  //@synthesize configControl=_configControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * configBuckets;              //@synthesize configBuckets=_configBuckets - In the implementation block
+(Class)configBucketsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addConfigBuckets:(id)arg1 ;
-(void)setConfigControl:(NTPBConfig *)arg1 ;
-(void)setPopulationFloor:(long long)arg1 ;
-(void)setHasPopulationFloor:(char)arg1 ;
-(char)hasPopulationFloor;
-(void)setPopulationCeiling:(long long)arg1 ;
-(void)setHasPopulationCeiling:(char)arg1 ;
-(char)hasPopulationCeiling;
-(char)hasConfigControl;
-(void)clearConfigBuckets;
-(unsigned long long)configBucketsCount;
-(id)configBucketsAtIndex:(unsigned long long)arg1 ;
-(long long)populationFloor;
-(long long)populationCeiling;
-(NTPBConfig *)configControl;
-(NSMutableArray *)configBuckets;
-(void)setConfigBuckets:(NSMutableArray *)arg1 ;
@end

