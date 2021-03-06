/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsTrigger.h>
#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsRunCondition> {

	unsigned long long _behavior;
	char _state;
	unsigned long long _timesUpdated;

}

@property (assign,nonatomic) char state; 
@property (nonatomic,readonly) unsigned long long timesUpdated; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)state;
-(id)initWithName:(id)arg1 ;
-(void)setState:(char)arg1 ;
-(char)shouldRun;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(id)objectForJSON;
-(id)initWithName:(id)arg1 behavior:(unsigned long long)arg2 ;
-(unsigned long long)timesUpdated;
@end

