/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <libobjc.A.dylib/NSCollectionViewDataSource.h>
#import <libobjc.A.dylib/NSCollectionViewDelegateFlowLayout.h>

@protocol SiriUIReviewsViewControllerDelegate;
@class SALocalSearchReviewList, NSMutableArray, NSCollectionView, SiriUIScrollView, NSView, NSString;

@interface SiriUIReviewsViewController : SiriUISnippetViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout> {

	SALocalSearchReviewList* _reviewList;
	NSMutableArray* _cellSizeForRowCache;
	NSCollectionView* _collectionView;
	SiriUIScrollView* _scrollView;
	struct {
		unsigned didLoadCollectionView : 1;
		unsigned viewForRatingForReview : 1;
		unsigned offsetForRatingView : 1;
	}  _delegateFlags;
	id<SiriUIReviewsViewControllerDelegate> _reviewsDelegate;
	long long _reviewCharacterLimit;
	NSView* _totalRatingView;
	double _verticalSpaceNeededForRatingView;
	NSView* _providerView;
	NSString* _providerName;
	UIOffset _totalRatingViewOffset;
	UIOffset _providerViewOffset;

}

@property (assign,nonatomic,__weak) id<SiriUIReviewsViewControllerDelegate> reviewsDelegate;              //@synthesize reviewsDelegate=_reviewsDelegate - In the implementation block
@property (nonatomic,retain) SALocalSearchReviewList * reviewList;                                        //@synthesize reviewList=_reviewList - In the implementation block
@property (assign,nonatomic) long long reviewCharacterLimit;                                              //@synthesize reviewCharacterLimit=_reviewCharacterLimit - In the implementation block
@property (nonatomic,retain) NSView * totalRatingView;                                                    //@synthesize totalRatingView=_totalRatingView - In the implementation block
@property (assign,nonatomic) UIOffset totalRatingViewOffset;                                              //@synthesize totalRatingViewOffset=_totalRatingViewOffset - In the implementation block
@property (assign,nonatomic) double verticalSpaceNeededForRatingView;                                     //@synthesize verticalSpaceNeededForRatingView=_verticalSpaceNeededForRatingView - In the implementation block
@property (nonatomic,retain) NSView * providerView;                                                       //@synthesize providerView=_providerView - In the implementation block
@property (assign,nonatomic) UIOffset providerViewOffset;                                                 //@synthesize providerViewOffset=_providerViewOffset - In the implementation block
@property (nonatomic,copy) NSString * providerName;                                                       //@synthesize providerName=_providerName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 shouldChangeItemsAtIndexPaths:(id)arg2 toHighlightState:(long long)arg3 ;
-(id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(SALocalSearchReviewList *)reviewList;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)siriDidLayoutSnippetView;
-(void)setProviderView:(NSView *)arg1 ;
-(NSView *)providerView;
-(UIOffset)providerViewOffset;
-(void)setProviderViewOffset:(UIOffset)arg1 ;
-(void)updateSubtitle;
-(id)_displayStringForReviewCount:(long long)arg1 providerName:(id)arg2 providerView:(id)arg3 ;
-(NSEdgeInsets)_reviewCollectionInsets;
-(long long)_numberOfCells;
-(long long)_numberOfColumnsForWidth:(double)arg1 ;
-(double)_horizontalCellSpacing;
-(CGSize)_sizeForCellAtIndex:(long long)arg1 forWidth:(double)arg2 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(id)_punchoutForIndexPath:(id)arg1 ;
-(long long)_rowForItemAtIndex:(long long)arg1 forWidth:(double)arg2 ;
-(void)setReviewsDelegate:(id<SiriUIReviewsViewControllerDelegate>)arg1 ;
-(double)_minCellWidth;
-(double)_effectiveContentWidthForItemCellsForWidth:(double)arg1 ;
-(long long)_numberOfRowsForWidth:(double)arg1 ;
-(Class)headerViewClass;
-(void)didEndDisplayingReusableHeaderView:(id)arg1 ;
-(id<SiriUIReviewsViewControllerDelegate>)reviewsDelegate;
-(long long)reviewCharacterLimit;
-(void)setReviewCharacterLimit:(long long)arg1 ;
-(NSView *)totalRatingView;
-(void)setTotalRatingView:(NSView *)arg1 ;
-(UIOffset)totalRatingViewOffset;
-(void)setTotalRatingViewOffset:(UIOffset)arg1 ;
-(double)verticalSpaceNeededForRatingView;
-(void)setVerticalSpaceNeededForRatingView:(double)arg1 ;
@end

