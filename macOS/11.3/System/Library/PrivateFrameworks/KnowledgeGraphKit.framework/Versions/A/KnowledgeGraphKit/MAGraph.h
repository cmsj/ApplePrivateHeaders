/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MABaseGraph.h>

@class MABaseGraph;

@interface MAGraph : MABaseGraph {

	MABaseGraph* _concreteGraph;

}
+(char)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(char)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(char)hasMarker:(id)arg1 ;
+(char)setMarkerAtURL:(id)arg1 ;
+(Class)concreteGraphClass;
+(char)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
-(id)description;
-(id)identifier;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)databaseURL;
-(id)initWithSpecification:(id)arg1 ;
-(id)allNodes;
-(void)removeNode:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(id)allEdges;
-(void)removeEdge:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(void)closePersistentStore;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(char*)arg5 ;
-(void)setMarker;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)deleteMarker;
-(unsigned long long)edgesCount;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)leaveBatch;
-(void)enterBatch;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(char)arg3 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)savePersistentStore;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(unsigned long long)nodesCount;
-(char)hasMarker;
-(id)nodesForIdentifiers:(id)arg1 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(char*)arg5 ;
-(id)nodesDomains;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)edgesDomains;
-(id)nodesLabels;
-(id)edgesLabels;
-(char)hasPendingRead;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)nodesForDomains:(id)arg1 ;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(char)hasPendingWrite;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(char)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(char)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(char)compareWithPersistedState;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(char)arg2 strictEdges:(char)arg3 saveToDatabase:(char)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
@end

