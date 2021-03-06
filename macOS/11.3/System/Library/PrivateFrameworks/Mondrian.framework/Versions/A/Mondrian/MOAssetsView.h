/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/MOMediaViewDataSource.h>
#import <libobjc.A.dylib/MOMediaViewDelegate.h>
#import <libobjc.A.dylib/MOAssetsMediaViewDelegate.h>

@protocol MOAssetsViewDataSource, MOAssetsViewDelegate;
@class MOAssetsMediaView, NSColor, NSTrackingArea, NSView, MOMediaItem, CAMediaTimingFunction, NSResponder, NSIndexPath, NSString;

@interface MOAssetsView : NSView <MOMediaViewDataSource, MOMediaViewDelegate, MOAssetsMediaViewDelegate> {

	long long _memoryStatus;
	id _memoryPressureMonitor;
	char _waitingForCanPerformChanges;
	double _backingScaleFactor;
	MOAssetsMediaView* _mediaView;
	NSColor* _backgroundColor;
	NSTrackingArea* _photosCellsTrackingArea;
	NSView* _lastHitPhotosCellOrHeader;
	long long _lastHitSectionIndex;
	MOMediaItem* _restorationAnchorMediaItem;
	double _restorationAnchorDeltaX;
	double _restorationAnchorDeltaY;
	char _numberOfColumnsIsChanging;
	struct {
		unsigned needsReload : 1;
		unsigned isReloading : 1;
		unsigned viewIsPrepared : 1;
		unsigned inLiveResize : 1;
		unsigned dataSourceNumberOfSections : 1;
		unsigned dataSourceMediaSectionAtIndexPath : 1;
		unsigned dataSourceCellReuseIdentifierAtIndexPath : 1;
		unsigned dataSourceSupplementaryViewReuseIdentifierOfKindAtIndexPath : 1;
		unsigned delegateMainHeaderClassForStyle;
		unsigned delegateCellClassForStyle;
		unsigned delegateHeaderClassForStyle;
		unsigned delegateMainFooterClassForStyle;
		unsigned delegateShouldShowMainHeader : 1;
		unsigned delegateMainHeaderHeight : 1;
		unsigned delegateShouldShowMainFooter;
		unsigned delegateMainFooterTitle;
		unsigned delegateMainFooterInfo;
		unsigned delegateMainFooterHeight;
		unsigned dataSourceCanMoveItemsAtIndexPaths : 1;
		unsigned dataSourceMoveItemsAtIndexPathsToIndexPaths : 1;
		unsigned dataSourceAllowedDropPositionsForItemsAtIndexPathsMovedToIndexPath : 1;
		unsigned dataSourceDragOperationForItemsAtIndexPathsMovedOntoItemAtIndexPath : 1;
		unsigned delegateInitialIndexPath : 1;
		unsigned delegateWillChangeToStyle : 1;
		unsigned delegateDidChangeFromStyle : 1;
		unsigned delegateCustomStyleLayoutForAssetsView : 1;
		unsigned delegateCustomStyleCellClassesForAssetsView : 1;
		unsigned delegateCustomStyleSupplementaryViewClassesForAssetsView : 1;
		unsigned delegateWillUpdateCell : 1;
		unsigned delegateDidUpdateCell : 1;
		unsigned delegateWillUpdateSupplementaryView : 1;
		unsigned delegateDidUpdateSupplementaryView : 1;
		unsigned delegateWillDisplayCell : 1;
		unsigned delegateDidEndDisplayingCell : 1;
		unsigned delegateShouldShowHeaderAtIndexPath : 1;
		unsigned delegateShouldShowFooterAtIndexPath : 1;
		unsigned delegateMouseDownWithEvent : 1;
		unsigned delegateBackgroundClickedWithEvent : 1;
		unsigned delegateBackgroundRightClickedWithEvent : 1;
		unsigned delegateMagnifyWithEvent : 1;
		unsigned delegateAssetWasRightClickedAtIndexPathWithEvent : 1;
		unsigned delegateAssetWasDoubleClickedAtIndexPathWithEvent : 1;
		unsigned delegateIndexPathsForMediaItems : 1;
		unsigned delegateSelectionWillChange : 1;
		unsigned delegateSelectionDidChange : 1;
		unsigned delegateWillEnterModalSelectionMode : 1;
		unsigned delegateDidEnterModalSelectionMode : 1;
		unsigned delegateWillExitModalSelectionMode : 1;
		unsigned delegateDidExitModalSelectionMode : 1;
		unsigned delegateMouseEnteredSectionIndexWithEvent : 1;
		unsigned delegateMouseExitedSectionIndexWithEvent : 1;
		unsigned delegateShouldSelectItemAtIndexPath : 1;
		unsigned delegateShouldDeselectItemAtIndexPath : 1;
		unsigned delegateDidSelectItemAtIndexPath : 1;
		unsigned delegateDidDeselectItemAtIndexPath : 1;
		unsigned delegateDidChangeSelectionByAddingRemoving : 1;
		unsigned delegateSectionsForSelectAllAction : 1;
		unsigned delegateVisibleMediaItemsHaveChanged : 1;
		unsigned delegateLoadingThumbnail : 1;
		unsigned delegateWillBeginScrolling : 1;
		unsigned delegateDidScroll : 1;
		unsigned delegateDidEndScrolling : 1;
		unsigned delegateDidEndScrollingAnimation : 1;
		unsigned delegateCanFinallyPerformChanges : 1;
		unsigned delegateUpdatesLayoutOnDrag : 1;
		unsigned delegateImageForDraggedItemAtIndexPath : 1;
		unsigned delegatePasteboardWriterForItemAtIndexPath : 1;
		unsigned delegateDraggingItemForIndexPathProposedDraggingItem : 1;
		unsigned delegatePreferredDraggingFormation : 1;
		unsigned delegateCreatedDraggingSessionForItemsAtIndexPaths : 1;
		unsigned delegateDraggingSessionSourceOperationMaskForDraggingContext : 1;
		unsigned delegateDraggingSessionWillBeginAtPoint : 1;
		unsigned delegateDraggingSessionMovedToPoint : 1;
		unsigned delegateDraggingSessionEndedAtPointDragOperation : 1;
		unsigned delegateDragSourceIdentifier : 1;
		unsigned delegatePrepareForDragOperation : 1;
		unsigned delegatePerformDragOperation : 1;
		unsigned delegateDraggingEntered : 1;
		unsigned delegateDraggingUpdated : 1;
		unsigned delegateDraggingExited : 1;
		unsigned delegateDraggingEnded : 1;
	}  _mediaViewFlags;
	char _internalDropEnabled;
	char _displaysNewerPhotosAtBottom;
	unsigned long long _style;
	id<MOAssetsViewDataSource> _dataSource;
	id<MOAssetsViewDelegate> _delegate;
	CAMediaTimingFunction* _defaultAnimationTimingFunction;
	long long _globalPerformCount;

}

