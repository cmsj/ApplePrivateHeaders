/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface UnifiedFieldCompletionListSearchSuggestionsCoordinator : NSObject {

	NSMutableSet* _expectedSources;
	NSMutableSet* _sourcesThatFailed;
	NSMutableDictionary* _suggestionsBySource;
	NSMutableDictionary* _fallbackSuggestionsBySource;

}
-(id)init;
-(id)suggestionsFromSource:(int)arg1 ;
-(void)setSuggestions:(id)arg1 fromSource:(int)arg2 ;
-(void)didFailToReceiveSuggestionsFromSource:(int)arg1 ;
-(char)hasSufficientSuggestionsToDisplayCompletionList;
-(void)removeAllSuggestions;
-(void)expectSuggestionsFromSource:(int)arg1 ;
-(void)setFallbackSuggestions:(id)arg1 fromSource:(int)arg2 ;
-(char)isExpectingSuggestionsFromSource:(int)arg1 ;
@end

