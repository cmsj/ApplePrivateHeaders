/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCKeyValueStoreSavePolicy.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@protocol FCBackgroundTaskable, OS_dispatch_queue;
@class NSObject, NSString;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {

	id<FCBackgroundTaskable> _backgroundTaskable;
	char _inBackground;
	NSObject*<OS_dispatch_queue> _pendingQueue;
	/*^block*/id _pendingHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_saveIfNeeded;
-(void)activityObservingApplicationDidEnterBackground;
-(void)activityObservingApplicationWillEnterForeground;
-(void)activityObservingApplicationWillTerminate;
-(id)initWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2 ;
-(void)scheduleSaveOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

