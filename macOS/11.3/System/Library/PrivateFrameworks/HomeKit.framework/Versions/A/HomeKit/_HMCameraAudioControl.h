/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraAudioControl : _HMCameraControl {

	HMCharacteristic* _mute;
	HMCharacteristic* _volume;

}

@property (nonatomic,readonly) HMCharacteristic * mute;                //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * volume;              //@synthesize volume=_volume - In the implementation block
-(HMCharacteristic *)volume;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCharacteristic *)mute;
@end

