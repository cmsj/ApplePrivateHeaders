/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidenceOfMostConfidentModel;
	int _durationSinceLastSuccessfulTraining;
	int _fallbackModelConfidence;
	NSMutableArray* _instances;
	int _modelType;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;                               //@synthesize instances=_instances - In the implementation block
@property (assign,nonatomic) char hasModelType; 
@property (assign,nonatomic) int modelType;                                            //@synthesize modelType=_modelType - In the implementation block
@property (assign,nonatomic) char hasFallbackModelConfidence; 
@property (assign,nonatomic) int fallbackModelConfidence;                              //@synthesize fallbackModelConfidence=_fallbackModelConfidence - In the implementation block
@property (assign,nonatomic) char hasConfidenceOfMostConfidentModel; 
@property (assign,nonatomic) int confidenceOfMostConfidentModel;                       //@synthesize confidenceOfMostConfidentModel=_confidenceOfMostConfidentModel - In the implementation block
@property (assign,nonatomic) char hasDurationSinceLastSuccessfulTraining; 
@property (assign,nonatomic) int durationSinceLastSuccessfulTraining;                  //@synthesize durationSinceLastSuccessfulTraining=_durationSinceLastSuccessfulTraining - In the implementation block
+(Class)instanceType;
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
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)modelType;
-(void)setModelType:(int)arg1 ;
-(unsigned long long)instancesCount;
-(NSMutableArray *)instances;
-(void)addInstance:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(void)clearInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(void)setHasModelType:(char)arg1 ;
-(char)hasModelType;
-(void)setDurationSinceLastSuccessfulTraining:(int)arg1 ;
-(void)setHasDurationSinceLastSuccessfulTraining:(char)arg1 ;
-(char)hasDurationSinceLastSuccessfulTraining;
-(int)durationSinceLastSuccessfulTraining;
-(void)setFallbackModelConfidence:(int)arg1 ;
-(void)setHasFallbackModelConfidence:(char)arg1 ;
-(char)hasFallbackModelConfidence;
-(void)setConfidenceOfMostConfidentModel:(int)arg1 ;
-(void)setHasConfidenceOfMostConfidentModel:(char)arg1 ;
-(char)hasConfidenceOfMostConfidentModel;
-(int)fallbackModelConfidence;
-(int)confidenceOfMostConfidentModel;
@end

