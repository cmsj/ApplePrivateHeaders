/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment {

	double _lastAvailableWidth;
	CGSize _lastAttachmentSize;

}

@property (assign,nonatomic) double lastAvailableWidth;              //@synthesize lastAvailableWidth=_lastAvailableWidth - In the implementation block
@property (assign,nonatomic) CGSize lastAttachmentSize;              //@synthesize lastAttachmentSize=_lastAttachmentSize - In the implementation block
-(SCD_Struct_IC1)attachmentBoundsMargins;
-(char)canDragWithoutSelecting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(char)arg3 forStandardizedText:(char)arg4 ;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
-(double)lastAvailableWidth;
-(void)setLastAvailableWidth:(double)arg1 ;
-(CGSize)lastAttachmentSize;
-(void)setLastAttachmentSize:(CGSize)arg1 ;
@end

