/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {

	NSPDFImageRep* _imageRep;

}
-(void)dealloc;
-(char)isFlipped;
-(char)isOpaque;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)numberOfPages;
-(id)imageRep;
-(void)setImageRep:(id)arg1 ;
@end

