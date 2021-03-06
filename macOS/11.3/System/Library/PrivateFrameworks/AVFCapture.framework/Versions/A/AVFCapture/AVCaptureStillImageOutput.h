/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSDictionary, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {

	AVCaptureStillImageOutputInternal* _internal;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (nonatomic,readonly) NSArray * availableImageDataCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableImageDataCodecTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) char stillImageStabilizationSupported; 
@property (assign,nonatomic) char automaticallyEnablesStillImageStabilizationWhenAvailable; 
@property (getter=isStillImageStabilizationActive,nonatomic,readonly) char stillImageStabilizationActive; 
@property (assign,getter=isHighResolutionStillImageOutputEnabled,nonatomic) char highResolutionStillImageOutputEnabled; 
@property (getter=isCapturingStillImage,readonly) char capturingStillImage; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)new;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(unsigned long long)maxStillImageJPEGDataSize;
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 metadata:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)outputSettings;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(id)connectionMediaTypes;
-(char)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(char)isHighResolutionStillImageOutputEnabled;
-(id)firstActiveConnection;
-(char)squareCropEnabled;
-(unsigned)shutterSound;
-(void)setSquareCropEnabled:(char)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(CGSize)previewImageSize;
-(unsigned)imageDataFormatType;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(char)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1 ;
-(NSArray *)availableImageDataCVPixelFormatTypes;
-(NSArray *)availableImageDataCodecTypes;
-(void)clearPreparedBracketIfNeeded;
-(char)isStillImageStabilizationSupported;
-(char)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(void)setNoiseReductionEnabled:(char)arg1 ;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg1 ;
-(char)isLensStabilizationDuringBracketedCaptureSupported;
-(unsigned long long)maxBracketedCaptureStillImageCount;
-(char)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2 ;
-(char)_preparedForBracketedCaptureWithSettings:(id)arg1 ;
-(char)isLensStabilizationDuringBracketedCaptureEnabled;
-(void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(char*)arg3 ;
-(void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2 ;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(char)isStillImageStabilizationActive;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(char)arg1 ;
-(void)setHighResolutionStillImageOutputEnabled:(char)arg1 ;
-(char)isNoiseReductionEnabled;
-(char)isCapturingStillImage;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(char)arg1 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

