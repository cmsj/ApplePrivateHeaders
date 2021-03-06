/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ADNotificationDarwinNotificationMultiplexer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _callbacksByNotificationName;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * callbacksByNotificationName;              //@synthesize callbacksByNotificationName=_callbacksByNotificationName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)registerForNotification:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)unregisterNotificationToken:(id)arg1 ;
-(NSMutableDictionary *)callbacksByNotificationName;
@end

