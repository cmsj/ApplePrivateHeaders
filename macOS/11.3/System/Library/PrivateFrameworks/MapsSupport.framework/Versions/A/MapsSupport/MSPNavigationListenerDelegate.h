/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPNavigationListenerDelegate <NSObject>
@required
-(void)navigationListenerIsReady:(id)arg1;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationListenerStopped:(id)arg1;
-(void)navigationListenerETAUpdated:(id)arg1;
-(void)navigationListenerDestinationUpdated:(id)arg1;
-(void)navigationListenerRouteUpdated:(id)arg1;
-(void)navigationListenerTrafficUpdated:(id)arg1;
-(void)navigationListenerArrived:(id)arg1;

@end
