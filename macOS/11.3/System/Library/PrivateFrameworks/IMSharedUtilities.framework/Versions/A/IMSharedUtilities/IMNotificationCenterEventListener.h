/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener {

	NSString* _registeredNotificationName;
	NSString* _notificationName;
	id _notificationObject;

}

@property (nonatomic,readonly) NSString * registeredNotificationName;              //@synthesize registeredNotificationName=_registeredNotificationName - In the implementation block
@property (readonly) char isRegisteredForNotification; 
@property (copy,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (__weak,readonly) id notificationObject;                                 //@synthesize notificationObject=_notificationObject - In the implementation block
+(id)eventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
+(id)eventListenerForNotificationName:(id)arg1 ;
-(void)dealloc;
-(void)_notification:(id)arg1 ;
-(NSString *)notificationName;
-(char)isListening;
-(void)willStartListening;
-(void)willStopListening;
-(void)willReset;
-(void)registerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)registerForNotificationName:(id)arg1 ;
-(char)isRegisteredForNotification;
-(NSString *)registeredNotificationName;
-(id)notificationObject;
@end
