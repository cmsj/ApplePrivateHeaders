/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTokenFieldCell.h>

@class NSTextView;

@interface EKUITokenFieldCell : NSTokenFieldCell {

	NSTextView* _fieldEditor;

}

@property (retain) NSTextView * fieldEditor;              //@synthesize fieldEditor=_fieldEditor - In the implementation block
-(id)init;
-(id)fieldEditorForView:(id)arg1 ;
-(void)setFieldEditor:(NSTextView *)arg1 ;
-(NSTextView *)fieldEditor;
-(char)_characterAtIndex:(unsigned long long)arg1 shouldTerminateString:(id)arg2 ;
-(id)_representedObjectsForString:(id)arg1 andAttributedString:(id)arg2 range:(NSRange)arg3 ;
-(char)calUITextFieldEditor:(id)arg1 writeSelectionToPasteboard:(id)arg2 type:(id)arg3 ;
-(void)setCalUITextFieldDelegate:(id)arg1 ;
@end

