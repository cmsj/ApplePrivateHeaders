/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TRIServerContext, TRITaskQueue, TRIXPCActivityManager;

@interface TRIDServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TRIServerContext* _context;
	TRITaskQueue* _taskQueue;
	TRIXPCActivityManager* _xpcActivityManager;
	char _isRunning;

}

@property (nonatomic,readonly) char isRunning;              //@synthesize isRunning=_isRunning - In the implementation block
+(id)sharedServer;
+(id)_triPath;
-(id)init;
-(void)start;
-(id)initWithPath:(id)arg1 ;
-(char)isRunning;
-(void)_updateSystemInfo;
-(void)_dispatchIfUnlocked:(/*^block*/id)arg1 ;
-(id)_getFreeDiskSpace;
-(void)_asyncStartWithMetrics:(id)arg1 ;
-(void)_registerXpcStreamEventHandler;
-(void)_logMetrics:(id)arg1 stopwatch:(id)arg2 ;
-(unsigned long long)_getDiskUsageInBytes;
-(char)_shouldContinue;
@end
