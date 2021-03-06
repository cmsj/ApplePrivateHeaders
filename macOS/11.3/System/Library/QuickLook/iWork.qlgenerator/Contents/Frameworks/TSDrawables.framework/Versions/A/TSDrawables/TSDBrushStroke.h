/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDSmartStroke.h>

@interface TSDBrushStroke : TSDSmartStroke
+(Class)mutableClass;
+(char)brushStrokeUsesMetal;
+(void)p_drawColor:(id)arg1 intoContext:(CGContextRef)arg2 usingImageAsMask:(CGImageRef)arg3 withRect:(CGRect)arg4 ;
+(void)backgroundLoadAllBrushStrokes;
+(char)brushStrokeUsesOpenGL;
+(id)p_glContextSemaphore;
+(id)p_glContextQueue;
+(id)p_glContextArray;
+(id)p_glBrushShaderForCurrentContext;
+(void)p_drawFrameBuffers:(id)arg1 intoFrameBuffer:(id)arg2 withAlpha:(double)arg3 usingDataBuffer:(id)arg4 ;
+(void)p_clearFrameBuffers:(id)arg1 ;
+(unsigned long long)p_glContextCount;
+(id)p_glOpacityShaderForCurrentContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)cap;
-(id)strokeLineEnd:(id)arg1 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(char)arg6 ;
-(void)i_setCap:(int)arg1 ;
-(char)supportsPattern;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(char)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(char)arg4 parameterized:(char)arg5 shouldReverseDrawOrder:(char)arg6 ;
-(double)horizontalMarginForSwatch;
-(char)canApplyToShapeRenderable;
-(char)needsToExtendJoinsForBoundsCalculation;
-(double)lineEndInsetAdjustment;
-(double)suggestedMinimumLineWidth;
-(char)prefersToApplyToShapeRenderableDuringManipulation;
-(char)drawsInOneStep;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(id)initWithArchive:(const StrokeArchiveRef)arg1 unarchiver:(id)arg2 ;
-(void)p_rasterBrushPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 orDirectly:(id)arg3 parameterized:(char)arg4 shouldReverseDrawOrder:(char)arg5 withLayoutOptions:(id)arg6 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(char)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(char)arg4 parameterized:(char)arg5 shouldReverseDrawOrder:(char)arg6 withLayoutOptions:(id)arg7 ;
-(char)p_shouldDrawAsVectorInContext:(CGContextRef)arg1 ;
-(void)p_brushPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 orDirectly:(id)arg3 parameterized:(char)arg4 drawRasterized:(char)arg5 shouldReverseDrawOrder:(char)arg6 withLayoutOptions:(id)arg7 ;
-(char)p_isDrawingRasterizedIntoPDFWithContext:(CGContextRef)arg1 ;
-(char)p_isFreehandDrawingStrokeWithFixedTileWidth;
-(void)p_brushPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 intoPath:(id)arg4 orIntoVector:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData>>*)arg5 sectionIndex:(unsigned long long*)arg6 viewScale:(double)arg7 withLayoutOptions:(id)arg8 currentSubpathIndex:(unsigned long long)arg9 cachedCurrentElementPercentage:(SCD_Struct_TS33*)arg10 ;
-(void)p_brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(NSRange)arg4 intoPath:(id)arg5 orIntoVector:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData>>*)arg6 viewScale:(double)arg7 strokeTileLayout:(NSEdgeInsets)arg8 cachedCurrentElementPercentage:(SCD_Struct_TS33*)arg9 ;
-(void)p_rasterRenderSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(NSRange)arg4 into:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData>>*)arg5 viewScale:(double)arg6 strokeTileLayout:(NSEdgeInsets)arg7 cachedCurrentElementPercentage:(SCD_Struct_TS33*)arg8 ;
-(long long)p_fastElementPercentage:(double*)arg1 forOverallPercentage:(double)arg2 onPath:(id)arg3 withCachedCurrentElementPercentage:(SCD_Struct_TS33*)arg4 ;
-(char)p_prefersRasterRenderingInContext:(CGContextRef)arg1 ;
-(char)usesOpenGL;
-(char)p_shouldSplitAtSharpAngles;
-(void)p_finishOpenGLRenderInContext:(CGContextRef)arg1 orDirectly:(id)arg2 pathVertexData:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData>>*)arg3 parameterized:(char)arg4 shouldReverseDrawOrder:(char)arg5 withLayoutOptions:(id)arg6 ;
-(id)p_glTextureForCurrentStrokeAndContext;
-(CGImageRef)p_newCGImageFromGLWithWidth:(int)arg1 height:(int)arg2 ;
@end

