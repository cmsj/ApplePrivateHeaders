/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableArray, _NSFlowLayoutInfo, NSMutableSet, NSArray;

@interface _NSFlowLayoutSection : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _rows;
	NSEdgeInsets _sectionMargins;
	double _verticalInterstice;
	double _horizontalInterstice;
	CGRect _headerFrame;
	CGRect _footerFrame;
	double _headerDimension;
	double _footerDimension;
	_NSFlowLayoutInfo* _layoutInfo;
	char _isValid;
	CGRect _frame;
	CGRect _validRect;
	CGRect _rectToKeepValid;
	NSRange _validItemRange;
	NSMutableSet* _invalidatedIndexPaths;
	SCD_Struct_NS37 _rowAlignmentOptions;
	char _fixedItemSize;
	CGSize _itemSize;
	double _otherMargin;
	double _beginMargin;
	double _endMargin;
	double _actualGap;
	double _lastRowBeginMargin;
	double _lastRowEndMargin;
	double _lastRowActualGap;
	char _lastRowIncomplete;
	long long _itemsCount;
	long long _itemsByRowCount;
	long long _indexOfIncompleteRow;
	char _isCollapsed;
	double _scrollOffset;
	char _recommendedAboutShowingSectionCollapseButton;
	char _lastRecommendationWasShowSectionCollapseButton;

}

