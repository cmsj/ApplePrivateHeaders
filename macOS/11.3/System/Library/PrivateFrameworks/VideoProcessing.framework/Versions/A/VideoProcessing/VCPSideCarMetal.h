/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSObject;

@interface VCPSideCarMetal : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _transitionDetection;
	CF<__CVMetalTextureCache *>* _textureCacheLuma;
	CF<__CVMetalTextureCache *>* _textureCacheChroma;
	CF<__CVMetalTextureCache *>* _textureCacheRGBALuma;
	CF<__CVMetalTextureCache *>* _textureCacheRGBAChroma;
	NSDictionary* _readAttributes;
	NSDictionary* _writeAttributes;
	MetalBufferPool _packetPool;
	MetalBufferPool _blockDist;
	NSObject*<OS_dispatch_queue> _submissionQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	unsigned _planeOffset[4];
	unsigned _planeBytesPerRow[4];

}
-(id)init;
-(void)setPacketLayout:(id)arg1 ;
-(int)selectGPUForFrame:(CVBufferRef)arg1 ;
-(id)cachedTexture:(CVBufferRef)arg1 forPlane:(int)arg2 withAttributes:(id)arg3 ;
-(id)rgbaUnormTextureForLuma:(CVBufferRef)arg1 withAttributes:(id)arg2 ;
-(id)rgbaUintTextureForLuma:(CVBufferRef)arg1 withAttributes:(id)arg2 ;
-(id)rgbaUintTextureForChroma:(CVBufferRef)arg1 withAttributes:(id)arg2 ;
-(future<unsigned long long>*)temporalTransitionScore:(CVBufferRef)arg1 previousFrame:(CVBufferRef)arg2 forRegion:(SCD_Struct_VC71)arg3 ;
-(int)copyFromFrame:(CVBufferRef)arg1 toTile:(CVBufferRef)arg2 origin:(SCD_Struct_VC70)arg3 size:(SCD_Struct_VC70)arg4 withFence:(future<void>*)arg5 ;
-(future<CF<const __CFData *>>*)createEncodePacket:(CVBufferRef)arg1 forRegion:(SCD_Struct_VC71)arg2 instance:(unsigned)arg3 sequenceNumber:(unsigned)arg4 frameIndex:(unsigned)arg5 pts:(SCD_Struct_VC6)arg6 duration:(SCD_Struct_VC6)arg7 frameProperties:(CFDictionaryRef)arg8 ;
@end

