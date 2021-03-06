/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSObject, AVCaptureVideoSettings, NSArray;

@interface AVCaptureVideoDataOutputInternal_Tundra : NSObject {

	AVWeakReference* weakReferenceDelegate;
	NSObject*<OS_dispatch_queue> clientQueue;
	CFDictionaryRef videoDecompressorUnits;
	CFDictionaryRef videoFrameRateGovernorUnits;
	CFDictionaryRef videoCompressorUnits;
	CFDictionaryRef videoToProcsUnits;
	CFDictionaryRef callbackData;
	AVCaptureVideoSettings* videoSettings;
	char alwaysDiscardsLateVideoFrames;
	NSArray* availableVideoCVPixelFormatTypes;
	char automaticallyConfiguresOutputBufferDimensions;
	char deliversPreviewSizedOutputBuffers;
	os_unfair_lock_s internalLock;

}
-(void)dealloc;
-(id)init;
@end

