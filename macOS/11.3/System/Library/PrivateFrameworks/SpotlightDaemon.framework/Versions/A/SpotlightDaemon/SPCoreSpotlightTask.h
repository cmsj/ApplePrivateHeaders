/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, SPQueryResultsQueue, CSSearchQueryContext, NSMutableArray;

@interface SPCoreSpotlightTask : NSObject {

	char _canceled;
	char _finished;
	char _hasPausedResults;
	char _willAsyncStart;
	NSString* _queryString;
	SIQueryRef _siQuery;
	SPQueryResultsQueue* _resultsQueue;
	CSSearchQueryContext* _queryContext;
	long long _queryID;
	/*^block*/id _scheduleBlock;
	/*^block*/id _completionBlock;
	NSMutableArray* _jobs;
	double _startTime;

}

@property (nonatomic,retain) NSMutableArray * jobs;                            //@synthesize jobs=_jobs - In the implementation block
@property (assign,nonatomic) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * queryString;                           //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) SIQueryRef siQuery;                               //@synthesize siQuery=_siQuery - In the implementation block
@property (nonatomic,retain) SPQueryResultsQueue * resultsQueue;               //@synthesize resultsQueue=_resultsQueue - In the implementation block
@property (nonatomic,retain) CSSearchQueryContext * queryContext;              //@synthesize queryContext=_queryContext - In the implementation block
@property (assign,nonatomic) long long queryID;                                //@synthesize queryID=_queryID - In the implementation block
@property (assign) char canceled;                                              //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) char finished;                                    //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) char hasPausedResults;                            //@synthesize hasPausedResults=_hasPausedResults - In the implementation block
@property (readonly) NSString * clientBundleID; 
@property (assign,nonatomic) char willAsyncStart;                              //@synthesize willAsyncStart=_willAsyncStart - In the implementation block
@property (nonatomic,copy) id scheduleBlock;                                   //@synthesize scheduleBlock=_scheduleBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                 //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)_makeBundleQueryStringForField:(id)arg1 withBundleIDs:(id)arg2 ;
+(id)_makePrefsQueryStringWithBundleIDs:(id)arg1 ;
+(id)_makeFilterQueryStringForQueryContext:(id)arg1 ;
+(id)_makeBundleQueryStringForQueryContext:(id)arg1 ;
+(id)_makeDisabledBundlesQueryStringForQueryContext:(id)arg1 ;
+(SIQueryRef)_makeSIQueryWithQueryString:(id)arg1 queryContext:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)cancel;
-(void)setFinished:(char)arg1 ;
-(char)finished;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)schedule;
-(void)finishWithError:(id)arg1 ;
-(NSString *)clientBundleID;
-(CSSearchQueryContext *)queryContext;
-(long long)queryID;
-(NSString *)queryString;
-(void)setQueryID:(long long)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setQueryContext:(CSSearchQueryContext *)arg1 ;
-(char)canceled;
-(void)setCanceled:(char)arg1 ;
-(char)addJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(NSMutableArray *)jobs;
-(void)setJobs:(NSMutableArray *)arg1 ;
-(SPQueryResultsQueue *)resultsQueue;
-(void)setResultsQueue:(SPQueryResultsQueue *)arg1 ;
-(char)hasPausedResults;
-(void)pauseResults;
-(void)resumeResults;
-(void)setHasPausedResults:(char)arg1 ;
-(id)initWithQueryString:(id)arg1 queryContext:(id)arg2 ;
-(SIQueryRef)siQuery;
-(void)setSiQuery:(SIQueryRef)arg1 ;
-(char)willAsyncStart;
-(void)setWillAsyncStart:(char)arg1 ;
-(id)scheduleBlock;
-(void)setScheduleBlock:(id)arg1 ;
@end

