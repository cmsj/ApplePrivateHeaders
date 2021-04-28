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

@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {

	float _backgroundShiftSumFiltered;
	float _invalidShiftRatioFiltered;
	char _oneShotFocusScanInProgress;
	char _focusLocked;
	int _numFramesSinceFocusLocked;
	char _focusStableAfterStartStreaming;
	char _focusAdjusting;
	int _lastFocusingMethod;
	int _numFramesSinceFocusBecameStable;
	char _aeStableAfterStartStreaming;
	int _numFramesSinceAEBecameStable;
	char _useLensMakersFocusDistance;
	char _subjectTooCloseMonitoringEnabled;
	char _subjectIsTooClose;
	float _subjectTooCloseWideFocusDistanceThreshold;
	float _subjectTooCloseWideFocusDistanceHysteresisLag;
	int _subjectTooCloseLastWideFocusPosition;
	char _subjectTooFarMonitoringEnabled;
	char _subjectTooFarDistanceThresholdReached;
	float _subjectTooFarFocusDistanceThreshold;
	float _subjectTooFarFocusDistanceHysteresisLag;
	float _subjectTooFarFocusDistanceInfinityThreshold;
	char _subjectTooFarUseTeleForFocusDistance;
	char _subjectTooFarBackgroundShiftSumIsTooLow;
	int _subjectTooFarBackgroundShiftTooLowNumFrames;
	float _subjectTooFarBackgroundShiftSumTooLowThreshold;
	float _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
	float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
	float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
	int _subjectTooFarLastTeleFocusPosition;
	char _sceneTooDarkMonitoringEnabled;
	char _sceneIsTooDark;
	char _sceneTooDarkExposureThresholdReached;
	float _sceneTooDarkGainThreshold;
	float _sceneTooDarkGainHysteresisLag;
	float _sceneTooDarkInvalidShiftRatioThreshold;
	float _sceneTooDarkInvalidShiftRatioHysteresisLag;
	char _stageFaceMonitoringEnabled;
	char _stageFaceDetected;
	int _stageFaceNumberOfFramesSinceLastFace;
	char _stageFaceHasBeenSeen;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	NSArray* _stageMostRecentFaces;
	char _portraitSceneMonitoringRequiresStageThresholds;
	float _stageTooFarFocusDistanceThreshold;
	char _stageSubjectTooFarDistanceThresholdReached;
	int _stageTooFarBackgroundShiftTooLowNumFrames;
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
-(void)setAutoFocusInProgress:(char)arg1 focusLocked:(char)arg2 oneShotFocusScanInProgress:(char)arg3 ;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(char)arg7 faces:(id)arg8 ;
-(char)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(char)arg4 digitalFlashWillFire:(char)arg5 effectStatus:(int*)arg6 stagePreviewStatus:(int*)arg7 ;
-(char)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(char)arg1 ;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(char)arg2 ;
@end
