/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCollectionLayoutAuxiliaryHosting;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSArray, NSSet, NSIndexSet, _NSCollectionLayoutAuxiliaryOffsets, NSDictionary, _NSRTree;

@interface _NSCollectionLayoutAuxiliaryItemSolver : NSObject {

	long long _memoizedSupplementaryKind;
	NSArray* _memoizedAuxiliaryItems;
	NSSet* _elementKinds;
	char _hasEstimatedSizes;
	NSIndexSet* _pinnedSupplementaryIndexes;
	_NSCollectionLayoutAuxiliaryOffsets* _supplementariesThatCanAffectContentSize;
	id<_NSCollectionLayoutAuxiliaryHosting> _auxiliaryHost;
	NSArray* _frames;
	NSDictionary* _enrolledSupplementaryFramesDict;
	NSDictionary* _supplementaryFramesKeyedByKindIndex;
	_NSRTree* _supplementaryItemGeometricIndexer;
	CGSize _contentSize;
	CGPoint _hostContentOffset;
	NSDirectionalEdgeInsets _hostContentSizeInsets;

}

@property (assign,nonatomic,__weak) id<_NSCollectionLayoutAuxiliaryHosting> auxiliaryHost;                               //@synthesize auxiliaryHost=_auxiliaryHost - In the implementation block
@property (nonatomic,retain) NSArray * frames;                                                                           //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSDictionary * enrolledSupplementaryFramesDict;                                             //@synthesize enrolledSupplementaryFramesDict=_enrolledSupplementaryFramesDict - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryFramesKeyedByKindIndex;                                         //@synthesize supplementaryFramesKeyedByKindIndex=_supplementaryFramesKeyedByKindIndex - In the implementation block
@property (nonatomic,retain) _NSCollectionLayoutAuxiliaryOffsets * supplementariesThatCanAffectContentSize;              //@synthesize supplementariesThatCanAffectContentSize=_supplementariesThatCanAffectContentSize - In the implementation block
@property (nonatomic,readonly) long long memoizedSupplementaryKind; 
@property (nonatomic,readonly) NSArray * memoizedSupplementaryItems; 
@property (assign,nonatomic) char hasEstimatedSizes;                                                                     //@synthesize hasEstimatedSizes=_hasEstimatedSizes - In the implementation block
@property (nonatomic,retain) _NSRTree * supplementaryItemGeometricIndexer;                                               //@synthesize supplementaryItemGeometricIndexer=_supplementaryItemGeometricIndexer - In the implementation block
@property (nonatomic,retain) NSIndexSet * pinnedSupplementaryIndexes;                                                    //@synthesize pinnedSupplementaryIndexes=_pinnedSupplementaryIndexes - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hostContentSizeInsets;                                              //@synthesize hostContentSizeInsets=_hostContentSizeInsets - In the implementation block
@property (nonatomic,readonly) NSArray * supplementaryFrames; 
@property (nonatomic,readonly) NSSet * elementKinds; 
@property (nonatomic,readonly) char contentSizeDiffersFromHostContentSize; 
@property (nonatomic,readonly) CGPoint hostContentOffset;                                                                //@synthesize hostContentOffset=_hostContentOffset - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(id)visualDescription;
-(NSSet *)elementKinds;
-(void)resolveSupplementaryItemsForVisibleBounds:(CGRect)arg1 ;
-(id)_queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(NSArray *)supplementaryFrames;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(id)initWithAuxiliaryHost:(id)arg1 ;
-(char)contentSizeDiffersFromHostContentSize;
-(NSDirectionalEdgeInsets)hostContentSizeInsets;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(void)_solveForPinning:(char)arg1 visibleRect:(CGRect)arg2 ;
-(NSArray *)frames;
-(long long)memoizedSupplementaryKind;
-(_NSRTree *)supplementaryItemGeometricIndexer;
-(NSDictionary *)supplementaryFramesKeyedByKindIndex;
-(id<_NSCollectionLayoutAuxiliaryHosting>)auxiliaryHost;
-(NSArray *)memoizedSupplementaryItems;
-(CGRect)_frameForSupplementaryItem:(id)arg1 container:(id)arg2 contentSize:(CGSize)arg3 frameOffset:(CGPoint)arg4 applyPinning:(char)arg5 visibleBounds:(CGRect)arg6 preferredSizes:(id)arg7 preferredIndex:(long long)arg8 layoutRTL:(char)arg9 ;
-(CGSize)_computeContentSizeForEmptyHostContentSizeForContainer:(id)arg1 hostContentSize:(CGSize)arg2 layoutAxis:(int)arg3 supplementaryFrames:(id)arg4 preferredSizes:(id)arg5 layoutRTL:(char)arg6 supplementaryKind:(long long)arg7 ;
-(id)_normalizedFramesAlongLayoutAxisForFrames:(id)arg1 layoutAxis:(int)arg2 ;
-(void)setPinnedSupplementaryIndexes:(NSIndexSet *)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(void)setEnrolledSupplementaryFramesDict:(NSDictionary *)arg1 ;
-(void)setSupplementaryFramesKeyedByKindIndex:(NSDictionary *)arg1 ;
-(void)setHostContentSizeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setSupplementariesThatCanAffectContentSize:(_NSCollectionLayoutAuxiliaryOffsets *)arg1 ;
-(id)_rearrangedFramesForFrames:(id)arg1 container:(id)arg2 contentSize:(CGSize)arg3 applyPinning:(char)arg4 frameOffset:(CGPoint)arg5 visibleBounds:(CGRect)arg6 preferredSizes:(id)arg7 layoutRTL:(char)arg8 supplementaryKind:(long long)arg9 ;
-(void)_updateGeometricIndexer;
-(void)setSupplementaryItemGeometricIndexer:(_NSRTree *)arg1 ;
-(CGSize)_largestPossibleHostContentSizeForContainerSize:(CGSize)arg1 layoutAxis:(int)arg2 ;
-(CGSize)_requiredContentSizeForSupplementaryFrames:(id)arg1 forLayoutAxis:(int)arg2 containerSize:(CGSize)arg3 ;
-(id)_effectiveBoundarySupplementrayItem:(id)arg1 forLayoutAxis:(int)arg2 ;
-(char)hasEstimatedSizes;
-(void)setHasEstimatedSizes:(char)arg1 ;
-(void)resolve;
-(id)supplementaryFramesWithOffset:(CGPoint)arg1 ;
-(id)_rearrangeSupplementaryItems:(id)arg1 byUpdatingPinning:(char)arg2 forVisibleBounds:(CGRect)arg3 frameOffset:(CGPoint)arg4 ;
-(CGPoint)_offsetForContentSizeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(CGPoint)hostContentOffset;
-(_NSCollectionLayoutAuxiliaryOffsets *)supplementariesThatCanAffectContentSize;
-(void)setAuxiliaryHost:(id<_NSCollectionLayoutAuxiliaryHosting>)arg1 ;
-(NSDictionary *)enrolledSupplementaryFramesDict;
@end
