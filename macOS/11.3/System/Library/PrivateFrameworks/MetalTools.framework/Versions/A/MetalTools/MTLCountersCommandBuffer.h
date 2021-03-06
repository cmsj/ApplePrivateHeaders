/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {

	MTLCountersTraceCommandBuffer* _traceBuffer;

}

@property (nonatomic,readonly) MTLCountersTraceCommandBuffer * traceBuffer;              //@synthesize traceBuffer=_traceBuffer - In the implementation block
-(void)dealloc;
-(MTLCountersTraceCommandBuffer *)traceBuffer;
-(void)presentDrawable:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)waitUntilScheduled;
-(void)waitUntilCompleted;
-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(id)resourceStateCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end

