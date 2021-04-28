/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>
#import <PDFKit/PDFPageLayerInterface.h>

@class PDFPageViewPrivate, NSString;

@interface PDFPageView : NSView <PDFPageLayerInterface> {

	PDFPageViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isVisible;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(id)page;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(id)backgroundImage;
-(void)removeAnnotation:(id)arg1 ;
-(void)clearTiles;
-(void)addAnnotation:(id)arg1 ;
-(void)setSelection:(id)arg1 ;
-(BOOL)hasBackgroundImage;
-(long long)displayBox;
-(void)addBookmark;
-(void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3 ;
-(void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2 ;
-(void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3 ;
-(void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 ;
-(id)activeAnnotation;
-(void)removeControlForAnnotation:(id)arg1 ;
-(void)addControlForAnnotation:(id)arg1 ;
-(id)renderingProperties;
-(id)pageLayer;
-(id)geometryInterface;
-(void)removePageLayerEffectForID:(id)arg1 ;
-(void)updatePageLayerEffectForID:(id)arg1 ;
-(void)addPageLayerEffect:(id)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(void)setNeedsTilesUpdate;
-(void)colorWidgetBackgrounds:(char)arg1 ;
-(void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2 ;
-(void)updateAnnotation:(id)arg1 ;
-(unsigned long long)visibilityDelegateIndex;
-(BOOL)isDetachedView;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3 ;
-(void)_updateBackgroundColor;
-(void)_setupBookmarkLayer;
-(void)_setuppageAnnotationEffects;
-(void)drawAccessibilityTags:(BOOL)arg1 ;
-(void)_didRotatePageNotification:(id)arg1 ;
-(void)_formChanged:(id)arg1 ;
-(void)_updateSelectionColor:(id)arg1 ;
-(void)_updateToolTip:(id)arg1 ;
-(void)updatePageLayerEffects;
-(id)pageLayerEffectForID:(id)arg1 ;
-(CGAffineTransform)layerEffectTransform;
-(void)scalePageLayerEffects:(double)arg1 ;
-(BOOL)enablesTileUpdates;
-(void)forceTileUpdate;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1 ;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1 ;
-(void)_rotateActiveAnnotation;
-(void)updateAccessibility;
-(void)_addPDFAnnotation:(id)arg1 ;
-(void)_updateAnnotationVisibility:(id)arg1 ;
-(void)_removeToolTip:(id)arg1 ;
-(id)markupAnnotationsForIndexSet:(id)arg1 ;
-(void)_removeToolTipNow:(id)arg1 ;
-(CGRect)convertRectToPageView:(CGRect)arg1 ;
-(void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 ;
-(void)_addPDFAnnotationStampSignature:(id)arg1 ;
-(CGAffineTransform)_rotationTransformForPageView;
-(void)_updateWidgetControl:(id)arg1 forBounds:(CGRect)arg2 ;
-(BOOL)_allowsFormFieldEntry;
-(void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3 ;
-(char)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2 ;
-(int)backgroundImageQuality;
-(void)setSearchSelections:(id)arg1 ;
-(void)addSearchSelection:(id)arg1 ;
-(void)previewRotatePage:(double)arg1 ;
-(void)hideTileLayer:(BOOL)arg1 ;
-(void)updateScannerResultAtPoint:(CGPoint)arg1 ;
-(void)setDetachedView:(BOOL)arg1 ;
-(void)updateCurrentSelectionColor:(unsigned long long)arg1 ;
-(void)removeBookmark;
-(void)updateBookmark;
-(CGPoint)convertPointToPageView:(CGPoint)arg1 ;
-(void)_addPDFAnnotationTextWidget:(id)arg1 ;
-(void)_addPDFAnnotationChoiceWidget:(id)arg1 ;
@end
