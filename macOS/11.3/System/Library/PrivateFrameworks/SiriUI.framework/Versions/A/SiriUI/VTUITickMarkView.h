/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>

@class NSColor, CALayer;

@interface VTUITickMarkView : NSView {

	float _phase;
	NSColor* _redColor;
	NSColor* _blueColor;
	NSColor* _backgroundColor;
	CALayer* _checkMaskLayer;
	CALayer* _xMaskLayer;
	int _glyph;

}

@property (assign) float phase; 
@property (assign,nonatomic) int glyph;              //@synthesize glyph=_glyph - In the implementation block
+(id)defaultAnimationForKey:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(float)phase;
-(void)drawRect:(CGRect)arg1 ;
-(void)setPhase:(float)arg1 ;
-(int)glyph;
-(void)setGlyph:(int)arg1 ;
-(void)cycleWithCompletion:(/*^block*/id)arg1 ;
-(id)checkMaskLayer;
-(id)xMaskLayer;
@end

