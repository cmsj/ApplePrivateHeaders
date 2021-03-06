/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXSSMotionTrackingDaemonDelegateProtocol.h>

@protocol AXSSMotionTrackerDelegate;
@class AXSSMotionTrackingInputConfiguration, AXSSMotionTrackingExpressionConfiguration, AXSSMotionTrackingState, NSXPCConnection, AXSSRateLimitingLogger, NSValue;

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {

	char _debugOverlayEnabled;
	char __tracking;
	char __hasBeenStarted;
	unsigned long long _motionTrackingMode;
	double _sensitivity;
	double _joystickModeMovementThreshold;
	AXSSMotionTrackingInputConfiguration* _inputConfiguration;
	AXSSMotionTrackingExpressionConfiguration* _expressionConfiguration;
	AXSSMotionTrackingState* _state;
	id<AXSSMotionTrackerDelegate> _delegate;
	NSXPCConnection* __motionTrackingDaemonConnection;
	AXSSRateLimitingLogger* __loggingRateLimiter;

}

@property (nonatomic,readonly) id<AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon; 
@property (nonatomic,retain) NSXPCConnection * _motionTrackingDaemonConnection;                              //@synthesize _motionTrackingDaemonConnection=__motionTrackingDaemonConnection - In the implementation block
@property (assign,nonatomic) char _tracking;                                                                 //@synthesize _tracking=__tracking - In the implementation block
@property (assign,nonatomic) char _hasBeenStarted;                                                           //@synthesize _hasBeenStarted=__hasBeenStarted - In the implementation block
@property (nonatomic,retain) AXSSRateLimitingLogger * _loggingRateLimiter;                                   //@synthesize _loggingRateLimiter=__loggingRateLimiter - In the implementation block
@property (assign,nonatomic) char debugOverlayEnabled;                                                       //@synthesize debugOverlayEnabled=_debugOverlayEnabled - In the implementation block
@property (nonatomic,copy) AXSSMotionTrackingState * state;                                                  //@synthesize state=_state - In the implementation block
@property (getter=isTracking,nonatomic,readonly) char tracking; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long motionTrackingMode;                                          //@synthesize motionTrackingMode=_motionTrackingMode - In the implementation block
@property (assign,nonatomic) double sensitivity;                                                             //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSValue * lookAtPoint; 
@property (nonatomic,copy) AXSSMotionTrackingInputConfiguration * inputConfiguration;                        //@synthesize inputConfiguration=_inputConfiguration - In the implementation block
@property (nonatomic,copy) AXSSMotionTrackingExpressionConfiguration * expressionConfiguration;              //@synthesize expressionConfiguration=_expressionConfiguration - In the implementation block
@property (assign,nonatomic) double joystickModeMovementThreshold;                                           //@synthesize joystickModeMovementThreshold=_joystickModeMovementThreshold - In the implementation block
+(id)supportedExpressions;
+(id)supportedExpressionSensitivitiesAscending;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id<AXSSMotionTrackerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackerDelegate>)arg1 ;
-(AXSSMotionTrackingState *)state;
-(void)setState:(AXSSMotionTrackingState *)arg1 ;
-(void)start;
-(void)stop;
-(char)isTracking;
-(char)_tracking;
-(double)sensitivity;
-(void)setSensitivity:(double)arg1 ;
-(void)_updateState:(id)arg1 ;
-(void)setLookAtPoint:(NSValue *)arg1 ;
-(NSValue *)lookAtPoint;
-(NSXPCConnection *)_motionTrackingDaemonConnection;
-(char)_hasBeenStarted;
-(void)setMotionTrackingMode:(unsigned long long)arg1 ;
-(void)setInputConfiguration:(AXSSMotionTrackingInputConfiguration *)arg1 ;
-(void)setExpressionConfiguration:(AXSSMotionTrackingExpressionConfiguration *)arg1 ;
-(void)setJoystickModeMovementThreshold:(double)arg1 ;
-(void)recalibrateFace;
-(void)motionTrackingDaemonUpdatedState:(id)arg1 ;
-(void)_motionTrackingDaemonWasInterruptedFromXPC;
-(void)set_motionTrackingDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)_changeState:(id)arg1 ;
-(id<AXSSMotionTrackingDaemonProtocol>)_motionTrackingDaemon;
-(unsigned long long)motionTrackingMode;
-(double)joystickModeMovementThreshold;
-(AXSSMotionTrackingInputConfiguration *)inputConfiguration;
-(AXSSMotionTrackingExpressionConfiguration *)expressionConfiguration;
-(void)set_tracking:(char)arg1 ;
-(char)debugOverlayEnabled;
-(AXSSRateLimitingLogger *)_loggingRateLimiter;
-(void)setDebugOverlayEnabled:(char)arg1 ;
-(void)set_hasBeenStarted:(char)arg1 ;
-(void)set_loggingRateLimiter:(AXSSRateLimitingLogger *)arg1 ;
@end

