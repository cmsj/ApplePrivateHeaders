/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomePresence, HMDUserPresence, HMDDevice;

@interface HMDHomePresenceUpdate : HMFObject {

	char _update;
	HMDHomePresence* _homePresence;
	HMDUserPresence* _userPresence;
	HMDDevice* _causingDevice;

}

@property (nonatomic,readonly) HMDHomePresence * homePresence;              //@synthesize homePresence=_homePresence - In the implementation block
@property (nonatomic,readonly) HMDUserPresence * userPresence;              //@synthesize userPresence=_userPresence - In the implementation block
@property (getter=isUpdate,nonatomic,readonly) char update;                 //@synthesize update=_update - In the implementation block
@property (nonatomic,readonly) HMDDevice * causingDevice;                   //@synthesize causingDevice=_causingDevice - In the implementation block
-(id)description;
-(char)isUpdate;
-(id)initWithHomePresence:(id)arg1 userPresence:(id)arg2 update:(char)arg3 causingDevice:(id)arg4 ;
-(HMDHomePresence *)homePresence;
-(HMDUserPresence *)userPresence;
-(HMDDevice *)causingDevice;
@end

