/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSPanel.h>

@class NSString, CPKEmojiPreviewView;

@interface CPKEmojiIMPreviewWindow : NSPanel {

	NSString* _emojiString;
	CPKEmojiPreviewView* _previewView;

}

@property (assign) CPKEmojiPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (copy) NSString * emojiString;                           //@synthesize emojiString=_emojiString - In the implementation block
-(void)dealloc;
-(id)init;
-(CPKEmojiPreviewView *)previewView;
-(void)setEmojiString:(NSString *)arg1 ;
-(NSString *)emojiString;
-(void)showAtScreenLocation:(CGPoint)arg1 ;
-(void)showAtInsertionPoint;
-(void)setPreviewView:(CPKEmojiPreviewView *)arg1 ;
@end

