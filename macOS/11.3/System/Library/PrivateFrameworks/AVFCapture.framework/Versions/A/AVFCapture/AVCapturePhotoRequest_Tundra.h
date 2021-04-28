/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCapturePhotoSettings_Tundra, AVCaptureResolvedPhotoSettings_Tundra, AVWeakReference;

@interface AVCapturePhotoRequest_Tundra : NSObject {

	long long _imageOrientation;
	char _imageMirrored;
	AVCapturePhotoSettings_Tundra* _unresolvedSettings;
	AVCaptureResolvedPhotoSettings_Tundra* _resolvedSettings;
	AVWeakReference* _weakReferenceDelegate;

}

@property (nonatomic,readonly) id<AVCapturePhotoCaptureDelegate_Tundra> delegate; 
@property (nonatomic,readonly) long long imageOrientation;                                          //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) char imageMirrored;                                                  //@synthesize imageMirrored=_imageMirrored - In the implementation block
@property (nonatomic,readonly) AVCapturePhotoSettings_Tundra * unresolvedSettings;                  //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVCaptureResolvedPhotoSettings_Tundra * resolvedSettings; 
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 imageOrientation:(long long)arg3 imageMirrored:(char)arg4 ;
-(void)dealloc;
-(id<AVCapturePhotoCaptureDelegate_Tundra>)delegate;
-(long long)imageOrientation;
-(char)imageMirrored;
-(AVCaptureResolvedPhotoSettings_Tundra *)resolvedSettings;
-(void)setResolvedSettings:(AVCaptureResolvedPhotoSettings_Tundra *)arg1 ;
-(AVCapturePhotoSettings_Tundra *)unresolvedSettings;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 imageOrientation:(long long)arg3 imageMirrored:(char)arg4 ;
@end
