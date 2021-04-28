/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(char)isAvailable;
-(void)dealloc;
-(id)init;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(CMWorkoutManagerInternal *)_internal;
-(void)startWorkout:(id)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(void)userDismissedWorkoutAlert;
-(void)triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
@end
