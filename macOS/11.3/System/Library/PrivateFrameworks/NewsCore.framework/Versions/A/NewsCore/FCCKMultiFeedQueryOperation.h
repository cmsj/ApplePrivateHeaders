/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSError;

@interface FCCKMultiFeedQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _feedRequests;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	long long _sortingFunction;
	unsigned long long _queryPriority;
	NSArray* _articleLinkKeys;
	/*^block*/id _queryCompletionHandler;
	NSArray* _networkEvents;
	NSArray* _resultFeedItemAndArticleRecords;
	NSArray* _resultTagRecords;
	NSArray* _resultIssueRecords;
	NSArray* _resultFeedResponses;
	NSError* _resultError;

}
-(void)performOperation;
-(void)prepareOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
@end

