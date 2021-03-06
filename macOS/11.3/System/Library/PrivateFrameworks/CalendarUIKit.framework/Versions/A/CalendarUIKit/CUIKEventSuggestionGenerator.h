/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKPredicateSearch, NSObject, NSArray, NSString, CUIKEventSuggestion;

@interface CUIKEventSuggestionGenerator : NSObject {

	EKPredicateSearch* _runningTitleSearch;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSArray* _lastSuggestions;
	NSString* _lastQueryString;
	CUIKEventSuggestion* _lastDefaultSuggestion;

}

@property (retain) EKPredicateSearch * runningTitleSearch;                   //@synthesize runningTitleSearch=_runningTitleSearch - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queryQueue;                  //@synthesize queryQueue=_queryQueue - In the implementation block
@property (retain) NSArray * lastSuggestions;                                //@synthesize lastSuggestions=_lastSuggestions - In the implementation block
@property (retain) NSString * lastQueryString;                               //@synthesize lastQueryString=_lastQueryString - In the implementation block
@property (retain) CUIKEventSuggestion * lastDefaultSuggestion;              //@synthesize lastDefaultSuggestion=_lastDefaultSuggestion - In the implementation block
+(char)scanStringForFlights:(id)arg1 flightNumber:(unsigned long long*)arg2 airlineCode:(id*)arg3 ;
+(id)firstNaturalLanguageEventWithSearchString:(id)arg1 eventStore:(id)arg2 ;
+(id)eventWithSuggestedTimeFromString:(id)arg1 referenceDate:(id)arg2 inEventStore:(id)arg3 options:(unsigned long long)arg4 ;
+(id)allNaturalLanguageEventsWithSearchString:(id)arg1 eventStore:(id)arg2 ;
-(id)init;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(void)eventSuggestionsFromString:(id)arg1 initialEvent:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)generateEventSuggestionsAsynchronouslyFromString:(id)arg1 options:(unsigned long long)arg2 defaultCalendar:(id)arg3 referenceDate:(id)arg4 initialEvent:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)setLastQueryString:(NSString *)arg1 ;
-(void)setLastDefaultSuggestion:(CUIKEventSuggestion *)arg1 ;
-(void)setLastSuggestions:(NSArray *)arg1 ;
-(EKPredicateSearch *)runningTitleSearch;
-(void)setRunningTitleSearch:(EKPredicateSearch *)arg1 ;
-(id)_createPartialSuggestionWithTimeDetectionResults:(id)arg1 event:(id)arg2 ;
-(void)_completeSuggestion:(id)arg1 timeDetectionResults:(id)arg2 referenceDate:(id)arg3 event:(id)arg4 calendar:(id)arg5 ;
-(NSString *)lastQueryString;
-(CUIKEventSuggestion *)lastDefaultSuggestion;
-(NSArray *)lastSuggestions;
-(id)createSearchWithTitleMatchingQuery:(id)arg1 inEventStore:(id)arg2 ;
-(void)eventSuggestionsFromString:(id)arg1 defaultCalendar:(id)arg2 referenceDate:(id)arg3 options:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
@end

