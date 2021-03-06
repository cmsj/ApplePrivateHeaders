/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FigCaptureStillImageSettings, BWStillImageCaptureSettings, FigCaptureRecordingSettings;

@interface BWNodeError : NSObject {

	long long _uniqueID;
	int _errorCode;
	NSString* _sourceNodeDescription;
	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) int errorCode; 
@property (readonly) NSString * sourceNodeDescription; 
@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings;                                //@synthesize recordingSettings=_recordingSettings - In the implementation block
+(id)newError:(int)arg1 sourceNode:(id)arg2 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)hash;
-(int)errorCode;
-(id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5 ;
-(NSString *)sourceNodeDescription;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(FigCaptureRecordingSettings *)recordingSettings;
@end

