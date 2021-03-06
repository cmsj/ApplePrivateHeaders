/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NUSourceContainerNode, NSDictionary;

@interface NUSubsampleNode : NUAbstractScaleNode {

	long long _subsampleFactor;
	long long _appliedSubsampleFactor;
	NUSourceContainerNode* _sourceContainer;
	NSDictionary* _pipelineSettings;
	NSDictionary* _sourceOptions;

}

@property (readonly) NUSourceContainerNode * sourceContainer;              //@synthesize sourceContainer=_sourceContainer - In the implementation block
@property (readonly) NSDictionary * pipelineSettings;                      //@synthesize pipelineSettings=_pipelineSettings - In the implementation block
@property (readonly) NSDictionary * sourceOptions;                         //@synthesize sourceOptions=_sourceOptions - In the implementation block
@property (readonly) long long subsampleFactor;                            //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
@property (readonly) long long appliedSubsampleFactor;                     //@synthesize appliedSubsampleFactor=_appliedSubsampleFactor - In the implementation block
+(long long)subsampleFactorForScale:(SCD_Struct_NU8)arg1 additionalScale:(SCD_Struct_NU8*)arg2 ;
-(id)debugQuickLookObject;
-(id)_sourceNode;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)initWithPreparedSource:(id)arg1 container:(id)arg2 pipelineSettings:(id)arg3 sourceOptions:(id)arg4 ;
-(id)initWithSubsampleFactor:(long long)arg1 source:(id)arg2 container:(id)arg3 pipelineSettings:(id)arg4 sourceOptions:(id)arg5 ;
-(long long)resolveSubsampleFactorForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(long long)resolveSubsampleFactorForPipelineState:(id)arg1 sourceScale:(SCD_Struct_NU8)arg2 ;
-(long long)subsampleFactor;
-(long long)appliedSubsampleFactor;
-(NUSourceContainerNode *)sourceContainer;
-(NSDictionary *)pipelineSettings;
-(NSDictionary *)sourceOptions;
@end

