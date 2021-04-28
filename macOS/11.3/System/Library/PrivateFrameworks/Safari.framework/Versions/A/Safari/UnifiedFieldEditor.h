/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TextFieldEditor.h>
#import <libobjc.A.dylib/NSTextInputClient_IncrementalSearch.h>
#import <libobjc.A.dylib/UnifiedFieldLayoutManagerDelegate.h>

@protocol UnifiedFieldEditorDelegate;
@class NSString;

@interface UnifiedFieldEditor : TextFieldEditor <NSTextInputClient_IncrementalSearch, UnifiedFieldLayoutManagerDelegate> {

	NSString* _previousMarkedText;
	char _selectionWasAutocompleted;
	char _isAdjustingAutocompleteSelection;
	id<UnifiedFieldEditorDelegate> _unifiedFieldEditorDelegate;

}

@property (assign,nonatomic,__weak) id<UnifiedFieldEditorDelegate> unifiedFieldEditorDelegate;                         //@synthesize unifiedFieldEditorDelegate=_unifiedFieldEditorDelegate - In the implementation block
@property (assign,nonatomic) char selectionWasAutocompleted;                                                           //@synthesize selectionWasAutocompleted=_selectionWasAutocompleted - In the implementation block
@property (assign,getter=isAdjustingAutocompleteSelection,nonatomic) char adjustingAutocompleteSelection;              //@synthesize isAdjustingAutocompleteSelection=_isAdjustingAutocompleteSelection - In the implementation block
-(id)init;
-(void)mouseDown:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)didChangeText;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)writablePasteboardTypes;
-(char)writeSelectionToPasteboard:(id)arg1 type:(id)arg2 ;
-(char)canSmoothFontsInLayer;
-(id)selectedTextAttributes;
-(id)acceptableDragTypes;
-(void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(char)arg3 ;
-(char)shouldDrawInsertionPoint;
-(void)smartInsertForString:(id)arg1 replacingRange:(NSRange)arg2 beforeString:(id*)arg3 afterString:(id*)arg4 ;
-(unsigned long long)incrementalSearchClientGeometry;
-(char)wouldHandleEvent:(id)arg1 ;
-(void)setUnifiedFieldEditorDelegate:(id<UnifiedFieldEditorDelegate>)arg1 ;
-(char)pasteReplacesTabsWithSpaces;
-(char)isAdjustingAutocompleteSelection;
-(void)setSelectionWasAutocompleted:(char)arg1 ;
-(void)_notifyFieldIfMarkedTextDidChange;
-(char)selectionWasAutocompleted;
-(void)setAdjustingAutocompleteSelection:(char)arg1 ;
-(char)_allTextSelected;
-(char)_isReflectingSearchTermsWithAllTextSelected;
-(char)_shouldWriteSearchTermsToPasteboardAsLink;
-(id)_replacementStringforWritingToPasteboard;
-(double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)arg1 ;
-(id<UnifiedFieldEditorDelegate>)unifiedFieldEditorDelegate;
@end
