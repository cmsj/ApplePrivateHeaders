/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSNotificationCenter;

@interface PPNotificationManager : NSObject {

	_PASLock* _lockedData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSNotificationCenter* _notificationCenter;

}
+(id)new;
+(id)sharedInstance;
+(void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stopListening;
-(id)initWithQueueName:(const char*)arg1 notificationCenter:(id)arg2 ;
-(void)addContactsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addMeCardChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addPortraitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addPortraitInvalidationBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addEventKitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addSuggestionsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)waitOnQueueToDrain;
-(void)simulatePortraitChange;
-(void)simulatePortraitInvalidation;
@end
