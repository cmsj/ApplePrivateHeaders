/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/_NSCollectionCompositionalLayoutSolverResolveResult.h>

@protocol _NSCollectionCompositionalLayoutSolverResolveResult <NSObject>
@property (nonatomic,readonly) CGPoint contentOffsetAdjustment; 
@property (nonatomic,readonly) CGSize contentSizeAdjustment; 
@required
-(CGPoint)contentOffsetAdjustment;
-(CGSize)contentSizeAdjustment;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface _NSCollectionCompositionalLayoutSolverResolveResult : NSObject <_NSCollectionCompositionalLayoutSolverResolveResult> {

	NSMutableDictionary* _insertedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _insertedDecorationElementKindIndexPathsDict;
	NSMutableDictionary* _deletedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _deletedDecorationElementKindIndexPathsDict;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;

}

@property (assign,nonatomic) CGPoint contentOffsetAdjustment;              //@synthesize contentOffsetAdjustment=_contentOffsetAdjustment - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjustment;                 //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGPoint)contentOffsetAdjustment;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(CGSize)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(CGSize)arg1 ;
-(void)addDeletedAuxiliaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(char)arg3 ;
-(void)addInsertedAuxiliaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(char)arg3 ;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1 ;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1 ;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1 ;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1 ;
@end

