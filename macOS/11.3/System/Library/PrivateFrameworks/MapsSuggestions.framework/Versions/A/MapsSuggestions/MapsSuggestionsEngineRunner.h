/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>
#import <MapsSuggestions/MapsSuggestionsSink.h>
#import <MapsSuggestions/MapsSuggestionsJSONable.h>

@class MapsSuggestionsEngine, NSString;

@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsJSONable> {

	Queue _queue;
	MapsSuggestionsEngine* _engine;
	Config _config;
	State _state;

}

@property (nonatomic,__weak,readonly) MapsSuggestionsEngine * engine; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(MapsSuggestionsEngine *)engine;
-(NSString *)uniqueName;
-(void)removeTrigger:(id)arg1 ;
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(id)objectForJSON;
-(void)triggerFired:(id)arg1 ;
-(void)addRunCondition:(id)arg1 ;
-(void)addTrigger:(id)arg1 ;
-(void)addPostFilter:(id)arg1 ;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(char)arg10 timerClass:(Class)arg11 ;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(char)arg10 ;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 maxEntries:(unsigned long long)arg7 ;
-(void)removeRunCondition:(id)arg1 ;
-(void)scheduleNextRun;
-(void)runASAP;
@end
