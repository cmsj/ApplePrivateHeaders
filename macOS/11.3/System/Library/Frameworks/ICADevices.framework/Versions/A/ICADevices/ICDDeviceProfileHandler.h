/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ICADevices.framework/Versions/A/ICADevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ICADevices/ICADevices-Structs.h>
@class NSString;

@interface ICDDeviceProfileHandler : NSObject {

	NSString* _name;
	CFUUIDRef _deviceID;
	NSString* _deviceClass;
	NSString* _languageMode;
	char _isCamera;

}
-(void)dealloc;
-(id)init;
-(id)getProfileURLForMode:(id)arg1 ;
-(void)registerColorSyncDeviceWithName:(id)arg1 profiles:(id)arg2 deviceInfoPlistDeviceName:(id)arg3 persistentID:(CFUUIDRef)arg4 ;
-(char)registerDeviceInfoPlistProfiles:(id)arg1 deviceNames:(id)arg2 ;
-(void)addCameraFactoryProfiles:(id)arg1 ;
-(void)addScannerFactoryProfiles:(id)arg1 ;
-(id)profileIDStringFromMode:(id)arg1 ;
-(id)defaultPathForMode:(id)arg1 ;
-(id)modesByExpandingWildcard:(id)arg1 ;
-(void)unregisterColorSyncDevice;
@end

