/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>

@interface PAOpenGLLayer : CAOpenGLLayer {

	char _needsDisplay;

}
-(char)canDraw;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(CGLContextObjectRef)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_PA21*)arg4 ;
-(void)drawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_PA21*)arg4 ;
-(void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(void)releaseCGLContext:(CGLContextObjectRef)arg1 ;
-(void)drawInOpenGLContext:(id)arg1 ;
@end
