/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSSummaryClustering : NSObject {

	char _enableConcurrency;
	char _enableDensityClusteringLocationsDistance;
	char _enableMultipassDensityClustering;
	char _enableAdaptiveElectionSmoother;
	char _enableAdaptiveElectionSmootherAutomaticLimit;
	double _optimalDayDistributionThreshold;
	unsigned long long _timeSpanDensityAverageNumberOfObjects;
	unsigned long long _densityClusteringLocationsDistanceUnit;
	double _diffuseDensityClusteringMaximumDistance;
	unsigned long long _diffuseDensityClusteringMinimumNumberOfObjects;
	double _conciseDensityClusteringMaximumDistance;
	unsigned long long _conciseDensityClusteringMinimumNumberOfObjects;
	unsigned long long _adaptiveElectionMinimumNumberOfItemsByCluster;
	unsigned long long _adaptiveElectionMaximumNumberOfItemsByCluster;
	unsigned long long _adaptiveElectionSmootherMaximumLimit;
	unsigned long long _adaptiveElectionSmootherMinimumLimit;

}

@property (assign,nonatomic) char enableConcurrency;                                                         //@synthesize enableConcurrency=_enableConcurrency - In the implementation block
@property (assign,nonatomic) double optimalDayDistributionThreshold;                                         //@synthesize optimalDayDistributionThreshold=_optimalDayDistributionThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects;                       //@synthesize timeSpanDensityAverageNumberOfObjects=_timeSpanDensityAverageNumberOfObjects - In the implementation block
@property (assign,nonatomic) char enableDensityClusteringLocationsDistance;                                  //@synthesize enableDensityClusteringLocationsDistance=_enableDensityClusteringLocationsDistance - In the implementation block
@property (assign,nonatomic) unsigned long long densityClusteringLocationsDistanceUnit;                      //@synthesize densityClusteringLocationsDistanceUnit=_densityClusteringLocationsDistanceUnit - In the implementation block
@property (assign,nonatomic) double diffuseDensityClusteringMaximumDistance;                                 //@synthesize diffuseDensityClusteringMaximumDistance=_diffuseDensityClusteringMaximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects;              //@synthesize diffuseDensityClusteringMinimumNumberOfObjects=_diffuseDensityClusteringMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) double conciseDensityClusteringMaximumDistance;                                 //@synthesize conciseDensityClusteringMaximumDistance=_conciseDensityClusteringMaximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects;              //@synthesize conciseDensityClusteringMinimumNumberOfObjects=_conciseDensityClusteringMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) char enableMultipassDensityClustering;                                          //@synthesize enableMultipassDensityClustering=_enableMultipassDensityClustering - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster;               //@synthesize adaptiveElectionMinimumNumberOfItemsByCluster=_adaptiveElectionMinimumNumberOfItemsByCluster - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionMaximumNumberOfItemsByCluster;               //@synthesize adaptiveElectionMaximumNumberOfItemsByCluster=_adaptiveElectionMaximumNumberOfItemsByCluster - In the implementation block
@property (assign,nonatomic) char enableAdaptiveElectionSmoother;                                            //@synthesize enableAdaptiveElectionSmoother=_enableAdaptiveElectionSmoother - In the implementation block
@property (assign,nonatomic) char enableAdaptiveElectionSmootherAutomaticLimit;                              //@synthesize enableAdaptiveElectionSmootherAutomaticLimit=_enableAdaptiveElectionSmootherAutomaticLimit - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit;                        //@synthesize adaptiveElectionSmootherMaximumLimit=_adaptiveElectionSmootherMaximumLimit - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit;                        //@synthesize adaptiveElectionSmootherMinimumLimit=_adaptiveElectionSmootherMinimumLimit - In the implementation block
+(id)clustering;
+(double)scoreForItems:(id)arg1 ;
+(double)meanScoreForItems:(id)arg1 ;
+(double)maximumScoreForItems:(id)arg1 ;
-(id)init;
-(char)enableConcurrency;
-(void)setEnableConcurrency:(char)arg1 ;
-(unsigned long long)densityClusteringLocationsDistanceUnit;
-(/*^block*/id)densityClusteringDistanceBlock;
-(char)enableDensityClusteringLocationsDistance;
-(double)optimalDayDistributionThreshold;
-(unsigned long long)timeSpanDensityAverageNumberOfObjects;
-(double)diffuseDensityClusteringMaximumDistance;
-(unsigned long long)diffuseDensityClusteringMinimumNumberOfObjects;
-(double)conciseDensityClusteringMaximumDistance;
-(unsigned long long)conciseDensityClusteringMinimumNumberOfObjects;
-(char)enableMultipassDensityClustering;
-(unsigned long long)adaptiveElectionMinimumNumberOfItemsByCluster;
-(unsigned long long)adaptiveElectionMaximumNumberOfItemsByCluster;
-(char)enableAdaptiveElectionSmoother;
-(char)enableAdaptiveElectionSmootherAutomaticLimit;
-(unsigned long long)adaptiveElectionSmootherMaximumLimit;
-(unsigned long long)adaptiveElectionSmootherMinimumLimit;
-(id)densityClustersWithItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_densityClustersWithItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)adaptiveElection:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)setOptimalDayDistributionThreshold:(double)arg1 ;
-(void)setTimeSpanDensityAverageNumberOfObjects:(unsigned long long)arg1 ;
-(void)setEnableDensityClusteringLocationsDistance:(char)arg1 ;
-(void)setDensityClusteringLocationsDistanceUnit:(unsigned long long)arg1 ;
-(void)setDiffuseDensityClusteringMaximumDistance:(double)arg1 ;
-(void)setDiffuseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(void)setConciseDensityClusteringMaximumDistance:(double)arg1 ;
-(void)setConciseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(void)setEnableMultipassDensityClustering:(char)arg1 ;
-(void)setAdaptiveElectionMinimumNumberOfItemsByCluster:(unsigned long long)arg1 ;
-(void)setAdaptiveElectionMaximumNumberOfItemsByCluster:(unsigned long long)arg1 ;
-(void)setEnableAdaptiveElectionSmoother:(char)arg1 ;
-(void)setEnableAdaptiveElectionSmootherAutomaticLimit:(char)arg1 ;
-(void)setAdaptiveElectionSmootherMaximumLimit:(unsigned long long)arg1 ;
-(void)setAdaptiveElectionSmootherMinimumLimit:(unsigned long long)arg1 ;
@end
