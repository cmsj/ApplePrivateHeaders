/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGTSearchFieldQueryScopeDelegate, SGTSearchFieldDelegate;
@class NSArray, SGTInput, NSMutableArray, NSMapTable, NSMutableSet, SGTCompletionWindow, SGTCompletionTableView, NSString, SGTSuggestion, SGTQueryGenius, NSTimer, SGTFadeWindowEffect, NSWindowController, _SGTQueryScopeMenuOverride, NSProgressIndicator, NSDictionary;

@interface SGTSearchFieldReserved : NSObject {

	NSArray* suggesters;
	SGTInput* currentInput;
	NSMutableArray* categories;
	NSMapTable* suggestionsByCategory;
	NSMutableSet* categoriesWithIntermediateResults;
	NSArray* displayCategories;
	NSMapTable* displaySuggestionsByCategory;
	SGTCompletionWindow* completionWindow;
	SGTCompletionTableView* completionTableView;
	char settingValue;
	NSString* userTypedString;
	NSMutableArray* suggestions;
	SGTSuggestion* currentSuggestion;
	NSArray* freeTextSuggestions;
	char abortSearchWhenEmptyString;
	char textChangingProgrammatically;
	char open;
	char isDisplayingStaticSuggestions;
	char observingApplicationState;
	char interactingWithButton;
	char textIsMarked;
	char ignoreNextTextValidation;
	double minimumCompletionWindowWidth;
	unsigned long long textChangedID;
	long long typingScope;
	char acceptsScopeSuggestion;
	SGTQueryGenius* genius;
	id eventMonitor;
	NSTimer* autocloseTimer;
	SGTFadeWindowEffect* autocloseFadeEffect;
	double lastInputStartTime;
	id debugEventMonitor;
	NSWindowController* debugWindowController;
	long long savedSelectionIndex;
	char currentSelectionIsAutofirst;
	char selectingBestSuggestion;
	char enforceSelectionWhenPossible;
	char keepCompletionWindowOnWindowDrag;
	char ignoreWindowResizeNotifications;
	char _highlightsMatches;
	id<SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
	id<SGTSearchFieldDelegate> delegate;
	_SGTQueryScopeMenuOverride* queryScopeMenuOverride;
	NSProgressIndicator* spinner;
	long long currentRequest;
	double queryScopeMenuSpinTime;
	NSDictionary* searchDelegateUserInfo;
	NSMutableArray* selectionEventCache;
	SEL selectionSelectorCache;
	char queryStringChangesAreTransient;
	unsigned long long oldStringLength;
	unsigned long long maximumEffectiveInputLength;
	long long searchQueryIndex;
	/*^block*/id _didFindSuggestionsCallback;

}
-(void)dealloc;
-(id)init;
@end

