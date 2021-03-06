/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDictionary, NSDate;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfUntimelyRejects;
	unsigned long long _extendedMeaning;
	NSDictionary* _graphRequiredCriteriaByIdentifier;
	NSDate* _lowerBoundLocalDate;
	unsigned long long _eventType;
	unsigned long long _meaning;

}

@property (nonatomic,retain) NSDate * lowerBoundLocalDate;              //@synthesize lowerBoundLocalDate=_lowerBoundLocalDate - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long meaning;                //@synthesize meaning=_meaning - In the implementation block
+(id)_mostSpecificLabelForMeaning:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(id)_nodesWithFeaturesOfType:(unsigned long long)arg1 fromMeaningfulEvent:(id)arg2 ;
-(id)_extraFeatureNodesFromMeaningfulEvent:(id)arg1 meaning:(unsigned long long)arg2 featureType:(unsigned long long)arg3 ;
-(unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 meaningfulEvent:(id)arg2 ;
-(unsigned long long)_extendedMeaningForRestaurantEvent:(id)arg1 ;
-(unsigned long long)_extendedMeaningForActivityEvent:(id)arg1 ;
-(char)_supportsAggregationsForMeaning:(unsigned long long)arg1 primaryFeatureType:(unsigned long long)arg2 secondaryFeatureType:(unsigned long long)arg3 ;
-(id)_stringForExtendedMeaning:(unsigned long long)arg1 ;
-(char)_canMakeMemoryWithMeaningfulEvents:(id)arg1 forMeaning:(unsigned long long)arg2 isOverTheYears:(char)arg3 ;
-(id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)arg1 ;
-(id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1 ;
-(char)_computeRelevantAssetsForPotentialMemory:(id)arg1 ;
-(id)_filterAssets:(id)arg1 withLocation:(id)arg2 ;
-(id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4 ;
-(id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3 ;
-(id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3 ;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(unsigned long long)meaning;
-(void)setMeaning:(unsigned long long)arg1 ;
@end

