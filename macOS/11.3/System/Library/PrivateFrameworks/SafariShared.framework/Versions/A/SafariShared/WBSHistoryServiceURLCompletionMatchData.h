/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {

	unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData>>* _streamData;
	NSArray* _autocompleteTriggersAsStringArray;
	NSArray* _entries;

}

@property (nonatomic,copy) NSArray * entries;                                     //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) char lastVisitWasFailure; 
@property (assign,nonatomic) long long visitCount; 
@property (assign,nonatomic) long long visitCountScore; 
@property (nonatomic,readonly) HistoryStreamedMatchData* streamData; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) char containsBookmark; 
@property (nonatomic,readonly) char shouldPreload; 
@property (nonatomic,readonly) char visitWasClientError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)visitCount;
-(NSArray *)entries;
-(void)setEntries:(NSArray *)arg1 ;
-(HistoryStreamedMatchData*)streamData;
-(double)lastVisitedTimeInterval;
-(NSString *)originalURLString;
-(char)lastVisitWasFailure;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(char)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtTime:(double)arg1 ;
-(long long)visitCountScoreForPageTitleAtTime;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1 ;
-(void)setVisitCount:(long long)arg1 ;
-(void)setLastVisitedTimeInterval:(double)arg1 ;
-(void)setAutocompleteTriggers:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLastVisitWasFailure:(char)arg1 visitWasFromThisDevice:(char)arg2 visitWasClientError:(char)arg3 ;
-(long long)visitCountScore;
-(id)initWithStreamData:(unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData>>*)arg1 entries:(id)arg2 ;
-(char)visitWasClientError;
-(void)setVisitCountScore:(long long)arg1 ;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(char)matchesAutocompleteTrigger:(id)arg1 ;
-(char)shouldPreload;
@end

