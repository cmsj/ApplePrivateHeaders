/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface PPAppLaunchMonitor : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _contextHandlerQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterForAppLaunchWithToken:(id)arg1 ;
-(void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1 ;
@end

