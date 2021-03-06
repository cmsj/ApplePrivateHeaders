/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGuidanceManagerDelegate <NSObject>
@required
-(void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2;
-(void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
-(void)guidanceManagerHideSecondaryStep:(id)arg1;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 ignorePromptStyle:(char)arg4 stage:(unsigned long long)arg5 hasSecondaryManeuver:(char)arg6 completionBlock:(/*^block*/id)arg7;
-(void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(char)arg8;
-(void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)guidanceManagerBeginGuidanceUpdate:(id)arg1;
-(void)guidanceManagerEndGuidanceUpdate:(id)arg1;
-(void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;
-(void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;
-(void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)guidanceManager:(id)arg1 usePersistentDisplay:(char)arg2;
-(void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;
-(void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
-(void)guidanceManager:(id)arg1 didProcessSpeechEvent:(id)arg2;
-(void)guidanceManager:(id)arg1 willProcessSpeechEvent:(id)arg2;

@end

