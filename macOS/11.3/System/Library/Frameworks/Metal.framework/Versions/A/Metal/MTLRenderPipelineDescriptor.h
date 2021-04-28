/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLVertexDescriptor, MTLRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray, NSArray;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> vertexFunction; 
@property (nonatomic,retain) id<MTLFunction> fragmentFunction; 
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (assign,getter=isAlphaToCoverageEnabled,nonatomic) char alphaToCoverageEnabled; 
@property (assign,getter=isAlphaToOneEnabled,nonatomic) char alphaToOneEnabled; 
@property (assign,getter=isRasterizationEnabled,nonatomic) char rasterizationEnabled; 
@property (assign,nonatomic) unsigned long long maxVertexAmplificationCount; 
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) unsigned long long depthAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long stencilAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long inputPrimitiveTopology; 
@property (assign,nonatomic) unsigned long long tessellationPartitionMode; 
@property (assign,nonatomic) unsigned long long maxTessellationFactor; 
@property (assign,getter=isTessellationFactorScaleEnabled,nonatomic) char tessellationFactorScaleEnabled; 
@property (assign,nonatomic) unsigned long long tessellationFactorFormat; 
@property (assign,nonatomic) unsigned long long tessellationControlPointIndexType; 
@property (assign,nonatomic) unsigned long long tessellationFactorStepFunction; 
@property (assign,nonatomic) unsigned long long tessellationOutputWindingOrder; 
@property (readonly) MTLPipelineBufferDescriptorArray * vertexBuffers; 
@property (readonly) MTLPipelineBufferDescriptorArray * fragmentBuffers; 
@property (assign,nonatomic) char supportIndirectCommandBuffers; 
@property (nonatomic,copy) NSArray * binaryArchives; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end
