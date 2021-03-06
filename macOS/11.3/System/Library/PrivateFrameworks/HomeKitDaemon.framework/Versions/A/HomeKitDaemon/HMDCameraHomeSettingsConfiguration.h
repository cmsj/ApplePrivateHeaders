/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDCameraHomeSettingsConfiguration : HMFObject {

	char _faceClassificationEnabled;
	char _owner;
	NSArray* _cameraSettings;
	NSArray* _userSettings;
	unsigned long long _enabledResidentsDeviceCapabilities;

}

@property (nonatomic,readonly) NSArray * cameraSettings;                                             //@synthesize cameraSettings=_cameraSettings - In the implementation block
@property (nonatomic,readonly) NSArray * userSettings;                                               //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;                          //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (getter=isFaceClassificationEnabled,readonly) char faceClassificationEnabled;              //@synthesize faceClassificationEnabled=_faceClassificationEnabled - In the implementation block
@property (getter=isOwner,readonly) char owner;                                                      //@synthesize owner=_owner - In the implementation block
-(char)isOwner;
-(char)isFaceClassificationEnabled;
-(id)initWithHome:(id)arg1 ;
-(NSArray *)userSettings;
-(NSArray *)cameraSettings;
-(unsigned long long)enabledResidentsDeviceCapabilities;
@end

