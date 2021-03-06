/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSMutableArray;

@interface VCPVideoProcessorSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _nodes;
	char _modified;
	SCD_Struct_VC6 _startTime;
	CF<opaqueCMSampleBuffer *>* _nextSampleBuffer;
	unsigned long long _frameCount;
	unsigned _orientation;

}

@property (assign,nonatomic) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)orientation;
-(char)removeRequest:(id)arg1 error:(id*)arg2 ;
-(char)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3 ;
-(char)shouldProcessSampleWithTimeRange:(SCD_Struct_VC7)arg1 atSamplingInterval:(SCD_Struct_VC6)arg2 ;
-(char)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withEndTime:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(char)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(char)flushWithEndTime:(SCD_Struct_VC6)arg1 error:(id*)arg2 ;
@end

