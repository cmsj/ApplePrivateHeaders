/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, AFInstanceContext, NSHashTable, AFNotifyObserver, AFHomeAnnouncement, AFHomeAnnouncementSnapshot, NSString;

@interface AFHomeAnnouncementObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	AFInstanceContext* _instanceContext;
	NSHashTable* _listeners;
	AFNotifyObserver* _notifyObserver;
	long long _groupingDepth;
	NSObject*<OS_dispatch_group> _snapshotGroup;
	unsigned long long _state;
	AFHomeAnnouncement* _lastPlayedAnnouncement;
	AFHomeAnnouncementSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_tearDown;
-(void)_updateSnapshot:(id)arg1 ;
-(id)initWithInstanceContext:(id)arg1 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_setUp;
-(void)_beginGrouping;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)_updateLastPlayedAnnouncement:(id)arg1 ;
-(void)_endGrouping;
-(void)_fetchStateAndLastPlayedAnnouncementForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleNotifyStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)getSnapshotWithCompletion:(/*^block*/id)arg1 ;
@end

