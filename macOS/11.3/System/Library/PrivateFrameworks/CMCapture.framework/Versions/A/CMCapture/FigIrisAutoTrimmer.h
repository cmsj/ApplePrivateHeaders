/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	char _motionAvailable;
	SCD_Struct_Fi45 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	char _haveCaptureMotionDelta;
	SCD_Struct_Fi45 _lastAttitude;
	SCD_Struct_Fi45 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	int _svmKernelType;
	int _svmVectorCount;
	int _svmParamCount;
	float _svmRBFRho;
	float _svmRBFGamma;
	NSArray* _svmKeys;
	NSData* _svmNormalization;
	NSData* _svmVectors;
	NSMutableArray* _motionSamples;
	unsigned long long _estimatedIntermediatesCount;
	char _intermediateLoggingEnabled;
	SCD_Struct_Fi8 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;
	char _vitalityScoringEnabled;
	float _vitalityDocumentThreshold;
	unsigned _vitalityScoringVersion;
	SCD_Struct_Fi37 _vitalityScoringSmartCameraPipelineVersion;

}

@property (nonatomic,readonly) char trimmingActive; 
@property (nonatomic,readonly) unsigned vitalityScoringVersion; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(double)_timeoutThreshold;
-(double)videoFrameRate;
-(unsigned)vitalityScoringVersion;
-(void)_initSVM:(id)arg1 fromFile:(id)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_Fi45*)arg1 gravity:(const SCD_Struct_Fi44*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_Fi8)arg4 metadata:(id)arg5 ;
-(char)_checkSamplesContainHostTime:(SCD_Struct_Fi8)arg1 ;
-(long long)_findClosestIndexToHostTime:(SCD_Struct_Fi8)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(char)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(float)_computeVitalityFrom:(long long)arg1 to:(long long)arg2 ;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_directionalWeightForSample:(id)arg1 ;
-(char)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(char)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(char)_shouldCutSVM:(id)arg1 ;
-(void)_updateStorageStats;
-(double)_getHostTime;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_Fi8)arg2 ;
-(void)processInferences:(id)arg1 forHostTime:(SCD_Struct_Fi8)arg2 ;
-(void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(SCD_Struct_Fi8)arg2 ;
-(SCD_Struct_Fi8)beginTrimmingForStillImageHostPTS:(SCD_Struct_Fi8)arg1 minimumPTS:(SCD_Struct_Fi8)arg2 ;
-(char)trimmingActive;
-(int)emissionStatusForHostPTS:(SCD_Struct_Fi8)arg1 ;
-(float)computeVitalityScoreForStillImageHostPTS:(SCD_Struct_Fi8)arg1 movieRange:(SCD_Struct_BW34)arg2 ;
-(SCD_Struct_Fi8)maxHoldDuration;
-(void)setMaxHoldDuration:(SCD_Struct_Fi8)arg1 ;
-(double)bufferHistorySeconds;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setVideoFrameRate:(double)arg1 ;
-(char)intermediateLoggingEnabled;
-(void)setIntermediateLoggingEnabled:(char)arg1 ;
-(char)vitalityScoringEnabled;
-(void)setVitalityScoringEnabled:(char)arg1 ;
-(SCD_Struct_Fi37)vitalityScoringSmartCameraPipelineVersion;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_Fi37)arg1 ;
-(id)exportMotionSamples;
@end

