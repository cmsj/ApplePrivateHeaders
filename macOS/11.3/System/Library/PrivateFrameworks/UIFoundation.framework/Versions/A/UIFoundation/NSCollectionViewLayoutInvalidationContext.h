/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSArray, NSSet, NSDictionary;

@interface NSCollectionViewLayoutInvalidationContext : NSObject {

	NSMutableSet* _invalidatedItemIndexPaths;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	NSArray* _updateItems;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;
	struct {
		unsigned invalidateDataSource : 1;
		unsigned invalidateEverything : 1;
		unsigned initiatedFromReloadData : 1;
		unsigned retainExistingSizingInfoForEstimates : 1;
	}  _invalidationContextFlags;
	long long _intent;

}

@property (assign,setter=_setInvalidateDataSourceCounts:,nonatomic) char invalidateDataSourceCounts; 
@property (assign,setter=_setInvalidateEverything:,nonatomic) char invalidateEverything; 
@property (assign,setter=_setUpdateItems:,getter=_updateItems,nonatomic) NSArray * updateItems; 
@property (assign,setter=_setInitiatedFromReloadData:,getter=_initiatedFromReloadData,nonatomic) char initiatedFromReloadData; 
@property (assign,setter=_setRetainExistingSizingInfoForEstimates:,getter=_retainExistingSizingInfoForEstimates,nonatomic) char retainExistingSizingInfoForEstimates; 
@property (assign,setter=_setIntent:,getter=_intent,nonatomic) long long intent;                                                                                                   //@synthesize intent=_intent - In the implementation block
@property (readonly) NSSet * invalidatedItemIndexPaths; 
@property (readonly) NSDictionary * invalidatedSupplementaryIndexPaths; 
@property (readonly) NSDictionary * invalidatedDecorationIndexPaths; 
@property (assign) CGPoint contentOffsetAdjustment; 
@property (assign) CGSize contentSizeAdjustment; 
-(char)invalidateEverything;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(char)_initiatedFromReloadData;
-(void)_setInitiatedFromReloadData:(char)arg1 ;
-(char)_retainExistingSizingInfoForEstimates;
-(void)_setRetainExistingSizingInfoForEstimates:(char)arg1 ;
-(id)_invalidatedSupplementaryViews;
-(void)_setInvalidatedSupplementaryViews:(id)arg1 ;
-(void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(NSSet *)invalidatedItemIndexPaths;
-(NSDictionary *)invalidatedSupplementaryIndexPaths;
-(void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(NSDictionary *)invalidatedDecorationIndexPaths;
-(char)invalidateDataSourceCounts;
-(void)_setInvalidateDataSourceCounts:(char)arg1 ;
-(void)_setInvalidateEverything:(char)arg1 ;
-(void)_setUpdateItems:(id)arg1 ;
-(id)_updateItems;
-(CGPoint)contentOffsetAdjustment;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(CGSize)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(CGSize)arg1 ;
-(long long)_intent;
-(void)_setIntent:(long long)arg1 ;
@end

