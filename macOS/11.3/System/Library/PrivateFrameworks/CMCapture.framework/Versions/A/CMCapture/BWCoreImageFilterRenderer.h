/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol OS_dispatch_queue, MTLCommandQueue;
@class NSObject, CIContext, NSString;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {

	char _usingDepth;
	int _portraitRenderQuality;
	float _inputRenderQuality;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CIContext* _renderingQueueContext;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,readonly) char usingDepth;                              //@synthesize usingDepth=_usingDepth - In the implementation block
@property (nonatomic,retain) CIContext * renderingQueueContext;              //@synthesize renderingQueueContext=_renderingQueueContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) char supportsAnimation; 
@property (nonatomic,readonly) char adjustsMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)context:(char)arg1 err:(int*)arg2 ;
+(void)prewarmVersion:(unsigned)arg1 ;
+(void)_prewarmCoreImagePortraitFilterV1;
-(void)dealloc;
-(id)init;
-(short)type;
-(NSString *)displayName;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)supportsAnimation;
-(char)adjustsMetadata;
-(id)initForRenderingWithDepth:(char)arg1 context:(id)arg2 portraitRenderQuality:(int)arg3 metalCommandQueue:(id)arg4 ;
-(void)setRenderingQueueContext:(CIContext *)arg1 ;
-(void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 prewarming:(char)arg6 completionHandler:(/*^block*/id)arg7 ;
-(CIContext *)renderingQueueContext;
-(id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2 ;
-(id)coreImageArrayRepresentationForRegion:(id)arg1 ;
-(char)usingDepth;
@end

