/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsPresenceEventData : HMFObject {

	int _presenceEventGranularity;
	int _presenceEventType;

}

@property (assign,nonatomic) int presenceEventGranularity;              //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
@property (assign,nonatomic) int presenceEventType;                     //@synthesize presenceEventType=_presenceEventType - In the implementation block
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
@end

