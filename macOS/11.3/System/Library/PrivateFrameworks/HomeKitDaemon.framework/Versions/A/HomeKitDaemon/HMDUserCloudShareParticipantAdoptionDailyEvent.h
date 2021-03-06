/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudShareTrustManagerLogEvent.h>

@class NSNumber;

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent {

	NSNumber* _configureState;
	NSNumber* _hasOwnerCloudShareID;

}

@property (copy,readonly) NSNumber * configureState;                    //@synthesize configureState=_configureState - In the implementation block
@property (copy,readonly) NSNumber * hasOwnerCloudShareID;              //@synthesize hasOwnerCloudShareID=_hasOwnerCloudShareID - In the implementation block
-(id)eventName;
-(id)serializedEvent;
-(id)initWithConfigureState:(long long)arg1 hasOwnerCloudShareID:(char)arg2 ;
-(NSNumber *)configureState;
-(NSNumber *)hasOwnerCloudShareID;
@end

