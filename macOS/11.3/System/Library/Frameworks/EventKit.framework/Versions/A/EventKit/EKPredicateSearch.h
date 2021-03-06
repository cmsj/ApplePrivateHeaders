/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKFetchRequestToken.h>

@protocol OS_dispatch_queue;
@class NSPredicate, EKEventStore, NSMutableSet, CalMDQuery, NSObject;

@interface EKPredicateSearch : NSObject <EKFetchRequestToken> {

	NSPredicate* _predicate;
	EKEventStore* _store;
	NSMutableSet* _currentResults;
	/*^block*/id _completionCallback;
	/*^block*/id _cancelCallback;
	CalMDQuery* _mdQuery;
	long long _previousQueryCount;
	char _finished;
	char _batchCompletion;
	NSObject*<OS_dispatch_queue> _queryQueue;

}

@property (retain) NSMutableSet * currentResults;                        //@synthesize currentResults=_currentResults - In the implementation block
@property (copy) id completionCallback;                                  //@synthesize completionCallback=_completionCallback - In the implementation block
@property (copy) id cancelCallback;                                      //@synthesize cancelCallback=_cancelCallback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queryQueue;              //@synthesize queryQueue=_queryQueue - In the implementation block
+(id)searchWithPredicate:(id)arg1 store:(id)arg2 ;
+(char)_fastPathAvailableForPredicate:(id)arg1 inStore:(id)arg2 ;
+(id)_fastPathResultForPredicate:(id)arg1 inStore:(id)arg2 ;
+(id)_fastPathResultCountsForPredicate:(id)arg1 inStore:(id)arg2 ;
-(id)run;
-(void)dealloc;
-(void)cancel;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionCallback;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(id)runForCountsOnly;
-(void)cancelSearch;
-(id)initWithPredicate:(id)arg1 store:(id)arg2 ;
-(void)setCurrentResults:(NSMutableSet *)arg1 ;
-(void)_endSpotlightQuery;
-(NSMutableSet *)currentResults;
-(void)_completeOnAppropriateThreadWithResults:(id)arg1 ;
-(void)_processManagedObjectsIntoEKObjects:(id)arg1 ;
-(void)_updateQuery:(id)arg1 ;
-(void)_finishQuery:(id)arg1 ;
-(void)_startSpotlightQuery:(id)arg1 synchronous:(char)arg2 ;
-(void)startWithCompletionCallback:(/*^block*/id)arg1 cancelCallback:(/*^block*/id)arg2 synchronous:(char)arg3 batchCompletion:(char)arg4 ;
-(void)setCompletionCallback:(id)arg1 ;
-(void)setCancelCallback:(id)arg1 ;
-(id)_managedCalendarsForCalendarUIDs:(id)arg1 context:(id)arg2 ;
-(void)_beginQueryWithMDQueryString:(id)arg1 onCalendars:(id)arg2 synchronous:(char)arg3 ;
-(id)cancelCallback;
@end

