/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMWorkoutManager, CMWorkout;

@interface CMWorkoutManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	id<CMWorkoutManagerDelegate> fDelegate;
	CMWorkoutManager* fSender;
	CMWorkout* fWorkout;
	char fResumeWorkoutOnInterrupt;

}
-(void)dealloc;
-(id)init;
-(void)_teardown;
-(void)_handleDaemonEvent:(id)arg1 ;
-(void)_startWorkout:(id)arg1 ;
-(void)_unregisterForWorkoutEvents;
-(void)_handleDaemonResponse:(id)arg1 ;
-(char)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1 ;
-(void)_stopWorkout:(id)arg1 ;
-(void)_setSuggestedStopTimeout:(double)arg1 ;
-(void)_userDismissedWorkoutAlert;
-(void)_triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
-(void)_registerForWorkoutEvents;
-(void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
@end

