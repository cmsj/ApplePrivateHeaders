/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PGDejunkerDeduperOptions : NSObject {

	char _doIdenticalDeduping;
	char _useFaceprintsForIdenticalDeduping;
	char _doSemanticalDeduping;
	char _doNotSemanticallyDedupePeople;
	char _doNotSemanticallyDedupePersons;
	char _allowAdaptiveForSemanticalDeduping;
	char _useOnlyScenesForDeduping;
	char _useAllPersonsForDeduping;
	char _useFaceQualityForElection;
	char _doNotDedupeVideos;
	char _doNotDedupeInterestingPortraitsAndLivePictures;
	char _onlyDedupeContiguousItems;
	char _doDejunk;
	char _returnDedupedJunkIfOnlyJunk;
	char _doFinalPass;
	double _identicalDedupingTimeInterval;
	double _identicalDedupingTimeIntervalForPeople;
	double _identicalDedupingMaximumTimeGroupExtension;
	unsigned long long _maximumNumberOfItemsPerIdenticalCluster;
	double _identicalDedupingThreshold;
	double _identicalDedupingThresholdForPeople;
	double _identicalDedupingThresholdForBestItems;
	double _identicalDedupingFaceprintDistance;
	double _semanticalDedupingTimeInterval;
	double _semanticalDedupingTimeIntervalForPeople;
	double _semanticalDedupingTimeIntervalForPersons;
	double _semanticalDedupingMaximumTimeGroupExtension;
	unsigned long long _maximumNumberOfItemsPerSemanticalCluster;
	double _semanticalDedupingThreshold;
	double _semanticalDedupingThresholdForPeople;
	double _semanticalDedupingThresholdForPersons;
	double _finalPassTimeInterval;
	double _finalPassMaximumTimeGroupExtension;
	double _finalPassDedupingThreshold;
	NSSet* _identifiersOfRequiredItems;

}

