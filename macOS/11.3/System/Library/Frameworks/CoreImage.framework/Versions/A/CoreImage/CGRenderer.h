/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSString;

@interface CGRenderer : NSObject <CIGVRenderer> {

	CGContextRef context;
	char drawEdgesFirst;
	BOOL drawWithSplines;
	int direction;
	CGSize separation;

}

@property (assign) BOOL drawWithSplines; 
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) char drawEdgesFirst; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGColorRef)_colorForNodeColor:(int)arg1 ;
-(void)_drawNodeContent:(id)arg1 ;
-(void)_drawNodeBadge:(id)arg1 ;
-(void)hyperlinkEdge:(id)arg1 from:(CGPoint)arg2 to:(CGPoint)arg3 ;
-(void)_drawCubicSpline:(id)arg1 ;
-(void)_drawPolyline:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)drawNode:(id)arg1 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(CGSize)separation;
-(char)drawEdgesFirst;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setSeparation:(CGSize)arg1 ;
-(void)setDrawEdgesFirst:(char)arg1 ;
-(BOOL)drawWithSplines;
-(void)setDrawWithSplines:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFileURL:(id)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
@end

