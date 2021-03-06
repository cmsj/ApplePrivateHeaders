/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSChangeSpelling.h>
#import <libobjc.A.dylib/NSIgnoreMisspelledWords.h>

@class NSString, NSColor, NSFont;

@interface NSText : NSView <NSChangeSpelling, NSIgnoreMisspelledWords> {

	id _ivars;

}

@property (copy) NSString * string; 
@property (assign) id<NSTextDelegate> delegate; 
@property (getter=isEditable) char editable; 
@property (getter=isSelectable) char selectable; 
@property (getter=isRichText) char richText; 
@property (assign) char importsGraphics; 
@property (getter=isFieldEditor) char fieldEditor; 
@property (assign) char usesFontPanel; 
@property (assign) char drawsBackground; 
@property (copy) NSColor * backgroundColor; 
@property (getter=isRulerVisible,readonly) char rulerVisible; 
@property (assign) NSRange selectedRange; 
@property (retain) NSFont * font; 
@property (copy) NSColor * textColor; 
@property (assign) long long alignment; 
@property (assign) long long baseWritingDirection; 
@property (assign) CGSize maxSize; 
@property (assign) CGSize minSize; 
@property (getter=isHorizontallyResizable) char horizontallyResizable; 
@property (getter=isVerticallyResizable) char verticallyResizable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(NSString *)string;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSTextDelegate>)delegate;
-(void)setString:(NSString *)arg1 ;
-(void)setDelegate:(id<NSTextDelegate>)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(long long)baseWritingDirection;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(CGSize)minSize;
-(CGSize)maxSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isFieldEditor;
-(NSColor *)backgroundColor;
-(void)setDrawsBackground:(char)arg1 ;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)sizeToFit;
-(NSColor *)textColor;
-(void)accessibilityPostNotification:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(unsigned long long)accessibilityInsertionPointLineNumber;
-(NSRange)accessibilitySharedCharacterRange;
-(NSRange)accessibilityVisibleCharacterRange;
-(id)accessibilitySelectedText;
-(void)copy:(id)arg1 ;
-(char)isEditable;
-(id)accessibilityValueAttribute;
-(void)setTextColor:(NSColor *)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setSelectable:(char)arg1 ;
-(void)selectAll:(id)arg1 ;
-(char)drawsBackground;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(NSRange)selectedRange;
-(char)isSelectable;
-(char)importsGraphics;
-(void)setImportsGraphics:(char)arg1 ;
-(void)setUsesFontPanel:(char)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setHorizontallyResizable:(char)arg1 ;
-(void)setVerticallyResizable:(char)arg1 ;
-(void)setRichText:(char)arg1 ;
-(NSRange)accessibilitySelectedRange;
-(CGRect)accessibilityBoundsForCharacterRange:(NSRange)arg1 ;
-(void)accessibilitySetSelectedText:(id)arg1 ;
-(void)accessibilitySetSelectedRange:(NSRange)arg1 ;
-(char)accessibilityIsVisibleCharacterRangeSettable;
-(void)accessibilitySetVisibleCharacterRange:(NSRange)arg1 ;
-(unsigned long long)accessibilityLineNumberForCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)accessibilityCharacterRangeForLineNumber:(unsigned long long)arg1 ;
-(NSRange)accessibilityCharacterRangeForPosition:(CGPoint)arg1 ;
-(id)accessibilityRTFForCharacterRange:(NSRange)arg1 ;
-(id)accessibilityAXAttributedStringForCharacterRange:(NSRange)arg1 parent:(id)arg2 ;
-(NSRange)accessibilityStyleRangeForCharacterIndex:(unsigned long long)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)underline:(id)arg1 ;
-(void)unscript:(id)arg1 ;
-(void)superscript:(id)arg1 ;
-(void)subscript:(id)arg1 ;
-(void)copyFont:(id)arg1 ;
-(void)pasteFont:(id)arg1 ;
-(char)isRichText;
-(void)delete:(id)arg1 ;
-(void)checkSpelling:(id)arg1 ;
-(void)changeSpelling:(id)arg1 ;
-(void)ignoreSpelling:(id)arg1 ;
-(void)setFieldEditor:(char)arg1 ;
-(id)RTFFromRange:(NSRange)arg1 ;
-(id)RTFDFromRange:(NSRange)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withRTF:(id)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withRTFD:(id)arg2 ;
-(char)writeRTFDToFile:(id)arg1 atomically:(char)arg2 ;
-(char)readRTFDFromFile:(id)arg1 ;
-(void)setTextColor:(id)arg1 range:(NSRange)arg2 ;
-(void)setFont:(id)arg1 range:(NSRange)arg2 ;
-(char)usesFontPanel;
-(char)isHorizontallyResizable;
-(char)isVerticallyResizable;
-(void)copyRuler:(id)arg1 ;
-(void)pasteRuler:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)alignCenter:(id)arg1 ;
-(void)toggleRuler:(id)arg1 ;
-(char)isRulerVisible;
-(id)accessibilityTextLinkAtIndex:(unsigned long long)arg1 ;
-(id)accessibilityAttachmentAtIndex:(unsigned long long)arg1 ;
-(void)accessibilityPostNotification:(id)arg1 withNotificationElement:(id)arg2 ;
-(id)accessibilityTextView;
-(unsigned long long)_numberOfLinesToCharacterIndex:(unsigned long long)arg1 ;
-(char)accessibilityIsSelectedTextSettable;
-(char)accessibilityIsSelectedRangeSettable;
-(id)accessibilitySharedTextViews;
-(id)accessibilitySharedViewForIndex:(long long)arg1 ;
-(id)accessibilityAttachments;
-(unsigned long long)accessibilityIndexForAttachment:(id)arg1 ;
-(id)accessibilityTextLinks;
@end

