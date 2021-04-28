/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryPerformerProtocol, OS_dispatch_source, OS_dispatch_queue, OS_os_log;
@class NSObject, CLSGeoServiceThread;

@interface CLSQueryHandler : NSObject {

	id<CLSQueryPerformerProtocol> _query;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _retryLevel;
	double _nextRetryTime;
	char _alreadyLaunched;
	char _didQueryFinish;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_os_log> _loggingConnection;
	char _simulatesTimeout;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	CLSGeoServiceThread* _geoServiceThread;
	double _timeoutInterval;
	unsigned long long _numberOfRetries;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) char simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CLSGeoServiceThread * geoServiceThread;                        //@synthesize geoServiceThread=_geoServiceThread - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetries;                            //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_cancel;
-(void)_heartBeat;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)cacheItems;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRetries;
-(void)setSimulatesTimeout:(char)arg1 ;
-(CLSGeoServiceThread *)geoServiceThread;
-(void)_forwardToGeoThread;
-(void)_startQuery;
-(void)setGeoServiceThread:(CLSGeoServiceThread *)arg1 ;
-(char)isSimulatingTimeout;
-(id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3 ;
-(void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2 ;
-(unsigned long long)_cacheMapItems:(id)arg1 ;
@end