@property (assign) long long globalPerformCount;                                                  //@synthesize globalPerformCount=_globalPerformCount - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MOAssetsViewDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<MOAssetsViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char rearrangingEnabled; 
@property (assign,nonatomic) double rearrangingPreviewDelay; 
@property (assign,nonatomic) char internalDropEnabled;                                            //@synthesize internalDropEnabled=_internalDropEnabled - In the implementation block
@property (assign,nonatomic) char externalDropEnabled; 
@property (nonatomic,readonly) NSResponder * preferredFirstResponder; 
@property (nonatomic,retain) CAMediaTimingFunction * defaultAnimationTimingFunction;              //@synthesize defaultAnimationTimingFunction=_defaultAnimationTimingFunction - In the implementation block
@property (assign,nonatomic) char displaysNewerPhotosAtBottom;                                    //@synthesize displaysNewerPhotosAtBottom=_displaysNewerPhotosAtBottom - In the implementation block
@property (getter=isPositionedAtBottom,nonatomic,readonly) char positionedAtBottom; 
@property (assign,nonatomic) char allowsSelection; 
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (assign,nonatomic) char allowsEmptySelection; 
@property (assign,nonatomic) char allowsContinuousSelection; 
@property (assign,nonatomic) char allowsLassoSelection; 
@property (nonatomic,readonly) NSIndexPath * lastRightClickedIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(Class)scrollerClass;
+(Class)mainFooterClassForStyle:(unsigned long long)arg1 ;
+(Class)headerClassForStyle:(unsigned long long)arg1 ;
+(Class)cellClassForStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<MOAssetsViewDelegate>)delegate;
-(void)setDelegate:(id<MOAssetsViewDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setBackgroundColor:(id)arg1 ;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentInsets:(NSEdgeInsets)arg1 ;
-(id<MOAssetsViewDataSource>)dataSource;
-(void)reloadData;
-(void)viewDidMoveToWindow;
-(void)setDataSource:(id<MOAssetsViewDataSource>)arg1 ;
-(long long)numberOfSections;
-(id)indexPathsForVisibleItems;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(char)inLiveResize;
-(char)allowsMultipleSelection;
-(char)allowsEmptySelection;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)updateTrackingAreas;
-(void)viewDidChangeBackingProperties;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)setAllowsSelection:(char)arg1 ;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)indexPathsForSelectedItems;
-(char)allowsSelection;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(NSResponder *)preferredFirstResponder;
-(id)mediaView;
-(void)reloadData:(char)arg1 ;
-(double)rearrangingPreviewDelay;
-(void)setRearrangingPreviewDelay:(double)arg1 ;
-(unsigned long long)numberOfSelectedItems;
-(char)selectedItemAtIndexPath:(id)arg1 ;
-(void)selectAllItems:(char)arg1 ;
-(void)deselectAllItems:(char)arg1 ;
-(void)_viewCleanup;
-(void)_viewPrepare;
-(char)allowsContinuousSelection;
-(void)setAllowsContinuousSelection:(char)arg1 ;
-(char)allowsLassoSelection;
-(void)setAllowsLassoSelection:(char)arg1 ;
-(NSIndexPath *)lastRightClickedIndexPath;
-(void)setHiddenIndexPaths:(id)arg1 ;
-(void)waitUntilVisibleContentIsPrepared:(double)arg1 includingBest:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConcurrencyEnabled:(char)arg1 ;
-(id)_thumbnailAtIndexPath:(id)arg1 ;
-(char)rearrangingEnabled;
-(void)setRearrangingEnabled:(char)arg1 ;
-(char)externalDropEnabled;
-(void)setExternalDropEnabled:(char)arg1 ;
-(void)scrollToBeginning:(char)arg1 ;
-(void)scrollToEnd:(char)arg1 ;
-(id)visibleMediaItems;
-(id)indexPathsForAllItems;
-(void)selectItemsAtIndexPaths:(id)arg1 animated:(char)arg2 ;
-(void)setModalSelectionMode:(char)arg1 ;
-(char)inModalSelectionMode;
-(void)_updateContentsInResponseToUserInitiatedSizeChange;
-(void)cancelAllOperations:(/*^block*/id)arg1 ;
-(void)mediaView:(id)arg1 didUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5 ;
-(CGPoint)mediaView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(void)mediaView:(id)arg1 willUpdateCell:(id)arg2 withMediaItem:(id)arg3 atIndexPath:(id)arg4 ;
-(void)mediaView:(id)arg1 didUpdateCell:(id)arg2 withMediaItem:(id)arg3 atIndexPath:(id)arg4 ;
-(void)mediaView:(id)arg1 willUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5 ;
-(void)mediaView:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)mediaView:(id)arg1 didEndDisplayingCell:(id)arg2 atIndexPath:(id)arg3 ;
-(char)mediaView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)mediaView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)mediaView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)mediaView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)mediaViewSelectionWillChange:(id)arg1 ;
-(void)mediaViewSelectionDidChange:(id)arg1 ;
-(void)mediaView:(id)arg1 indexPathsForSelectedItemsDidAdd:(id)arg2 remove:(id)arg3 animated:(char)arg4 ;
-(id)sectionsForSelectAllActionInMediaView:(id)arg1 ;
-(void)mediaViewBackgroundWasRightClicked:(id)arg1 withEvent:(id)arg2 ;
-(void)mediaViewWillBeginScrolling:(id)arg1 ;
-(void)mediaViewDidScroll:(id)arg1 ;
-(void)mediaViewDidEndScrolling:(id)arg1 ;
-(void)mediaViewDidEndScrollingAnimation:(id)arg1 ;
-(void)mediaView:(id)arg1 mouseDownWithEvent:(id)arg2 ;
-(void)mediaView:(id)arg1 itemWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3 ;
-(void)mediaView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3 ;
-(void)mediaViewWillEnterModalSelectionMode:(id)arg1 ;
-(void)mediaViewDidEnterModalSelectionMode:(id)arg1 ;
-(void)mediaViewWillExitModalSelectionMode:(id)arg1 ;
-(void)mediaViewDidExitModalSelectionMode:(id)arg1 ;
-(long long)numberOfSectionsInMediaView:(id)arg1 ;
-(id)mediaView:(id)arg1 mediaSectionAtIndexPath:(id)arg2 ;
-(id)mediaView:(id)arg1 cellReuseIdentifierAtIndexPath:(id)arg2 ;
-(id)mediaView:(id)arg1 supplementaryViewReuseIdentifierOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)mediaView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)mediaView:(id)arg1 mediaItemAtIndexPath:(id)arg2 ;
-(void)_didResignActiveNotification:(id)arg1 ;
-(void)_willTerminateNotification:(id)arg1 ;
-(void)_didEnterFullScreenNotification:(id)arg1 ;
-(void)_didExitFullScreenNotification:(id)arg1 ;
-(void)_memoryPressureHandler;
-(void)_scrollToInitialPositionOfMediaView:(id)arg1 animated:(char)arg2 ;
-(void)performBlockAnimationsIfNecessary:(/*^block*/id)arg1 animated:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_updateMomentsFooter:(id)arg1 ;
-(void)updateMomentsFooter;
-(char)shouldPerformChanges;
-(char)mediaView:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2 ;
-(char)mediaViewUpdatesLayoutOnDrag:(id)arg1 ;
-(char)mediaView:(id)arg1 shouldExchangeItemsAtIndexPaths:(id)arg2 withProposedIndexPaths:(id)arg3 ;
-(id)mediaView:(id)arg1 draggingItemForIndexPath:(id)arg2 proposedDraggingItem:(id)arg3 ;
-(id)mediaView:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2 ;
-(id)mediaView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2 ;
-(unsigned long long)mediaView:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3 ;
-(void)mediaView:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3 ;
-(void)mediaView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 ;
-(void)mediaView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(CGPoint)arg3 ;
-(void)mediaView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4 ;
-(id)dragSourceIdentifierForMediaView:(id)arg1 ;
-(char)mediaView:(id)arg1 prepareForDragOperation:(id)arg2 ;
-(char)mediaView:(id)arg1 performDragOperation:(id)arg2 ;
-(unsigned long long)mediaView:(id)arg1 draggingEntered:(id)arg2 ;
-(unsigned long long)mediaView:(id)arg1 draggingUpdated:(id)arg2 ;
-(void)mediaView:(id)arg1 draggingExited:(id)arg2 ;
-(void)mediaView:(id)arg1 draggingEnded:(id)arg2 ;
-(CGPoint)_layoutPointFromWindowPoint:(CGPoint)arg1 ;
-(id)_cellHitByEvent:(id)arg1 ;
-(id)_headerViewHitByEvent:(id)arg1 ;
-(id)_cellOrHeaderHitByEvent:(id)arg1 ;
-(long long)sectionIndexHitByWindowPoint:(CGPoint)arg1 ;
-(id)_simulatedEventForMouseEntered:(char)arg1 ;
-(void)_forceMouseExitedState;
-(void)_processPossiblePhotosCellInteractionFromEvent:(id)arg1 ;
-(void)_stopTrackingMouseInPhotosCells;
-(void)_startTrackingMouseInPhotosCells;
-(char)displaysNewerPhotosAtBottom;
-(void)setDisplaysNewerPhotosAtBottom:(char)arg1 ;
-(long long)globalPerformCount;
-(void)setGlobalPerformCount:(long long)arg1 ;
-(char)assetsMediaView:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2 ;
-(char)assetsMediaView:(id)arg1 shouldShowFooterAtIndexPath:(id)arg2 ;
-(char)shouldShowMainHeaderForAssetsMediaView:(id)arg1 ;
-(double)mainHeaderHeightForAssetsMediaView:(id)arg1 width:(double)arg2 scale:(double)arg3 ;
-(char)shouldShowMainFooterForAssetsMediaView:(id)arg1 includingWhenInBounds:(char*)arg2 ;
-(id)mainFooterTitleForAssetsMediaView:(id)arg1 ;
-(id)mainFooterInfoForAssetsMediaView:(id)arg1 ;
-(double)mainFooterHeightForAssetsMediaView:(id)arg1 width:(double)arg2 scale:(double)arg3 ;
-(CGSize)assetsMediaView:(id)arg1 recommendedCellSizeForThumbnailSize:(CGSize)arg2 inMaxSize:(CGSize)arg3 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 style:(unsigned long long)arg3 ;
-(id)_newLayoutForStyle:(unsigned long long)arg1 ;
-(void)setStyle:(unsigned long long)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setStyle:(unsigned long long)arg1 animated:(char)arg2 ignoreReloadData:(char)arg3 completion:(/*^block*/id)arg4 ;
-(char)showsHeaders;
-(void)assetsViewRegisterForDraggedTypes:(id)arg1 ;
-(char)isPositionedAtBottom;
-(void)reloadDataWithDataSourceUpdateBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadDataWithDataSourceUpdateBlock:(/*^block*/id)arg1 invalidate:(char)arg2 restore:(char)arg3 selectedIndexPathsProvidingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_reloadDataWithDataSourceUpdateBlock:(/*^block*/id)arg1 invalidate:(char)arg2 restore:(char)arg3 selectedIndexPathsProvidingBlock:(/*^block*/id)arg4 topMediaItem:(id)arg5 topDeltaPoint:(CGPoint)arg6 traceToken:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)prepareForReloadData:(/*^block*/id)arg1 ;
-(void)_getHasFooter:(char*)arg1 includingWhenInbounds:(char*)arg2 footerHeight:(double*)arg3 mediaView:(id)arg4 ;
-(void)_scrollToBeginningOfMediaView:(id)arg1 animated:(char)arg2 ;
-(void)_scrollToEndOfMediaView:(id)arg1 animated:(char)arg2 ;
-(void)_scrollPageDownInMediaView:(id)arg1 ;
-(void)_scrollPageUpInMediaView:(id)arg1 ;
-(void)scrollToInitialPosition:(char)arg1 ;
-(unsigned long long)numberOfColumnsDisplayed;
-(void)_updateAssetsViewSinceNumberOfColumnsChanged;
-(void)_cancelUpdateAssetsViewSinceNumberOfColumnsChanged;
-(id)_firstVisibleAnchorIndexPath:(char)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 interactive:(char)arg2 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)refreshItemThumbnailAtIndexPaths:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateItemMetadataAtIndexPaths:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSectionHeaderMetadataAtIndexPaths:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyCanPerformChangesIfPossible;
-(char)shouldPerformChangesOrNotifyWhenReady;
-(void)performBatchDataSourceUpdates:(/*^block*/id)arg1 presentationUpdates:(/*^block*/id)arg2 restore:(char)arg3 selectedIndexPathsProvidingBlock:(/*^block*/id)arg4 animated:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)_performBatchDataSourceUpdates:(/*^block*/id)arg1 presentationUpdates:(/*^block*/id)arg2 selectedIndexPathsProvidingBlock:(/*^block*/id)arg3 traceToken:(id)arg4 animated:(char)arg5 completion:(/*^block*/id)arg6 ;
-(CGRect)visibleThumbnailFrameForItemAtIndexPath:(id)arg1 ;
-(CGPoint)assetsViewPointForLayoutPoint:(CGPoint)arg1 ;
-(CGPoint)layoutPointForAssetsViewPoint:(CGPoint)arg1 ;
-(long long)mediaView:(id)arg1 allowedDropPositionsForItemsAtIndexPaths:(id)arg2 movedToIndexPath:(id)arg3 ;
-(unsigned long long)mediaView:(id)arg1 dragOperationForItemsAtIndexPaths:(id)arg2 movedOntoIndexPath:(id)arg3 ;
-(void)mediaView:(id)arg1 moveItemsAtIndexPaths:(id)arg2 toIndexPath:(id)arg3 dropPosition:(long long)arg4 ;
-(long long)preferredDraggingFormationForMediaView:(id)arg1 ;
-(char)internalDropEnabled;
-(void)setInternalDropEnabled:(char)arg1 ;
-(CAMediaTimingFunction *)defaultAnimationTimingFunction;
-(void)setDefaultAnimationTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

