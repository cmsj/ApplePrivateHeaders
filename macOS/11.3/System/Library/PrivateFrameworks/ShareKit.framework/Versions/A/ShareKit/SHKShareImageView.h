/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSImageView.h>

@class NSArray, NSImage;

@interface SHKShareImageView : NSImageView {

	CGRect _contentRect;
	NSArray* _images;
	int _imageStyle;

}

@property (readonly) CGRect contentFrame; 
@property (assign) CGRect contentRect;                      //@synthesize contentRect=_contentRect - In the implementation block
@property (assign) int imageStyle;                          //@synthesize imageStyle=_imageStyle - In the implementation block
@property (readonly) NSImage * decoratedImage; 
@property (retain) NSArray * images; 
-(void)setImage:(id)arg1 ;
-(char)allowsVibrancy;
-(void)drawRect:(CGRect)arg1 ;
-(double)borderWidth;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)contentRect;
-(CGRect)contentFrame;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)setImageStyle:(int)arg1 ;
-(NSImage *)decoratedImage;
-(int)imageStyle;
-(void)setContentRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 images:(id)arg2 ;
-(void)_setImage:(id)arg1 updateImages:(char)arg2 ;
-(void)drawWithFrame:(CGRect)arg1 ;
-(CGRect)mainImageWithBorderFrameForCellBounds:(CGRect)arg1 ;
@end

