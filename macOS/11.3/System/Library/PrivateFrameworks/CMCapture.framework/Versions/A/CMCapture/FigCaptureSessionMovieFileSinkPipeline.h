/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {

	char _momentCaptureMovieRecordingEnabled;
	char _recording;
	NSMutableArray* _pendingIrisRecordings;

}

@property (assign,nonatomic) char momentCaptureMovieRecordingEnabled;              //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) char recording; 
@property (nonatomic,retain) NSMutableArray * pendingIrisRecordings;               //@synthesize pendingIrisRecordings=_pendingIrisRecordings - In the implementation block
-(void)dealloc;
-(char)recording;
-(void)setRecording:(char)arg1 ;
-(char)momentCaptureMovieRecordingEnabled;
-(void)setMomentCaptureMovieRecordingEnabled:(char)arg1 ;
-(NSMutableArray *)pendingIrisRecordings;
-(void)setPendingIrisRecordings:(NSMutableArray *)arg1 ;
@end

