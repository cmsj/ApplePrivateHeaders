/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/Versions/A/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureDevice;

@interface CRCodeRedeemerLayer : CALayer

@property (assign,nonatomic) char isActiveRedeemer; 
@property (assign,nonatomic) char isCaptureModeOnly; 
@property (assign,nonatomic) char isBatchModeOnly; 
@property (assign,nonatomic) char isContinuousCapture; 
@property (assign,nonatomic) id<CRCodeRedeemerLayerDebuggingDelegate> debuggingDelegate; 
@property (assign,nonatomic) long long whiteBalanceMode; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,nonatomic) long long exposureMode; 
@property (assign,nonatomic) long long focusMode; 
@property (assign,nonatomic) long long cameraMode; 
@property (nonatomic,retain) AVCaptureDevice * inputDevice; 
@property (assign,nonatomic) unsigned long long cameraModel; 
@property (assign) id<CALayerDelegate><CRCodeRedeemerLayerDelegate> delegate; 
@property (assign,nonatomic) double sessionTimeout; 
@property (assign,nonatomic) CGColorRef defaultColor; 
+(id)alloc;
+(char)isCRCodeRedeemerAvailable;
-(void)startSession;
-(void)stopSession;
-(id)generateStringFromDate:(id)arg1 ;
-(void)captureImage;
-(void)startSessionWithImage:(vImage_Buffer*)arg1 ;
-(void)showCodeRedeemStatus:(id)arg1 withColor:(CGColorRef)arg2 forDuration:(double)arg3 style:(int)arg4 ;
-(void)shutdownCameraSession;
-(void)gen:(vImage_Buffer*)arg1 ;
@end

