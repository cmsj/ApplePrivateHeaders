/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSView.h>

@class CPKBaseMatrix, NSView, NSImage;

@interface CPKCategoriesView : NSView {

	long long _categoryCount;
	CPKBaseMatrix* _fixedCategories;
	CPKBaseMatrix* _scrollableCategories;
	NSView* _scrollEnclosure;
	char _enabled;
	char _isRTLLayout;
	long long _separatorIndex;
	long long _scrollerIndex;
	long long _lastSelectedIndex;
	NSImage* _nextPageIndicator;
	NSImage* _prevPageIndicator;
	NSImage* _dividerImage;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(id)state;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setState:(id)arg1 ;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 atIndex:(long long)arg2 ;
-(void)setCategoryTitles:(id)arg1 descriptions:(id)arg2 ;
-(void)setSelectedCategoryIndex:(long long)arg1 ;
-(long long)initialSelectionForState:(id)arg1 ;
-(void)fillCategoryInfo:(/*^block*/id)arg1 ;
-(id)selectedCategoryAXElement;
-(void)myDefaultAction:(id)arg1 ;
-(void)scrollItemClicked:(id)arg1 ;
-(void)_selectedCatageoryIndex:(long long)arg1 byUser:(char)arg2 ;
-(long long)_cellIndexFromCategoryIndex:(long long)arg1 outMatrix:(id*)arg2 ;
-(long long)_categoryIndexFromCellIndex:(long long)arg1 inMatrix:(id)arg2 ;
-(char)_shouldIgnoreUserSelectionOnMatrix:(id)arg1 ;
-(void)_scrollToShowCategory:(long long)arg1 animate:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(long long)selectedCategoryIndex;
@end

