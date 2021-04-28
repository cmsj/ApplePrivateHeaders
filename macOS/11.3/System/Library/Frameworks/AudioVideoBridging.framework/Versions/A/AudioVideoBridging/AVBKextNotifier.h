/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IOKNotificationPort, IOKMatchingNotification, NSMutableArray, NSString;

@interface AVBKextNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	IOKNotificationPort* _notificationPort;
	IOKMatchingNotification* _matchNotification;
	IOKMatchingNotification* _terminateNotification;
	int _found;
	NSMutableArray* _matchNotificationsArray;
	NSMutableArray* _terminateNotificationsArray;
	NSString* _identifier;

}
-(void)dealloc;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 notificationQueue:(id)arg2 notificationPort:(id)arg3 ;
-(void)notifyWhenServiceIsAvailable:(/*^block*/id)arg1 ;
-(void)notifyWhenServiceIsUnavailable:(/*^block*/id)arg1 ;
@end
