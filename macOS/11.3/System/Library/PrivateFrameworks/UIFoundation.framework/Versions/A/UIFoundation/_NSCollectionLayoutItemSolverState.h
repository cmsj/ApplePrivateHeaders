/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCollectionLayoutAuxiliaryOffsets;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSArray, NSDictionary, _NSRTree;

@interface _NSCollectionLayoutItemSolverState : NSObject {

	NSArray* _itemFrames;
	NSArray* _auxiliaryFrames;
	NSDictionary* _supplementaryDictByKindIndex;
	id<_NSCollectionLayoutAuxiliaryOffsets> _supplementaryFrameOffsets;
	_NSRTree* _geometricIndexer;
	NSArray* _solutionFrames;
	long long _itemFrameCount;
	long long _supplementaryFrameCount;
	NSArray* _availableLayoutSpaces;
	CGRect _solvedFittingFrame;

}

@property (nonatomic,readonly) NSArray * solutionFrames;                                                       //@synthesize solutionFrames=_solutionFrames - In the implementation block
@property (nonatomic,readonly) _NSRTree * geometricIndexer;                                                    //@synthesize geometricIndexer=_geometricIndexer - In the implementation block
@property (nonatomic,readonly) long long itemFrameCount;                                                       //@synthesize itemFrameCount=_itemFrameCount - In the implementation block
@property (nonatomic,readonly) long long supplementaryFrameCount;                                              //@synthesize supplementaryFrameCount=_supplementaryFrameCount - In the implementation block
@property (nonatomic,readonly) NSArray * availableLayoutSpaces;                                                //@synthesize availableLayoutSpaces=_availableLayoutSpaces - In the implementation block
@property (nonatomic,readonly) CGRect solvedFittingFrame;                                                      //@synthesize solvedFittingFrame=_solvedFittingFrame - In the implementation block
@property (nonatomic,readonly) NSArray * itemFrames;                                                           //@synthesize itemFrames=_itemFrames - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryFrames;                                                      //@synthesize auxiliaryFrames=_auxiliaryFrames - In the implementation block
@property (nonatomic,readonly) NSDictionary * supplementaryDictByKindIndex;                                    //@synthesize supplementaryDictByKindIndex=_supplementaryDictByKindIndex - In the implementation block
@property (nonatomic,readonly) id<_NSCollectionLayoutAuxiliaryOffsets> supplementaryFrameOffsets;              //@synthesize supplementaryFrameOffsets=_supplementaryFrameOffsets - In the implementation block
-(NSArray *)itemFrames;
-(long long)itemFrameCount;
-(NSArray *)availableLayoutSpaces;
-(NSArray *)solutionFrames;
-(long long)supplementaryFrameCount;
-(NSArray *)auxiliaryFrames;
-(id<_NSCollectionLayoutAuxiliaryOffsets>)supplementaryFrameOffsets;
-(CGRect)solvedFittingFrame;
-(id)initWithSolutionFrames:(id)arg1 itemFrameCount:(long long)arg2 supplementaryFrameCount:(long long)arg3 availableLayoutSpaces:(id)arg4 solvedFittingFrame:(CGRect)arg5 ;
-(_NSRTree *)geometricIndexer;
-(NSDictionary *)supplementaryDictByKindIndex;
-(void)_generateGeometricIndexer;
-(void)_generateMemoizedSolutionFramesBasedData;
@end
