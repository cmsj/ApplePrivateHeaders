/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MANodeImplementationProtocol <NSObject>
@required
-(void)removeEdge:(id)arg1;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(char*)arg5 block:(/*^block*/id)arg6;
-(unsigned long long)memoryFootprint:(id)arg1;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(char)hasEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(id)anyEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(id)edgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4;
-(void)enumerateEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(char)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(id)anyEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(id)edgesOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(id)neighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3;
-(id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(id)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4;
-(void)enumerateNeighborNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumerateSiblingNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)addEdge:(id)arg1;

@end

