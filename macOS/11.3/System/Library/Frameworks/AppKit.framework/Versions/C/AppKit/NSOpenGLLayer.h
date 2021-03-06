/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>

@class NSView, NSOpenGLPixelFormat, NSOpenGLContext;

@interface NSOpenGLLayer : CAOpenGLLayer

@property (__weak) NSView * view; 
@property (retain) NSOpenGLPixelFormat * openGLPixelFormat; 
@property (retain) NSOpenGLContext * openGLContext; 
+(id)defaultValueForKey:(id)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(void)display;
-(void)NS_suggestedContentsScaleDidChange;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)_appkitViewBackingLayerUniqueMethod;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(CGLContextObjectRef)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS127*)arg4 ;
-(void)drawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS127*)arg4 ;
-(id)openGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(id)openGLContextForPixelFormat:(id)arg1 ;
-(char)canDrawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS127*)arg4 ;
-(void)drawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS127*)arg4 ;
-(oneway void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(oneway void)releaseCGLContext:(CGLContextObjectRef)arg1 ;
@end

