/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphRelatableEvent;
@class NSString, PHPhotosHighlight, NSArray, NSDictionary, NSDate, PGGraphNode;

@interface PGRelated : NSObject {

	char _generateTitleBasedOnKeyAsset;
	char _shouldGenerateTitle;
	unsigned _aggregatedVersions;
	NSString* _debugDescription;
	PHPhotosHighlight* _highlight;
	NSArray* _moments;
	NSDictionary* _keywords;
	double _score;
	double _matchingScore;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	unsigned long long _memoryTripTitleType;
	long long _dateMatchingType;
	PGGraphNode*<PGGraphRelatableEvent> _eventNode;

}

@property (nonatomic,retain) PGGraphNode*<PGGraphRelatableEvent> eventNode;                                          //@synthesize eventNode=_eventNode - In the implementation block
@property (nonatomic,retain) PHPhotosHighlight * highlight;                                                          //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) NSArray * moments;                                                                      //@synthesize moments=_moments - In the implementation block
@property (nonatomic,retain) NSString * debugDescription;                                                            //@synthesize debugDescription=_debugDescription - In the implementation block
@property (assign,nonatomic) double score;                                                                           //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double matchingScore;                                                                   //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign,nonatomic) long long titleCategory;                                                                //@synthesize titleCategory=_titleCategory - In the implementation block
@property (assign,nonatomic) long long dateMatchingType;                                                             //@synthesize dateMatchingType=_dateMatchingType - In the implementation block
@property (assign,nonatomic) unsigned long long memoryTripTitleType;                                                 //@synthesize memoryTripTitleType=_memoryTripTitleType - In the implementation block
@property (assign,getter=isGeneratingTitleBasedOnKeyAsset,nonatomic) char generateTitleBasedOnKeyAsset;              //@synthesize generateTitleBasedOnKeyAsset=_generateTitleBasedOnKeyAsset - In the implementation block
@property (assign,nonatomic) char shouldGenerateTitle;                                                               //@synthesize shouldGenerateTitle=_shouldGenerateTitle - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (nonatomic,readonly) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                                                              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                                                                //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * keywords;                                                              //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) unsigned aggregatedVersions;                                                          //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)debugDescription;
-(NSDictionary *)dictionaryRepresentation;
-(double)score;
-(NSString *)title;
-(NSDictionary *)keywords;
-(NSString *)subtitle;
-(void)setScore:(double)arg1 ;
-(PHPhotosHighlight *)highlight;
-(void)setHighlight:(PHPhotosHighlight *)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(long long)titleCategory;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)moments;
-(void)setMoments:(NSArray *)arg1 ;
-(unsigned)aggregatedVersions;
-(double)matchingScore;
-(unsigned short)graphSchemaVersion;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(id)_initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 moments:(id)arg3 needsDebugInfo:(char)arg4 ;
-(id)initWithGraphMatchingResult:(id)arg1 assetCollection:(id)arg2 needsDebugInfo:(char)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 needsDebugInfo:(char)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(char)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripMomentNodes:(id)arg4 needsDebugInfo:(char)arg5 ;
-(id)initWithMoment:(id)arg1 needsDebugInfo:(char)arg2 ;
-(id)initWithHighlight:(id)arg1 needsDebugInfo:(char)arg2 ;
-(void)_generateTitleWithHighlightNode:(id)arg1 referenceDateInterval:(id)arg2 ;
-(void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 referenceDateInterval:(id)arg3 ;
-(unsigned short)relatedAlgorithmsVersion;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(void)_addKeywordsFromKeywords:(id)arg1 ;
-(void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)setMatchingScore:(double)arg1 ;
-(void)setTitleCategory:(long long)arg1 ;
-(unsigned long long)memoryTripTitleType;
-(void)setMemoryTripTitleType:(unsigned long long)arg1 ;
-(long long)dateMatchingType;
-(void)setDateMatchingType:(long long)arg1 ;
-(char)isGeneratingTitleBasedOnKeyAsset;
-(void)setGenerateTitleBasedOnKeyAsset:(char)arg1 ;
-(char)shouldGenerateTitle;
-(void)setShouldGenerateTitle:(char)arg1 ;
-(PGGraphNode*<PGGraphRelatableEvent>)eventNode;
-(void)setEventNode:(PGGraphNode*<PGGraphRelatableEvent>)arg1 ;
@end
