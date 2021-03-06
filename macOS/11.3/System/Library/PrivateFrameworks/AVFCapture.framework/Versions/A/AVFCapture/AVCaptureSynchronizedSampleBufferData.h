/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedSampleBufferDataInternal* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) char sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(char)hasCorrespondingDepthData;
-(char)hasCorrespondingVisionData;
-(int)constituentDeviceCaptureID;
-(char)sampleBufferWasDropped;
-(long long)droppedReason;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferWasDropped:(char)arg2 ;
@end

