/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSTextViewDelegate.h>

@class PDFKitPopupViewPrivate, NSString;

@interface PDFKitPopupView : NSView <NSTextViewDelegate> {

	PDFKitPopupViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeFromSuperview;
-(char)becomeFirstResponder;
-(void)textDidChange:(id)arg1 ;
-(id)undoManagerForTextView:(id)arg1 ;
-(void)_setupPopupView;
-(void)_presentPopupView;
-(void)_presentPopupView_macOS;
-(void)_updateParentContents;
-(id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3 ;
-(void)_removeControlForAnnotation;
@end

