/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessoryAdvertisement.h>

@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement {

	HMDDevice* _device;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
-(id)description;
-(HMDDevice *)device;
-(id)initWithOutputDevice:(id)arg1 device:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 device:(id)arg4 ;
@end

