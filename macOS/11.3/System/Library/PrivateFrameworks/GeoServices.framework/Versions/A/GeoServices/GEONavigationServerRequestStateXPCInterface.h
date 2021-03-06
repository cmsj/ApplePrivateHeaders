/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationServerRequestStateXPCInterface <NSObject>
@required
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestRideSelections;
-(void)requestPositionFromSign;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestNavigationVoiceVolume;
-(void)requestUpdates;

@end

