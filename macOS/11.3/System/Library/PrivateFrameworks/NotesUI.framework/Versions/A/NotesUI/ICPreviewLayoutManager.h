/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICBaseLayoutManager.h>

@class NSTextStorage;

@interface ICPreviewLayoutManager : ICBaseLayoutManager {

	unsigned long long _maxCharacterCount;
	NSTextStorage* _strongTextStorage;

}

@property (assign,nonatomic) unsigned long long maxCharacterCount;              //@synthesize maxCharacterCount=_maxCharacterCount - In the implementation block
@property (nonatomic,retain) NSTextStorage * strongTextStorage;                 //@synthesize strongTextStorage=_strongTextStorage - In the implementation block
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2 ;
-(id)initWithNote:(id)arg1 maxCharacterCount:(unsigned long long)arg2 textContainer:(id)arg3 textController:(id)arg4 ;
-(void)setStrongTextStorage:(NSTextStorage *)arg1 ;
-(void)drawTodosForCharacterRange:(NSRange)arg1 atOrigin:(CGPoint)arg2 ;
-(void)drawTodoItemForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(id)todoImageForParagraphStyle:(id)arg1 ;
-(unsigned long long)maxCharacterCount;
-(void)setMaxCharacterCount:(unsigned long long)arg1 ;
-(NSTextStorage *)strongTextStorage;
@end
