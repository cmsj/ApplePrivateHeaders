/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface AXMCaptureSettings : NSObject {

	AVCaptureDevice* _captureDevice;
	AVCaptureDeviceFormat* _captureFormat;

}

@property (nonatomic,retain) AVCaptureDevice * captureDevice;                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * captureFormat;              //@synthesize captureFormat=_captureFormat - In the implementation block
-(AVCaptureDevice *)captureDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(AVCaptureDeviceFormat *)captureFormat;
-(void)setCaptureFormat:(AVCaptureDeviceFormat *)arg1 ;
@end

