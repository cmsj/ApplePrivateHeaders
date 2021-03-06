/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSMutableArray, AVCaptureDevice, AVWeakReference, AVCaptureInputPort, NSArray, NSString;

@interface AVCaptureConnectionInternal : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureDevice* sourceDevice;
	AVWeakReference* outputWeakReference;
	AVWeakReference* videoPreviewLayerWeakReference;
	char hasActiveObservers;
	char active;
	char enabled;
	int changeSeed;
	AVCaptureInputPort* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort* videoInputPort;
	AVCaptureInputPort* metadataInputPort;
	AVCaptureInputPort* metadataItemInputPort;
	AVCaptureInputPort* depthDataInputPort;
	char videoMirroringSupported;
	char automaticallyAdjustsVideoMirroring;
	char videoMirrored;
	char videoOrientationSupported;
	long long videoOrientation;
	char isAlmondUIImagePickerControllerClient;
	SCD_Struct_AV0 videoMinFrameDuration;
	SCD_Struct_AV0 videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	long long preferredVideoStabilizationMode;
	char videoStabilizationEnabled;
	long long activeVideoStabilizationMode;
	char hasVideoMinFrameDurationObserver;
	NSString* connectionID;
	char cameraIntrinsicMatrixDeliverySupported;
	char cameraIntrinsicMatrixDeliveryEnabled;
	char livePhotoMetadataWritingEnabled;
	char debugMetadataSidecarFileEnabled;
	NSArray* supportedVideoMirroringMethodsForMovieRecording;
	long long videoMirroringMethodForMovieRecording;

}
@end

