/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MARelation;

@interface MATransitiveClosureRelation : MARelation {

	MARelation* _base;

}

@property (nonatomic,readonly) MARelation * base;              //@synthesize base=_base - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)inverse;
-(MARelation *)base;
-(id)transitiveClosure;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(char)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithBase:(id)arg1 ;
@end

