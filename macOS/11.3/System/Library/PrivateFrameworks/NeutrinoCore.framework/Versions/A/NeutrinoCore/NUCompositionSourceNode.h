/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {

	NURenderPipeline* _renderPipeline;
	NUComposition* _composition;
	SCD_Struct_NU8 _pixelSize;

}
-(id)initWithSettings:(id)arg1 ;
-(char)load:(out id*)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

