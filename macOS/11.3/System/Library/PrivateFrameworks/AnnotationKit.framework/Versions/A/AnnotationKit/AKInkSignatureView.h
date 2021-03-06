/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>

@class NSColor, PKCanvasView, PKTool, PKDrawing, NSTrackingArea;

@interface AKInkSignatureView : NSView <PKCanvasViewDelegate> {

	char _hasStrokes;
	NSColor* _strokeColor;
	PKCanvasView* _canvasView;
	PKTool* _tool;
	PKDrawing* _latestDrawing;
	NSTrackingArea* _trackingArea;

}

@property (retain) PKCanvasView * canvasView;                    //@synthesize canvasView=_canvasView - In the implementation block
@property (copy) PKTool * tool;                                  //@synthesize tool=_tool - In the implementation block
@property (retain) PKDrawing * latestDrawing;                    //@synthesize latestDrawing=_latestDrawing - In the implementation block
@property (assign) char hasStrokes;                              //@synthesize hasStrokes=_hasStrokes - In the implementation block
@property (retain) NSTrackingArea * trackingArea;                //@synthesize trackingArea=_trackingArea - In the implementation block
@property (nonatomic,retain) NSColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(void)clear;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(NSColor *)strokeColor;
-(void)setStrokeColor:(NSColor *)arg1 ;
-(NSTrackingArea *)trackingArea;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)teardown;
-(PKTool *)tool;
-(void)setTool:(PKTool *)arg1 ;
-(PKCanvasView *)canvasView;
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(void)canvasViewDrawingDidChange:(id)arg1 ;
-(void)_updateTool;
-(void)setLatestDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)latestDrawing;
-(void)setHasStrokes:(char)arg1 ;
-(CGPathRef)copyPotracedPathAndReturnDrawing:(id*)arg1 ;
-(char)hasStrokes;
@end

