/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol QLDrawingLayerDelegate;
@interface QLDrawingLayer : CALayer {

	id<QLDrawingLayerDelegate> _drawingDelegate;

}

@property (assign) id<QLDrawingLayerDelegate> drawingDelegate;              //@synthesize drawingDelegate=_drawingDelegate - In the implementation block
-(void)drawInContext:(CGContextRef)arg1 ;
-(id<QLDrawingLayerDelegate>)drawingDelegate;
-(void)setDrawingDelegate:(id<QLDrawingLayerDelegate>)arg1 ;
@end
