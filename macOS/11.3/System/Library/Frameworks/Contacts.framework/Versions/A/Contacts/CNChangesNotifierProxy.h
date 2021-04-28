/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeNotificationReceiver.h>

@protocol CNSchedulerProvider, CNContactsLoggerProvider, OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSCountedSet, NSObject, CNCoalescingTimer, NSString;

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {

	char forwardsSelfGeneratedDistributedSaveNotifications;
	double _externalNotificationCoalescingDelay;
	NSMapTable* _removalBlocks;
	NSMapTable* _notifyingBlocks;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNContactsLoggerProvider> _loggerProvider;
	NSMutableDictionary* _notificationForwardingMapping;
	NSCountedSet* _supressedNotificationNames;
	NSMutableDictionary* _notificationsToBeSentOnceAllowed;
	NSObject*<OS_dispatch_queue> _notifierQueue;
	CNCoalescingTimer* _coalescingTimer;
	NSString* _coalescingNotificationName;

}

@property (assign,nonatomic) char forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay;                          //@synthesize externalNotificationCoalescingDelay=_externalNotificationCoalescingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)externalNotificationCoalescingDelay;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(char)arg5 ;
-(void)receiveExternalNotificationName:(id)arg1 ;
-(char)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(char)arg1 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
-(void)waitForCurrentTasksToFinish;
@end
