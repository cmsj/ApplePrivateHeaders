/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCPhysicalDeviceRegistry> deviceRegistry; 
@optional
-(char)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2;
-(id)driverConnectionForHIDDevice:(id)arg1;

@required
-(void)setDeviceRegistry:(id)arg1;
-(id<GCPhysicalDeviceRegistry>)deviceRegistry;
-(id)matchHIDDevice:(id)arg1;
-(void)claimHIDDevice:(id)arg1;
-(void)relinquishHIDDevice:(id)arg1;

@end

