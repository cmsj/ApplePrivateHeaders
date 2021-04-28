/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/Versions/A/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface DADBuddyStateObserver : NSObject {

	NSObject*<OS_dispatch_source> _buddyStatePollingTimer;
	NSObject*<OS_dispatch_queue> _queue;
	char _hasRegisteredForNotification;
	/*^block*/id _buddyDidFinishHandler;

}

@property (nonatomic,copy) id buddyDidFinishHandler;              //@synthesize buddyDidFinishHandler=_buddyDidFinishHandler - In the implementation block
+(unsigned)kMBSetupUserUID;
+(Class)saUserSetupStateClass;
+(char)hasPassedBuddy;
+(char)isSetupUser;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)start;
-(void)stop;
-(char)isRunning;
-(void)stopWithAssertQueue:(char)arg1 ;
-(void)buddyDidFinish;
-(void)createPeriodicPollingTimer;
-(void)checkBuddyStatus;
-(id)buddyDidFinishHandler;
-(void)setBuddyDidFinishHandler:(id)arg1 ;
@end
