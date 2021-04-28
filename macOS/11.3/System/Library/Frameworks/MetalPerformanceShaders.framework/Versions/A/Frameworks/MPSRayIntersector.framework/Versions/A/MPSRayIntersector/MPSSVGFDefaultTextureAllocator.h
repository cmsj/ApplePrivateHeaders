/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSRayIntersector.framework/Versions/A/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSSVGFTextureAllocator.h>

@protocol MTLDevice;
@class NSMutableArray, NSString;

@interface MPSSVGFDefaultTextureAllocator : NSObject <MPSSVGFTextureAllocator> {

	NSMutableArray* _textures;
	id<MTLDevice> _device;
	unsigned long long _allocatedTextureCount;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long allocatedTextureCount;              //@synthesize allocatedTextureCount=_allocatedTextureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)reset;
-(id)initWithDevice:(id)arg1 ;
-(id)textureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)returnTexture:(id)arg1 ;
-(unsigned long long)allocatedTextureCount;
@end
