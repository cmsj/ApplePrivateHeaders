/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCommandCenter, NSMutableDictionary, NSMutableArray;

@interface ICMasterDeviceBrowser : NSObject {

	ICCommandCenter* _commandCenter;
	NSMutableDictionary* _devices;
	NSMutableArray* _browsers;
	long long _numberOfBrowsingBrowsers;
	long long _numberOfBrowsersOfSharedDevice;
	long long _numberOfBrowsersOfBonjourDevice;
	char _processDevicesInvokedOnce;

}

@property (readonly) NSMutableDictionary * devices;              //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;                  //@synthesize browsers=_browsers - In the implementation block
+(id)defaultBrowser;
-(id)devicesMatchingDeviceTypeMask:(unsigned long long)arg1 ;
-(void)startBrowsingForSharedDevices;
-(void)stopBrowsingForSharedDevices;
-(void)startBrowsingForBonjourDevices;
-(void)stopBrowsingForBonjourDevices;
-(id)deviceWithDeviceID:(id)arg1 ;
-(id)deviceWithDeviceRef:(id)arg1 ;
-(void)handleCommandCompletion:(id)arg1 ;
-(void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(char)sendMessageCmd:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)icddConnectionSuspend:(id)arg1 ;
-(void)icddConnectionResume:(id)arg1 ;
-(void)handleNetworkDeviceRemoved:(id)arg1 ;
-(void)registerForImageCaptureEventNotifications:(id)arg1 reason:(id)arg2 ;
-(void)addBrowser:(id)arg1 ;
-(void)unregisterForImageCaptureEventNotifications:(id)arg1 reason:(id)arg2 ;
-(void)removeBrowser:(id)arg1 ;
-(void)processDevices:(id)arg1 ;
-(void)helloICDD;
-(void)updateDevices:(id)arg1 type:(unsigned long long)arg2 ;
-(id)deviceWithDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop:(id)arg1 ;
-(NSMutableDictionary *)devices;
-(void)addDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(void)start:(id)arg1 ;
-(void)updateDevice:(id)arg1 ;
-(id)getConnection;
-(NSMutableArray *)browsers;
@end