@property (nonatomic,readonly) NSMutableArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rows;                                             //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) double verticalInterstice;                                           //@synthesize verticalInterstice=_verticalInterstice - In the implementation block
@property (assign,nonatomic) double horizontalInterstice;                                         //@synthesize horizontalInterstice=_horizontalInterstice - In the implementation block
@property (assign,nonatomic) NSEdgeInsets sectionMargins;                                         //@synthesize sectionMargins=_sectionMargins - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                        //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                  //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect footerFrame;                                                  //@synthesize footerFrame=_footerFrame - In the implementation block
@property (nonatomic,readonly) double headerDimension;                                            //@synthesize headerDimension=_headerDimension - In the implementation block
@property (nonatomic,readonly) double footerDimension;                                            //@synthesize footerDimension=_footerDimension - In the implementation block
@property (nonatomic,readonly) CGRect effectiveHeaderFrameWithSectionMarginsApplied; 
@property (nonatomic,readonly) CGRect effectiveFooterFrameWithSectionMarginsApplied; 
@property (assign,nonatomic,__weak) _NSFlowLayoutInfo * layoutInfo;                               //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_NS37 rowAlignmentOptions;                                 //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) char fixedItemSize;                                                  //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) double otherMargin;                                                //@synthesize otherMargin=_otherMargin - In the implementation block
@property (nonatomic,readonly) double beginMargin;                                                //@synthesize beginMargin=_beginMargin - In the implementation block
@property (nonatomic,readonly) double endMargin;                                                  //@synthesize endMargin=_endMargin - In the implementation block
@property (nonatomic,readonly) double actualGap;                                                  //@synthesize actualGap=_actualGap - In the implementation block
@property (nonatomic,readonly) double lastRowBeginMargin;                                         //@synthesize lastRowBeginMargin=_lastRowBeginMargin - In the implementation block
@property (nonatomic,readonly) double lastRowEndMargin;                                           //@synthesize lastRowEndMargin=_lastRowEndMargin - In the implementation block
@property (nonatomic,readonly) double lastRowActualGap;                                           //@synthesize lastRowActualGap=_lastRowActualGap - In the implementation block
@property (nonatomic,readonly) char lastRowIncomplete;                                            //@synthesize lastRowIncomplete=_lastRowIncomplete - In the implementation block
@property (assign,nonatomic) long long itemsCount;                                                //@synthesize itemsCount=_itemsCount - In the implementation block
@property (nonatomic,readonly) long long itemsByRowCount;                                         //@synthesize itemsByRowCount=_itemsByRowCount - In the implementation block
@property (nonatomic,readonly) long long indexOfIncompleteRow;                                    //@synthesize indexOfIncompleteRow=_indexOfIncompleteRow - In the implementation block
@property (nonatomic,readonly) NSRange validItemRange;                                            //@synthesize validItemRange=_validItemRange - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
@property (nonatomic,readonly) unsigned long long rowsCount; 
@property (assign,getter=isCollapsed,nonatomic) char collapsed; 
@property (assign,nonatomic) double scrollOffset;                                                 //@synthesize scrollOffset=_scrollOffset - In the implementation block
-(id)init;
-(void)invalidate;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(char)isCollapsed;
-(NSMutableArray *)items;
-(void)setCollapsed:(char)arg1 ;
-(id)rowsInRect:(CGRect)arg1 ;
-(id)snapshot;
-(void)setItemSize:(CGSize)arg1 ;
-(CGRect)headerFrame;
-(CGSize)itemSize;
-(_NSFlowLayoutInfo *)layoutInfo;
-(void)logInvalidSizesForHorizontalDirection:(char)arg1 warnAboutDelegateValues:(char)arg2 ;
-(NSEdgeInsets)sectionMargins;
-(id)addRowAtEnd:(char)arg1 ;
-(void)setFixedItemSize:(char)arg1 ;
-(void)fixupLastRowItemAlignment;
-(void)setEstimatedSize:(CGSize)arg1 forSection:(long long)arg2 ;
-(void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3 ;
-(void)computeLayoutInRect:(CGRect)arg1 forSection:(long long)arg2 invalidating:(char)arg3 invalidationContext:(id)arg4 ;
-(long long)estimatedIndexOfItemAtPoint:(CGPoint)arg1 ;
-(void)logInvalidSizes;
-(void)updateEstimatedSizeForSection:(long long)arg1 ;
-(CGRect)footerFrame;
-(NSRange)validItemRange;
-(NSMutableArray *)rows;
-(void)setLayoutInfo:(_NSFlowLayoutInfo *)arg1 ;
-(void)addInvalidatedIndexPath:(id)arg1 ;
-(double)beginMargin;
-(double)actualGap;
-(long long)itemsCount;
-(NSArray *)invalidatedIndexPaths;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)_computeLayoutForSectionIndex:(long long)arg1 rightToLeft:(char)arg2 minimumWidth:(double)arg3 ;
-(void)setHeaderDimension:(double)arg1 forSection:(long long)arg2 ;
-(void)setFooterDimension:(double)arg1 forSection:(long long)arg2 ;
-(CGRect)effectiveHeaderFrameWithSectionMarginsApplied;
-(CGRect)effectiveFooterFrameWithSectionMarginsApplied;
-(id)addItem;
-(id)copyFromLayoutInfo:(id)arg1 ;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3 ;
-(unsigned long long)rowsCount;
-(unsigned long long)rowIndexForItemAtIndex:(unsigned long long)arg1 ;
-(void)transformItemIfInCollapsedRowEndZone:(id)arg1 ;
-(double)verticalInterstice;
-(void)setVerticalInterstice:(double)arg1 ;
-(double)horizontalInterstice;
-(void)setHorizontalInterstice:(double)arg1 ;
-(void)setSectionMargins:(NSEdgeInsets)arg1 ;
-(double)headerDimension;
-(double)footerDimension;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(void)setFooterFrame:(CGRect)arg1 ;
-(SCD_Struct_NS37)rowAlignmentOptions;
-(void)setRowAlignmentOptions:(SCD_Struct_NS37)arg1 ;
-(char)fixedItemSize;
-(double)otherMargin;
-(double)endMargin;
-(double)lastRowBeginMargin;
-(double)lastRowEndMargin;
-(double)lastRowActualGap;
-(char)lastRowIncomplete;
-(long long)indexOfIncompleteRow;
-(void)setItemsCount:(long long)arg1 ;
-(long long)itemsByRowCount;
-(double)scrollOffset;
-(void)setScrollOffset:(double)arg1 ;
@end
