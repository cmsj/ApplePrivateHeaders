/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>

@interface QTMovieView : NSView
+(void)initialize;
+(unsigned long long)defaultFocusRingType;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)resetCursorRects;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)hitTest:(CGPoint)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setFillColor:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(unsigned)windowID;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setLayer:(id)arg1 ;
-(unsigned)surfaceID;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)copy:(id)arg1 ;
-(char)isEditable;
-(void)add:(id)arg1 ;
-(id)fillColor;
-(void)setEditable:(char)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)_commonInit;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)hasMarkedText;
-(NSRange)selectedRange;
-(void)viewDidEndLiveResize;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)unmarkText;
-(NSRange)markedRange;
-(id)validAttributesForMarkedText;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)helpRequested:(id)arg1 ;
-(char)handleEvent:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(long long)conversationIdentifier;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)renewGState;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)updateFrame;
-(void)setShowsResizeIndicator:(char)arg1 ;
-(char)showsResizeIndicator;
-(void)beginDocument;
-(void)endDocument;
-(id)dragImage;
-(void)zoomIn:(id)arg1 ;
-(void)zoomOut:(id)arg1 ;
-(id)movie;
-(void)setMovie:(id)arg1 ;
-(void)setControllerVisible:(char)arg1 ;
-(float)controllerBarHeight;
-(void)doEditOperation:(unsigned)arg1 ;
-(void)boundsDidChange:(id)arg1 ;
-(void)_setVisible:(char)arg1 forControllerButton:(long long)arg2 ;
-(char)isBackButtonVisible;
-(void)setBackButtonVisible:(char)arg1 ;
-(char)isCustomButtonVisible;
-(void)setCustomButtonVisible:(char)arg1 ;
-(char)isHotSpotButtonVisible;
-(void)setHotSpotButtonVisible:(char)arg1 ;
-(char)areStepButtonsVisible;
-(void)setStepButtonsVisible:(char)arg1 ;
-(char)isTranslateButtonVisible;
-(void)setTranslateButtonVisible:(char)arg1 ;
-(char)isVolumeButtonVisible;
-(void)setVolumeButtonVisible:(char)arg1 ;
-(char)areZoomButtonsVisible;
-(void)setZoomButtonsVisible:(char)arg1 ;
-(void)setScrollXEnabled:(char)arg1 ;
-(void)setScrollYEnabled:(char)arg1 ;
-(void)setScrollZEnabled:(char)arg1 ;
-(void)setImagingModeAllowsGWorld:(char)arg1 ;
-(char)isControllerVisible;
-(void)setDragHighlight:(char)arg1 ;
-(void)_detachFromMovie;
-(void)_applyDelegateHelperToRenderer;
-(char)isPrinting;
-(CGRect)movieBounds;
-(id)_currentFrameImage;
-(char)_movieIsOpaque;
-(void)_updateMovieIsOpaque;
-(void)_setDrawFocusRing:(char)arg1 ;
-(CGRect)movieControllerBounds;
-(void)_windowDidChangeMainOrKey:(id)arg1 ;
-(id)movieControllerView;
-(void)_unregisterWindowNotifications;
-(void)_registerWindowNotifications;
-(void)_windowFrameDidChange:(id)arg1 ;
-(char)drawSynchronously;
-(char)imagingModeAllowsGWorld;
-(char)imagingModeForcedToGWorld;
-(char)drawsWithFinalCutStudioCompatibleColors;
-(void)_applyFinalCutStudioCompatibleColorsToRenderer;
-(void)_updateRendererToPreferredRendererViewClass;
-(void)_addQTIMAVManagerImageConsumerIfRequired;
-(void)movieWouldUseVisualContextDidChange:(id)arg1 ;
-(void)_updateRenderer;
-(void)_syncViewProxyWithMovieProxy;
-(void)_movieBoxIsOpaqueDidChange:(id)arg1 ;
-(void)_movieControllerDidChange:(id)arg1 ;
-(void)_mediaHelperDidChange:(id)arg1 ;
-(void)_movieNaturalSizeDidChange:(id)arg1 ;
-(void)_attachToMediaHelper;
-(void)_attachToMovieController;
-(void)_applyControllerButtonVisibilitySettings;
-(void)_removeQTIMAVManagerImageConsumerIfRequired;
-(void)setImagingModeForcedToGWorld:(char)arg1 ;
-(void)setDrawSynchronously:(char)arg1 ;
-(char)_controllerButtonVisibility:(long long)arg1 ;
-(void)_trackVisibility:(char)arg1 forControllerButton:(long long)arg2 ;
-(char)isButtonVisible:(long long)arg1 ;
-(CGRect)_dragHighlightOverlayPanelContentRect;
-(void)_updateServerGeometry;
-(void)restoreMovieEditState:(id)arg1 ;
-(void)playBackward:(id)arg1 ;
-(void)mouseDownSetup:(id)arg1 ;
-(char)scrollXEnabled;
-(char)scrollYEnabled;
-(void)toggleLoops:(id)arg1 ;
-(void)gotoBeginning:(id)arg1 ;
-(void)stepForward:(id)arg1 ;
-(void)stepBackward:(id)arg1 ;
-(void)selectNone:(id)arg1 ;
-(id)dragMovie;
-(void)drop:(id)arg1 ;
-(void)dropMovie:(id)arg1 ;
-(void)gotoEnd:(id)arg1 ;
-(void)gotoNextSelectionPoint:(id)arg1 ;
-(void)gotoPreviousSelectionPoint:(id)arg1 ;
-(void)gotoPosterFrame:(id)arg1 ;
-(void)trim:(id)arg1 ;
-(void)addScaled:(id)arg1 ;
-(char)focusRingEnabled;
-(id)_rendererView;
-(void)setImagingModeAllowsVisualContext:(char)arg1 ;
-(void)setImagingModeForcedToVisualContext:(char)arg1 ;
-(char)drawWithCGImage;
-(void)setDrawWithCGImage:(char)arg1 ;
-(void)setDrawsWithFinalCutStudioCompatibleColors:(char)arg1 ;
-(void)hideButton:(long long)arg1 ;
-(void)showButton:(long long)arg1 ;
-(void)toggleButton:(long long)arg1 ;
-(void)showCustomButton:(id)arg1 ;
-(char)scrollZEnabled;
-(void)enableFocusRing:(char)arg1 ;
-(id)_alteredImageForImage:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(char)handleKeyUp:(id)arg1 ;
-(void)showAll:(id)arg1 ;
-(void)play:(id)arg1 ;
-(char)handleKeyDown:(id)arg1 ;
-(char)shouldDrawFocusRing;
-(char)preservesAspectRatio;
-(void)setPreservesAspectRatio:(char)arg1 ;
@end

