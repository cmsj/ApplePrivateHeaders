/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isPreviewing,nonatomic,readonly) char previewing; 
@property (getter=isOrientationSupported,nonatomic,readonly) char orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) char mirroringSupported; 
@property (assign,nonatomic) char automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) char mirrored; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(AVCaptureConnection *)connection;
-(void)setOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isPaused;
-(void)setBounds:(CGRect)arg1 ;
-(long long)orientation;
-(long long)_orientation;
-(void)layoutSublayers;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(int)changeSeed;
-(void)setPaused:(char)arg1 ;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)_input;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)weakReference;
-(void)removeConnection:(id)arg1 ;
-(void)bumpChangeSeed;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(id)sinkID;
-(id)connectionMediaTypes;
-(char)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)_initWithSession:(id)arg1 makeConnection:(char)arg2 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(char)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(char)arg1 ;
-(char)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(char)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(unsigned)imageQueueSlot;
-(double)previewRotationDegrees;
-(char)isPreviewing;
-(char)automaticallyAdjustsMirroring;
-(id)videoPreviewFilters;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(char)_automaticallyAdjustsMirroring;
-(char)_isMirrored;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(char)isMirroringSupported;
-(char)isChromaNoiseReductionSupported;
-(char)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(char)arg2 exceptionReason:(id*)arg3 ;
-(char)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(void)didUpdatePreviewFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(char)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(char)arg1 ;
-(char)isMirrored;
-(void)setMirrored:(char)arg1 ;
-(char)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(char)isDepthDataDeliverySupported;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(char)isUnoptimizedFilterRenderingEnabled;
-(void)setUnoptimizedFilterRenderingEnabled:(char)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(void)_setUpMetadataObjectLayerAttributes;
-(void)_removeMetadataObjectLayersWithName:(id)arg1 ;
-(void)_removeMetadataObjectLayers;
-(void)drawMetadataObjects:(id)arg1 ;
@end

