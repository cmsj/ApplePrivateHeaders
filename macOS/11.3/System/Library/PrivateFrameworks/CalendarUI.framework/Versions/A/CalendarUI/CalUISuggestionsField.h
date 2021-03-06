/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUIResizingTextField.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultWindowDelegate.h>
#import <libobjc.A.dylib/NSCandidateListTouchBarItemDelegate.h>

@protocol CalUISuggestionsFieldDelegate, CalUIAutocompleteFieldDelegate;
@class CNAutocompleteResultWindowBase, CalUICandidateTouchBar, NSScrollView, NSLayoutConstraint, NSArray, NSString;

@interface CalUISuggestionsField : CalUIResizingTextField <NSWindowDelegate, CNAutocompleteResultWindowDelegate, NSCandidateListTouchBarItemDelegate> {

	CNAutocompleteResultWindowBase* _suggestionWindow;
	char _suggestionsAreOptional;
	char _queryInBecomeFirstResponder;
	char _selectAllInBecomeFirstResponder;
	char _updateTextWithSelectedSuggestion;
	char _autocompleteStyle;
	char _shouldLogSuggestionAccuracy;
	char _suppressTouchBar;
	char _showStringValueInTouchBar;
	char _suggestionWindowNeedsInitialFrameUpdate;
	char _isEditing;
	char _isDirectRequest;
	char _suggestionWasChosen;
	id<CalUISuggestionsFieldDelegate> _suggestionsDelegate;
	id<CalUIAutocompleteFieldDelegate> _autoCompleteDelegate;
	unsigned long long _minimumQueryLength;
	CalUICandidateTouchBar* _candidateTouchBar;
	NSScrollView* _scrollView;
	NSLayoutConstraint* _scrollHeight;
	NSLayoutConstraint* _maxScrollHeight;

}

