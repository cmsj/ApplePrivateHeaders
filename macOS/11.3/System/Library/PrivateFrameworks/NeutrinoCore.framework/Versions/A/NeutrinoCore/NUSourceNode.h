/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol NUSourceDerivation;
@class NURenderNode;

@interface NUSourceNode : NURenderNode {

	NURenderNode* _originalNode;
	id<NUSourceDerivation> _sourceDerivation;

}

@property (__weak) NURenderNode * originalNode;                          //@synthesize originalNode=_originalNode - In the implementation block
@property (retain) id<NUSourceDerivation> sourceDerivation;              //@synthesize sourceDerivation=_sourceDerivation - In the implementation block
@property (readonly) long long sourceOrientation; 
-(id)initWithSettings:(id)arg1 ;
-(char)load:(out id*)arg1 ;
-(char)isValid:(out id*)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(long long)sourceOrientation;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(char)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(long long)normalizeSubsampleFactor:(long long)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(void)setOriginalNode:(NURenderNode *)arg1 ;
-(char)isGeometryNode;
-(id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_addResampleNode:(id)arg1 subsampleNode:(id)arg2 ;
-(id)_addScaleNode:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 ;
-(id)_addOrientationNode:(id)arg1 sourceSettings:(id)arg2 error:(out id*)arg3 ;
-(id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateGeometrySpaceMap:(out id*)arg1 ;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(NURenderNode *)originalNode;
-(id<NUSourceDerivation>)sourceDerivation;
-(void)setSourceDerivation:(id<NUSourceDerivation>)arg1 ;
@end

