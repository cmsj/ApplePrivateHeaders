/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSString, NSDictionary, NSArray;

@interface PFLDeviceResults : NSObject {

	NSURL* _flattenedPrivatizedWeightDataURL;
	NSData* _flattenedPrivatizedWeightData;
	long long _flattenedPrivatizedWeightCount;
	NSString* _flattenedPrivatizedWeightType;
	NSDictionary* _metricsMap;
	long long _modelVersion;
	NSString* _replayIdentifier;
	long long _schemaVersion;
	long long _shuffleId;
	NSString* _taskId;
	double _accuracy;
	double _loss;

}

@property (nonatomic,retain) NSURL * flattenedPrivatizedWeightDataURL;              //@synthesize flattenedPrivatizedWeightDataURL=_flattenedPrivatizedWeightDataURL - In the implementation block
@property (nonatomic,retain) NSData * flattenedPrivatizedWeightData;                //@synthesize flattenedPrivatizedWeightData=_flattenedPrivatizedWeightData - In the implementation block
@property (assign,nonatomic) long long flattenedPrivatizedWeightCount;              //@synthesize flattenedPrivatizedWeightCount=_flattenedPrivatizedWeightCount - In the implementation block
@property (nonatomic,retain) NSString * flattenedPrivatizedWeightType;              //@synthesize flattenedPrivatizedWeightType=_flattenedPrivatizedWeightType - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsMap;                             //@synthesize metricsMap=_metricsMap - In the implementation block
@property (assign,nonatomic) long long modelVersion;                                //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,retain) NSString * replayIdentifier;                           //@synthesize replayIdentifier=_replayIdentifier - In the implementation block
@property (assign,nonatomic) long long schemaVersion;                               //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) long long shuffleId;                                   //@synthesize shuffleId=_shuffleId - In the implementation block
@property (nonatomic,retain) NSString * taskId;                                     //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) double accuracy;                                       //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) double loss;                                           //@synthesize loss=_loss - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedMetricsMap; 
-(long long)schemaVersion;
-(long long)modelVersion;
-(void)setModelVersion:(long long)arg1 ;
-(double)accuracy;
-(NSString *)taskId;
-(void)setTaskId:(NSString *)arg1 ;
-(void)setAccuracy:(double)arg1 ;
-(void)setSchemaVersion:(long long)arg1 ;
-(NSData *)flattenedPrivatizedWeightData;
-(void)setFlattenedPrivatizedWeightData:(NSData *)arg1 ;
-(NSURL *)flattenedPrivatizedWeightDataURL;
-(long long)flattenedPrivatizedWeightCount;
-(void)setFlattenedPrivatizedWeightCount:(long long)arg1 ;
-(NSString *)flattenedPrivatizedWeightType;
-(void)setFlattenedPrivatizedWeightType:(NSString *)arg1 ;
-(double)loss;
-(void)setLoss:(double)arg1 ;
-(NSArray *)flattenedMetricsMap;
-(NSString *)replayIdentifier;
-(long long)shuffleId;
-(NSDictionary *)metricsMap;
-(void)setFlattenedPrivatizedWeightDataURL:(NSURL *)arg1 ;
-(void)setMetricsMap:(NSDictionary *)arg1 ;
-(void)setReplayIdentifier:(NSString *)arg1 ;
-(void)setShuffleId:(long long)arg1 ;
@end

