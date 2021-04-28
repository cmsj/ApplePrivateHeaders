/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/Versions/A/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVNode : NSObject {

	double x;
	double y;
	double w;
	double h;
	NSMutableOrderedSet* inNodes;
	NSMutableOrderedSet* outNodes;
	long long rank;
	long long index;
	GVNode* prev;
	GVNode* next;
	unsigned long long inPriority;
	unsigned long long outPriority;

}

@property (assign,nonatomic) double x; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) double w; 
@property (assign,nonatomic) double h; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) double cy; 
@property (nonatomic,retain) NSMutableOrderedSet * inNodes; 
@property (nonatomic,retain) NSMutableOrderedSet * outNodes; 
@property (readonly) unsigned long long inDegree; 
@property (readonly) unsigned long long outDegree; 
@property (assign,nonatomic) long long rank; 
@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) GVNode * prev; 
@property (assign,nonatomic) GVNode * next; 
@property (assign,nonatomic) unsigned long long inPriority; 
@property (assign,nonatomic) unsigned long long outPriority; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGPoint origin; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGSize size; 
-(NSMutableOrderedSet *)inNodes;
-(NSMutableOrderedSet *)outNodes;
-(unsigned long long)inDegree;
-(unsigned long long)outDegree;
-(char)hasEdgeFrom:(id)arg1 ;
-(char)hasEdgeTo:(id)arg1 ;
-(void)addEdgeFrom:(id)arg1 ;
-(void)addEdgeTo:(id)arg1 ;
-(void)removeEdgeFrom:(id)arg1 ;
-(void)removeEdgeTo:(id)arg1 ;
-(void)computePriority;
-(void)traversePostorder:(int)arg1 withCallback:(/*^block*/id)arg2 stopper:(/*^block*/id)arg3 randomize:(char)arg4 ;
-(void)traversePreorder:(int)arg1 withCallback:(/*^block*/id)arg2 randomize:(char)arg3 ;
-(void)setInNodes:(NSMutableOrderedSet *)arg1 ;
-(void)setOutNodes:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)inPriority;
-(void)setInPriority:(unsigned long long)arg1 ;
-(unsigned long long)outPriority;
-(void)setOutPriority:(unsigned long long)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setSize:(CGSize)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(GVNode *)next;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(double)x;
-(double)y;
-(void)setNext:(GVNode *)arg1 ;
-(void)setPrev:(GVNode *)arg1 ;
-(GVNode *)prev;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)cx;
-(double)cy;
-(void)setCx:(double)arg1 ;
-(void)setCy:(double)arg1 ;
-(void)setW:(double)arg1 ;
-(void)setH:(double)arg1 ;
-(double)w;
-(double)h;
@end
