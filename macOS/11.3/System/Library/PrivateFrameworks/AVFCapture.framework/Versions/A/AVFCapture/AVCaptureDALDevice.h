/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice_Tundra.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSArray, AVCaptureDeviceFormat_Tundra, NSObject, AVCaptureDeviceInputSource_Tundra;

@interface AVCaptureDALDevice : AVCaptureDevice_Tundra {

	NSString* _uniqueID;
	unsigned _connectionID;
	unsigned long long _flags;
	NSArray* _formats;
	AVCaptureDeviceFormat_Tundra* _activeFormat;
	SCD_Struct_AV0 _activeMinFrameDuration;
	SCD_Struct_AV0 _activeMaxFrameDuration;
	SCD_Struct_AV0 _defaultActiveMinFrameDuration;
	SCD_Struct_AV0 _defaultActiveMaxFrameDuration;
	char _suspended;
	os_unfair_lock_s _propertiesLock;
	os_unfair_lock_s _internalLock;
	NSString* _localizedName;
	NSString* _modelID;
	NSString* _manufacturer;
	char _automaticallyAdjustsFeatureControls;
	NSObject*<OS_dispatch_queue> _transportPropertyObserverQueue;
	long long _transportPropertyObserverCount;
	NSObject*<OS_dispatch_source> _transportPropertyObserverTimer;
	long long _focusMode;
	long long _exposureMode;
	long long _whiteBalanceMode;
	CGPoint _focusPointOfInterest;
	CGPoint _exposurePointOfInterest;
	char _transportControlsSupported;
	long long _transportControlsPlaybackMode;
	float _transportControlsSpeed;
	char _adjustingFocus;
	char _adjustingExposure;
	char _adjustingWhiteBalance;
	unsigned long long _DALTransportType;
	NSArray* _inputSources;
	AVCaptureDeviceInputSource_Tundra* _activeInputSource;
	OpaqueCMClockRef _deviceClock;
	int _transportType;

}

@property (assign,nonatomic) char transportControlsSupported;                                        //@synthesize transportControlsSupported=_transportControlsSupported - In the implementation block
@property (assign,nonatomic) long long transportControlsPlaybackMode;                                //@synthesize transportControlsPlaybackMode=_transportControlsPlaybackMode - In the implementation block
@property (assign,nonatomic) float transportControlsSpeed;                                           //@synthesize transportControlsSpeed=_transportControlsSpeed - In the implementation block
@property (assign,getter=isAdjustingFocus,nonatomic) char adjustingFocus;                            //@synthesize adjustingFocus=_adjustingFocus - In the implementation block
@property (assign,getter=isAdjustingExposure,nonatomic) char adjustingExposure;                      //@synthesize adjustingExposure=_adjustingExposure - In the implementation block
@property (assign,getter=isAdjustingWhiteBalance,nonatomic) char adjustingWhiteBalance;              //@synthesize adjustingWhiteBalance=_adjustingWhiteBalance - In the implementation block
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(id)devices;
+(id)deviceWithUniqueID:(id)arg1 ;
+(void)_ensureDeviceList;
+(void)_putDeviceIntoInputModeIfPossible:(unsigned)arg1 ;
+(void)_refreshDevices;
+(id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(id)localizedName;
-(id)uniqueID;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(char)isSuspended;
-(unsigned)deviceID;
-(char)isConnected;
-(void)setActiveColorSpace:(long long)arg1 ;
-(long long)activeColorSpace;
-(id)deviceType;
-(unsigned)connectionID;
-(int)transportType;
-(id)manufacturer;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(id)modelID;
-(id)activeFormat;
-(id)formats;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(void)setConnectionID:(unsigned)arg1 ;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)_postNotificationNamed:(id)arg1 ;
-(char)isInUseByAnotherApplication;
-(OpaqueCMClockRef)deviceClock;
-(id)initWithUniqueID:(id)arg1 connectionID:(unsigned)arg2 ;
-(void)_refreshConnectionID:(unsigned)arg1 KVONotify:(char)arg2 ;
-(void)_refreshActiveFormatAndKVONotify:(char)arg1 ;
-(id)inputSources;
-(void)_removePropertyListeners;
-(void)_addPropertyListeners;
-(void)_refreshPropertiesAndKVONotify:(char)arg1 ;
-(void)_refreshTransportTypeAndKVONotify:(char)arg1 ;
-(void)_refreshStreamsAndKVONotify:(char)arg1 ;
-(void)_refreshLocalizedNameAndKVONotify:(char)arg1 ;
-(void)_refreshModelIDAndKVONotify:(char)arg1 ;
-(void)_refreshManufacturerAndKVONotify:(char)arg1 ;
-(void)_refreshLinkedDevicesAndKVONotify:(char)arg1 ;
-(void)_refreshSuspendedAttributeAndKVONotify:(char)arg1 ;
-(void)_refreshIsInUseByAnotherApplicationAndKVONotify:(char)arg1 ;
-(void)_refreshInputSourcesAndKVONotify:(char)arg1 ;
-(void)_refreshFormatsAndKVONotify:(char)arg1 ;
-(id)supportedFrameRateRangesForStream:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(id)deviceFormatForStream:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 hasAutofocus:(char)arg3 ;
-(SCD_Struct_AV0)activeVideoMinFrameDurationForStream:(unsigned)arg1 ;
-(SCD_Struct_AV0)activeVideoMaxFrameDurationForStream:(unsigned)arg1 ;
-(char)_retrieveTransportControlsSupported;
-(SCD_Struct_AV30)_retrieveTransportValues;
-(SCD_Struct_AV30)_retrieveAVCDeviceValues;
-(SCD_Struct_AV30)_retrieveRS422DeviceValues;
-(void)_startupTransportPropertyObserverTimerForPlaybackMode:(long long)arg1 ;
-(opaqueCMSampleBufferRef)copyStillImageSampleBufferWithFormat:(id)arg1 error:(id*)arg2 ;
-(long long)deviceSystem;
-(unsigned)connectionUnitComponentSubType;
-(void)setActiveFormat:(id)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(id)activeInputSource;
-(void)setActiveInputSource:(id)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(char)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)cancelVideoZoomRamp;
-(void)setActiveMaxExposureDuration:(SCD_Struct_AV0)arg1 ;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(void)_handleDeviceIsAliveNotification:(id)arg1 ;
-(char)becomeDeviceMaster:(id*)arg1 ;
-(void)relinquishDeviceMaster;
-(char)transportControlsSupported;
-(long long)transportControlsPlaybackMode;
-(float)transportControlsSpeed;
-(char)_sendAVCDeviceOpcode:(unsigned char)arg1 playbackMode:(unsigned char)arg2 ;
-(void)setAutomaticallyAdjustsFeatureControls:(char)arg1 ;
-(char)automaticallyAdjustsFeatureControls;
-(char)isHighResolutionCamera;
-(id)availableStillImageFormats;
-(void)setTransportControlsSupported:(char)arg1 ;
-(void)setTransportControlsPlaybackMode:(long long)arg1 ;
-(void)setTransportControlsSpeed:(float)arg1 ;
-(char)isAdjustingFocus;
-(void)setAdjustingFocus:(char)arg1 ;
-(char)isAdjustingExposure;
-(void)setAdjustingExposure:(char)arg1 ;
-(char)isAdjustingWhiteBalance;
-(void)setAdjustingWhiteBalance:(char)arg1 ;
-(char)isFocusModeSupported:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(char)isExposureModeSupported:(long long)arg1 ;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(char)isWhiteBalanceModeSupported:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setTransportControlsPlaybackMode:(long long)arg1 speed:(float)arg2 ;
@end
