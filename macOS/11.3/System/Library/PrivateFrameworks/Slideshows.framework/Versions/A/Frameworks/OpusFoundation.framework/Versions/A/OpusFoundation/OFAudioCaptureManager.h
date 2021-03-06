/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFAudioRecorderDelegate.h>

@protocol OFAudioCaptureManagerDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, OFAudioRecorder, NSURL;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate> {

	AVCaptureSession* _session;
	AVCaptureDeviceInput* _audioInput;
	OFAudioRecorder* _recorder;
	NSURL* _outputFileURL;
	id _deviceConnectedObserver;
	id _deviceDisconnectedObserver;
	char _isCancelled;
	id<OFAudioCaptureManagerDelegate> _delegate;

}

@property (nonatomic,retain) AVCaptureSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                       //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) OFAudioRecorder * recorder;                              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                     //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) id deviceConnectedObserver;                              //@synthesize deviceConnectedObserver=_deviceConnectedObserver - In the implementation block
@property (assign,nonatomic) id deviceDisconnectedObserver;                           //@synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) id<OFAudioCaptureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<OFAudioCaptureManagerDelegate>)delegate;
-(void)setDelegate:(id<OFAudioCaptureManagerDelegate>)arg1 ;
-(char)isCancelled;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)stopRecording;
-(char)isRecording;
-(void)startRecording;
-(NSURL *)outputFileURL;
-(id)_audioDevice;
-(AVCaptureDeviceInput *)audioInput;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(OFAudioRecorder *)recorder;
-(id)_tempFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(void)cancelRecording;
-(void)setRecorder:(OFAudioRecorder *)arg1 ;
-(char)openSession;
-(void)_removeFile:(id)arg1 ;
-(void)recorderRecordingDidBegin:(id)arg1 ;
-(void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3 ;
-(id)initWithOutputFileURL:(id)arg1 ;
-(unsigned long long)micCount;
-(float)meanAudioLevel;
-(id)deviceConnectedObserver;
-(void)setDeviceConnectedObserver:(id)arg1 ;
-(id)deviceDisconnectedObserver;
-(void)setDeviceDisconnectedObserver:(id)arg1 ;
@end

