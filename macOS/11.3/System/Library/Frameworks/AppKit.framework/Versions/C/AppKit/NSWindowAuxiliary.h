/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSAppearanceCustomization, NSSidebarTrackingAdapter;
#import <AppKit/AppKit-Structs.h>
@class NSString, NSDockTile, NSViewHierarchyLock, NSUndoManager, NSRecursiveLock, NSMapTable, NSView, NSRegion, NSWindow, NSMutableArray, NSResizeMoveHelper, NSSheetMoveHelper, NSColorSpace, NSColor, NSMutableSet, NSDictionary, _NSWindowFullScreenContentController, _NSWindowTransformAnimation, NSResponder, NSInspectorBar, NSEvent, NSDisplayCycleObserver, NSWindowController, _NSWindowAnimator, NSData, NSViewController, NSScreen, NSMutableDictionary, NSSnappingInfo, NSObject, NSWindowTitleController, NSTrackingSeparatorToolbarItem;

@interface NSWindowAuxiliary : NSObject {

	NSString* _userInterfaceItemIdentifier;
	NSDockTile* dockTile;
	unsigned _rememberedFirstResponderState;
	NSViewHierarchyLock* viewHierarchyLock;
	NSUndoManager* undoManager;
	NSRecursiveLock* responderLock;
	id _rememberedFirstResponder;
	NSMapTable* _threadContexts;
	NSView* _lastFocusRingView;
	NSRegion* _lastFocusRingBleedRegion;
	NSWindow* docWindow;
	NSWindow* sheetWindow;
	NSMutableArray* _attachedSheets;
	NSMutableArray* _queuedSheets;
	NSString* dockWindowTitle;
	CGPoint stashedOrigin;
	NSResizeMoveHelper* _resizeMoveHelper;
	NSSheetMoveHelper* _sheetMoveHelper;
	void* windowHandlerRef;
	void* rootMetricsHandlerRef;
	unsigned autoPositionMask;
	short _toolTipDisabledCount;
	unsigned short _delayedDisplayDisableCount;
	NSColorSpace* colorSpace;
	double alpha;
	CGPoint collapsedOrigin;
	id _bindingAdaptor;
	NSView* _lastOtherHit;
	NSColor* compositedPattern;
	struct {
		unsigned hasShadow : 1;
		unsigned forceActiveControls : 1;
		unsigned minimized : 1;
		unsigned keepChildrenAttached : 1;
		unsigned explicitCollectionBehavior : 1;
		unsigned resigningKeyFocusOnly : 1;
		unsigned miniWindowTitleIsAGuess : 1;
		unsigned dontSyncSurfaceToView : 1;
		unsigned windowPositionIsStale : 1;
		unsigned handlingDisplayChanged : 1;
		unsigned screenUpdatedDuringDisplayChange : 1;
		unsigned locationIsTemporary : 1;
		unsigned canHide : 1;
		unsigned isOpaque : 1;
		unsigned receivedDockDeathNotification : 1;
		unsigned minimizeCompleted : 1;
		unsigned minimizeFailed : 1;
		unsigned windowClosed : 1;
		unsigned omouseupPending : 1;
		unsigned borderViewHasDisplayName : 1;
		unsigned delegateReturnsFieldEditor : 1;
		unsigned ownsRealWindow : 1;
		unsigned mightBeMovingClientSide : 1;
		unsigned defaultButtonSuppressed : 1;
		unsigned movableByBackground : 1;
		unsigned preventsActivation : 1;
		unsigned ignoresMouseEvents : 1;
		unsigned keyWindowIgnoringFocus : 1;
		unsigned currentDepth : 4;
		unsigned __unusedAlso____________ : 3;
		unsigned allowsToolTipsWhenApplicationIsInactive : 1;
		unsigned needsToSetIgnoreTag : 1;
		unsigned needsToResetDragMargins : 1;
		unsigned occlusionStateIsVisible : 1;
		unsigned needsToRemoveFieldEditor : 1;
		unsigned wantsHideOnDeactivate : 1;
		unsigned aspectRatioForContent : 1;
		unsigned resizeIncrementsForContent : 1;
		unsigned minSizeForContent : 1;
		unsigned maxSizeForContent : 1;
		unsigned modalIsActive : 1;
		unsigned excludedFromVisibleWindowList : 1;
		unsigned preservesContentDuringLiveResize : 1;
		unsigned autorecalculatesKeyViewLoop : 1;
		unsigned keyViewLoopNeedsRecalc : 1;
		unsigned keyViewGroupBoundaryNeedRecalc : 1;
		unsigned keyViewRedirectionDisabled : 1;
		unsigned displaysWhenScreenProfileChanges : 1;
		unsigned hidesToolbarButton : 1;
		unsigned dirtyDefaultButtonCell : 1;
		unsigned noDefaultButton : 1;
		unsigned allowsCursorRectsWhenInactive : 1;
		unsigned sharesParentKeyState : 1;
		unsigned canBecomeVisibleWithoutLogin : 1;
		unsigned trackingAreasDirty : 1;
		unsigned wantsMouseMoveEventsInBackground : 1;
		unsigned sharingType : 2;
		unsigned preferredBackingLocation : 2;
		unsigned orderOutInProgress : 1;
		unsigned movable : 1;
		unsigned modeDisablesServerSideDrag : 1;
		unsigned showsLockButton : 1;
		unsigned wasCGOrderingEnabled : 1;
		unsigned wasReshapingEnabled : 1;
		unsigned autorecalculatesTopBorderThickness : 1;
		unsigned autorecalculatesBottomBorderThickness : 1;
		unsigned resizeWeighting : 2;
		unsigned showsTopBorderSeparator : 1;
		unsigned showsBottomBorderSeparator : 1;
		unsigned lightBottomGradient : 1;
		unsigned titlebarAppearsTransparent : 1;
		unsigned hasCornerMask : 1;
		unsigned hasBorderViewsCornerMask : 1;
		unsigned autoLayerBackedBorderView : 1;
		unsigned shouldSnapSizeWhenResizing : 1;
		unsigned shouldUnSnapSizeWhenResizing : 1;
		unsigned __adobeRetained : 1;
		unsigned gatheringActiveGestureRecognizers : 1;
		unsigned sendingQuickLookToResponders : 1;
		unsigned deferredQuickLook : 1;
		unsigned shadowStyle : 6;
		unsigned pendingTrackingAreas : 1;
		unsigned handlingInvalidCursorRects : 1;
		unsigned allowsConcurrentViewDrawing : 1;
		unsigned anyViewCanDrawConcurrently : 1;
		unsigned preventsAppTerminationWhenModal : 1;
		unsigned explicitColorSpace : 1;
		unsigned orderFrontAnimationType : 4;
		unsigned orderOutAnimationType : 4;
		unsigned isRestorable : 1;
		unsigned hasInvalidRestorableState : 1;
		unsigned hasEverHadInvalidRestorableState : 1;
		unsigned contentsHaveInvalidPersistentState : 1;
		unsigned existedAtLaunch : 1;
		unsigned alphaHasChanged : 1;
		unsigned suppressWillOrderOffScreenNotification : 1;
		unsigned ignoresMouseEventsIsSetOrClearedExplicitly : 1;
		unsigned movedOffscreen : 1;
		unsigned accessibilityTitleCellRemoved : 1;
		unsigned doingCacheDisplayInRect : 1;
		unsigned ignoreCurrentEvent : 1;
		unsigned sharesParentFirstResponder : 1;
		unsigned inLayoutPass : 1;
		unsigned viewsConstraintsAreClean : 1;
		unsigned viewsLayoutDependentMetricsAreClean : 1;
		unsigned forceMainAppearance : 1;
		unsigned RTLLayoutDirection : 1;
		unsigned forceInactiveShadow : 1;
		unsigned isInactiveRevisionWindow : 1;
		unsigned isClosed : 1;
		unsigned currentLiveResizeEdges : 4;
		unsigned wantsFullScreenModeIfAppropriate : 1;
		unsigned wasVisibleBeforeMinimization : 1;
		unsigned delegateRespondsToWillEncodeRestorableState : 1;
		unsigned wasActiveBeforeCurrentEvent : 1;
		unsigned hasKeyAppearance : 1;
		unsigned hasMainAppearance : 1;
		unsigned shouldHaveKeyAppearance : 1;
		unsigned shouldHaveMainAppearance : 1;
		unsigned hasKeyFocus : 1;
		unsigned hasMainFocus : 1;
		unsigned canHostLayersInWindowServer : 1;
		unsigned hostsLayersInWindowServer : 1;
		unsigned hasIncompatibleAppearanceOverride : 1;
		unsigned stoleKeyFocus : 1;
		unsigned documentShowsPanelOnClose : 1;
		unsigned usesPointIntegralizationForLayout : 1;
		unsigned spaceAssignmentDone : 1;
		unsigned disableUserInteraction : 1;
		unsigned hasWeakTitleBindingToContentViewController : 1;
		unsigned titleVisibility : 3;
		unsigned titlePosition : 3;
		unsigned toolbarStyle : 3;
		unsigned titlebarSeparatorStyle : 2;
		unsigned contentTitlebarSeparatorStyle : 2;
		unsigned autoFlatteningDisabled : 1;
		unsigned minFullScreenContentSizeSet : 1;
		unsigned maxFullScreenContentSizeSet : 1;
		unsigned measuringMinFullScreenContentSize : 1;
		unsigned isRemovingFromParentWindow : 1;
		unsigned overrideIsOnActiveSpace : 1;
		unsigned shouldCleanupFullScreen : 1;
		unsigned isSnapping : 1;
		unsigned windowIsMoving : 1;
		unsigned snapSizeTimerStarted : 1;
		unsigned alwaysOnTop : 1;
		unsigned ignoreResignFirstResponder : 1;
		unsigned startShowingWindowDockingFeedbackScheduled : 1;
		unsigned preventSetFrameScreenReassignment : 1;
		unsigned selectActiveShadow : 1;
		unsigned isInHiddenWindowTab : 1;
		unsigned temporarilyIgnoreMoves : 1;
		unsigned ignoreWindowStackController : 1;
		unsigned isPerformingRestoration : 1;
		unsigned hasTimeMachineDelegate : 1;
		unsigned layoutUpdateObserverScheduled : 1;
		unsigned RTLLayoutDirectionWasSet : 1;
		unsigned windowWillJoinActiveFullScreenSpace : 1;
		unsigned hasExplicitTabbingIdentifier : 1;
		unsigned firstResponderIsWeak : 1;
		unsigned ignoreResignMainEvent : 1;
		unsigned minimizedInFullScreen : 1;
		unsigned isImplicitlyDetachedFromParent : 1;
		unsigned isRegisteredWithSectionController : 1;
		unsigned fullScreenSidebarUsesWithinWindowBlending : 1;
		unsigned tabbedFullHeightSidebarsAreIndependent : 1;
		unsigned hasCreatedUndoManager : 1;
	}  _auxWFlags;
	void* _windowRef;
	double _scaleFactor;
	CFArrayRef _mouseMovedListeners;
	NSRegion* _needsDisplayRegion;
	NSRegion* _deferredNeedsDisplayRegion;
	CGRect userFrame;
	NSMutableSet* _customFieldEditors;
	NSMutableArray* childWindows;
	NSMutableArray* childOrdering;
	NSMutableArray* _touchListeners;
	NSDictionary* _animationsDictionary;
	id clientSideDragMonitor;
	NSView* _latchedViewForScrollEvents;
	_NSWindowFullScreenContentController* _fullScreenContentController;
	_NSWindowTransformAnimation* _runningWindowTransformAnimation;
	long long _animationBehavior;
	Class restorationClass;
	unsigned persistentUIWindowID;
	unsigned movementGroupID;
	CGSize movementGroupOffset;
	NSView* titleFieldPlaceholderView;
	/*^block*/id transformDidCompleteHandler;
	CFRunLoopObserverRef _windowDragTypeObserver;
	NSResponder* savedFirstResponder;
	NSInspectorBar* inspectorBar;
	NSZone* cursorZone;
	unsigned long long fullScreenPresentationOptions;
	unsigned long long _hostsLayersInWindowServerSuspensions;
	long long _viewScrollingCount;
	CGSize _layoutMinSize;
	CGSize _layoutMaxSize;
	CGSize _layoutSlightlyMinSize;
	CGSize _layoutSlightlyMaxSize;
	CFRunLoopObserverRef _tilingUpdateObserver;
	unsigned long long _liveResizeCount;
	NSMutableArray* _activeGestureRecognizers;
	NSView* _activeGestureRecognizersStartView;
	NSEvent* _activeGestureRecognizersStartEvent;
	unsigned long long _activeGestureRecognizerEvents;
	unsigned long long _previousGestureEventMaskBeforeRecognizers;
	long long _lastGestureRecognizerPressureMTID;
	long long _willDisplayBeforeEndOfCurrentRunloopPassCount;
	NSDisplayCycleObserver* _updateConstraintsObserver;
	unsigned long long _lastUpdateConstraintsCycleIdentifier;
	unsigned long long _lastUpdateConstraintsCycleCount;
	NSDisplayCycleObserver* _layoutObserver;
	unsigned long long _lastLayoutCycleIdentifier;
	unsigned long long _lastLayoutCycleCount;
	NSDisplayCycleObserver* _displayObserver;
	unsigned long long _lastDisplayCycleIdentifier;
	unsigned long long _lastDisplayCycleCount;
	NSDisplayCycleObserver* _updateStructuralRegionsObserver;
	unsigned long long _lastUpdateStructuralRegionsCycleIdentifier;
	unsigned long long _lastUpdateStructuralRegionsCycleCount;
	unsigned long long _viewCount;
	id _cgsWindow;
	NSWindowController* _windowController;
	_NSWindowAnimator* _animator;
	NSWindow* _parentWindow;
	NSData* _lastDragRegionData;
	NSViewController* _contentViewController;
	NSScreen* _savedScreen;
	NSDictionary* _cachedShadowParameters;
	NSMutableDictionary* _windowLayoutsByScreenLayout;
	NSMutableDictionary* _cachedStandardButtons;
	long long _tabbingMode;
	unsigned long long _collectionBehavior;
	unsigned long long _lastAppliedCollectionBehavior;
	NSSnappingInfo* _snappingInfo;
	char _enteringFullScreen;
	NSObject*<NSAppearanceCustomization> _appearanceParent;
	NSWindowTitleController* _titleController;
	NSTrackingSeparatorToolbarItem* _sidebarSeparatorToolbarItem;
	NSObject*<NSSidebarTrackingAdapter> _sidebarAdapter;
	long long _fullScreenSidebarToolbarMaterial;

}

