/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsBudgetDelegate;
@class NSString, NSMutableDictionary;

@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsObject> {

	NSString* _name;
	Queue _queue;
	vector<MSg::_RollingWindowBudgetRule, std::__1::allocator<MSg::_RollingWindowBudgetRule>>* _rules;
	NSMutableDictionary* _data;
	id<MapsSuggestionsBudgetDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)reset;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(NSString *)uniqueName;
-(void)addRollingWindowOfCount:(unsigned long long)arg1 perDuration:(const Duration*)arg2 name:(id)arg3 ;
-(void)addRollingWindowOfCount:(unsigned long long)arg1 perTimeInterval:(double)arg2 name:(id)arg3 ;
-(char)hasBudgetLeft;
-(char)spendAtTime:(id)arg1 ;
-(char)spendNow;
-(id)q_loadStateForRuleName:(id)arg1 ;
-(char)q_saveStateForRuleName:(id)arg1 state:(id)arg2 ;
@end

