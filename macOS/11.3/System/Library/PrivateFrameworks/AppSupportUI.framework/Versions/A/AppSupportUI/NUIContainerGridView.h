/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/Versions/A/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@class NSMutableArray, NSArray, NSString;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {

	NSMutableArray* _viewRows;
	NUIGridArrangement* _arrangement;
	SCD_Struct_NU11 _visibleCount;
	map<NSView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, const std::__1::pair<_NSRange, _NSRange>>>>* _viewRanges;
	CGSize _spacing;
	NSMutableArray* _rows;
	NSMutableArray* _columns;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
		unsigned inInsertOrRemove : 1;
		unsigned hasMutations : 1;
	}  _gridViewFlags;
	double _rowHeight;
	double _columnWidth;

}

@property (nonatomic,copy) NSArray * arrangedSubviewRows; 
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (assign,nonatomic) long long horizontalDistribution; 
@property (assign,nonatomic) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (assign,nonatomic) double rowHeight;                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double columnWidth;                            //@synthesize columnWidth=_columnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerGridViewWithArrangedSubviewRows:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfColumns;
-(void)removeRowAtIndex:(long long)arg1 ;
-(void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(long long)numberOfRows;
-(id)columnAtIndex:(long long)arg1 ;
-(void)setRowSpacing:(double)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(id)rowAtIndex:(long long)arg1 ;
-(double)rowSpacing;
-(double)columnSpacing;
-(void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)removeColumnAtIndex:(long long)arg1 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(void)setColumnWidth:(double)arg1 ;
-(double)columnWidth;
-(void)setBaselineRelativeArrangement:(char)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>>*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>>*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>>*)arg2 axis:(long long)arg3 ;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
-(void)getColumnRange:(NSRange*)arg1 rowRange:(NSRange*)arg2 forArrangedSubview:(id)arg3 ;
-(char)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1 ;
-(id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(id)addRowWithArrangedSubviews:(id)arg1 ;
-(id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(char)setNeedsInvalidation:(long long)arg1 ;
-(id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2 ;
-(id)arrangedDescription;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg1 ;
-(id)debugDictionary;
-(void)ensureArrangedSubviewsAreValid;
-(NSArray *)arrangedSubviewRows;
-(void)setArrangedSubviewRows:(NSArray *)arg1 ;
-(long long)rowIndexForArrangedSubview:(id)arg1 ;
-(long long)columnIndexForArrangedSubview:(id)arg1 ;
-(id)addColumnWithArrangedSubviews:(id)arg1 ;
-(void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3 ;
-(void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2 ;
-(long long)horizontalDistribution;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(long long)verticalDistribution;
-(void)setVerticalDistribution:(long long)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
@end

