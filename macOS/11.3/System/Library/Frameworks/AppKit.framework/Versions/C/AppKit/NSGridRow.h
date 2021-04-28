/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSGridView, NSMutableArray, NSLayoutYAxisAnchor;

@interface NSGridRow : NSObject <NSCoding> {

	NSGridView* _owningGridView;
	NSMutableArray* _cells;
	NSLayoutYAxisAnchor* _top;
	long long _yPlacement;
	long long _rowAlignment;
	long long _hasContentInGeneration;
	double _height;
	double _topPadding;
	double _bottomPadding;
	char _hidden;

}

@property (__weak,readonly) NSGridView * gridView; 
@property (readonly) long long numberOfCells; 
@property (assign) long long yPlacement; 
@property (assign) long long rowAlignment; 
@property (assign) double height; 
@property (assign) double topPadding; 
@property (assign) double bottomPadding; 
@property (getter=isHidden) char hidden; 
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(long long)index;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(double)topPadding;
-(void)setTopPadding:(double)arg1 ;
-(double)bottomPadding;
-(void)setBottomPadding:(double)arg1 ;
-(NSGridView *)gridView;
-(void)mergeCellsInRange:(NSRange)arg1 ;
-(void)setRowAlignment:(long long)arg1 ;
-(void)setYPlacement:(long long)arg1 ;
-(void)_removedFromGridView;
-(id)_cellAtIndex:(long long)arg1 allocatingIfNeeded:(char)arg2 ;
-(void)_sanityCheck;
-(void)_forEachCell:(/*^block*/id)arg1 ;
-(void)set_hasContentInGeneration:(long long)arg1 ;
-(long long)yPlacement;
-(long long)_hasContentInGeneration;
-(id)_topContentAnchor;
-(id)_bottomContentAnchor;
-(id)cellAtIndex:(long long)arg1 ;
-(id)_removeCellAtIndex:(long long)arg1 ;
-(void)_insertCell:(id)arg1 atIndex:(long long)arg2 ;
-(void)_didDeleteColumnAtIndex:(long long)arg1 ;
-(id)initWithGridView:(id)arg1 ;
-(void)_setViews:(id)arg1 ;
-(void)_didInsertColumn:(id)arg1 atIndex:(long long)arg2 ;
-(long long)rowAlignment;
-(id)_previousVisibleRow;
-(id)_topBoundaryAnchor;
-(id)_nextVisibleRow;
-(id)_findBottomBoundaryAnchorAndContentOffset:(double*)arg1 ;
-(long long)numberOfCells;
-(id)_bottomBoundaryAnchor;
@end
