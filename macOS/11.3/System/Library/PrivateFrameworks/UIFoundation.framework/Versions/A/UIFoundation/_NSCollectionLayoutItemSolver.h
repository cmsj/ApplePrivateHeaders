/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_NSCollectionLayoutAuxiliaryHosting.h>

@protocol NSCollectionLayoutContainer, _NSCollectionPreferredSizes, _NSCollectionLayoutSupplementaryEnrolling;
@class NSCollectionLayoutItem, NSObject, _NSCollectionLayoutItemSolverState, NSArray, NSString;

@interface _NSCollectionLayoutItemSolver : NSObject <NSCopying, _NSCollectionLayoutAuxiliaryHosting> {

	char _layoutRTL;
	int _layoutAxis;
	NSCollectionLayoutItem* _item;
	id<NSCollectionLayoutContainer> _container;
	NSObject* _traitCollection;
	_NSCollectionLayoutItemSolverState* _solveResult;
	id<_NSCollectionPreferredSizes> _preferredSizes;
	id<_NSCollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;
	long long _solutionRecursionDepth;
	long long _maxFrameCount;

}

@property (nonatomic,retain) _NSCollectionLayoutItemSolverState * solveResult;                                 //@synthesize solveResult=_solveResult - In the implementation block
@property (nonatomic,retain) id<_NSCollectionPreferredSizes> preferredSizes;                                   //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (nonatomic,retain) id<_NSCollectionLayoutSupplementaryEnrolling> supplementaryEnroller;              //@synthesize supplementaryEnroller=_supplementaryEnroller - In the implementation block
@property (nonatomic,readonly) long long solutionRecursionDepth;                                               //@synthesize solutionRecursionDepth=_solutionRecursionDepth - In the implementation block
@property (nonatomic,readonly) long long maxFrameCount;                                                        //@synthesize maxFrameCount=_maxFrameCount - In the implementation block
@property (nonatomic,readonly) int layoutAxis;                                                                 //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<NSCollectionLayoutContainer> container;                                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSObject * traitCollection;                                                     //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) char layoutRTL;                                                                 //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (nonatomic,readonly) long long frameCount; 
@property (nonatomic,readonly) long long itemFrameCount; 
@property (nonatomic,readonly) long long auxiliaryFrameCount; 
@property (nonatomic,readonly) CGRect layoutFrame; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) NSArray * itemFrames; 
@property (nonatomic,readonly) NSArray * auxiliaryFrames; 
@property (nonatomic,readonly) id<_NSCollectionLayoutAuxiliaryOffsets> supplementaryOffsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id<NSCollectionLayoutContainer>)container;
-(NSCollectionLayoutItem *)item;
-(id)initWithItem:(id)arg1 ;
-(CGRect)contentFrame;
-(int)layoutAxis;
-(id)visualDescription;
-(void)setPreferredSizes:(id<_NSCollectionPreferredSizes>)arg1 ;
-(long long)frameCount;
-(NSArray *)itemFrames;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(id<_NSCollectionLayoutAuxiliaryOffsets>)supplementaryOffsets;
-(id)supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5 ;
-(NSObject *)traitCollection;
-(char)layoutRTL;
-(void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(char)arg5 ;
-(id<_NSCollectionPreferredSizes>)preferredSizes;
-(CGSize)auxiliaryHostContentSize;
-(CGSize)auxiliaryHostPinningContentSize;
-(id)auxiliaryHostContainer;
-(id)auxiliaryHostAuxiliaryItems;
-(char)auxiliaryHostShouldLayoutRTL;
-(int)auxiliaryHostLayoutAxis;
-(long long)auxiliaryHostAuxiliaryKind;
-(id)auxiliaryHostSupplementaryEnroller;
-(id)auxiliaryHostPreferredSizes;
-(CGPoint)auxiliaryHostAdditionalFrameOffset;
-(void)_solve;
-(id)frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4 ;
-(long long)itemFrameCount;
-(CGRect)layoutFrame;
-(CGSize)contentSizeForFrameCount:(long long)arg1 layoutAxis:(int)arg2 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5 ;
-(id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 container:(id)arg3 layoutAxis:(int)arg4 traitCollection:(id)arg5 maxFrameCount:(long long)arg6 layoutRTL:(char)arg7 preferredSizes:(id)arg8 solverResult:(id)arg9 solutionRecursionDepth:(long long)arg10 ;
-(id<_NSCollectionLayoutSupplementaryEnrolling>)supplementaryEnroller;
-(long long)maxFrameCount;
-(_NSCollectionLayoutItemSolverState *)solveResult;
-(long long)solutionRecursionDepth;
-(id)availableLayoutSpaces;
-(void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(char)arg5 preferredSizes:(id)arg6 ;
-(void)_solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(char)arg5 preferredSizes:(id)arg6 solutionRecursionDepth:(long long)arg7 ;
-(long long)auxiliaryFrameCount;
-(id)queryFramesApplyingFrameOffset:(CGPoint)arg1 ;
-(NSArray *)auxiliaryFrames;
-(id)_queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5 ;
-(id)_queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5 ;
-(id)_frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4 ;
-(id)_supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(id)_supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5 ;
-(double)_additionalDimensionForEdgeSpacingAlongAxis:(int)arg1 group:(id)arg2 trailingEdgeOnly:(char)arg3 ;
-(void)setSolveResult:(_NSCollectionLayoutItemSolverState *)arg1 ;
-(void)_solveWithCustomGroupItemProvider;
-(void)_solveGroup;
-(void)_solveSingleItem;
-(int)_layoutAxisForGroup:(id)arg1 ;
-(CGSize)_effectiveGroupSizeForGroup:(id)arg1 container:(id)arg2 ;
-(void)_warnIfClientSpecifiesFlexibleRootGroupEdgeSpacingAlongLayoutAxisAsNeededForGroup:(id)arg1 layoutAxis:(int)arg2 ;
-(void)_updateGroupByQueryingItemsIfNeeded:(id)arg1 container:(id)arg2 ;
-(id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 ;
-(CGPoint)_outerContainerOffsetForGroup:(id)arg1 groupComputedSize:(CGSize)arg2 container:(id)arg3 outerLayoutAxis:(int)arg4 ;
-(id)_arrangeSolutionItems:(id)arg1 alongLayoutAxis:(int)arg2 forContainer:(id)arg3 additionalLayoutOffset:(CGPoint)arg4 interItemSpacing:(id)arg5 ;
-(void)_transformGroupArrangementItemsForRTL:(id)arg1 ;
-(CGSize)_effectiveContainerSizeForContainer:(id)arg1 ;
-(unsigned long long)_directionalEdgeForLayoutAxis:(int)arg1 preEdge:(char)arg2 ;
-(CGPoint)_layoutOffsetForContainer:(id)arg1 ;
-(void)_enumerateSolutionFramesForQueryRect:(CGRect)arg1 itemLimit:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(CGPoint)_frameOffsetForAdditionalFrameOffset:(CGPoint)arg1 repeatOffset:(long long)arg2 repeatAxis:(int)arg3 interSolutionSpacing:(double)arg4 ;
-(char)canAccomodateItemWithSize:(CGSize)arg1 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 ;
-(id)queryFramesWithItemLimit:(long long)arg1 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5 ;
-(CGRect)_adjustedFrameForFrame:(CGRect)arg1 offset:(CGPoint)arg2 ;
-(id)_normalizeVisualFormatParserItems:(id)arg1 layoutAxis:(int)arg2 ;
-(void)setSupplementaryEnroller:(id<_NSCollectionLayoutSupplementaryEnrolling>)arg1 ;
@end

