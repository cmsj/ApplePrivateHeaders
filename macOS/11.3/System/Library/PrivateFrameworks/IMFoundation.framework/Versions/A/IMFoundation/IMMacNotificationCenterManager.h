/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserNotificationCenter, APSConnection, NSArray, NSString;

@interface IMMacNotificationCenterManager : NSObject {

	NSUserNotificationCenter* _center;
	APSConnection* _connection;
	NSArray* _topics;
	NSString* _identifier;

}

@property (nonatomic,retain) NSArray * topics;              //@synthesize topics=_topics - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)userNotificationCenter:(id)arg1 notificationsDisabled:(char)arg2 ;
-(void)userNotificationCenter:(id)arg1 notificationPreferencesChanged:(unsigned long long)arg2 ;
-(void)_NCUpdated:(id)arg1 ;
-(void)updateNotificationsStatus;
-(void)_cleanupNotificationCenter;
-(void)enableNotificationCenter:(char)arg1 ;
-(id)initWithIdentifier:(id)arg1 topics:(id)arg2 connection:(id)arg3 ;
-(void)setTopics:(NSArray *)arg1 ;
-(NSArray *)topics;
@end