@property (retain) NSViewController * contentViewController;                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (retain) NSScreen * savedScreen;                                                    //@synthesize savedScreen=_savedScreen - In the implementation block
@property (retain) NSDictionary * cachedShadowParameters;                                     //@synthesize cachedShadowParameters=_cachedShadowParameters - In the implementation block
@property (retain) NSMutableDictionary * cachedStandardButtons;                               //@synthesize cachedStandardButtons=_cachedStandardButtons - In the implementation block
@property (nonatomic,copy) NSData * lastDragRegionData;                                       //@synthesize lastDragRegionData=_lastDragRegionData - In the implementation block
@property (retain) NSMutableDictionary * windowLayoutsByScreenLayout;                         //@synthesize windowLayoutsByScreenLayout=_windowLayoutsByScreenLayout - In the implementation block
@property (assign,nonatomic) long long tabbingMode;                                           //@synthesize tabbingMode=_tabbingMode - In the implementation block
@property (assign,nonatomic) unsigned long long collectionBehavior;                           //@synthesize collectionBehavior=_collectionBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long lastAppliedCollectionBehavior;                //@synthesize lastAppliedCollectionBehavior=_lastAppliedCollectionBehavior - In the implementation block
@property (nonatomic,retain) NSSnappingInfo * snappingInfo;                                   //@synthesize snappingInfo=_snappingInfo - In the implementation block
@property (__weak) _NSWindowAnimator * animator;                                              //@synthesize animator=_animator - In the implementation block
@property (retain) NSWindowTitleController * titleController;                                 //@synthesize titleController=_titleController - In the implementation block
@property (retain) NSTrackingSeparatorToolbarItem * sidebarSeparatorToolbarItem;              //@synthesize sidebarSeparatorToolbarItem=_sidebarSeparatorToolbarItem - In the implementation block
@property (retain) NSObject*<NSSidebarTrackingAdapter> sidebarAdapter;                        //@synthesize sidebarAdapter=_sidebarAdapter - In the implementation block
@property (assign,nonatomic) long long fullScreenSidebarToolbarMaterial;                      //@synthesize fullScreenSidebarToolbarMaterial=_fullScreenSidebarToolbarMaterial - In the implementation block
@property (__weak) NSWindowController * windowController; 
@property (__weak) NSWindow * parentWindow;                                                   //@synthesize parentWindow=_parentWindow - In the implementation block
@property (__weak) NSObject*<NSAppearanceCustomization> appearanceParent;                     //@synthesize appearanceParent=_appearanceParent - In the implementation block
@property (assign) char enteringFullScreen;                                                   //@synthesize enteringFullScreen=_enteringFullScreen - In the implementation block
-(void)dealloc;
-(NSWindow *)parentWindow;
-(_NSWindowAnimator *)animator;
-(NSWindowController *)windowController;
-(long long)tabbingMode;
-(void)setTabbingMode:(long long)arg1 ;
-(void)setCollectionBehavior:(unsigned long long)arg1 ;
-(void)setWindowController:(NSWindowController *)arg1 ;
-(unsigned long long)collectionBehavior;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(NSObject*<NSAppearanceCustomization>)appearanceParent;
-(void)setAppearanceParent:(NSObject*<NSAppearanceCustomization>)arg1 ;
-(NSViewController *)contentViewController;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)setSavedScreen:(NSScreen *)arg1 ;
-(void)setCachedShadowParameters:(NSDictionary *)arg1 ;
-(void)setCachedStandardButtons:(NSMutableDictionary *)arg1 ;
-(void)setLastDragRegionData:(NSData *)arg1 ;
-(NSScreen *)savedScreen;
-(NSDictionary *)cachedShadowParameters;
-(NSMutableDictionary *)cachedStandardButtons;
-(NSData *)lastDragRegionData;
-(NSMutableDictionary *)windowLayoutsByScreenLayout;
-(void)setWindowLayoutsByScreenLayout:(NSMutableDictionary *)arg1 ;
-(unsigned long long)lastAppliedCollectionBehavior;
-(void)setLastAppliedCollectionBehavior:(unsigned long long)arg1 ;
-(NSSnappingInfo *)snappingInfo;
-(void)setSnappingInfo:(NSSnappingInfo *)arg1 ;
-(void)setAnimator:(_NSWindowAnimator *)arg1 ;
-(char)enteringFullScreen;
-(void)setEnteringFullScreen:(char)arg1 ;
-(NSWindowTitleController *)titleController;
-(void)setTitleController:(NSWindowTitleController *)arg1 ;
-(NSTrackingSeparatorToolbarItem *)sidebarSeparatorToolbarItem;
-(void)setSidebarSeparatorToolbarItem:(NSTrackingSeparatorToolbarItem *)arg1 ;
-(NSObject*<NSSidebarTrackingAdapter>)sidebarAdapter;
-(void)setSidebarAdapter:(NSObject*<NSSidebarTrackingAdapter>)arg1 ;
-(long long)fullScreenSidebarToolbarMaterial;
-(void)setFullScreenSidebarToolbarMaterial:(long long)arg1 ;
@end

