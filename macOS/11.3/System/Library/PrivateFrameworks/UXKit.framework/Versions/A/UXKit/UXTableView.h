/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXCollectionView.h>

@protocol UXTableViewDataSource, UXTableViewDelegate;
@class NSIndexPath, NSMenu, NSColor;

@interface UXTableView : UXCollectionView {

	struct {
		unsigned delegateImplementsTitleForHeaderInSection : 1;
		unsigned delegateImplementsTitleForFooterInSection : 1;
		unsigned delegateImplementsHeaderViewForSection : 1;
		unsigned delegateImplementsFooterViewForSection : 1;
		unsigned delegateImplementsHeightForHeaderInSection : 1;
		unsigned delegateImplementsHeightForRowAtIndexPath : 1;
		unsigned delegateImplementsDidSelectionRowAtIndexPath : 1;
		unsigned delegateImplementsShouldHighlightRowAtIndexPath : 1;
		unsigned delegateImplementsDidHighlightRowAtIndexPath : 1;
		unsigned delegateImplementsDidUnhighlightRowAtIndexPath : 1;
		unsigned delegateImplementsEditingStyleForRowAtIndexPath : 1;
		unsigned delegateImplementsDidDeselectRowAtIndexPath : 1;
	}  _tableViewDelegateFlags;
	struct {
		unsigned dataSourceImplementsNumberOfSectionsInTableView : 1;
		unsigned dataSourceImplementsCanEditRowAtIndexPath : 1;
		unsigned dataSourceImplementsCommitEditingStyleForRowAtIndexPath : 1;
	}  _tableViewDataSourceFlags;
	NSIndexPath* _highlightedIndexPath;
	NSMenu* _observedMenu;
	char __floatingHeadersDisabled;
	id<UXTableViewDataSource> _tableViewDataSource;
	id<UXTableViewDelegate> _tableViewDelegate;
	double _rowHeight;
	long long _separatorStyle;
	NSColor* _separatorColor;
	NSEdgeInsets _separatorInset;

}

@property (assign,getter=isUserInteractionEnabled,nonatomic) char userInteractionEnabled; 
@property (assign,setter=_setFloatingHeadersDisabled:,nonatomic) char _floatingHeadersDisabled;              //@synthesize _floatingHeadersDisabled=__floatingHeadersDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<UXTableViewDataSource> tableViewDataSource;                           //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UXTableViewDelegate> tableViewDelegate;                               //@synthesize tableViewDelegate=_tableViewDelegate - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                               //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) long long separatorStyle;                                                       //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,copy) NSColor * separatorColor;                                                         //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) NSEdgeInsets separatorInset;                                                    //@synthesize separatorInset=_separatorInset - In the implementation block
+(Class)documentClass;
+(unsigned long long)collectionViewScrollPositionFromScrollPosition:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)setDataSource:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)sizeToFit;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(double)alpha;
-(void)moveRight:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(NSColor *)separatorColor;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_menuDidEndTracking:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)_menuDidBeginTracking:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)setSeparatorColor:(NSColor *)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(char)isUserInteractionEnabled;
-(void)setSeparatorStyle:(long long)arg1 ;
-(long long)separatorStyle;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(NSEdgeInsets)separatorInset;
-(void)setSeparatorInset:(NSEdgeInsets)arg1 ;
-(void)selectRowAtIndexPath:(id)arg1 animated:(char)arg2 scrollPosition:(long long)arg3 ;
-(id)indexPathForSelectedRow;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(char)arg3 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)indexPathsForVisibleRows;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(id)headerViewForSection:(long long)arg1 ;
-(id)footerViewForSection:(long long)arg1 ;
-(void)registerClass:(Class)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2 ;
-(void)setTableViewDataSource:(id<UXTableViewDataSource>)arg1 ;
-(id<UXTableViewDataSource>)tableViewDataSource;
-(char)overdrawEnabled;
-(void)setOverdrawEnabled:(char)arg1 ;
-(void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3 ;
-(void)_setFloatingHeadersDisabled:(char)arg1 ;
-(id)dequeueReusableHeaderFooterViewWithReuseIdentifier:(id)arg1 forSection:(long long)arg2 ;
-(id)indexPathForClickedRow;
-(void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidBeginFloatingAtIndexPath:(id)arg3 kind:(id)arg4 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidEndFloatingAtIndexPath:(id)arg3 kind:(id)arg4 ;
-(void)_checkForAccessoryViewsInScrollerAreas;
-(id<UXTableViewDelegate>)tableViewDelegate;
-(void)setTableViewDelegate:(id<UXTableViewDelegate>)arg1 ;
-(char)_floatingHeadersDisabled;
@end
