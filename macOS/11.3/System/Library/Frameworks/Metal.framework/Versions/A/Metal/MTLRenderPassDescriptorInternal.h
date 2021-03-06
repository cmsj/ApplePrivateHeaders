/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(void)setDefaultColorSampleCount:(unsigned long long)arg1 ;
-(void)setFineGrainedBackgroundVisibilityEnabled:(char)arg1 ;
-(char)fineGrainedBackgroundVisibilityEnabled;
-(void)setDitherEnabled:(char)arg1 ;
-(char)isDitherEnabled;
-(void)setOpenGLModeEnabled:(char)arg1 ;
-(void)setPointCoordYFlipEnabled:(char)arg1 ;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)visibilityResultBuffer;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(id)colorAttachments;
-(id)depthAttachment;
-(id)stencilAttachment;
-(id)sampleBufferAttachments;
-(void)setRasterizationRateMap:(id)arg1 ;
-(unsigned long long)tileWidth;
-(unsigned long long)tileHeight;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)renderTargetArrayLength;
-(id)rasterizationRateMap;
-(unsigned long long)threadgroupMemoryLength;
-(char)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(unsigned long long)renderTargetWidth;
-(unsigned long long)renderTargetHeight;
-(unsigned long long)defaultColorSampleCount;
-(unsigned long long)defaultRasterSampleCount;
-(char)openGLModeEnabled;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(void)setSamplePositions:(const SCD_Struct_MT111*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT111*)arg1 count:(unsigned long long)arg2 ;
-(char)pointCoordYFlipEnabled;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
@end

