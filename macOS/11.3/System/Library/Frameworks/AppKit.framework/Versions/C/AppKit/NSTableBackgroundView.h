/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor, NSTableView, NSImage, NSGradient;

@interface NSTableBackgroundView : NSView {

	NSColor* _firstAlternatingColor;
	NSColor* _secondAlternatingColor;
	NSTableView* _tableView;
	NSImage* _backgroundImage;
	NSGradient* _gradient;
	CGSize _cachedSize;
	long long _rubberBandArea;
	char _isOpaque;
	char _shouldDrawVerticalGrid;

}

@property (retain) NSImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign) NSTableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSColor * firstAlternatingColor; 
@property (retain) NSColor * secondAlternatingColor;              //@synthesize secondAlternatingColor=_secondAlternatingColor - In the implementation block
@property (getter=isOpaque) char opaque; 
@property (retain) NSGradient * gradient;                         //@synthesize gradient=_gradient - In the implementation block
@property (assign) long long rubberBandArea;                      //@synthesize rubberBandArea=_rubberBandArea - In the implementation block
@property (assign) char shouldDrawVerticalGrid;                   //@synthesize shouldDrawVerticalGrid=_shouldDrawVerticalGrid - In the implementation block
+(id)defaultAnimationForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_preferredAppearance;
-(NSTableView *)tableView;
-(void)setOpaque:(char)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setTrackingAreasDirty:(int)arg1 ;
-(int)_trackingAreasDirty;
-(void)setTableView:(NSTableView *)arg1 ;
-(NSImage *)backgroundImage;
-(void)setFirstAlternatingColor:(NSColor *)arg1 ;
-(void)setSecondAlternatingColor:(NSColor *)arg1 ;
-(void)setRubberBandArea:(long long)arg1 ;
-(void)setShouldDrawVerticalGrid:(char)arg1 ;
-(void)setBackgroundImage:(NSImage *)arg1 ;
-(NSColor *)firstAlternatingColor;
-(void)setGradient:(NSGradient *)arg1 ;
-(NSGradient *)gradient;
-(void)_drawRect:(CGRect)arg1 inTableCoordsWithHandler:(/*^block*/id)arg2 ;
-(void)_drawBackgroundRect:(CGRect)arg1 rowCount:(unsigned long long)arg2 rowHeight:(double)arg3 rowInset:(double)arg4 cornerRadius:(double)arg5 ;
-(void)_callPublicDrawBackground:(char)arg1 drawGrid:(char)arg2 inRect:(CGRect)arg3 ;
-(void)_drawVerticalGridInDirtyRect:(CGRect)arg1 ;
-(void)_drawGradientBackground;
-(void)_drawAlternatingBackgroundAndGridInRect:(CGRect)arg1 ;
-(NSColor *)secondAlternatingColor;
-(char)shouldDrawVerticalGrid;
-(long long)rubberBandArea;
@end

