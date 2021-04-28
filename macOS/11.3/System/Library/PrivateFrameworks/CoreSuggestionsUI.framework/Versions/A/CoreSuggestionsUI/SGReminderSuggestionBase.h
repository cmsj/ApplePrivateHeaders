/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/Versions/A/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGReminder, NSString;

@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGReminder* _reminder;
	NSString* _notes;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)url;
-(id)location;
-(id)title;
-(id)userActivity;
-(id)notes;
-(id)locationString;
-(id)dueDateComponents;
-(id)primaryActionTitle;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionAttributedSubtitle;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(char)wantsExtendedDetailOnlyView;
-(long long)locationProximity;
-(id)realtimeSuggestion;
-(id)initWithRealtimeReminder:(id)arg1 ;
-(id)suggestionsSecondTitle;
@end
