/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KGEdgeChangeRequest.h>

@protocol KGNode;
@class NSArray, NSNumber, NSDictionary, KGEdgePlaceholder;

@interface KGEdgeCreationRequest : KGEdgeChangeRequest {

	NSArray* _labels;
	NSNumber* _weight;
	NSDictionary* _properties;
	id<KGNode> _targetNode;
	id<KGNode> _sourceNode;
	KGEdgePlaceholder* _placeholderForEdge;

}

@property (retain,readonly) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) id<KGNode> targetNode;                               //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                               //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) KGEdgePlaceholder * placeholderForEdge;              //@synthesize placeholderForEdge=_placeholderForEdge - In the implementation block
+(id)creationRequestWithLabels:(id)arg1 weight:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
+(id)changeRequestForEdge:(id)arg1 ;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(NSArray *)labels;
-(id<KGNode>)sourceNode;
-(id<KGNode>)targetNode;
-(KGEdgePlaceholder *)placeholderForEdge;
@end

