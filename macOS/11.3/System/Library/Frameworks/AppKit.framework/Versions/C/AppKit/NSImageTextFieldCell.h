/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>
#import <libobjc.A.dylib/NSOutlineViewInlineOutlineCell.h>

@class NSImageCell, NSImage, NSString;

@interface NSImageTextFieldCell : NSTextFieldCell <NSOutlineViewInlineOutlineCell> {

	NSImageCell* _imageCell;
	unsigned _rowSizeStyle : 3;
	unsigned _outlineCellFrameSet : 1;

}

@property (retain) NSImage * image; 
@property (assign) long long rowSizeStyle; 
@property (readonly) double imageSize; 
@property (assign) CGRect outlineCellFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sourceListFont;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(NSImage *)image;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(long long)rowSizeStyle;
-(void)setRowSizeStyle:(long long)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(double)imageSize;
-(CGRect)_centerInnerBounds:(CGRect)arg1 ;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
-(void)updateOutlineCellFrame:(CGRect*)arg1 withCellFrame:(CGRect)arg2 inView:(id)arg3 ;
-(CGRect)outlineCellFrame;
-(void)setOutlineCellFrame:(CGRect)arg1 ;
-(double)_spacingFromImageToText;
@end