@property (assign,nonatomic) char doIdenticalDeduping;                                                 //@synthesize doIdenticalDeduping=_doIdenticalDeduping - In the implementation block
@property (assign,nonatomic) double identicalDedupingTimeInterval;                                     //@synthesize identicalDedupingTimeInterval=_identicalDedupingTimeInterval - In the implementation block
@property (assign,nonatomic) double identicalDedupingTimeIntervalForPeople;                            //@synthesize identicalDedupingTimeIntervalForPeople=_identicalDedupingTimeIntervalForPeople - In the implementation block
@property (assign,nonatomic) double identicalDedupingMaximumTimeGroupExtension;                        //@synthesize identicalDedupingMaximumTimeGroupExtension=_identicalDedupingMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItemsPerIdenticalCluster;               //@synthesize maximumNumberOfItemsPerIdenticalCluster=_maximumNumberOfItemsPerIdenticalCluster - In the implementation block
@property (assign,nonatomic) double identicalDedupingThreshold;                                        //@synthesize identicalDedupingThreshold=_identicalDedupingThreshold - In the implementation block
@property (assign,nonatomic) double identicalDedupingThresholdForPeople;                               //@synthesize identicalDedupingThresholdForPeople=_identicalDedupingThresholdForPeople - In the implementation block
@property (assign,nonatomic) double identicalDedupingThresholdForBestItems;                            //@synthesize identicalDedupingThresholdForBestItems=_identicalDedupingThresholdForBestItems - In the implementation block
@property (assign,nonatomic) char useFaceprintsForIdenticalDeduping;                                   //@synthesize useFaceprintsForIdenticalDeduping=_useFaceprintsForIdenticalDeduping - In the implementation block
@property (assign,nonatomic) double identicalDedupingFaceprintDistance;                                //@synthesize identicalDedupingFaceprintDistance=_identicalDedupingFaceprintDistance - In the implementation block
@property (assign,nonatomic) char doSemanticalDeduping;                                                //@synthesize doSemanticalDeduping=_doSemanticalDeduping - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeInterval;                                    //@synthesize semanticalDedupingTimeInterval=_semanticalDedupingTimeInterval - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeIntervalForPeople;                           //@synthesize semanticalDedupingTimeIntervalForPeople=_semanticalDedupingTimeIntervalForPeople - In the implementation block
@property (assign,nonatomic) double semanticalDedupingTimeIntervalForPersons;                          //@synthesize semanticalDedupingTimeIntervalForPersons=_semanticalDedupingTimeIntervalForPersons - In the implementation block
@property (assign,nonatomic) double semanticalDedupingMaximumTimeGroupExtension;                       //@synthesize semanticalDedupingMaximumTimeGroupExtension=_semanticalDedupingMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItemsPerSemanticalCluster;              //@synthesize maximumNumberOfItemsPerSemanticalCluster=_maximumNumberOfItemsPerSemanticalCluster - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThreshold;                                       //@synthesize semanticalDedupingThreshold=_semanticalDedupingThreshold - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThresholdForPeople;                              //@synthesize semanticalDedupingThresholdForPeople=_semanticalDedupingThresholdForPeople - In the implementation block
@property (assign,nonatomic) double semanticalDedupingThresholdForPersons;                             //@synthesize semanticalDedupingThresholdForPersons=_semanticalDedupingThresholdForPersons - In the implementation block
@property (assign,nonatomic) char dontSemanticallyDedupePeople;                                        //@synthesize doNotSemanticallyDedupePeople=_doNotSemanticallyDedupePeople - In the implementation block
@property (assign,nonatomic) char dontSemanticallyDedupePersons;                                       //@synthesize doNotSemanticallyDedupePersons=_doNotSemanticallyDedupePersons - In the implementation block
@property (assign,nonatomic) char allowAdaptiveForSemanticalDeduping;                                  //@synthesize allowAdaptiveForSemanticalDeduping=_allowAdaptiveForSemanticalDeduping - In the implementation block
@property (assign,nonatomic) char useOnlyScenesForDeduping;                                            //@synthesize useOnlyScenesForDeduping=_useOnlyScenesForDeduping - In the implementation block
@property (assign,nonatomic) char useAllPersonsForDeduping;                                            //@synthesize useAllPersonsForDeduping=_useAllPersonsForDeduping - In the implementation block
@property (assign,nonatomic) char useFaceQualityForElection;                                           //@synthesize useFaceQualityForElection=_useFaceQualityForElection - In the implementation block
@property (assign,nonatomic) char doNotDedupeVideos;                                                   //@synthesize doNotDedupeVideos=_doNotDedupeVideos - In the implementation block
@property (assign,nonatomic) char doNotDedupeInterestingPortraitsAndLivePictures;                      //@synthesize doNotDedupeInterestingPortraitsAndLivePictures=_doNotDedupeInterestingPortraitsAndLivePictures - In the implementation block
@property (assign,nonatomic) char onlyDedupeContiguousItems;                                           //@synthesize onlyDedupeContiguousItems=_onlyDedupeContiguousItems - In the implementation block
@property (assign,nonatomic) char doDejunk;                                                            //@synthesize doDejunk=_doDejunk - In the implementation block
@property (assign,nonatomic) char returnDedupedJunkIfOnlyJunk;                                         //@synthesize returnDedupedJunkIfOnlyJunk=_returnDedupedJunkIfOnlyJunk - In the implementation block
@property (assign,nonatomic) char doFinalPass;                                                         //@synthesize doFinalPass=_doFinalPass - In the implementation block
@property (assign,nonatomic) double finalPassTimeInterval;                                             //@synthesize finalPassTimeInterval=_finalPassTimeInterval - In the implementation block
@property (assign,nonatomic) double finalPassMaximumTimeGroupExtension;                                //@synthesize finalPassMaximumTimeGroupExtension=_finalPassMaximumTimeGroupExtension - In the implementation block
@property (assign,nonatomic) double finalPassDedupingThreshold;                                        //@synthesize finalPassDedupingThreshold=_finalPassDedupingThreshold - In the implementation block
@property (nonatomic,retain) NSSet * identifiersOfRequiredItems;                                       //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
-(id)description;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(id)dictionaryRepresentationRestrictingToGlobalOptions:(char)arg1 ;
-(char)doIdenticalDeduping;
-(void)setDoIdenticalDeduping:(char)arg1 ;
-(double)identicalDedupingTimeInterval;
-(void)setIdenticalDedupingTimeInterval:(double)arg1 ;
-(double)identicalDedupingTimeIntervalForPeople;
-(void)setIdenticalDedupingTimeIntervalForPeople:(double)arg1 ;
-(double)identicalDedupingMaximumTimeGroupExtension;
-(void)setIdenticalDedupingMaximumTimeGroupExtension:(double)arg1 ;
-(unsigned long long)maximumNumberOfItemsPerIdenticalCluster;
-(void)setMaximumNumberOfItemsPerIdenticalCluster:(unsigned long long)arg1 ;
-(double)identicalDedupingThreshold;
-(void)setIdenticalDedupingThreshold:(double)arg1 ;
-(double)identicalDedupingThresholdForPeople;
-(void)setIdenticalDedupingThresholdForPeople:(double)arg1 ;
-(double)identicalDedupingThresholdForBestItems;
-(void)setIdenticalDedupingThresholdForBestItems:(double)arg1 ;
-(char)useFaceprintsForIdenticalDeduping;
-(void)setUseFaceprintsForIdenticalDeduping:(char)arg1 ;
-(double)identicalDedupingFaceprintDistance;
-(void)setIdenticalDedupingFaceprintDistance:(double)arg1 ;
-(char)doSemanticalDeduping;
-(void)setDoSemanticalDeduping:(char)arg1 ;
-(double)semanticalDedupingTimeInterval;
-(void)setSemanticalDedupingTimeInterval:(double)arg1 ;
-(double)semanticalDedupingTimeIntervalForPeople;
-(void)setSemanticalDedupingTimeIntervalForPeople:(double)arg1 ;
-(double)semanticalDedupingTimeIntervalForPersons;
-(void)setSemanticalDedupingTimeIntervalForPersons:(double)arg1 ;
-(double)semanticalDedupingMaximumTimeGroupExtension;
-(void)setSemanticalDedupingMaximumTimeGroupExtension:(double)arg1 ;
-(unsigned long long)maximumNumberOfItemsPerSemanticalCluster;
-(void)setMaximumNumberOfItemsPerSemanticalCluster:(unsigned long long)arg1 ;
-(double)semanticalDedupingThreshold;
-(void)setSemanticalDedupingThreshold:(double)arg1 ;
-(double)semanticalDedupingThresholdForPeople;
-(void)setSemanticalDedupingThresholdForPeople:(double)arg1 ;
-(double)semanticalDedupingThresholdForPersons;
-(void)setSemanticalDedupingThresholdForPersons:(double)arg1 ;
-(char)dontSemanticallyDedupePeople;
-(void)setDontSemanticallyDedupePeople:(char)arg1 ;
-(char)dontSemanticallyDedupePersons;
-(void)setDontSemanticallyDedupePersons:(char)arg1 ;
-(char)allowAdaptiveForSemanticalDeduping;
-(void)setAllowAdaptiveForSemanticalDeduping:(char)arg1 ;
-(char)useOnlyScenesForDeduping;
-(void)setUseOnlyScenesForDeduping:(char)arg1 ;
-(char)useAllPersonsForDeduping;
-(void)setUseAllPersonsForDeduping:(char)arg1 ;
-(char)useFaceQualityForElection;
-(void)setUseFaceQualityForElection:(char)arg1 ;
-(char)doNotDedupeVideos;
-(void)setDoNotDedupeVideos:(char)arg1 ;
-(char)doNotDedupeInterestingPortraitsAndLivePictures;
-(void)setDoNotDedupeInterestingPortraitsAndLivePictures:(char)arg1 ;
-(char)onlyDedupeContiguousItems;
-(void)setOnlyDedupeContiguousItems:(char)arg1 ;
-(char)doDejunk;
-(void)setDoDejunk:(char)arg1 ;
-(char)returnDedupedJunkIfOnlyJunk;
-(void)setReturnDedupedJunkIfOnlyJunk:(char)arg1 ;
-(char)doFinalPass;
-(void)setDoFinalPass:(char)arg1 ;
-(double)finalPassTimeInterval;
-(void)setFinalPassTimeInterval:(double)arg1 ;
-(double)finalPassMaximumTimeGroupExtension;
-(void)setFinalPassMaximumTimeGroupExtension:(double)arg1 ;
-(double)finalPassDedupingThreshold;
-(void)setFinalPassDedupingThreshold:(double)arg1 ;
@end

