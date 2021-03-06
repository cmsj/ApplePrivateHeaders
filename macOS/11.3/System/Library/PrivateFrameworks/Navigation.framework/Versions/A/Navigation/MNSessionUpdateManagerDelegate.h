/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSessionUpdateManagerDelegate <NSObject>
@required
-(void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
-(void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
-(char)wantsETAUpdates;
-(id)routeInfoForUpdateManager:(id)arg1;
-(id)userLocationForUpdateManager:(id)arg1;

@end

