/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/Versions/A/AirPlaySender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/AVCVideoStreamDelegate.h>

@protocol OS_dispatch_semaphore;
@class AVCVideoStream, AVCMediaStreamNegotiator, AVCMediaStreamConfig, NSObject, NSString;

@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate> {

	int _clientPID;
	AVCVideoStream* _avcVideoStream;
	AVCMediaStreamNegotiator* _avcMediaStreamNegotiator;
	AVCMediaStreamNegotiator* _avcMediaStreamNegotiatorHDR;
	AVCMediaStreamConfig* _videoStreamConfig;
	AVCMediaStreamConfig* _videoStreamConfigHDR;
	int _didStartStatus;
	void* _eventWeakContext;
	/*function pointer*/void* _eventHandleStart;
	/*function pointer*/void* _eventHandleStop;
	/*function pointer*/void* _eventHandleFailed;
	NSObject*<OS_dispatch_semaphore> _completionSemaphore;
	unsigned char _isSubFrameEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)start;
-(int)stop;
-(void)stream:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stopWithCompletion:(SCD_Struct_AP0*)arg1 ;
-(id)initWithClientPID:(CFNumberRef)arg1 hdrMode:(CFStringRef)arg2 presentationMode:(char)arg3 eventHandlers:(SCD_Struct_AP3*)arg4 error:(int*)arg5 ;
-(int)initializeNegotiatorWithMode:(CFStringRef)arg1 presentationMode:(char)arg2 ;
-(unsigned long long)convertHDRMode:(CFStringRef)arg1 ;
-(int)createVideoStreamConfig:(id*)arg1 withDirection:(long long)arg2 screenOptions:(SCD_Struct_AP4*)arg3 previousConfig:(id)arg4 ;
-(void)getVideoResolutionFromOptions:(SCD_Struct_AP4*)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(void)handleFailureWithError:(int)arg1 reason:(CFStringRef)arg2 ;
-(int)startWithNWConnectionClientID:(unsigned char)arg1 negotiatedBlob:(id)arg2 screenOptions:(SCD_Struct_AP4*)arg3 completion:(SCD_Struct_AP0*)arg4 ;
-(int)restartWithScreenOptions:(SCD_Struct_AP4*)arg1 negotiatedBlob:(id)arg2 ;
-(int)getClientUPID:(unsigned long long*)arg1 ;
-(id)negotiationDataForPresentationMode:(unsigned char)arg1 ;
-(unsigned char)isConfigPresentForPresentationMode:(unsigned char)arg1 ;
@end

