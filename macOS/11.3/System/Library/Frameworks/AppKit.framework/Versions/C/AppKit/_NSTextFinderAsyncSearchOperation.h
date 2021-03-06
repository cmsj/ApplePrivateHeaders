/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <Foundation/NSOperation.h>

@class NSTextFinderAsyncSearch, NSString, NSMutableRangeArray, NSMutableIndexSet, NSLock, NSCondition, NSIndexSet;

@interface _NSTextFinderAsyncSearchOperation : NSOperation {

	NSTextFinderAsyncSearch* _searchController;
	NSString* _searchString;
	NSString* _contentString;
	unsigned long long _searchOptions;
	unsigned long long _matchOptions;
	NSMutableRangeArray* _matchRanges;
	NSMutableIndexSet* _searchedIndexes;
	NSMutableIndexSet* _allSearchedIndexes;
	NSLock* _accessLock;
	NSCondition* _condition;
	NSIndexSet* _indexesWaitedFor;
	char _finished;

}

@property (retain) NSTextFinderAsyncSearch * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (copy) NSString * searchString;                                   //@synthesize searchString=_searchString - In the implementation block
@property (retain) NSString * contentString;                                //@synthesize contentString=_contentString - In the implementation block
@property (assign) unsigned long long searchOptions;                        //@synthesize searchOptions=_searchOptions - In the implementation block
@property (assign) unsigned long long matchOptions;                         //@synthesize matchOptions=_matchOptions - In the implementation block
@property (readonly) NSMutableRangeArray * matchRanges;                     //@synthesize matchRanges=_matchRanges - In the implementation block
@property (readonly) NSMutableIndexSet * searchedIndexes;                   //@synthesize searchedIndexes=_searchedIndexes - In the implementation block
@property (copy) NSIndexSet * indexesWaitedFor;                             //@synthesize indexesWaitedFor=_indexesWaitedFor - In the implementation block
-(void)dealloc;
-(id)init;
-(void)main;
-(void)setSearchOptions:(unsigned long long)arg1 ;
-(unsigned long long)searchOptions;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSMutableRangeArray *)matchRanges;
-(char)waitUntilSearchCompletedForRanges:(id)arg1 orTimeout:(double)arg2 ;
-(NSIndexSet *)indexesWaitedFor;
-(void)setIndexesWaitedFor:(NSIndexSet *)arg1 ;
-(void)accessSearchResultsInBlock:(/*^block*/id)arg1 ;
-(char)_searchCompletedForIndexes:(id)arg1 ;
-(NSTextFinderAsyncSearch *)searchController;
-(void)_sendUpdate;
-(void)_addMatchRange:(NSRange)arg1 searchedRange:(NSRange)arg2 ;
-(char)searchFinished;
-(void)setSearchController:(NSTextFinderAsyncSearch *)arg1 ;
-(NSString *)contentString;
-(void)setContentString:(NSString *)arg1 ;
-(unsigned long long)matchOptions;
-(void)setMatchOptions:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)searchedIndexes;
@end

