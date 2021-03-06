/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MARelation : NSObject

@property (nonatomic,readonly) NSString * visualString; 
@property (nonatomic,readonly) MARelation * transitiveClosure; 
@property (nonatomic,readonly) MARelation * optionalStep; 
@property (nonatomic,readonly) MARelation * inverse; 
+(id)chain:(id)arg1 ;
+(id)union:(id)arg1 ;
+(id)scanRelationWithScanner:(id)arg1 ;
+(id)_scanNonChainRelationWithScanner:(id)arg1 ;
+(id)relationWithVisualString:(id)arg1 ;
-(id)description;
-(MARelation *)inverse;
-(MARelation *)transitiveClosure;
-(MARelation *)optionalStep;
-(NSString *)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(char)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)adjacencySetFromSourceNodeIdentifiers:(id)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(id)initForSubclassing;
-(id)adjacencyListFromSource:(id)arg1 ;
-(id)adjacencyListFromSources:(id)arg1 ;
-(char)unionAdjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)adjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(id)repeatWithCount:(unsigned long long)arg1 ;
-(id)repeatWithMinCount:(unsigned long long)arg1 maxCount:(unsigned long long)arg2 ;
@end