@property (readonly) CNAutocompleteResultWindowBase * suggestionWindow; 
@property (assign) char suggestionWindowNeedsInitialFrameUpdate;                         //@synthesize suggestionWindowNeedsInitialFrameUpdate=_suggestionWindowNeedsInitialFrameUpdate - In the implementation block
@property (retain) CalUICandidateTouchBar * candidateTouchBar;                           //@synthesize candidateTouchBar=_candidateTouchBar - In the implementation block
@property (assign) char isEditing;                                                       //@synthesize isEditing=_isEditing - In the implementation block
@property (assign) char isDirectRequest;                                                 //@synthesize isDirectRequest=_isDirectRequest - In the implementation block
@property (assign) char suggestionWasChosen;                                             //@synthesize suggestionWasChosen=_suggestionWasChosen - In the implementation block
@property (retain) NSScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (retain) NSLayoutConstraint * scrollHeight;                                    //@synthesize scrollHeight=_scrollHeight - In the implementation block
@property (retain) NSLayoutConstraint * maxScrollHeight;                                 //@synthesize maxScrollHeight=_maxScrollHeight - In the implementation block
@property (__weak) id<CalUISuggestionsFieldDelegate> suggestionsDelegate;                //@synthesize suggestionsDelegate=_suggestionsDelegate - In the implementation block
@property (__weak) id<CalUIAutocompleteFieldDelegate> autoCompleteDelegate;              //@synthesize autoCompleteDelegate=_autoCompleteDelegate - In the implementation block
@property (assign) char suggestionsAreOptional;                                          //@synthesize suggestionsAreOptional=_suggestionsAreOptional - In the implementation block
@property (assign) char queryInBecomeFirstResponder;                                     //@synthesize queryInBecomeFirstResponder=_queryInBecomeFirstResponder - In the implementation block
@property (assign) char selectAllInBecomeFirstResponder;                                 //@synthesize selectAllInBecomeFirstResponder=_selectAllInBecomeFirstResponder - In the implementation block
@property (assign) char updateTextWithSelectedSuggestion;                                //@synthesize updateTextWithSelectedSuggestion=_updateTextWithSelectedSuggestion - In the implementation block
@property (assign) char autocompleteStyle;                                               //@synthesize autocompleteStyle=_autocompleteStyle - In the implementation block
@property (assign) unsigned long long minimumQueryLength;                                //@synthesize minimumQueryLength=_minimumQueryLength - In the implementation block
@property (assign) char shouldLogSuggestionAccuracy;                                     //@synthesize shouldLogSuggestionAccuracy=_shouldLogSuggestionAccuracy - In the implementation block
@property (readonly) NSArray * suggestions; 
@property (readonly) NSString * selectedSuggestion; 
@property (readonly) unsigned long long indexOfSelectedSuggestion; 
@property (assign) char suppressTouchBar;                                                //@synthesize suppressTouchBar=_suppressTouchBar - In the implementation block
@property (assign) char showStringValueInTouchBar;                                       //@synthesize showStringValueInTouchBar=_showStringValueInTouchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setStringValue:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(NSScrollView *)scrollView;
-(id)touchBar;
-(id)accessibilitySharedFocusElements;
-(char)isEditing;
-(char)becomeFirstResponder;
-(id)makeTouchBar;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)candidateListTouchBarItem:(id)arg1 beginSelectingCandidateAtIndex:(long long)arg2 ;
-(void)candidateListTouchBarItem:(id)arg1 changeSelectionFromCandidateAtIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(char)_window:(id)arg1 shouldCloseForClosingParentPopoverWindowWithTransientContext:(char)arg2 ;
-(NSArray *)suggestions;
-(NSLayoutConstraint *)scrollHeight;
-(void)clearSuggestions;
-(void)setIsEditing:(char)arg1 ;
-(id)initWithResizeEnabled:(char)arg1 ;
-(void)setSuppressTouchBar:(char)arg1 ;
-(void)setSuggestionsDelegate:(id<CalUISuggestionsFieldDelegate>)arg1 ;
-(void)setAutoCompleteDelegate:(id<CalUIAutocompleteFieldDelegate>)arg1 ;
-(void)setMinimumQueryLength:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSelectedSuggestion;
-(void)setSuggestionsAreOptional:(char)arg1 ;
-(void)setShouldLogSuggestionAccuracy:(char)arg1 ;
-(char)chooseSelected;
-(void)updateWindowFrameOriginFromNotification:(id)arg1 ;
-(char)autocompleteStyle;
-(id)newSuggestionWindow;
-(void)createSuggestionController;
-(char)showStringValueInTouchBar;
-(void)updateCandidateTouchBarWithFieldStringValue;
-(CalUICandidateTouchBar *)candidateTouchBar;
-(char)queryInBecomeFirstResponder;
-(void)initiateQuery;
-(void)initiateQueryIfNeeded;
-(char)selectAllInBecomeFirstResponder;
-(void)setSuggestionWasChosen:(char)arg1 ;
-(void)updateFieldValueWithSuggestion:(id)arg1 ;
-(id<CalUISuggestionsFieldDelegate>)suggestionsDelegate;
-(CNAutocompleteResultWindowBase *)suggestionWindow;
-(void)selectedResult:(id)arg1 ;
-(NSString *)selectedSuggestion;
-(char)isDirectRequest;
-(unsigned long long)minimumQueryLength;
-(void)setIsDirectRequest:(char)arg1 ;
-(char)wantsQuerySuggestions;
-(char)wantsZKWSuggestions;
-(void)updateWithSuggestions:(id)arg1 ;
-(void)updateSuggestionWindowWithSuggestions:(id)arg1 ;
-(void)updateSuggestionsTouchBarWithSuggestions:(id)arg1 ;
-(char)suggestionWindowNeedsInitialFrameUpdate;
-(void)setSuggestionWindowNeedsInitialFrameUpdate:(char)arg1 ;
-(void)updateWindowFrameOrigin;
-(void)updateSuggestionWindowWidth;
-(char)suggestionsAreOptional;
-(void)updateSuggestionWindow;
-(void)hideSuggestionsWindow;
-(char)updateTextWithSelectedSuggestion;
-(id)suggestionString:(id)arg1 preservingPrefix:(id)arg2 ;
-(void)setCandidateTouchBar:(CalUICandidateTouchBar *)arg1 ;
-(char)suppressTouchBar;
-(void)_selectCandidateAtIndex:(unsigned long long)arg1 endSelecting:(char)arg2 ;
-(void)selectionDidChange:(id)arg1 ;
-(id)viewForResult:(id)arg1 ;
-(id)currentPrefix;
-(id<CalUIAutocompleteFieldDelegate>)autoCompleteDelegate;
-(void)setQueryInBecomeFirstResponder:(char)arg1 ;
-(void)setSelectAllInBecomeFirstResponder:(char)arg1 ;
-(void)setUpdateTextWithSelectedSuggestion:(char)arg1 ;
-(void)setAutocompleteStyle:(char)arg1 ;
-(char)shouldLogSuggestionAccuracy;
-(void)setShowStringValueInTouchBar:(char)arg1 ;
-(char)suggestionWasChosen;
-(void)setScrollHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)maxScrollHeight;
-(void)setMaxScrollHeight:(NSLayoutConstraint *)arg1 ;
@end

