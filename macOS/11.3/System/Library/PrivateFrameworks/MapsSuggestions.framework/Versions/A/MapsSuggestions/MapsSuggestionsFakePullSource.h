/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@class NSArray, NSSet, NSString;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	ReadWriteQueue _readwrite;
	NSArray* _entriesToPull;
	NSSet* _fakeCanProduceEntriesOfType;
	unsigned long long _calledStart;
	unsigned long long _calledUpdateSuggestionEntries;
	unsigned long long _calledStop;
	unsigned long long _calledUserRemove;
	unsigned long long _calledFeedbackForEntry;
	unsigned long long _calledfeedbackForMapItem;
	unsigned long long _calledfeedbackForContact;
	/*^block*/id _handlerForFeedback;
	long long _lastUsedRemovalBehavior;
	unsigned long long _totalAdded;
	double _configureFrequency;
	char _configureSendCopies;

}

@property (nonatomic,readonly) unsigned long long calledStart; 
@property (nonatomic,readonly) unsigned long long calledUpdateSuggestionEntries; 
@property (nonatomic,readonly) unsigned long long calledStop; 
@property (nonatomic,readonly) unsigned long long calledUserRemove; 
@property (nonatomic,readonly) unsigned long long calledFeedbackForEntry; 
@property (nonatomic,readonly) unsigned long long calledfeedbackForMapItem; 
@property (nonatomic,readonly) unsigned long long calledfeedbackForContact; 
@property (nonatomic,readonly) unsigned long long totalAdded; 
@property (nonatomic,readonly) long long lastUsedRemovalBehavior; 
@property (assign,nonatomic) double configureFrequency;                                       //@synthesize configureFrequency=_configureFrequency - In the implementation block
@property (assign,nonatomic) char configureSendCopies;                                        //@synthesize configureSendCopies=_configureSendCopies - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isEnabled;
+(unsigned long long)disposition;
-(void)start;
-(void)stop;
-(char)canProduceEntriesOfType:(long long)arg1 ;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
-(unsigned long long)calledStart;
-(unsigned long long)calledStop;
-(unsigned long long)calledUpdateSuggestionEntries;
-(unsigned long long)calledUserRemove;
-(unsigned long long)calledFeedbackForEntry;
-(unsigned long long)calledfeedbackForMapItem;
-(unsigned long long)calledfeedbackForContact;
-(long long)lastUsedRemovalBehavior;
-(unsigned long long)totalAdded;
-(void)configureHandlerForFeedbackBlock:(/*^block*/id)arg1 ;
-(void)configureCanProduceEntriesOfType:(id)arg1 ;
-(void)pushEntries:(id)arg1 ;
-(void)configurePullResponseEntries:(id)arg1 ;
-(double)configureFrequency;
-(void)setConfigureFrequency:(double)arg1 ;
-(char)configureSendCopies;
-(void)setConfigureSendCopies:(char)arg1 ;
@end
