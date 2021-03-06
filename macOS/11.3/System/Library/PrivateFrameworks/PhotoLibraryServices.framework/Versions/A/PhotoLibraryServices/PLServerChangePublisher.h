/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLChangePublisher.h>

@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {

	Aq _postCount;
	AB _hasPendingWatchNotification;
	AB _suppressWatchNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;
-(id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_postChangeHubNotification;
-(void)_postWatchUpdateNotificationIfNotPaused;
-(void)_postWatchUpdateNotificationIfPending;
-(void)_postWatchUpdateNotification;
@end

