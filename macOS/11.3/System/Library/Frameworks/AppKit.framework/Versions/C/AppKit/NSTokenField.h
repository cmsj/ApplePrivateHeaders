/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextField.h>

@class NSCharacterSet;

@interface NSTokenField : NSTextField {

	long long _trackingRectTag;

}

@property (__weak) id<NSTokenFieldDelegate> delegate; 
@property (assign) unsigned long long tokenStyle; 
@property (assign) double completionDelay; 
@property (copy) NSCharacterSet * tokenizingCharacterSet; 
+(void)initialize;
+(double)defaultCompletionDelay;
+(id)defaultTokenizingCharacterSet;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSTokenFieldDelegate>)delegate;
-(void)setDelegate:(id<NSTokenFieldDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)_commonInit;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(NSCharacterSet *)tokenizingCharacterSet;
-(unsigned long long)tokenStyle;
-(void)setTokenStyle:(unsigned long long)arg1 ;
-(id)tokenFieldCell:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenFieldCell:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenFieldCell:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenFieldCell:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenFieldCell:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenFieldCell:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)tokenFieldCell:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
-(id)tokenFieldCell:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3 ;
-(void)setCompletionDelay:(double)arg1 ;
-(double)completionDelay;
-(void)setTokenizingCharacterSet:(NSCharacterSet *)arg1 ;
-(char)_baselineIsSpecialCasingForMiniFont;
-(id)tokenFieldCell:(id)arg1 tooltipStringForRepresentedObject:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 _immediateActionAnimationControllerForRepresentedObject:(id)arg2 inTextView:(id)arg3 ;
-(char)tokenFieldCell:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3 ;
-(id)tokenFieldCell;
-(void)setDisplaysTokenWhileEditing:(char)arg1 ;
-(char)displaysTokenWhileEditing;
-(id)ns_widgetType;
@end
