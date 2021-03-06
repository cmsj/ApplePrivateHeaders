/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSFullScreenContentController, _NSFullScreenBackdropController, _NSFullScreenModalStackController, _NSFullScreenCreateTileDropTargetController, NSPointerArray, _NSFullScreenTileDividerWindow, _NSFullScreenTileResizeCrossfadeOverlayWindow, _NSFullScreenTileOverlayWindow, NSMutableArray;

@interface _NSFullScreenSpace : NSObject {

	char _modelInvalidated;
	unsigned long long _tileSpaceID;
	unsigned long long _parentSpaceID;
	unsigned long long _wallSpaceID;
	CGRect _tileRect;
	double _tileDividerSize;
	_NSFullScreenContentController* _contentController;
	_NSFullScreenBackdropController* _backdropController;
	_NSFullScreenModalStackController* _modalStackController;
	_NSFullScreenCreateTileDropTargetController* _createTileDropTargetController;
	NSPointerArray* _activeTransitions;
	long long _liveResizeCount;
	unsigned long long _dividerDirections;
	_NSFullScreenTileDividerWindow* _westDividerWindow;
	_NSFullScreenTileDividerWindow* _eastDividerWindow;
	char _isDoingExternalCloseAnimation;
	unsigned _exitReplacementWindowID;
	char _hasSiblings;
	char _suppressFetchingNewTileSize;
	_NSFullScreenTileResizeCrossfadeOverlayWindow* _resizeCrossfadeOverlay;
	double _resizeCrossfadeDuration;
	long long _tileOverlayShowCount;
	char _tileHadLimitedClipping;
	_NSFullScreenTileOverlayWindow* _tileOverlayWindow;
	_NSFullScreenTileOverlayWindow* _siblingTileOverlayWindow;
	char _siblingOverlayNeedsBeginPresentation;
	NSMutableArray* _animatingOverlayWindows;
	double _bottomReservedSpace;
	double _leftReservedSpace;
	double _rightReservedSpace;

}

