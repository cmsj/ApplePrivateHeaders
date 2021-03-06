/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface TLContentProtectionStateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMutableDictionary* _blocksScheduledForProtectedContentUnlockedEvent;
	long long _contentProtectionStatus;
	long long _unlockedSinceBootStatus;

}
+(id)sharedContentProtectionStateObserver;
-(void)dealloc;
-(id)init;
-(id)_performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(id)performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_assertNotRunningOnAccessQueue;
-(long long)_queryCurrentUnlockedSinceBootStatus;
@end

