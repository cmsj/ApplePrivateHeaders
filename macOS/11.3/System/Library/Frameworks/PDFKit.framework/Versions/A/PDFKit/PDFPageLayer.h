/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <PDFKit/PDFPageLayerInterface.h>

@class PDFPageLayerPrivate, NSString;

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {

	PDFPageLayerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isVisible;
-(void)setBounds:(CGRect)arg1 ;
-(id)page;
-(void)layoutSublayers;
-(void)clearTiles;
-(char)isGeometryFlipped;
-(long long)displayBox;
-(void)willStartLiveResize;
-(void)_updateTiles;
-(id)renderingProperties;
-(id)geometryInterface;
-(void)removePageLayerEffectForID:(id)arg1 ;
-(void)updatePageLayerEffectForID:(id)arg1 ;
-(void)addPageLayerEffect:(id)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(void)setNeedsTilesUpdate;
-(unsigned long long)visibilityDelegateIndex;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3 ;
-(void)updatePageLayerEffects;
-(void)willEndStartLiveResize;
-(id)pageLayerEffectForID:(id)arg1 ;
-(CGAffineTransform)layerEffectTransform;
-(void)scalePageLayerEffects:(double)arg1 ;
-(BOOL)enablesTileUpdates;
-(void)forceTileUpdate;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1 ;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1 ;
-(void)tileDrawingComplete:(id)arg1 ;
-(void)_setEnablePageShadows:(BOOL)arg1 ;
-(void)_renderingPropertyUpdate:(id)arg1 ;
-(void)_pageDidRotate:(id)arg1 ;
-(void)_pageChangedPageRef:(id)arg1 ;
-(void)_forceTileUpdate;
-(void)_releaseTiles;
-(void)_releasePageLayerEffects;
-(void)_tileUpdateComplete;
-(void)_updateLayerEffect:(id)arg1 withPageTransform:(CGAffineTransform)arg2 ;
-(id)_pageLayerEffects;
-(BOOL)_isTile:(id)arg1 occludedByTiles:(id)arg2 ;
-(CGRect)_layerTileToRootViewBounds:(id)arg1 ;
-(id)_subtractRectB:(CGRect)arg1 fromRectA:(CGRect)arg2 ;
-(BOOL)_hasTileWithFrameInLayer:(CGRect)arg1 ;
-(void)_hideTileLayer:(BOOL)arg1 ;
-(CGRect)_pageLayerVisibleRect;
-(void)_printRectsArray:(id)arg1 ;
@end

