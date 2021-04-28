/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MAEdgeFilter;

@interface MANeighborRelation : MARelation {

	unsigned long long _edgeType;
	MAEdgeFilter* _edgeFilter;

}

@property (nonatomic,readonly) unsigned long long edgeType;                 //@synthesize edgeType=_edgeType - In the implementation block
@property (nonatomic,copy,readonly) MAEdgeFilter * edgeFilter;              //@synthesize edgeFilter=_edgeFilter - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)inverse;
-(unsigned long long)edgeType;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(char)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithEdgeType:(unsigned long long)arg1 edgeFilter:(id)arg2 ;
-(id)adjacencySetFromSourceNodeIdentifiers:(id)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(MAEdgeFilter *)edgeFilter;
@end
