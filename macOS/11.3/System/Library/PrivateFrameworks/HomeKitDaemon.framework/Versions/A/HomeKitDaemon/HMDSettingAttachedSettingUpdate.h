/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMSettingValue;

@interface HMDSettingAttachedSettingUpdate : HMFObject {

	NSString* _keyPath;
	HMSettingValue* _settingValue;

}

@property (readonly) NSString * keyPath;                         //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) HMSettingValue * settingValue;              //@synthesize settingValue=_settingValue - In the implementation block
-(NSString *)keyPath;
-(HMSettingValue *)settingValue;
-(id)initWithKeyPath:(id)arg1 settingValue:(id)arg2 ;
@end

