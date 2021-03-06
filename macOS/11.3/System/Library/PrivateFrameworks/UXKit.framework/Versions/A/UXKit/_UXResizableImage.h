/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <AppKit/NSImage.h>

@class NSImage;

@interface _UXResizableImage : NSImage {

	NSImage* _topLeftCorner;
	NSImage* _topEdgeFill;
	NSImage* _topRightCorner;
	NSImage* _leftEdgeFill;
	NSImage* _centerFill;
	NSImage* _rightEdgeFill;
	NSImage* _bottomLeftCorner;
	NSImage* _bottomEdgeFill;
	NSImage* _bottomRightCorner;
	double _scale;
	char _alwaysStretches;

}

@property (assign,nonatomic) char alwaysStretches;              //@synthesize alwaysStretches=_alwaysStretches - In the implementation block
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(char)arg5 hints:(id)arg6 ;
-(id)initWithImage:(id)arg1 capInsets:(NSEdgeInsets)arg2 ;
-(CGRect)_contentStretchInPixels;
-(char)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(CGSize)_sizeInPixels;
-(CGRect)_contentInsetsInPixels:(NSEdgeInsets)arg1 emptySizeFallback:(/*^block*/id)arg2 ;
-(CGRect)_contentRectInPixels;
-(void)_setupNinePartFromImage:(id)arg1 ;
-(char)alwaysStretches;
-(void)setAlwaysStretches:(char)arg1 ;
@end

