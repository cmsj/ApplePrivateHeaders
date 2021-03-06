/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCCompositionRenderer.h>

@interface QCRenderer : NSObject <QCCompositionRenderer> {

	void* _QCRendererPrivate;

}
+(id)defaultRenderingOptions;
+(id)_createAndRegisterUniqueContextForCGLContext:(CGLContextObject*)arg1 contextOwner:(id)arg2 pixelFormat:(CGLPixelFormatObjectRef)arg3 formatOwner:(id)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
+(void)_unregisterUniqueContext:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)userInfo;
-(void)setObservationInfo:(void*)arg1 ;
-(id)attributes;
-(void*)observationInfo;
-(id)composition;
-(id)inputKeys;
-(id)patch;
-(id)renderingContext;
-(id)initWithRenderingContext:(id)arg1 patch:(id)arg2 ;
-(id)initWithCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 colorSpace:(CGColorSpaceRef)arg3 composition:(id)arg4 ;
-(id)initWithCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 colorSpace:(CGColorSpaceRef)arg3 patch:(id)arg4 ;
-(id)initOffScreenWithPixelFormat:(id)arg1 size:(CGSize)arg2 colorSpace:(CGColorSpaceRef)arg3 patch:(id)arg4 ;
-(double)renderingTimeForTime:(double)arg1 arguments:(id)arg2 ;
-(id)createSnapshotImageOfType:(id)arg1 ;
-(id)outputKeys;
-(id)valueForInputKey:(id)arg1 ;
-(id)valueForOutputKey:(id)arg1 ;
-(char)setValue:(id)arg1 forInputKey:(id)arg2 ;
-(id)valueForOutputKey:(id)arg1 ofType:(id)arg2 ;
-(id)propertyListFromInputValues;
-(void)setInputValuesWithPropertyList:(id)arg1 ;
-(id)initWithComposition:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)initWithOpenGLContext:(id)arg1 pixelFormat:(id)arg2 file:(id)arg3 ;
-(id)initOffScreenWithSize:(CGSize)arg1 colorSpace:(CGColorSpaceRef)arg2 composition:(id)arg3 ;
-(double)nextRecommendedRenderingTimeForTime:(double)arg1 arguments:(id)arg2 ;
-(char)renderAtTime:(double)arg1 arguments:(id)arg2 ;
-(id)snapshotImage;
-(id)valueForInputKey:(id)arg1 ofType:(id)arg2 ;
-(char)prerenderAtTime:(double)arg1 imageSizeHint:(CGSize)arg2 arguments:(id)arg3 ;
@end

