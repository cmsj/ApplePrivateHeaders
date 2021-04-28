/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDStyledRep.h>
#import <TSDrawables/TSDMagicMoveMatching.h>

@class NSMutableDictionary, TSDShapeInfo, TSDShapeLayout;

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching> {

	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	char mFrameInUnscaledCanvasIsValid;
	char mDirectlyManagesLayerContentCacheValid;
	char mDirectlyManagesLayerContent;
	CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
	char mShadowOnChildrenDisabled;
	CGContextRef mCommittedPathContext;
	CGImageRef mCommittedPathImage;
	CGRect mCommittedPathImageUnscaledRect;
	NSRange mCommittedPointRange;
	NSRange mAvailableToCommitPointRange;
	unsigned mOverrideState : 2;
	double mOverriddenValue;
	CGRect mLastDynamicInvalidRect;
	char mFillChanged;
	char mShouldForceRenderableGeometryUpdate;
	char mIsInvisibleCacheValid;
	char mIsInvisibleCache;
	char mNeedsDisplay;
	NSMutableDictionary* mHitTestCache;

}

@property (nonatomic,readonly) TSDShapeInfo * shapeInfo; 
@property (nonatomic,readonly) TSDShapeLayout * shapeLayout; 
@property (nonatomic,readonly) char isMoreOptimalToDrawWithOtherShapeRepsIfPossible; 
@property (nonatomic,readonly) double strokeEnd; 
@property (nonatomic,readonly) char isPartiallyAnimated; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(void)dealloc;
-(double)opacity;
-(CGRect)clipRect;
-(double)strokeEnd;
-(char)isInvisible;
-(CGRect)frameInUnscaledCanvas;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)colorBehindLayer:(id)arg1 ;
-(TSDShapeInfo *)shapeInfo;
-(TSDShapeLayout *)shapeLayout;
-(char)p_beginApplyOpacity:(CGContextRef)arg1 forDrawingInOneStep:(char)arg2 ;
-(void)p_endApplyOpacity:(CGContextRef)arg1 apply:(char)arg2 ;
-(char)p_drawsSelfInOneStep;
-(void)p_drawLineEndForHead:(char)arg1 withDelta:(CGPoint)arg2 andStroke:(id)arg3 inContext:(CGContextRef)arg4 useFastDrawing:(char)arg5 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(char)canDrawShadowInOneStepWithChildren:(char)arg1 ;
-(void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2 ;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 keepingChildrenPassingTest:(/*^block*/id)arg2 ;
-(void)dynamicOverrideDidChange;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(char)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(char)arg4 ;
-(void)p_drawChildrenWithoutOpacityInContext:(CGContextRef)arg1 keepingChildrenPassingTest:(/*^block*/id)arg2 ;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(char)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(char)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7 ;
-(char)p_isNormalShapeInsideFreehandDrawing;
-(id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)arg1 ;
-(id)p_brushStrokeFromStroke:(id)arg1 ;
-(char)p_hasFreehandDrawingBrushStroke;
-(unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)arg1 ;
-(char)isPartiallyAnimated;
-(char)p_shouldDrawStrokeWide:(id)arg1 ;
-(id)p_drawingPlaybackSession;
-(char)p_shouldUpgradeStrokeForPlayback:(id)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(char)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(char)arg4 forAlphaOnly:(char)arg5 drawChildren:(char)arg6 keepingChildrenPassingTest:(/*^block*/id)arg7 ;
-(void)drawInContext:(CGContextRef)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3 transparencyLayersBySubpath:(id)arg4 ;
-(CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(CGRect)arg2 ;
-(char)isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
-(char)canDrawWithOtherShapeRep:(id)arg1 ;
-(unsigned long long)p_bitmapContextOptionsForContextDestinedToDrawIntoCALayerContextForDrawingStroke:(id)arg1 ;
-(char)p_isInsidePlayingFreehandDrawing;
@end
