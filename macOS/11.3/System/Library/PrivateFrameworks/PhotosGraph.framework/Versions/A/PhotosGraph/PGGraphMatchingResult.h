/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PGGraphRelatableEvent;
@class PGGraphNode, NSDictionary, NSMutableDictionary;

@interface PGGraphMatchingResult : NSObject <NSCopying> {

	PGGraphNode*<PGGraphRelatableEvent> _event;
	NSDictionary* _keywords;
	double _score;
	NSMutableDictionary* _context;

}

@property (nonatomic,readonly) NSMutableDictionary * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PGGraphNode*<PGGraphRelatableEvent> event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double score;                                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDictionary * keywords;                                //@synthesize keywords=_keywords - In the implementation block
+(id)matchingDescriptionWithEventNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(PGGraphNode*<PGGraphRelatableEvent>)event;
-(double)score;
-(NSMutableDictionary *)context;
-(NSDictionary *)keywords;
-(id)initWithEvent:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(char)isEqualToResult:(id)arg1 ;
-(id)localStartDate;
-(id)localEndDate;
-(id)sortedCriteria;
-(id)keywordsForRelatedType:(unsigned long long)arg1 ;
-(void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)clearKeywordsForRelatedType:(unsigned long long)arg1 ;
-(id)contextItemForRelatedType:(unsigned long long)arg1 ;
-(void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(id)_contextItemsSortedByScoreAscending:(char)arg1 ;
-(id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1 ;
-(void)enumerateContextItems:(/*^block*/id)arg1 ;
@end

