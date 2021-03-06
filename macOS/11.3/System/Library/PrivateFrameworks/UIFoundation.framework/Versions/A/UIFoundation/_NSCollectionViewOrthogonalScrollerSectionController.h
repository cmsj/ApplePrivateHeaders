/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSScrollViewDelegate.h>

@class _NSCollectionViewCore, NSMapTable, NSHashTable, NSIndexSet, NSScrollView, NSString;

@interface _NSCollectionViewOrthogonalScrollerSectionController : NSObject <NSScrollViewDelegate> {

	_NSCollectionViewCore* _collectionView;
	NSMapTable* _scrollViewFromSectionMap;
	NSMapTable* _scrollViewToSectionMap;
	NSHashTable* _frontMostElements;
	NSIndexSet* _currentOrthogonalSectionIndexes;
	NSScrollView* _scrollViewCurrentlyBeingConfigured;

}

@property (assign,nonatomic,__weak) _NSCollectionViewCore * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewFromSectionMap;                                       //@synthesize scrollViewFromSectionMap=_scrollViewFromSectionMap - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewToSectionMap;                                         //@synthesize scrollViewToSectionMap=_scrollViewToSectionMap - In the implementation block
@property (nonatomic,retain) NSHashTable * frontMostElements;                                             //@synthesize frontMostElements=_frontMostElements - In the implementation block
@property (nonatomic,retain) NSIndexSet * currentOrthogonalSectionIndexes;                                //@synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes - In the implementation block
@property (nonatomic,retain) NSScrollView * scrollViewCurrentlyBeingConfigured;                           //@synthesize scrollViewCurrentlyBeingConfigured=_scrollViewCurrentlyBeingConfigured - In the implementation block
@property (setter=_setWantsPageAlignedHorizontalAxis:) char _wantsPageAlignedHorizontalAxis; 
@property (setter=_setWantsPageAlignedVerticalAxis:) char _wantsPageAlignedVerticalAxis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewBeganMomentum:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)scrollView:(id)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6 ;
-(_NSCollectionViewCore *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(_NSCollectionViewCore *)arg1 ;
-(char)isElementInOrthogonalScrollingSection:(id)arg1 ;
-(void)addElementIfNeeded:(id)arg1 ;
-(void)performLayout;
-(void)removeEmptyScrollViews;
-(id)_sectionScrollViewForSection:(long long)arg1 ;
-(void)reconfigureOrthogonalSectionsForUpdate:(id)arg1 ;
-(id)_sectionScrollViewForIndexPath:(id)arg1 ;
-(id)_addSectionScrollViewForIndexPath:(id)arg1 ;
-(NSMapTable *)scrollViewFromSectionMap;
-(CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2 ;
-(NSScrollView *)scrollViewCurrentlyBeingConfigured;
-(void)setScrollViewCurrentlyBeingConfigured:(NSScrollView *)arg1 ;
-(void)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(NSEdgeInsets)arg3 ;
-(void)setScrollViewFromSectionMap:(NSMapTable *)arg1 ;
-(void)setScrollViewToSectionMap:(NSMapTable *)arg1 ;
-(void)setCurrentOrthogonalSectionIndexes:(NSIndexSet *)arg1 ;
-(id)_addSectionScrollViewForSection:(long long)arg1 ;
-(void)contentViewDidScroll:(id)arg1 ;
-(NSMapTable *)scrollViewToSectionMap;
-(void)_forceElementsOnTopAsNeeded;
-(char)isIndexPathInOrthogonalScrollingSection:(id)arg1 ;
-(void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2 ;
-(id)_managedScrollViews;
-(NSHashTable *)frontMostElements;
-(void)setFrontMostElements:(NSHashTable *)arg1 ;
-(NSIndexSet *)currentOrthogonalSectionIndexes;
@end

