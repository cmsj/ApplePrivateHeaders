/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPortraitSceneMonitor.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {

	int _numberOfFramesWithStableFocusThreshold;
	char _oneShotFocusScanInProgress;
	char _focusLocked;
	int _numFramesSinceFocusLocked;
	int _numFramesSinceFocusBecameStable;
	char _focusHasBeenAttainedAfterStart;
	int _numFramesSinceFocusFirstAttainedStability;
	char _focusIsStationaryBeyondThreshold;
	char _subjectTooCloseMonitoringEnabled;
	char _subjectTooCloseMonitoringForcingWideLens;
	float _subjectTooCloseFocusDistanceThreshold;
	float _subjectTooCloseHysteresis;
	char _subjectIsTooClose;
	char _subjectTooClosePreviousFrame;
	char _subjectTooFarMonitoringEnabled;
	float _subjectTooFarFocusDistanceThreshold;
	float _subjectTooFarBackgroundShiftSumTooLowThreshold;
	char _subjectTooFarDistanceThresholdReached;
	float _subjectTooFarDistanceThresholdHysteresis;
	char _backgroundShiftSumTooLowThresholdReached;
	float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
	float _jasperDistanceAtFocus;
	char _subjectIsTooFarDigitalFlash;
	char _subjectIsTooFarForStageDigitalFlash;
	float _subjectTooFarDigitalFlashThreshold;
	float _stageTooFarDigitalFlashThreshold;
	float _sceneTooDarkGainThresholdHard;
	float _jasperDistanceAtFocusSmoothingFactor;
	char _subjectIsTooFar;
	char _subjectIsTooFarForStage;
	char _subjectIsTooFarForStageNoFaces;
	char _deliveryOfShiftsHasStarted;
	float _backgroundShiftSumSmoothed;
	float _backgroundShiftSumSmoothingTrend;
	float _backgroundShiftSumSmoothingFactor;
	float _backgroundShiftSumSmoothingTrendUpdateFactor;
	float _invalidShiftRatioSmoothed;
	float _invalidShiftRatioSmoothingFactor;
	char _sceneTooDarkMonitoringEnabled;
	float _sceneTooDarkGainThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
	char _sceneIsTooDark;
	char _stageFaceMonitoringEnabled;
	int _stageFaceNumberOfFramesSinceLastFace;
	char _stageFaceHasBeenSeen;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	NSArray* _stageMostRecentFaces;
	char _portraitSceneMonitoringRequiresStageThresholds;
	char _stageTooFarMonitoringEnabled;
	float _stageTooFarFocusDistanceThreshold;
	char _stageTooFarDistanceThresholdReached;
	float _stageTooFarDistanceThresholdHysteresis;
	char _stageBackgroundShiftSumTooLowThresholdReached;
	float _stageTooFarBackgroundShiftSumTooLowThreshold;
	float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
	char _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
	float _stageTooFarBackgroundShiftSumNoFacesThreshold;
	int _lastSDOFEffectStatus;

}

@property (assign,nonatomic) char portraitSceneMonitoringRequiresStageThresholds;              //@synthesize portraitSceneMonitoringRequiresStageThresholds=_portraitSceneMonitoringRequiresStageThresholds - In the implementation block
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)doubleExponentialSmoothing:(float)arg1 smoothValue:(float*)arg2 trendValue:(float*)arg3 dataFactor:(float)arg4 trendFactor:(float)arg5 ;
-(void)setAutoFocusInProgress:(char)arg1 focusLocked:(char)arg2 oneShotFocusScanInProgress:(char)arg3 ;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(char)arg7 faces:(id)arg8 ;
-(char)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(char)arg4 digitalFlashWillFire:(char)arg5 effectStatus:(int*)arg6 stagePreviewStatus:(int*)arg7 ;
-(char)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(char)arg1 ;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(char)arg2 ;
@end

