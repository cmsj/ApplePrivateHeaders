/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QCPlugInInputImageSource
@required
-(unsigned long long)bufferBytesPerRow;
-(unsigned)textureTarget;
-(CGRect*)imageBounds;
-(unsigned)textureName;
-(CGColorSpaceRef)imageColorSpace;
-(char)shouldColorMatch;
-(char)lockBufferRepresentationWithPixelFormat:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 forBounds:(CGRect)arg3;
-(unsigned long long)bufferPixelsWide;
-(unsigned long long)bufferPixelsHigh;
-(id)bufferPixelFormat;
-(CGColorSpaceRef)bufferColorSpace;
-(const void*)bufferBaseAddress;
-(void)unlockBufferRepresentation;
-(char)lockTextureRepresentationWithColorSpace:(CGColorSpaceRef)arg1 forBounds:(CGRect)arg2;
-(unsigned long long)texturePixelsWide;
-(unsigned long long)texturePixelsHigh;
-(CGColorSpaceRef)textureColorSpace;
-(char)textureFlipped;
-(const float*)textureMatrix;
-(void)bindTextureRepresentationToCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 normalizeCoordinates:(char)arg3;
-(void)unbindTextureRepresentationFromCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2;
-(void)unlockTextureRepresentation;

@end

