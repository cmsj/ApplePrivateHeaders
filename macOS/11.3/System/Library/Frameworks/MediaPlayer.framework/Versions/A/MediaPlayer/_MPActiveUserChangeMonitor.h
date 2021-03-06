/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, _MPActiveUserChangeMonitorDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSSet, NSMutableSet, NSObject;

@interface _MPActiveUserChangeMonitor : NSObject {

	os_unfair_lock_s _stateLock;
	NSSet* _expectedNotifications;
	NSMutableSet* _receivedNotifications;
	NSObject*<OS_dispatch_source> _notificationTimer;
	id<_MPActiveUserChangeMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSSet * expectedNotifications;                                     //@synthesize expectedNotifications=_expectedNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * receivedNotifications;                                //@synthesize receivedNotifications=_receivedNotifications - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> notificationTimer;                     //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                        //@synthesize stateLock=_stateLock - In the implementation block
@property (assign,nonatomic,__weak) id<_MPActiveUserChangeMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MPActiveUserChangeMonitorDelegate>)delegate;
-(void)setDelegate:(id<_MPActiveUserChangeMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(os_unfair_lock_s)stateLock;
-(void)ingestNotificationName:(id)arg1 ;
-(void)_startNotificationTimerWithEventHandler:(/*^block*/id)arg1 ;
-(void)_cancelNotificationTimerWithReason:(id)arg1 ;
-(NSSet *)expectedNotifications;
-(NSMutableSet *)receivedNotifications;
-(void)setReceivedNotifications:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_source>)notificationTimer;
-(void)setNotificationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

