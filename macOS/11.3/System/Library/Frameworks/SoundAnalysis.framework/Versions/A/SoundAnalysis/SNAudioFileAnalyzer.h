/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAudioFile, SNAudioStreamAnalyzer, NSObject;

@interface SNAudioFileAnalyzer : NSObject {

	AVAudioFile* _audioFile;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	NSObject*<OS_dispatch_queue> _queue;
	char _wasCancelled;

}
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)analyze;
-(id)detailedDescription;
-(char)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)removeRequest:(id)arg1 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllRequests;
-(void)cancelAnalysis;
@end

