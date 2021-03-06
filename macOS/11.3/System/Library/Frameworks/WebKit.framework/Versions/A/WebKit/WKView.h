/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSFilePromiseProviderDelegate.h>
#import <libobjc.A.dylib/NSDraggingSource.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <WebKit/WebViewImplDelegate.h>
#import <libobjc.A.dylib/NSTextInputClient.h>

@class WKViewData, NSColor, NSView, _WKThumbnailView, WKBrowsingContextController, NSString, NSTouchBar;

@interface WKView : NSView <NSFilePromiseProviderDelegate, NSDraggingSource, NSTouchBarProvider, WebViewImplDelegate, NSTextInputClient> {

	WKViewData* _data;
	unsigned _unused;

}

@property (readonly) OpaqueWKPageRef pageRef; 
@property (assign) CGSize minimumSizeForAutoLayout; 
@property (assign) CGSize sizeToContentAutoSizeMaximumSize; 
@property (assign) char shouldClipToVisibleRect; 
@property (assign) char shouldExpandToViewHeightForAutoLayout; 
@property (getter=isUsingUISideCompositing,readonly) char usingUISideCompositing; 
@property (assign) char allowsMagnification; 
@property (assign) double magnification; 
@property (setter=_setIgnoresNonWheelEvents:) char _ignoresNonWheelEvents; 
@property (setter=_setIgnoresAllEvents:) char _ignoresAllEvents; 
@property (assign) char allowsBackForwardNavigationGestures; 
@property (assign,setter=_setTopContentInset:,nonatomic) double _topContentInset; 
@property (assign,setter=_setTotalHeightOfBanners:,nonatomic) double _totalHeightOfBanners; 
@property (assign,setter=_setOverlayScrollbarStyle:,nonatomic) unsigned long long _overlayScrollbarStyle; 
@property (assign,setter=_setLayoutMode:,nonatomic) unsigned _layoutMode; 
@property (assign,setter=_setFixedLayoutSize:,nonatomic) CGSize _fixedLayoutSize; 
@property (assign,setter=_setViewScale:,nonatomic) double _viewScale; 
@property (assign,setter=_setOverrideDeviceScaleFactor:,nonatomic) double _overrideDeviceScaleFactor; 
@property (assign,setter=_setAutomaticallyAdjustsContentInsets:,nonatomic) char _automaticallyAdjustsContentInsets; 
@property (readonly) NSColor * _pageExtendedBackgroundColor; 
@property (nonatomic,copy) NSColor * underlayColor; 
@property (assign,setter=_setBackgroundColor:,nonatomic) NSColor * _backgroundColor; 
@property (setter=_setInspectorAttachmentView:,nonatomic,retain) NSView * _inspectorAttachmentView; 
@property (assign,setter=_setRequiresUserActionForEditingControlsManager:,nonatomic) char _requiresUserActionForEditingControlsManager; 
@property (assign,setter=_setWantsMediaPlaybackControlsView:,nonatomic) char _wantsMediaPlaybackControlsView; 
@property (nonatomic,readonly) id _mediaPlaybackControlsView; 
@property (assign,setter=_setUseSystemAppearance:,nonatomic) char _useSystemAppearance; 
@property (assign,setter=_setThumbnailView:,nonatomic) _WKThumbnailView * _thumbnailView; 
@property (readonly) WKBrowsingContextController * browsingContextController; 
@property (assign) char drawsBackground; 
@property (assign) char drawsTransparentBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTouchBar * touchBar; 
+(void)hideWordDefinitionWindow;
-(void)dealloc;
-(char)isFlipped;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstResponder;
-(id)hitTest:(CGPoint)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setDrawsBackground:(char)arg1 ;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(NSColor *)_backgroundColor;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)startSpeaking:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(void)stopSpeaking:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(id)_hitTest:(CGPoint*)arg1 dragTypes:(id)arg2 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(char)_automaticallyAdjustsContentInsets;
-(char)drawsBackground;
-(void)scrollWheel:(id)arg1 ;
-(void)_setBackgroundColor:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)hasMarkedText;
-(NSRange)selectedRange;
-(void)insertNewline:(id)arg1 ;
-(id)makeTouchBar;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(char)isGrammarCheckingEnabled;
-(void)setGrammarCheckingEnabled:(char)arg1 ;
-(char)isAutomaticQuoteSubstitutionEnabled;
-(void)setAutomaticQuoteSubstitutionEnabled:(char)arg1 ;
-(char)isAutomaticDashSubstitutionEnabled;
-(void)setAutomaticDashSubstitutionEnabled:(char)arg1 ;
-(char)isAutomaticTextReplacementEnabled;
-(void)setAutomaticTextReplacementEnabled:(char)arg1 ;
-(char)isAutomaticLinkDetectionEnabled;
-(void)setAutomaticLinkDetectionEnabled:(char)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)unmarkText;
-(NSRange)markedRange;
-(id)attributedSubstringForProposedRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(id)validAttributesForMarkedText;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(id)candidateListTouchBarItem;
-(void)viewDidChangeBackingProperties;
-(double)magnification;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)setMagnification:(double)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)_removeTrackingRects:(long long*)arg1 count:(int)arg2 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(void)insertText:(id)arg1 ;
-(long long)addTrackingRect:(CGRect)arg1 owner:(id)arg2 userData:(void*)arg3 assumeInside:(char)arg4 ;
-(void)removeTrackingRect:(long long)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)underline:(id)arg1 ;
-(void)unscript:(id)arg1 ;
-(void)superscript:(id)arg1 ;
-(void)subscript:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(long long)conversationIdentifier;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)renewGState;
-(void)prepareContentInRect:(CGRect)arg1 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)_setThumbnailView:(id)arg1 ;
-(_WKThumbnailView *)_thumbnailView;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)checkSpelling:(id)arg1 ;
-(void)toggleContinuousSpellChecking:(id)arg1 ;
-(void)toggleGrammarChecking:(id)arg1 ;
-(void)toggleAutomaticSpellingCorrection:(id)arg1 ;
-(void)changeSpelling:(id)arg1 ;
-(void)ignoreSpelling:(id)arg1 ;
-(void)toggleAutomaticQuoteSubstitution:(id)arg1 ;
-(void)toggleAutomaticDashSubstitution:(id)arg1 ;
-(void)toggleAutomaticLinkDetection:(id)arg1 ;
-(void)toggleAutomaticTextReplacement:(id)arg1 ;
-(void)moveToLeftEndOfLine:(id)arg1 ;
-(void)moveToRightEndOfLine:(id)arg1 ;
-(void)moveToLeftEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToRightEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfLine:(id)arg1 ;
-(void)moveToEndOfLine:(id)arg1 ;
-(void)moveToBeginningOfLineAndModifySelection:(id)arg1 ;
-(void)moveToEndOfLineAndModifySelection:(id)arg1 ;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(char)_wantsKeyDownForEvent:(id)arg1 ;
-(char)readSelectionFromPasteboard:(id)arg1 ;
-(char)_windowResizeMouseLocationIsInVisibleScrollerThumb:(CGPoint)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)orderFrontSubstitutionsPanel:(id)arg1 ;
-(id)inputContext;
-(void)toggleSmartInsertDelete:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)pasteboardChangedOwner:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)alignCenter:(id)arg1 ;
-(char)writeSelectionToPasteboard:(id)arg1 types:(id)arg2 ;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1 ;
-(void)insertParagraphSeparator:(id)arg1 ;
-(void)insertLineBreak:(id)arg1 ;
-(void)uppercaseWord:(id)arg1 ;
-(void)lowercaseWord:(id)arg1 ;
-(void)capitalizeWord:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
-(void)alignJustified:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveWordForward:(id)arg1 ;
-(void)moveWordBackward:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)moveBackwardAndModifySelection:(id)arg1 ;
-(void)moveForwardAndModifySelection:(id)arg1 ;
-(void)moveWordForwardAndModifySelection:(id)arg1 ;
-(void)moveWordBackwardAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToEndOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToEndOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfDocumentAndModifySelection:(id)arg1 ;
-(void)pageDownAndModifySelection:(id)arg1 ;
-(void)pageUpAndModifySelection:(id)arg1 ;
-(void)moveParagraphForwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphBackwardAndModifySelection:(id)arg1 ;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)scrollLineUp:(id)arg1 ;
-(void)scrollLineDown:(id)arg1 ;
-(void)transpose:(id)arg1 ;
-(void)selectParagraph:(id)arg1 ;
-(void)selectLine:(id)arg1 ;
-(void)selectWord:(id)arg1 ;
-(void)indent:(id)arg1 ;
-(void)insertTabIgnoringFieldEditor:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)deleteBackward:(id)arg1 ;
-(void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1 ;
-(void)deleteWordForward:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)deleteToBeginningOfLine:(id)arg1 ;
-(void)deleteToEndOfLine:(id)arg1 ;
-(void)deleteToBeginningOfParagraph:(id)arg1 ;
-(void)deleteToEndOfParagraph:(id)arg1 ;
-(void)yank:(id)arg1 ;
-(void)setMark:(id)arg1 ;
-(void)deleteToMark:(id)arg1 ;
-(void)selectToMark:(id)arg1 ;
-(void)swapWithMark:(id)arg1 ;
-(void)yankAndSelect:(id)arg1 ;
-(long long)_addTrackingRect:(CGRect)arg1 owner:(id)arg2 userData:(void*)arg3 assumeInside:(char)arg4 useTrackingNum:(int)arg5 ;
-(void)_addTrackingRects:(CGRect*)arg1 owner:(id)arg2 userDataList:(void*)arg3 assumeInsideList:(char*)arg4 trackingNums:(long long*)arg5 count:(int)arg6 ;
-(void)selectedRangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2 ;
-(char)allowsMagnification;
-(void)setAllowsMagnification:(char)arg1 ;
-(void)setMagnification:(double)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(void)markedRangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)hasMarkedTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)characterIndexForPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)attributedSubstringForProposedRange:(NSRange)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstRectForCharacterRange:(NSRange)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_viewScale;
-(void)_setUseSystemAppearance:(char)arg1 ;
-(void)takeFindStringFromSelection:(id)arg1 ;
-(void)moveToBeginningOfSentence:(id)arg1 ;
-(void)moveToBeginningOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToEndOfSentence:(id)arg1 ;
-(void)moveToEndOfSentenceAndModifySelection:(id)arg1 ;
-(void)outdent:(id)arg1 ;
-(void)selectSentence:(id)arg1 ;
-(void)_setFixedLayoutSize:(CGSize)arg1 ;
-(CGSize)_fixedLayoutSize;
-(char)windowOcclusionDetectionEnabled;
-(void)setWindowOcclusionDetectionEnabled:(char)arg1 ;
-(char)_useSystemAppearance;
-(id)fullScreenPlaceholderView;
-(OpaqueWKPageRef)pageRef;
-(char)_requiresUserActionForEditingControlsManager;
-(void)setAllowsBackForwardNavigationGestures:(char)arg1 ;
-(void)setAllowsLinkPreview:(char)arg1 ;
-(char)allowsBackForwardNavigationGestures;
-(char)allowsLinkPreview;
-(unsigned)_layoutMode;
-(void)_setLayoutMode:(unsigned)arg1 ;
-(void)_setViewScale:(double)arg1 ;
-(void)_doAfterNextPresentationUpdate:(/*^block*/id)arg1 ;
-(void)_setRequiresUserActionForEditingControlsManager:(char)arg1 ;
-(void)_setIgnoresAllEvents:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contextRef:(OpaqueWKContextRef)arg2 pageGroupRef:(OpaqueWKPageGroupRef)arg3 relatedToPage:(OpaqueWKPageRef)arg4 ;
-(void)maybeInstallIconLoadingClient;
-(id)_immediateActionAnimationControllerForHitTestResult:(OpaqueWKHitTestResultRef)arg1 withType:(unsigned)arg2 userData:(void*)arg3 ;
-(void)_prepareForImmediateActionAnimation;
-(void)_cancelImmediateActionAnimation;
-(void)_completeImmediateActionAnimation;
-(void)_didChangeContentSize:(CGSize)arg1 ;
-(void)_dismissContentRelativeChildWindows;
-(void)_dismissContentRelativeChildWindowsWithAnimation:(char)arg1 ;
-(void)_gestureEventWasNotHandledByWebCore:(id)arg1 ;
-(void)_addMediaPlaybackControlsView:(id)arg1 ;
-(void)_removeMediaPlaybackControlsView;
-(id)_web_superInputContext;
-(void)_web_superQuickLookWithEvent:(id)arg1 ;
-(void)_web_superRemoveTrackingRect:(long long)arg1 ;
-(void)_web_superSwipeWithEvent:(id)arg1 ;
-(void)_web_superMagnifyWithEvent:(id)arg1 ;
-(void)_web_superSmartMagnifyWithEvent:(id)arg1 ;
-(id)_web_superAccessibilityAttributeValue:(id)arg1 ;
-(void)_web_superDoCommandBySelector:(SEL)arg1 ;
-(char)_web_superPerformKeyEquivalent:(id)arg1 ;
-(void)_web_superKeyDown:(id)arg1 ;
-(id)_web_superHitTest:(CGPoint)arg1 ;
-(id)_web_immediateActionAnimationControllerForHitTestResultInternal:(HitTestResult*)arg1 withType:(unsigned)arg2 userData:(Object*)arg3 ;
-(void)_web_prepareForImmediateActionAnimation;
-(void)_web_cancelImmediateActionAnimation;
-(void)_web_completeImmediateActionAnimation;
-(void)_web_dismissContentRelativeChildWindows;
-(void)_web_dismissContentRelativeChildWindowsWithAnimation:(char)arg1 ;
-(void)_web_editorStateDidChange;
-(void)_web_gestureEventWasNotHandledByWebCore:(id)arg1 ;
-(void)_web_didChangeContentSize:(CGSize)arg1 ;
-(unsigned long long)_web_dragDestinationActionForDraggingInfo:(id)arg1 ;
-(void)_web_didPerformDragOperation:(char)arg1 ;
-(void)_web_grantDOMPasteAccess;
-(void)_web_didAddMediaControlsManager:(id)arg1 ;
-(void)_web_didRemoveMediaControlsManager;
-(void)_didHandleAcceptedCandidate;
-(void)_didUpdateCandidateListVisibility:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 relatedToView:(id)arg4 ;
-(WKBrowsingContextController *)browsingContextController;
-(void)setDrawsTransparentBackground:(char)arg1 ;
-(char)drawsTransparentBackground;
-(void)_activeSpaceDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 processPool:(NakedRef<WebKit::WebProcessPool>*)arg2 configuration:(Ref<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>>*)arg3 ;
-(void)saveBackForwardSnapshotForCurrentItem;
-(void)saveBackForwardSnapshotForItem:(OpaqueWKBackForwardListItemRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contextRef:(OpaqueWKContextRef)arg2 pageGroupRef:(OpaqueWKPageGroupRef)arg3 ;
-(id)initWithFrame:(CGRect)arg1 configurationRef:(OpaqueWKPageConfigurationRef)arg2 ;
-(char)canChangeFrameLayout:(OpaqueWKFrameRef)arg1 ;
-(id)printOperationWithPrintInfo:(id)arg1 forFrame:(OpaqueWKFrameRef)arg2 ;
-(void)setFrame:(CGRect)arg1 andScrollBy:(CGSize)arg2 ;
-(void)disableFrameSizeUpdates;
-(void)enableFrameSizeUpdates;
-(char)frameSizeUpdatesDisabled;
-(CGSize)minimumSizeForAutoLayout;
-(void)setMinimumSizeForAutoLayout:(CGSize)arg1 ;
-(CGSize)sizeToContentAutoSizeMaximumSize;
-(void)setSizeToContentAutoSizeMaximumSize:(CGSize)arg1 ;
-(char)shouldExpandToViewHeightForAutoLayout;
-(void)setShouldExpandToViewHeightForAutoLayout:(char)arg1 ;
-(char)shouldClipToVisibleRect;
-(void)setShouldClipToVisibleRect:(char)arg1 ;
-(NSColor *)underlayColor;
-(void)setUnderlayColor:(NSColor *)arg1 ;
-(NSView *)_inspectorAttachmentView;
-(void)_setInspectorAttachmentView:(id)arg1 ;
-(id)createFullScreenWindow;
-(void)beginDeferringViewInWindowChanges;
-(void)endDeferringViewInWindowChanges;
-(void)endDeferringViewInWindowChangesSync;
-(void)_prepareForMoveToWindow:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)isDeferringViewInWindowChanges;
-(void)_setIgnoresNonWheelMouseEvents:(char)arg1 ;
-(void)_setIgnoresNonWheelEvents:(char)arg1 ;
-(char)_ignoresNonWheelEvents;
-(char)_ignoresAllEvents;
-(void)_setOverrideDeviceScaleFactor:(double)arg1 ;
-(double)_overrideDeviceScaleFactor;
-(void)_setTopContentInset:(double)arg1 ;
-(double)_topContentInset;
-(void)_setTotalHeightOfBanners:(double)arg1 ;
-(double)_totalHeightOfBanners;
-(void)_setOverlayScrollbarStyle:(unsigned long long)arg1 ;
-(unsigned long long)_overlayScrollbarStyle;
-(NSColor *)_pageExtendedBackgroundColor;
-(char)isUsingUISideCompositing;
-(void)_setCustomSwipeViews:(id)arg1 ;
-(void)_setCustomSwipeViewsTopContentInset:(float)arg1 ;
-(char)_tryToSwipeWithEvent:(id)arg1 ignoringPinnedState:(char)arg2 ;
-(void)_setDidMoveSwipeSnapshotCallback:(/*^block*/id)arg1 ;
-(void)_setAutomaticallyAdjustsContentInsets:(char)arg1 ;
-(char)_wantsMediaPlaybackControlsView;
-(void)_setWantsMediaPlaybackControlsView:(char)arg1 ;
-(id)_mediaPlaybackControlsView;
-(void)_setShouldSuppressFirstResponderChanges:(char)arg1 ;
@end

