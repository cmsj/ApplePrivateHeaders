/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphFullMeaninglessEvent.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGGraphRelatableEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSString, NSDate, PGGraphHighlightGroupNode;

@interface PGGraphHighlightNode : PGGraphOptimizedNode <PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment> {

	double _localStartTimestamp;
	double _localEndTimestamp;
	NSString* _name;
	NSString* _uuid;
	double _universalStartTimestamp;
	double _universalEndTimestamp;

}

@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (readonly) double timezoneOffsetAtStart; 
@property (readonly) double timezoneOffsetAtEnd; 
@property (readonly) char isPartOfTrip; 
@property (readonly) char isPartOfLongTrip; 
@property (readonly) char isPartOfShortTrip; 
@property (readonly) char isPartOfAggregation; 
@property (readonly) char isInteresting; 
@property (readonly) char hasOnlyMomentsAtWork; 
@property (readonly) double neighborScore; 
@property (readonly) unsigned long long numberOfRegularGemAssets; 
@property (readonly) unsigned long long numberOfShinyGemAssets; 
@property (readonly) PGGraphHighlightGroupNode * highlightGroupNode; 
@property (readonly) NSString * UUID; 
@property (readonly) double contentScore; 
@property (readonly) char isLongTrip; 
@property (readonly) char isShortTrip; 
@property (readonly) char isTrip; 
@property (readonly) char babyIsPresent; 
@property (readonly) char petIsPresent; 
@property (readonly) double timestampUTCStart;                                    //@synthesize universalStartTimestamp=_universalStartTimestamp - In the implementation block
@property (readonly) double timestampUTCEnd;                                      //@synthesize universalEndTimestamp=_universalEndTimestamp - In the implementation block
@property (readonly) char isInterestingWithAlternateJunking; 
@property (readonly) char isSmartInteresting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasLocation; 
@property (readonly) char happensPartiallyAtMyHome; 
@property (readonly) char happensPartiallyAtMyWork; 
@property (readonly) char isAggregation; 
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)scoreSortDescriptors;
+(id)propertiesWithHighlight:(id)arg1 ;
+(id)promotionScoreSortDescriptors;
+(SCD_Struct_PG1)_promotionScoreDescriptorWithMomentNodes:(id)arg1 ;
+(id)otherVeryMeaningfulMeanings;
+(double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 isAggregation:(char)arg2 enrichmentState:(unsigned short)arg3 ;
+(double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)averagePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)promotionScoreWithHighlightNode:(id)arg1 enrichmentState:(unsigned short)arg2 numberOfExtendedAssets:(unsigned long long)arg3 ;
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(unsigned short)domain;
-(NSString *)uuid;
-(void)setName:(NSString *)arg1 ;
-(NSString *)UUID;
-(id)label;
-(char)hasLocation;
-(NSString *)localIdentifier;
-(id)debugDictionary;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(id)meaningLabels;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)contentScore;
-(unsigned long long)numberOfAssets;
-(char)hasProperties:(id)arg1 ;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(double)neighborScore;
-(unsigned long long)numberOfMoments;
-(char)isTrip;
-(char)isLongTrip;
-(char)isShortTrip;
-(char)isAggregation;
-(char)isPartOfTrip;
-(char)isPartOfLongTrip;
-(char)isPartOfShortTrip;
-(char)isPartOfAggregation;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)addressNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)personNodes;
-(id)reliableMeaningLabels;
-(id)sortedMomentNodes;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(id)fetchAssetCollection;
-(double)weightForMoment:(id)arg1 ;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1 ;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2 ;
-(char)startsAfterLocalDate:(id)arg1 ;
-(char)endsBeforeLocalDate:(id)arg1 ;
-(id)naturalLanguageFeatures;
-(id)timedEvent;
-(id)locatedEvent;
-(id)peopledEvent;
-(id)scenedEvent;
-(id)meaningfulEvent;
-(id)businessedEvent;
-(id)enrichableEvent;
-(id)relatableEvent;
-(char)babyIsPresent;
-(char)petIsPresent;
-(double)timestampUTCStart;
-(double)timestampUTCEnd;
-(char)isInteresting;
-(char)isInterestingWithAlternateJunking;
-(char)isSmartInteresting;
-(PGGraphHighlightGroupNode *)highlightGroupNode;
-(id)businessNodes;
-(id)publicEventNodes;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(id)sceneNodes;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;
-(char)hasPeopleCountingMe:(char)arg1 ;
-(id)socialGroupNodes;
-(id)poiNodes;
-(id)roiNodes;
-(char)happensPartiallyAtMyHome;
-(char)happensPartiallyAtMyWork;
-(id)dateNodes;
-(id)seasonNodes;
-(id)holidayNodes;
-(id)celebratedHolidayNodes;
-(double)timezoneOffsetAtStart;
-(double)timezoneOffsetAtEnd;
-(unsigned long long)numberOfRegularGemAssets;
-(unsigned long long)numberOfShinyGemAssets;
-(char)hasOnlyMomentsAtWork;
-(id)meaningNodes;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)relatableNode;
-(double)nonMeaningfulPromotionScoreForTripKeyAssetWithEnrichmentState:(unsigned short)arg1 ;
@end
