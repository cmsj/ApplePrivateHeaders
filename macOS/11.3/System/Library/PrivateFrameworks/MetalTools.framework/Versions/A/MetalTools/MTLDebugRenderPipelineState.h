/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {

	unsigned long long _maxVertexCount;
	unsigned long long _maxInstanceCount;
	unsigned long long _maxPatchCount;
	unsigned long long _rasterSampleCount;
	unsigned long long _colorPixelFormat[8];
	unsigned long long _depthPixelFormat;
	unsigned long long _stencilPixelFormat;
	unsigned long long _vertexDescriptorLayoutCount;
	NSRange _vertexDescriptorLayouts[31];
	char _threadgroupSizeMatchesTileSize;
	unsigned long long _attachmentWriteMask;
	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _reflection;
	MTLTileRenderPipelineDescriptor* _tileDescriptor;

}

@property (nonatomic,readonly) char rasterizationEnabled; 
@property (nonatomic,readonly) MTLRenderPipelineDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection;                      //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentWriteMask;                        //@synthesize attachmentWriteMask=_attachmentWriteMask - In the implementation block
@property (nonatomic,readonly) MTLTileRenderPipelineDescriptor * tileDescriptor;              //@synthesize tileDescriptor=_tileDescriptor - In the implementation block
-(void)dealloc;
-(id)description;
-(MTLRenderPipelineDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(MTLRenderPipelineReflection *)reflection;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4 ;
-(unsigned long long)attachmentWriteMask;
-(char)rasterizationEnabled;
-(MTLTileRenderPipelineDescriptor *)tileDescriptor;
-(id)outputImageBlockData;
-(BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1 ;
-(void)_updateCachedPipelineState:(id)arg1 ;
-(void)_updateCachedTilePipelineState:(id)arg1 ;
-(id)_findMasterStruct:(id)arg1 includeImageBlockData:(BOOL)arg2 ;
@end

