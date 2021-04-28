/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, NSMutableDictionary, NSObject;

@interface SPQueryResultsQueue : NSObject {

	char _canceled;
	char _tracked;
	char _live;
	char _shared;
	NSString* _identifier;
	SIResultQueueRef _siResultsQueue;
	NSMutableDictionary* _jobs;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _pausedCount;

}

@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) SIResultQueueRef siResultsQueue;                         //@synthesize siResultsQueue=_siResultsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * jobs;                              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) long long pausedCount;                                   //@synthesize pausedCount=_pausedCount - In the implementation block
@property (assign,nonatomic) char canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) char tracked;                                            //@synthesize tracked=_tracked - In the implementation block
@property (assign,nonatomic) char live;                                               //@synthesize live=_live - In the implementation block
@property (assign,nonatomic) char shared;                                             //@synthesize shared=_shared - In the implementation block
@property (readonly) char hasPausedResults; 
+(void)startTrackingResultsQueue:(id)arg1 ;
+(void)stopTrackingResultsQueueWithIdentifier:(id)arg1 ;
+(id)findResultsQueueWithIdentifier:(id)arg1 ;
+(id)sharedInstanceDispatchQueue:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)cancel;
-(void)setLive:(char)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)shared;
-(char)live;
-(void)setShared:(char)arg1 ;
-(char)canceled;
-(void)cancelJob:(id)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(void)_stopTracking;
-(char)tracked;
-(void)addJob:(id)arg1 ;
-(NSMutableDictionary *)jobs;
-(void)setJobs:(NSMutableDictionary *)arg1 ;
-(void)_processResults;
-(id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)_startTracking;
-(void)_scheduleWakeupForced:(char)arg1 ;
-(char)hasPausedResults;
-(void)pauseResults;
-(void)resumeResults;
-(SIResultQueueRef)siResultsQueue;
-(void)setSiResultsQueue:(SIResultQueueRef)arg1 ;
-(long long)pausedCount;
-(void)setPausedCount:(long long)arg1 ;
-(void)setTracked:(char)arg1 ;
@end
