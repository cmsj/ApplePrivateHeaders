/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCell.h>
#import <libobjc.A.dylib/NSTextAttachmentCell.h>
@class NSTextAttachment;


@protocol NSTextAttachmentCell <NSObject>
@property (assign) NSTextAttachment * attachment; 
@required
-(CGSize*)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2;
-(void)highlight:(char)arg1 withFrame:(CGRect)arg2 inView:(id)arg3;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4;
-(CGPoint*)cellBaselineOffset;
-(char)wantsToTrackMouse;
-(NSTextAttachment *)attachment;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
-(char)wantsToTrackMouseForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(char)arg5;
-(CGRect*)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4;
-(void)setAttachment:(id)arg1;

@end


@class NSTextAttachment, NSString;

@interface NSTextAttachmentCell : NSCell <NSTextAttachmentCell> {

	NSTextAttachment* _attachment;

}

@property (assign) NSTextAttachment * attachment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityAttributeNames;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(CGSize)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)highlight:(char)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(id)proxy;
-(void)_accessibilityShowMenu:(id)arg1 ;
-(void)setCellBaselineOffset:(CGPoint)arg1 ;
-(id)accessibilityURLAttribute;
-(char)accessibilityIsURLAttributeSettable;
-(CGPoint)cellBaselineOffset;
-(char)wantsToTrackMouse;
-(NSTextAttachment *)attachment;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(char)wantsToTrackMouseForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(char)arg5 ;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(char)wantsToTrackMouseForEvent:(id)arg1 ;
@end
