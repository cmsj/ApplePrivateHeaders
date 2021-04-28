/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNWalkGuidanceManager : MNClassicGuidanceManager
-(int)transportType;
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_MN6)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(void)_updatePrepareForNextStep;
-(char)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
@end
