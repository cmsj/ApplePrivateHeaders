/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSSliderKnob, NSSliderTickMarks;

@interface NSSliderTrack : NSView {

	SCD_Struct_NS40 _drawingState;
	NSSliderKnob* _knobMaskView;
	NSSliderTickMarks* _tickmarksMaskView;

}

@property (assign) SCD_Struct_NS39 drawingState; 
@property (assign) CGRect knobMaskFrame; 
@property (assign) CGRect tickmarkFrame; 
@property (__weak) id<NSSliderTickMarksDelegate> tickmarkDelegate; 
-(void)dealloc;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDrawingState:(SCD_Struct_NS39)arg1 ;
-(void)setKnobMaskFrame:(CGRect)arg1 ;
-(void)setTickmarkFrame:(CGRect)arg1 ;
-(void)setTickmarkDelegate:(id<NSSliderTickMarksDelegate>)arg1 ;
-(SCD_Struct_NS39)drawingState;
-(CGRect)knobMaskFrame;
-(CGRect)tickmarkFrame;
-(id<NSSliderTickMarksDelegate>)tickmarkDelegate;
@end

