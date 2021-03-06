/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGuidanceManager <NSObject>
@required
-(void)stop;
-(void)updateDestination:(id)arg1;
-(void)updateForReroute:(id)arg1;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
-(char)repeatLastGuidanceAnnouncement:(id)arg1;

@end

