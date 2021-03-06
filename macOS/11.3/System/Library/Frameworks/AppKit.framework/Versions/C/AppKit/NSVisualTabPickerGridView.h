/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSVisualTabPickerTileContainerDataSource.h>
#import <libobjc.A.dylib/NSVisualTabPickerTileContainerDelegate.h>

@protocol NSVisualTabPickerGridViewDataSource, NSVisualTabPickerGridViewDelegate;
@class NSView, NSMutableArray, NSMutableDictionary, NSVisualTabPickerRootViewController, NSString;

@interface NSVisualTabPickerGridView : NSView <NSVisualTabPickerTileContainerDataSource, NSVisualTabPickerTileContainerDelegate> {

	NSView* _gridContainerView;
	NSMutableArray* _tileContainerViews;
	NSMutableArray* _arrayOfTabItemsPerContainer;
	NSMutableArray* _additionalVerticalOffsetForTilesAtRow;
	NSMutableDictionary* _cachedSnapshots;
	unsigned long long _currentMaximumNumberOfContainersPerRow;
	double _leadingGridOffset;
	double _tileWidth;
	double _tileHeight;
	char _didStartEntryAnimation;
	id<NSVisualTabPickerGridViewDataSource> _dataSource;
	id<NSVisualTabPickerGridViewDelegate> _delegate;
	NSVisualTabPickerRootViewController* _visualTabPickerViewController;
	char _shouldDisplayHostnameForThumbnailContainers;
	char _gridAnimationInProgress;
	char _shouldShowNewTabButton;
	char _shouldHighlightTiles;
	char _shouldShowCloseButtons;

}

@property (assign,nonatomic,__weak) id<NSVisualTabPickerGridViewDataSource> dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NSVisualTabPickerGridViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSVisualTabPickerRootViewController * visualTabPickerViewController;              //@synthesize visualTabPickerViewController=_visualTabPickerViewController - In the implementation block
@property (nonatomic,readonly) char shouldDisplayHostnameForThumbnailContainers;                                      //@synthesize shouldDisplayHostnameForThumbnailContainers=_shouldDisplayHostnameForThumbnailContainers - In the implementation block
@property (nonatomic,readonly) char gridAnimationInProgress;                                                          //@synthesize gridAnimationInProgress=_gridAnimationInProgress - In the implementation block
@property (assign,nonatomic) char shouldShowNewTabButton;                                                             //@synthesize shouldShowNewTabButton=_shouldShowNewTabButton - In the implementation block
@property (assign,nonatomic) char shouldHighlightTiles;                                                               //@synthesize shouldHighlightTiles=_shouldHighlightTiles - In the implementation block
@property (assign,nonatomic) char shouldShowCloseButtons;                                                             //@synthesize shouldShowCloseButtons=_shouldShowCloseButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSVisualTabPickerGridViewDelegate>)delegate;
-(void)setDelegate:(id<NSVisualTabPickerGridViewDelegate>)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)accessibilityAttributeNames;
-(id<NSVisualTabPickerGridViewDataSource>)dataSource;
-(void)setDataSource:(id<NSVisualTabPickerGridViewDataSource>)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)reloadGridView;
-(CGRect)frameOfSelectedTile;
-(void)startGridAnimation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateGridViewLayout;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerViewController:(id)arg2 ;
-(void)setShouldShowNewTabButton:(char)arg1 ;
-(void)setShouldHighlightTiles:(char)arg1 ;
-(void)setShouldShowCloseButtons:(char)arg1 ;
-(double)gridViewContentHeight;
-(id)_tabPickerThumbnailViews;
-(NSVisualTabPickerRootViewController *)visualTabPickerViewController;
-(void)setVisualTabPickerViewController:(NSVisualTabPickerRootViewController *)arg1 ;
-(char)shouldShowNewTabButton;
-(char)shouldHighlightTiles;
-(char)shouldShowCloseButtons;
-(char)gridAnimationInProgress;
-(void)reloadTabViewItem:(id)arg1 ;
-(void)selectTabBarItem:(id)arg1 ;
-(void)selectedTabDidChange;
-(void)removeTabViewItem:(id)arg1 ;
-(void)addTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)hideCloseButtons;
-(unsigned long long)_numberOfRows;
-(id)titleForNSVisualTabPickerTileContainerView:(id)arg1 ;
-(unsigned long long)numberOfTilesInNSVisualTabPickerTileContainerView:(id)arg1 ;
-(id)visualTabPickerTileContainerView:(id)arg1 titleForTileAtIndex:(unsigned long long)arg2 ;
-(id)visualTabPickerTileContainerView:(id)arg1 viewForTileAtIndex:(unsigned long long)arg2 ;
-(id)visualTabPickerTileContainerView:(id)arg1 imageForTileAtIndex:(unsigned long long)arg2 ;
-(char)visualTabPickerTileContainerView:(id)arg1 highlightStateForTileAtIndex:(unsigned long long)arg2 ;
-(char)canCloseNSVisualTabPickerTileContainerView:(id)arg1 ;
-(void)visualTabPickerTileContainerView:(id)arg1 didSelectTileAtIndex:(unsigned long long)arg2 ;
-(void)visualTabPickerTileContainerView:(id)arg1 closeTileAtIndex:(unsigned long long)arg2 ;
-(void)didRequestNewTabForNSVisualTabPickerTileContainerView:(id)arg1 ;
-(char)shouldDisplayHostnameForThumbnailContainers;
-(void)_setUpGridContainer;
-(void)_updateTilePositions;
-(void)_resetGridView;
-(void)_setUpContainerViews;
-(void)_updateSize;
-(void)_addContainerViewAtIndex:(unsigned long long)arg1 isVisible:(char)arg2 ;
-(void)_containerViewForTabItem:(id)arg1 containerView:(id*)arg2 indexInContainerView:(unsigned long long*)arg3 ;
-(unsigned long long)_indexForContainerView:(id)arg1 ;
-(double)_additionalHeightTakenByStackedTilesForRow:(unsigned long long)arg1 ;
-(void)_computeLayoutConstants;
-(CGRect)_frameForTileAtIndex:(unsigned long long)arg1 ;
-(void)_startGridAnimation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_willStartExitAnimation;
-(void)_unhideAllTiles;
-(void)_entryAnimationHasFinished;
-(id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerView:(id)arg2 ;
-(void)_dispatchMouseEventToTileContainers:(id)arg1 ;
-(unsigned long long)_indexOfContainerForTabViewItem:(id)arg1 ;
-(unsigned long long)_numberOfTilesInGridView;
-(void)_hideTilesNotVisibleDuringExitAnimation;
-(NSRange)_rangeOfVisibleTiles;
-(unsigned long long)_maximumNumberOfContainersPerRow;
-(double)_horizontalMargin;
-(void)_getHorizontalLeadingOffset:(double*)arg1 trailingOffset:(double*)arg2 ;
-(char)_shouldDisplayNewTabContainer;
-(id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerAtIndex:(unsigned long long)arg2 ;
-(void)_computeArrayOfTabItemsPerContainer;
-(void)_addCreateNewTabContainerView;
@end

