/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface PETSchemaPETDistribution : SISchemaInstrumentationMessage {

	double _min;
	double _max;
	double _mean;
	double _variance;
	SCD_Struct_LT3 _has;

}

@property (assign,nonatomic) double min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) char hasMin; 
@property (assign,nonatomic) double max;                       //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) char hasMax; 
@property (assign,nonatomic) double mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) char hasMean; 
@property (assign,nonatomic) double variance;                  //@synthesize variance=_variance - In the implementation block
@property (assign,nonatomic) char hasVariance; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(double)arg1 ;
-(double)max;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(double)mean;
-(void)setMean:(double)arg1 ;
-(double)variance;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setHasMax:(char)arg1 ;
-(char)hasMax;
-(void)setHasMin:(char)arg1 ;
-(char)hasMin;
-(void)setHasMean:(char)arg1 ;
-(char)hasMean;
-(void)setVariance:(double)arg1 ;
-(void)setHasVariance:(char)arg1 ;
-(char)hasVariance;
@end
