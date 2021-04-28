/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalUISuggestionsField.h>

@class CNAutocompleteStore;

@interface CalUIAutoCompleteField : CalUISuggestionsField {

	CNAutocompleteStore* _autocompleteStore;

}
-(void)setCNAutocompleteStore:(id)arg1 ;
-(id)autocompleteStore;
-(id)initWithResizeEnabled:(char)arg1 ;
-(id)resultForString:(id)arg1 ;
-(id)newSuggestionWindow;
-(void)createSuggestionController;
-(void)updateSuggestionWindowWithSuggestions:(id)arg1 ;
-(void)updateWindowFrameOrigin;
@end
