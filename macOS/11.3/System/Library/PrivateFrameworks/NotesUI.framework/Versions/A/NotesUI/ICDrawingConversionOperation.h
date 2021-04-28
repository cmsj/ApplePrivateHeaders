/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, ICBaseTextAttachment, ICAttachment;

@interface ICDrawingConversionOperation : NSOperation {

	char _isAutomatic;
	NSManagedObjectID* _attachmentID;
	NSManagedObjectID* _finalAttachmentID;
	ICBaseTextAttachment* _textAttachment;
	ICAttachment* _attachment;

}

@property (nonatomic,retain) ICAttachment * attachment;                            //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) char isAutomatic;                                   //@synthesize isAutomatic=_isAutomatic - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * attachmentID;                   //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * finalAttachmentID;              //@synthesize finalAttachmentID=_finalAttachmentID - In the implementation block
@property (nonatomic,retain) ICBaseTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
-(void)main;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICBaseTextAttachment *)textAttachment;
-(void)setTextAttachment:(ICBaseTextAttachment *)arg1 ;
-(NSManagedObjectID *)attachmentID;
-(char)isAutomatic;
-(id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(char)arg3 ;
-(NSManagedObjectID *)finalAttachmentID;
@end
