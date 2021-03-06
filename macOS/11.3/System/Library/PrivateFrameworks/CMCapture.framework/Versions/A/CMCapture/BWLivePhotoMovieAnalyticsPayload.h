/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWLivePhotoMovieAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _clientIDType;
	char _recordingSucceeded;
	int _errorStatus;
	int _sessionStatus;
	char _longPressMovie;
	char _originalRecording;
	char _hasStillImagePTS;
	double _movieDurationInSeconds;
	double _stillTimeOffsetInSeconds;
	double _stillTimeOffsetToVideoPrerollStartInMilliseconds;
	double _stillTimeOffsetToVideoPrerollStopInMilliseconds;
	double _stillTimeOffsetToAudioPrerollStartInMilliseconds;
	double _stillTimeOffsetToAudioPrerollStopInMilliseconds;
	char _overlappingCapture;
	long long _stagingNodeOverallNumberOfVideoFramesReceived;
	double _stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
	long long _stagingNodeValveActiveNumberOfVideoFramesReceived;
	double _stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
	double _stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
	long long _fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
	double _fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
	double _fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
	double _fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
	double _fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;

}

@property (assign,nonatomic) int clientIDType;                                                                                  //@synthesize clientIDType=_clientIDType - In the implementation block
@property (assign,nonatomic) char recordingSucceeded;                                                                           //@synthesize recordingSucceeded=_recordingSucceeded - In the implementation block
@property (assign,nonatomic) int errorStatus;                                                                                   //@synthesize errorStatus=_errorStatus - In the implementation block
@property (assign,nonatomic) int sessionStatus;                                                                                 //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (assign,nonatomic) char longPressMovie;                                                                               //@synthesize longPressMovie=_longPressMovie - In the implementation block
@property (assign,nonatomic) char originalRecording;                                                                            //@synthesize originalRecording=_originalRecording - In the implementation block
@property (assign,nonatomic) char hasStillImagePTS;                                                                             //@synthesize hasStillImagePTS=_hasStillImagePTS - In the implementation block
@property (assign,nonatomic) double movieDurationInSeconds;                                                                     //@synthesize movieDurationInSeconds=_movieDurationInSeconds - In the implementation block
@property (assign,nonatomic) double stillTimeOffsetInSeconds;                                                                   //@synthesize stillTimeOffsetInSeconds=_stillTimeOffsetInSeconds - In the implementation block
@property (assign,nonatomic) double stillTimeOffsetToVideoPrerollStartInMilliseconds;                                           //@synthesize stillTimeOffsetToVideoPrerollStartInMilliseconds=_stillTimeOffsetToVideoPrerollStartInMilliseconds - In the implementation block
@property (assign,nonatomic) double stillTimeOffsetToVideoPrerollStopInMilliseconds;                                            //@synthesize stillTimeOffsetToVideoPrerollStopInMilliseconds=_stillTimeOffsetToVideoPrerollStopInMilliseconds - In the implementation block
@property (assign,nonatomic) double stillTimeOffsetToAudioPrerollStartInMilliseconds;                                           //@synthesize stillTimeOffsetToAudioPrerollStartInMilliseconds=_stillTimeOffsetToAudioPrerollStartInMilliseconds - In the implementation block
@property (assign,nonatomic) double stillTimeOffsetToAudioPrerollStopInMilliseconds;                                            //@synthesize stillTimeOffsetToAudioPrerollStopInMilliseconds=_stillTimeOffsetToAudioPrerollStopInMilliseconds - In the implementation block
@property (assign,nonatomic) char overlappingCapture;                                                                           //@synthesize overlappingCapture=_overlappingCapture - In the implementation block
@property (assign,nonatomic) long long stagingNodeOverallNumberOfVideoFramesReceived;                                           //@synthesize stagingNodeOverallNumberOfVideoFramesReceived=_stagingNodeOverallNumberOfVideoFramesReceived - In the implementation block
@property (assign,nonatomic) double stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;                              //@synthesize stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds=_stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;                  //@synthesize stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds=_stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;                              //@synthesize stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds=_stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;                              //@synthesize stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds=_stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) long long stagingNodeValveActiveNumberOfVideoFramesReceived;                                       //@synthesize stagingNodeValveActiveNumberOfVideoFramesReceived=_stagingNodeValveActiveNumberOfVideoFramesReceived - In the implementation block
@property (assign,nonatomic) double stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;                          //@synthesize stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds=_stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;              //@synthesize stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds=_stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;                          //@synthesize stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds=_stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) double stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;                          //@synthesize stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds=_stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds - In the implementation block
@property (assign,nonatomic) long long fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;                               //@synthesize fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples=_fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples - In the implementation block
@property (assign,nonatomic) double fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;                            //@synthesize fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds=_fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds - In the implementation block
@property (assign,nonatomic) double fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;                  //@synthesize fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds=_fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds - In the implementation block
@property (assign,nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;                            //@synthesize fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds=_fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds - In the implementation block
@property (assign,nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;                            //@synthesize fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds=_fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(int)sessionStatus;
-(void)reset;
-(id)eventName;
-(void)setErrorStatus:(int)arg1 ;
-(int)errorStatus;
-(id)eventDictionary;
-(int)clientIDType;
-(void)setClientIDType:(int)arg1 ;
-(char)recordingSucceeded;
-(void)setRecordingSucceeded:(char)arg1 ;
-(void)setSessionStatus:(int)arg1 ;
-(char)longPressMovie;
-(void)setLongPressMovie:(char)arg1 ;
-(char)originalRecording;
-(void)setOriginalRecording:(char)arg1 ;
-(char)hasStillImagePTS;
-(void)setHasStillImagePTS:(char)arg1 ;
-(double)movieDurationInSeconds;
-(void)setMovieDurationInSeconds:(double)arg1 ;
-(double)stillTimeOffsetInSeconds;
-(void)setStillTimeOffsetInSeconds:(double)arg1 ;
-(double)stillTimeOffsetToVideoPrerollStartInMilliseconds;
-(void)setStillTimeOffsetToVideoPrerollStartInMilliseconds:(double)arg1 ;
-(double)stillTimeOffsetToVideoPrerollStopInMilliseconds;
-(void)setStillTimeOffsetToVideoPrerollStopInMilliseconds:(double)arg1 ;
-(double)stillTimeOffsetToAudioPrerollStartInMilliseconds;
-(void)setStillTimeOffsetToAudioPrerollStartInMilliseconds:(double)arg1 ;
-(double)stillTimeOffsetToAudioPrerollStopInMilliseconds;
-(void)setStillTimeOffsetToAudioPrerollStopInMilliseconds:(double)arg1 ;
-(char)overlappingCapture;
-(void)setOverlappingCapture:(char)arg1 ;
-(long long)stagingNodeOverallNumberOfVideoFramesReceived;
-(void)setStagingNodeOverallNumberOfVideoFramesReceived:(long long)arg1 ;
-(double)stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(long long)stagingNodeValveActiveNumberOfVideoFramesReceived;
-(void)setStagingNodeValveActiveNumberOfVideoFramesReceived:(long long)arg1 ;
-(double)stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(double)stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
-(void)setStagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds:(double)arg1 ;
-(long long)fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
-(void)setFileCoordinatorToWriterMovingWindowLatencyNumberOfSamples:(long long)arg1 ;
-(double)fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
-(void)setFileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds:(double)arg1 ;
-(double)fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
-(void)setFileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds:(double)arg1 ;
-(double)fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
-(void)setFileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds:(double)arg1 ;
-(double)fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
-(void)setFileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds:(double)arg1 ;
@end

