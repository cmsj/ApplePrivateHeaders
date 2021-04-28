/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextView, NSTextField, NSView, NSColor;

@interface SHKShareWindowBackgroundView : NSView {

	NSTextView* _messageTextView;
	NSTextField* _charactersCountTextField;
	NSView* _partsSeparatorTopView;
	NSView* _partsSeparatorBottomView;
	int _textureStyle;
	char _hasLinesOfNonDefaultHeight;
	NSColor* _backgroundFillColor;
	char _doNotDrawThirdSeparationLine;

}

@property (assign) int textureStyle;                                         //@synthesize textureStyle=_textureStyle - In the implementation block
@property (copy) NSColor * backgroundFillColor; 
@property (assign,nonatomic) char doNotDrawThirdSeparationLine;              //@synthesize doNotDrawThirdSeparationLine=_doNotDrawThirdSeparationLine - In the implementation block
+(id)defaultAnimationForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)commonInit;
-(int)textureStyle;
-(void)setTextureStyle:(int)arg1 ;
-(char)drawGrid;
-(void)setBackgroundFillColor:(NSColor *)arg1 ;
-(id)SHKBackgroundFillColor;
-(id)_bezierPath;
-(void)_beginClip;
-(void)_endClip;
-(void)drawHorizontalSeparationLineAtHeight:(double)arg1 horizontalPadding:(double)arg2 ;
-(void)drawBevelInRect:(CGRect)arg1 ;
-(void)drawScalableImage:(id)arg1 scaleTopLeft:(CGPoint)arg2 scaleBottomRight:(CGPoint)arg3 inFrame:(CGRect)arg4 ;
-(NSColor *)backgroundFillColor;
-(void)drawTexture;
-(void)drawBevel;
-(void)drawHorizontalSeparationLineAtHeight:(double)arg1 ;
-(char)doNotDrawThirdSeparationLine;
-(void)setDoNotDrawThirdSeparationLine:(char)arg1 ;
@end
