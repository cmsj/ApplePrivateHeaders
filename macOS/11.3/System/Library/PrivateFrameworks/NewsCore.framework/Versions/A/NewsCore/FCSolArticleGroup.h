/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolTagID, NSMutableSet, FCHeadlineClusteringRules;

@interface FCSolArticleGroup : NSObject {

	FCSolTagID* _tagId;
	NSMutableSet* _articles;
	double _personalizationScore;
	FCHeadlineClusteringRules* _rules;
	NSMutableSet* _topArticles;
	NSMutableSet* _orphans;
	double _score;
	double _heuristicScore;

}

@property (assign,nonatomic) double heuristicScore;                          //@synthesize heuristicScore=_heuristicScore - In the implementation block
@property (nonatomic,retain) FCSolTagID * tagId;                             //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,retain) NSMutableSet * articles;                        //@synthesize articles=_articles - In the implementation block
@property (assign,nonatomic) double personalizationScore;                    //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (nonatomic,retain) FCHeadlineClusteringRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSMutableSet * topArticles;                   //@synthesize topArticles=_topArticles - In the implementation block
@property (nonatomic,readonly) NSMutableSet * orphans;                       //@synthesize orphans=_orphans - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
+(id)formGroup:(id)arg1 withMinClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 maxPublisherOccurrences:(long long)arg4 maxUnpaidArticles:(long long)arg5 maxEvergreenArticles:(long long)arg6 enforcePublisherCap:(char)arg7 ;
+(id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6 ;
+(id)formBestOfGroup:(id)arg1 clusteringRules:(id)arg2 topicDiversityThreshold:(double)arg3 topicDiversityWindowSize:(long long)arg4 allowUnfilteredArticles:(char)arg5 ;
-(double)score;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(FCHeadlineClusteringRules *)rules;
-(void)setPersonalizationScore:(double)arg1 ;
-(NSMutableSet *)orphans;
-(double)personalizationScore;
-(NSMutableSet *)articles;
-(void)setTagId:(FCSolTagID *)arg1 ;
-(FCSolTagID *)tagId;
-(void)setArticles:(NSMutableSet *)arg1 ;
-(NSMutableSet *)topArticles;
-(void)intersectArticles:(id)arg1 ;
-(id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4 ;
-(void)computeTopArticlesAndScore;
-(void)setHeuristicScore:(double)arg1 ;
-(double)heuristicScore;
@end

