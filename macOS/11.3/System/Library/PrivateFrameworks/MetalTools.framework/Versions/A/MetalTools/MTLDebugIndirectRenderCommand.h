/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsIndirectRenderCommand.h>

@protocol MTLIndirectCommandBufferSPI;
@class MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {

	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _index;
	id<MTLIndirectCommandBufferSPI> _iCB;

}

@property (readonly) unsigned long long index; 
@property (readonly) id<MTLIndirectCommandBuffer> indirectCommandBuffer; 
-(void)dealloc;
-(id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4 ;
-(unsigned long long)index;
-(id<MTLIndirectCommandBuffer>)indirectCommandBuffer;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12 ;
@end

