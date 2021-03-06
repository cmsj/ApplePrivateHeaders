/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CNAutocompleteFetchDelegate, CNFuture, CNPromise;
@class NSMutableOrderedSet, NSObject, CNAutocompleteFetchRequest;

@interface CNAutocompleteQueryResponsePreparer : NSObject {

	NSMutableOrderedSet* _previouslyReturnedResults;
	NSObject*<OS_dispatch_queue> _duetSortQueue;
	id<CNAutocompleteFetchDelegate> _delegate;
	CNAutocompleteFetchRequest* _fetchRequest;
	id<CNFuture> _priorityResultsFuture;
	id<CNPromise> _matchingPriorityResultsPromise;

}

@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchRequest * fetchRequest;                    //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<CNFuture> priorityResultsFuture;                             //@synthesize priorityResultsFuture=_priorityResultsFuture - In the implementation block
@property (nonatomic,retain) id<CNPromise> matchingPriorityResultsPromise;                   //@synthesize matchingPriorityResultsPromise=_matchingPriorityResultsPromise - In the implementation block
+(id)bundleIdentifierOfCurrentProcess;
+(id)makeBundleIdentifierOfCurrentProcess;
-(id)init;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(CNAutocompleteFetchRequest *)fetchRequest;
-(id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)sortResults;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id<CNFuture>)arg1 ;
-(void)setMatchingPriorityResultsPromise:(id<CNPromise>)arg1 ;
-(id)findUniqueResults:(id)arg1 ;
-(id)resultsNotPreviouslyReturned:(id)arg1 ;
-(id)applyPriorityResultsOrder:(id)arg1 ;
-(id)partitionCandidatesForRanking:(id)arg1 ;
-(char)resultIdentifierIsValidMessagesChatGuid:(id)arg1 ;
-(id<CNPromise>)matchingPriorityResultsPromise;
-(char)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2 ;
-(id<CNFuture>)priorityResultsFuture;
@end

