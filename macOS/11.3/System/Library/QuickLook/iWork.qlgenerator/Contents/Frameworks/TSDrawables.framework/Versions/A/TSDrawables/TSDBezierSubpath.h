/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSMutableArray, NSArray, TSUBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSMutableArray* mNodes;
	char mClosed;

}

@property (nonatomic,copy) NSArray * nodes; 
@property (assign,getter=isClosed,nonatomic) char closed; 
@property (nonatomic,readonly) char isRectangular; 
@property (nonatomic,readonly) TSUBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) char allNodesSelected; 
@property (nonatomic,readonly) char hasSelectedNode; 
@property (nonatomic,readonly) char canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) char closeIfEndpointsAreEqual; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(TSUBezierPath *)bezierPath;
-(char)isClosed;
-(char)isRectangular;
-(void)setClosed:(char)arg1 ;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(TSDBezierNode *)firstNode;
-(char)isCircular;
-(TSDBezierNode *)lastNode;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(char)arg2 fromIndex:(unsigned long long)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(void)removeLastNode;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(char)allNodesSelected;
-(char)hasSelectedNode;
-(char)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(char)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
-(id)splitEdgeAtIndex:(unsigned long long)arg1 atPercentage:(double)arg2 ;
@end
