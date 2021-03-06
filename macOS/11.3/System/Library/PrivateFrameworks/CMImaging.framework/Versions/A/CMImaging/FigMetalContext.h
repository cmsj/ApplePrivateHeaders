/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/Versions/A/CMImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLCommandBuffer, MTLPipelineLibrarySPI, MTLBuffer;
#import <CMImaging/CMImaging-Structs.h>
@class FigMetalAllocator, MTLVertexDescriptor, FigMetalExecutionStatus;

@interface FigMetalContext : NSObject {

	char _dryRun;
	BOOL _allowCommandBufferCommitsOnlyByForceCommit;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	FigMetalAllocator* _allocator;
	id<MTLBuffer> _fullRangeVertexBuf;
	MTLVertexDescriptor* _fullRangeVertexDesc;

}

@property (nonatomic,retain) id<MTLDevice> device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue;                             //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<MTLLibrary> library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                           //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLPipelineLibrarySPI> pipelineLibrary;                    //@synthesize pipelineLibrary=_pipelineLibrary - In the implementation block
@property (nonatomic,retain) FigMetalAllocator * allocator;                                //@synthesize allocator=_allocator - In the implementation block
@property (assign,nonatomic) char dryRun;                                                  //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,retain) FigMetalExecutionStatus * executionStatus; 
@property (assign,nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;              //@synthesize allowCommandBufferCommitsOnlyByForceCommit=_allowCommandBufferCommitsOnlyByForceCommit - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> fullRangeVertexBuf;                             //@synthesize fullRangeVertexBuf=_fullRangeVertexBuf - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * fullRangeVertexDesc;                    //@synthesize fullRangeVertexDesc=_fullRangeVertexDesc - In the implementation block
+(id)createMetalDevice;
-(int)commonInitWithOptionalCommandQueue:(id)arg1 ;
-(int)initRangeVertex;
-(void)commitAndWait;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6 ;
-(id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2 ;
-(id)initWithLibraryData:(char*)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3 ;
-(FigMetalExecutionStatus *)executionStatus;
-(void)setExecutionStatus:(FigMetalExecutionStatus *)arg1 ;
-(void)waitForSchedule;
-(id)computePipelineStateFor:(id)arg1 constants:(id)arg2 ;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 ;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(CGSize)arg4 plane:(unsigned long long)arg5 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5 ;
-(void)prewarmInternalMetalShadersForFormatsList:(id)arg1 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(void)setAllocator:(FigMetalAllocator *)arg1 ;
-(BOOL)allowCommandBufferCommitsOnlyByForceCommit;
-(void)setAllowCommandBufferCommitsOnlyByForceCommit:(BOOL)arg1 ;
-(id<MTLBuffer>)fullRangeVertexBuf;
-(void)setFullRangeVertexBuf:(id<MTLBuffer>)arg1 ;
-(MTLVertexDescriptor *)fullRangeVertexDesc;
-(void)setFullRangeVertexDesc:(MTLVertexDescriptor *)arg1 ;
-(id)init;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)commit;
-(id<MTLCommandQueue>)commandQueue;
-(void)insertDebugCaptureBoundary;
-(id<MTLPipelineLibrarySPI>)pipelineLibrary;
-(void)setPipelineLibrary:(id<MTLPipelineLibrarySPI>)arg1 ;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(FigMetalAllocator *)allocator;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)forceCommit;
-(void)waitForIdle;
@end

