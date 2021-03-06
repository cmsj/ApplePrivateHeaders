/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSPrintOperation, NSShadow, NSImage;

@interface NSPrintThumbnailView : NSView {

	NSPrintOperation* _operation;
	NSShadow* _paperShadow;
	NSImage* _cachedImage;
	long long _basePageNumber;

}
-(void)dealloc;
-(void)setOperation:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewDidChangeBackingProperties;
-(CGSize)_paperSize;
-(CGSize)_pagesLayout;
-(double)_paperAspectRatio;
-(id)_paperShadow;
-(void)invalidateContents;
-(unsigned short)_pagesDirection;
-(long long)basePageNumber;
-(char)_mirrorHorizontal;
-(char)_reversePageOrientation;
-(char)_hasPagesBorder;
-(unsigned short)_pagesBorderType;
-(long long)_pageOffsetForRow:(long long)arg1 column:(long long)arg2 ;
-(void)_drawBorderOfType:(unsigned short)arg1 withScaleFactor:(double)arg2 ;
-(void)setBasePageNumber:(long long)arg1 ;
-(double)widthForHeight:(double)arg1 ;
-(double)heightForWidth:(double)arg1 ;
@end

