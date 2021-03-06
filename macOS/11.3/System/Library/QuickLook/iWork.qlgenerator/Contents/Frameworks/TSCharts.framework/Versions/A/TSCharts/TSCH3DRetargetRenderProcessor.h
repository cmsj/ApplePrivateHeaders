/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DRenderProcessor.h>

@class TSCH3DRenderProcessor;

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor {

	TSCH3DRenderProcessor* _original;

}

@property (nonatomic,retain) TSCH3DRenderProcessor * original;              //@synthesize original=_original - In the implementation block
+(id)processorWithOriginal:(id)arg1 ;
-(id)init;
-(TSCH3DRenderProcessor *)original;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(void)setOriginal:(TSCH3DRenderProcessor *)arg1 ;
-(id)effects;
-(void)popState;
-(void)pushState;
-(void)endFrame;
-(void)submit:(id)arg1 ;
-(void)scale:(tvec3<float>*)arg1 ;
-(void)beginFrame;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
-(void)pushMatrix;
-(void)popMatrix;
-(void)pushRenderState;
-(void)popRenderState;
-(long long)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(void)updateRenderState;
-(RenderState)renderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)resetBuffers;
-(char)canRenderPrefilteredLines;
-(id)initWithOriginal:(id)arg1 ;
-(long long)texture:(id)arg1 resource:(id)arg2 attributes:(const TextureAttributes*)arg3 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(id)effectsStates;
@end

