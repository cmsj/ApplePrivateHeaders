/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PAImaging/PAImaging-Structs.h>
@class PAOpenGLDevice, PAGLFramebuffer, IPAColorProfile;

@interface PAOpenGLContext : NSObject {

	PAOpenGLDevice* _device;
	CGLContextObjectRef _context;
	PAGLFramebuffer* _fbo;
	PAGLFramebuffer* _readFBO;
	PAGLFramebuffer* _drawFBO;
	double _targetScaleFactor;
	IPAColorProfile* _targetColorProfile;
	unsigned _threadId;

}

@property (assign) unsigned threadID; 
@property (assign,nonatomic) double targetScaleFactor; 
@property (nonatomic,retain) IPAColorProfile * targetColorProfile; 
@property (nonatomic,__weak,readonly) PAOpenGLDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) PAGLFramebuffer * framebuffer;                       //@synthesize fbo=_fbo - In the implementation block
@property (nonatomic,readonly) PAGLFramebuffer * readBuffer;                        //@synthesize readFBO=_readFBO - In the implementation block
@property (nonatomic,readonly) PAGLFramebuffer * drawBuffer;                        //@synthesize drawFBO=_drawFBO - In the implementation block
@property (nonatomic,readonly) CGLContextObjectRef CGLContext;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CGLPixelFormatObjectRef CGLPixelFormat; 
+(id)currentContext;
+(id)contextWithCGLContext:(CGLContextObjectRef)arg1 ;
-(void)dealloc;
-(id)description;
-(PAOpenGLDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(unsigned)threadID;
-(void)setThreadID:(unsigned)arg1 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(CGLContextObjectRef)CGLContext;
-(PAGLFramebuffer *)readBuffer;
-(void)_deleteFBOs;
-(CGLPixelFormatObjectRef)CGLPixelFormat;
-(char)isCurrentContext;
-(char)isVertexProcessingAccelerated;
-(char)isGeometryProcessingAccelerated;
-(char)isFragmentProcessingAccelerated;
-(PAGLFramebuffer *)framebuffer;
-(PAGLFramebuffer *)drawBuffer;
-(id)_simpleDrawingProgramInstance;
-(IPAColorProfile *)targetColorProfile;
-(id)_basicDrawingProgramInstance;
-(id)_basicDrawingProgram;
-(double)targetScaleFactor;
-(void)setTargetScaleFactor:(double)arg1 ;
-(void)setTargetColorProfile:(IPAColorProfile *)arg1 ;
-(void)drawTexture2DRect:(unsigned)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)setupForDrawingInRect:(CGRect)arg1 flip:(char)arg2 ;
-(void)fillRect:(CGRect)arg1 color:(id)arg2 ;
-(void)drawTextLine:(id)arg1 atPoint:(CGPoint)arg2 flipped:(char)arg3 ;
-(id)_simpleDrawingProgram;
@end