@property (nonatomic,readonly) unsigned long long tileSpaceID;                                                            //@synthesize tileSpaceID=_tileSpaceID - In the implementation block
@property (assign,nonatomic) _NSFullScreenContentController * contentController;                                          //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,readonly) _NSFullScreenBackdropController * backdropController;                                      //@synthesize backdropController=_backdropController - In the implementation block
@property (nonatomic,readonly) _NSFullScreenModalStackController * modalStackController;                                  //@synthesize modalStackController=_modalStackController - In the implementation block
@property (nonatomic,readonly) _NSFullScreenCreateTileDropTargetController * createTileDropTargetController;              //@synthesize createTileDropTargetController=_createTileDropTargetController - In the implementation block
@property (assign,nonatomic) double bottomReservedSpace;                                                                  //@synthesize bottomReservedSpace=_bottomReservedSpace - In the implementation block
@property (assign,nonatomic) double leftReservedSpace;                                                                    //@synthesize leftReservedSpace=_leftReservedSpace - In the implementation block
@property (assign,nonatomic) double rightReservedSpace;                                                                   //@synthesize rightReservedSpace=_rightReservedSpace - In the implementation block
@property (nonatomic,readonly) unsigned exitReplacementWindowID;                                                          //@synthesize exitReplacementWindowID=_exitReplacementWindowID - In the implementation block
+(void)initialize;
+(id)fullScreenSpaceWithTileID:(unsigned long long)arg1 createIfNeeded:(char)arg2 ;
+(id)fullScreenSpaceWithTileID:(unsigned long long)arg1 ;
+(id)visibleFullScreenSpaceOnScreen:(id)arg1 ;
+(char)hasVisibleFullScreenSpaces;
+(void)interruptTransitions;
+(id)visibleFullScreenSpaces;
+(char)hasSpaceEnteringOrExitingFullScreen;
+(id)fullScreenSpaceEnteringFullScreen;
+(id)fullScreenSpaces;
+(CGRect)tileRectForSpaceWithID:(unsigned long long)arg1 ;
+(id)_fullScreenMapTable;
+(id)_placeholderFullScreenInstances;
+(void)_registerCGSNotificationsIfNeededForSpace:(id)arg1 ;
+(void)_unregisterUnusedCGSNotifications;
+(id)placeholderFullScreenSpace;
+(char)hasTransitionForWindowID:(unsigned)arg1 ;
+(char)hasTransitionForWindowID:(unsigned)arg1 ofClass:(Class)arg2 ;
+(id)spaceWithContentWindowID:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)perfTestResizeWindow;
-(id)screen;
-(unsigned long long)parentSpaceID;
-(unsigned long long)tileSpaceID;
-(void)startTransition:(id)arg1 ;
-(void)parentSpaceRelocated;
-(void)updateTileShapeAndReshapeContentsWithoutNotifyingServer;
-(_NSFullScreenContentController *)contentController;
-(void)prepareResizeCrossfadeOverlayWithDuration:(double)arg1 resize:(char)arg2 ;
-(void)suppressFetchingNewTileSize;
-(void)updateTileShapeAndReshapeContentsUsingTileFrame:(CGRect)arg1 ackServer:(char)arg2 ;
-(char)isInFullScreen;
-(_NSFullScreenModalStackController *)modalStackController;
-(CGRect)tileRect;
-(void)endLiveResize;
-(void)setContentController:(_NSFullScreenContentController *)arg1 ;
-(void)displayChanged;
-(void)hideOverlayWindow;
-(void)showOverlayWindowFromFrame:(CGRect)arg1 blurContent:(char)arg2 ;
-(void)updateOverlayWithBlur:(char)arg1 ;
-(char)isEnteringFullScreen;
-(void)startLiveResize;
-(void)interruptTransitions;
-(void)replaceContentWithSnapshotForClose;
-(char)tileFillsScreen;
-(void)setBottomReservedSpace:(double)arg1 ;
-(unsigned long long)wallSpaceID;
-(_NSFullScreenCreateTileDropTargetController *)createTileDropTargetController;
-(id)backgroundWindowIDs;
-(char)hasSiblingFromThisApp;
-(char)inLiveResize;
-(CGRect)tileToolbarContentRect;
-(char)isExitingFullScreen;
-(CGImageRef)captureSnapshotIncludingMenuBar:(char)arg1 contentRect:(CGRect*)arg2 ;
-(CGRect)parentSpaceCGRect;
-(void)removeTransition:(id)arg1 ;
-(CGRect)wallSpaceRect;
-(void)setLeftReservedSpace:(double)arg1 ;
-(void)setRightReservedSpace:(double)arg1 ;
-(char)suppressImplicitFullScreenForOtherWindows;
-(void)updateTileShape;
-(id)siblingFullScreenSpaceFromThisApp;
-(char)isTransitioning;
-(void)beginSeparateExternalCloseAnimation;
-(_NSFullScreenBackdropController *)backdropController;
-(unsigned)exitReplacementWindowID;
-(void)invalidateModelBacking;
-(void)resolveTileSpaceID:(unsigned long long)arg1 ;
-(void)updateTileShapeAndReshapeContents;
-(CGRect)tileContentRect;
-(char)performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2 ;
-(id)currentDividerResizeDirections;
-(id)cursorForResizeDirection:(long long)arg1 ;
-(id)tileOverlayWindow;
-(char)isLeftTile;
-(void)setupSiblingOverlayWindowImmediately:(char)arg1 blurContent:(char)arg2 ;
-(void)beginSiblingOverlayPresentationIfNeeded;
-(void)updateSiblingOverlayWindow;
-(void)removeSiblingOverlayWindow;
-(void)cancelSiblingOverlayAnimations;
-(char)showingSiblingTileOverlayWindow;
-(id)initWithTileSpaceID:(unsigned long long)arg1 ;
-(void)_updateSpaceProperties;
-(void)_updateTileDividerWindows;
-(void)_removeTileDividerWindows;
-(char)_spaceConsideredVisible;
-(id)windowIDsInTile;
-(void)_cacheTileRect:(CGRect)arg1 ;
-(void)_updateTileShapeAndReshapeContentsWithAckServer:(char)arg1 ;
-(void)performResizeCrossfadeIfNeeded;
-(void)_reshapeTileDividerWindows;
-(unsigned long long)_effectiveSpaceResizeDirections;
-(void)_removeWestTileDividerWindow;
-(void)_removeEastTileDividerWindow;
-(char)modelBackingIsValid;
-(CGSize)availableWallSpaceSize;
-(void)updateTileShapeAndReshapeContentsUsingTileFrame:(CGRect)arg1 ;
-(char)isPerformingExternalCloseAnimation;
-(void)_hideTileDividerWindows;
-(void)_showTileDividerWindows;
-(double)bottomReservedSpace;
-(double)leftReservedSpace;
-(double)rightReservedSpace;
-(void)_didBeginExitTransition;
-(char)showingOverlayWindowFrame;
-(void)_beginOverlayPresentation:(id)arg1 ;
-(void)_endOverlayPresentation:(id)arg1 ;
-(void)_cancelResizeCrossfadeAnimation;
@end

