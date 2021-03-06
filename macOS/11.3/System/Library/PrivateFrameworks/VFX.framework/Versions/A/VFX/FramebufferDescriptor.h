/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/Versions/A/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VFX/VFX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FramebufferDescriptor : NSObject <NSCopying> {

	unsigned long long _sampleCount;
	unsigned long long _colorPixelFormat;
	unsigned long long _depthPixelFormat;
	unsigned long long _stencilPixelFormat;

}

@property (assign,nonatomic) unsigned long long sampleCount;                     //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long colorPixelFormat;                //@synthesize colorPixelFormat=_colorPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long depthPixelFormat;                //@synthesize depthPixelFormat=_depthPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long stencilPixelFormat;              //@synthesize stencilPixelFormat=_stencilPixelFormat - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setColorPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)colorPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(unsigned long long)depthPixelFormat;
-(id)initWithRenderPassDescriptor:(id)arg1 ;
-(void)setDepthPixelFormat:(unsigned long long)arg1 ;
-(void)setStencilPixelFormat:(unsigned long long)arg1 ;
@end

