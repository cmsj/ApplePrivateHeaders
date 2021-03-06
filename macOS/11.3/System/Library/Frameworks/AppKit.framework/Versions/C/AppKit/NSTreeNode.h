/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableArray, NSIndexPath, NSArray;

@interface NSTreeNode : NSObject {

	id _childNodesProxy;
	void* _observationInfo;
	struct {
		unsigned ignoreObserving : 1;
		unsigned reserved : 31;
	}  _NSTreeNodeFlags;
	id _representedObject;
	NSMutableArray* _childNodes;
	NSTreeNode* _parentNode;

}

@property (readonly) id representedObject; 
@property (readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,readonly) char leaf; 
@property (copy,readonly) NSArray * childNodes; 
@property (readonly) NSMutableArray * mutableChildNodes; 
@property (__weak,readonly) NSTreeNode * parentNode; 
+(id)treeNodeWithRepresentedObject:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSIndexPath *)indexPath;
-(void*)observationInfo;
-(NSTreeNode *)parentNode;
-(void)setParentNode:(NSTreeNode *)arg1 ;
-(id)representedObject;
-(id)objectAtIndexPath:(id)arg1 ;
-(char)isLeaf;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(NSArray *)childNodes;
-(id)_indexPath;
-(void)sortWithSortDescriptors:(id)arg1 recursively:(char)arg2 ;
-(NSMutableArray *)mutableChildNodes;
-(id)_descendantNodeWithRepresentedObjectLineage:(id)arg1 ;
-(id)_privateChildNodes;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)_detachFromParent;
-(char)_ignoreObserving;
-(void)_disableObserving;
-(void)_enableObserving;
-(unsigned long long)countOfSubNodes;
-(void)_insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2 ;
-(id)objectInSubNodesAtIndex:(unsigned long long)arg1 ;
-(void)_removeObjectFromSubNodesAtIndex:(unsigned long long)arg1 ;
-(void)_removeSubNodesAtIndexes:(id)arg1 ;
-(void)willAccessChildNodes;
-(void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1 ;
-(id)subNodesAtIndexes:(id)arg1 ;
-(void)getSubNodes:(id*)arg1 range:(NSRange)arg2 ;
-(void)removeSubNodesAtIndexes:(id)arg1 ;
-(char)hasAncestor:(id)arg1 ;
-(id)observedObject;
-(id)subnodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childCountForKeyPath:(id)arg1 ;
-(void)startObservingModelKeyPath:(id)arg1 ;
@end

