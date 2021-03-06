/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/TTAttachment.h>

@class ICBaseAttachment, NSString;

@interface ICAbstractTextAttachment : NSTextAttachment <TTAttachment> {

	ICBaseAttachment* _attachment;

}

@property (nonatomic,retain) ICBaseAttachment * attachment;                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewIdentifier; 
@property (getter=isUnsupported,nonatomic,readonly) char unsupported; 
@property (nonatomic,readonly) char containsFindableText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textAttachmentWithBaseAttachment:(id)arg1 ;
-(ICBaseAttachment *)attachment;
-(void)setAttachment:(ICBaseAttachment *)arg1 ;
-(char)allowsTextAttachmentView;
-(char)usesTextAttachmentView;
-(id)attachmentInContext:(id)arg1 ;
-(id)attachmentIdentifier;
-(char)isEqualToModelComparable:(id)arg1 ;
-(Class)attachmentViewClass;
-(id)attachmentUTI;
-(id)inlineAttachmentInContext:(id)arg1 ;
-(char)isUnsupported;
-(id)newlyCreatedViewForManualRendering:(char)arg1 ;
-(Class)attachmentViewControllerClass;
-(id)newlyCreatedView;
-(id)newlyCreatedViewForManualRendering;
-(NSString *)viewIdentifier;
-(char)containsFindableText;
@end

