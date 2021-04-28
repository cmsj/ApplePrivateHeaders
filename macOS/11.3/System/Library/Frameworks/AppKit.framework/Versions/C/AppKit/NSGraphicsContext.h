/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class CIContext, NSDictionary;

@interface NSGraphicsContext : NSObject

@property (assign) char shouldAntialias; 
@property (assign) unsigned long long imageInterpolation; 
@property (assign) CGPoint patternPhase; 
@property (assign) unsigned long long compositingOperation; 
@property (assign) long long colorRenderingIntent; 
@property (readonly) CIContext * CIContext; 
@property (readonly) void* graphicsPort; 
@property (copy,readonly) NSDictionary * attributes; 
@property (getter=isDrawingToScreen,readonly) char drawingToScreen; 
@property (readonly) CGContextRef CGContext; 
@property (getter=isFlipped,readonly) char flipped; 
+(id)currentContext;
+(void)saveGraphicsState;
+(void)restoreGraphicsState;
+(id)graphicsContextWithBitmapImageRep:(id)arg1 ;
+(char)currentContextDrawingToScreen;
+(id)graphicsContextWithAttributes:(id)arg1 ;
+(id)graphicsContextWithGraphicsPort:(void*)arg1 flipped:(char)arg2 ;
+(void)setCurrentContext:(id)arg1 ;
+(id)graphicsContextWithCGContext:(CGContextRef)arg1 forCALayer:(id)arg2 ;
+(void)_pushGraphicsContext:(id)arg1 ;
+(id)_popGraphicsContext;
+(char)isCurrentContextDrawingToScreen;
+(id)graphicsContextWithWindow:(id)arg1 ;
+(id)graphicsContextWithCGContext:(CGContextRef)arg1 flipped:(char)arg2 ;
+(void)configureGraphicsContextForCALayer:(id)arg1 withCGContext:(CGContextRef)arg2 andRenderWithHandler:(/*^block*/id)arg3 ;
+(void)setGraphicsState:(long long)arg1 ;
+(id)colorFactory;
-(NSDictionary *)attributes;
-(CGContextRef)CGContext;
-(unsigned)contextID;
-(char)isFlipped;
-(void)saveGraphicsState;
-(void)restoreGraphicsState;
-(void*)graphicsPort;
-(CGPoint)patternPhase;
-(void)setPatternPhase:(CGPoint)arg1 ;
-(void)_releaseCIContext;
-(void)flushGraphics;
-(void)setShouldAntialias:(char)arg1 ;
-(char)shouldAntialias;
-(void)setImageInterpolation:(unsigned long long)arg1 ;
-(unsigned long long)imageInterpolation;
-(void)setCompositingOperation:(unsigned long long)arg1 ;
-(unsigned long long)compositingOperation;
-(long long)colorRenderingIntent;
-(void)setColorRenderingIntent:(long long)arg1 ;
-(CIContext *)CIContext;
-(char)isDrawingToScreen;
-(id)CALayer;
-(id)focusStack;
-(void)setFocusStack:(id)arg1 ;
-(id)colorFactory;
@end
