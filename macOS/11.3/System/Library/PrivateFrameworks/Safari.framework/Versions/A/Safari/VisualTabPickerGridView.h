/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/VisualTabPickerTileContainerDataSource.h>
#import <libobjc.A.dylib/VisualTabPickerTileContainerDelegate.h>
#import <libobjc.A.dylib/VisualTabPickerLayoutEngineInputProvider.h>

@protocol VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate;
@class FlippedView, NSMutableArray, VisualTabPickerLayoutEngine, NSMapTable, VisualTabPickerViewController, NSString;

@interface VisualTabPickerGridView : NSView <VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate, VisualTabPickerLayoutEngineInputProvider> {

	FlippedView* _gridContainerView;
	NSMutableArray* _tileContainerViews;
	NSMutableArray* _tabViewItems;
	VisualTabPickerLayoutEngine* _layoutEngine;
	char _didStartEntryAnimation;
	NSMapTable* _webViewThumbnailViewReuseDictionary;
	char _gridAnimationInProgress;
	id<VisualTabPickerGridViewDataSource> _dataSource;
	id<VisualTabPickerGridViewDelegate> _delegate;
	VisualTabPickerViewController* _visualTabPickerViewController;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerGridViewDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerGridViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VisualTabPickerViewController * visualTabPickerViewController;              //@synthesize visualTabPickerViewController=_visualTabPickerViewController - In the implementation block
@property (nonatomic,readonly) char gridAnimationInProgress;                                                    //@synthesize gridAnimationInProgress=_gridAnimationInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VisualTabPickerGridViewDelegate>)delegate;
-(void)setDelegate:(id<VisualTabPickerGridViewDelegate>)arg1 ;
-(id<VisualTabPickerGridViewDataSource>)dataSource;
-(void)setDataSource:(id<VisualTabPickerGridViewDataSource>)arg1 ;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)accessibilityIdentifier;
-(void)reloadGridView;
-(CGRect)frameOfSelectedTile;
-(void)startGridAnimation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateGridViewLayout;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerViewController:(id)arg2 ;
-(double)gridViewContentHeight;
-(VisualTabPickerViewController *)visualTabPickerViewController;
-(void)setVisualTabPickerViewController:(VisualTabPickerViewController *)arg1 ;
-(void)_reloadGridView;
-(char)gridAnimationInProgress;
-(void)reloadTabViewItem:(id)arg1 ;
-(void)removeTabViewItem:(id)arg1 ;
-(void)addTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)hideCloseButtons;
-(void)_setUpGridContainer;
-(void)_resetGridView;
-(void)_setUpContainerViews;
-(unsigned long long)_indexForContainerView:(id)arg1 ;
-(void)_startGridAnimation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_willStartExitAnimation;
-(void)_unhideAllTiles;
-(void)_dispatchMouseEventToTileContainers:(id)arg1 ;
-(unsigned long long)_indexOfContainerForTabViewItem:(id)arg1 ;
-(unsigned long long)_numberOfTilesInGridView;
-(void)_hideTilesNotVisibleDuringExitAnimation;
-(NSRange)_rangeOfVisibleTiles;
-(char)_shouldDisplayNewTabContainer;
-(void)_computeArrayOfTabItemsPerContainer;
-(void)_addCreateNewTabContainerView;
-(unsigned long long)numberOfTilesForLayoutEngine:(id)arg1 ;
-(CGRect)boundsForLayoutEngine:(id)arg1 ;
-(double)tileHeightToWidthRatioForLayoutEngine:(id)arg1 ;
-(char)layoutEngineShouldLayOutRightToLeft:(id)arg1 ;
-(void)_updateVisibilityOfTileContainerViews;
-(void)reloadGridViewClearingReuseCache:(char)arg1 ;
-(void)_addContainerViewAtIndex:(unsigned long long)arg1 isVisible:(char)arg2 isFocused:(char)arg3 ;
-(id)_containerViewForTabItem:(id)arg1 ;
-(id)_tabViewItemForContainerView:(id)arg1 ;
-(long long)_muteButtonStateForMutableMediaState:(unsigned long long)arg1 audioMuted:(char)arg2 mediaCaptureMuted:(char)arg3 ;
-(id)titleForVisualTabPickerTileContainerView:(id)arg1 ;
-(id)tileViewForVisualTabPickerTileContainerView:(id)arg1 lowResolution:(char)arg2 ;
-(CGRect)visibleBoundsForVisualTabPickerTileContainerView:(id)arg1 ;
-(char)visualTabPickerTileContainerViewShouldShowMuteButton:(id)arg1 ;
-(long long)muteButtonStateForVisualTabPickerTileContainerView:(id)arg1 ;
-(id)siteIconForVisualTabPickerTileContainerView:(id)arg1 ;
-(char)visualTabPickerTileContainerViewCanClose:(id)arg1 ;
-(void)visualTabPickerTileContainerViewDidClose:(id)arg1 ;
-(void)visualTabPickerTileContainerViewDidSelect:(id)arg1 ;
-(void)visualTabPickerTileContainerViewDidRequestNewTab:(id)arg1 ;
-(void)visualTabPickerTileContainerViewDidToggleMuteButton:(id)arg1 ;
-(void)updateMuteButtonForTab:(id)arg1 ;
-(void)updateIconForTab:(id)arg1 ;
-(id)_destinationTileContainerView;
-(double)_toolbarHeight;
-(void)visibleBoundsDidChange;
@end

