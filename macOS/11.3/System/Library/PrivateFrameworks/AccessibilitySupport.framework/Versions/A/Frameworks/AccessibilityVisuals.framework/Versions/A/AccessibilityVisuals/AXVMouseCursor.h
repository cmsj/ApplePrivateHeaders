/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
@class AXVOverlayWindow, CALayer, AXFMouseCursorImage;

@interface AXVMouseCursor : NSObject {

	char __atomicKeepCursorImageSynchronizedWithSystem;
	AXVOverlayWindow* __overlayWindow;
	CALayer* __imageLayer;
	AXFMouseCursorImage* __atomicCursorImage;
	double __atomicCursorScale;
	CGPoint __atomicLocation;

}

@property (nonatomic,retain) AXVOverlayWindow * _overlayWindow;                    //@synthesize _overlayWindow=__overlayWindow - In the implementation block
@property (nonatomic,retain) CALayer * _imageLayer;                                //@synthesize _imageLayer=__imageLayer - In the implementation block
@property (retain) AXFMouseCursorImage * _atomicCursorImage;                       //@synthesize _atomicCursorImage=__atomicCursorImage - In the implementation block
@property (assign) CGPoint _atomicLocation;                                        //@synthesize _atomicLocation=__atomicLocation - In the implementation block
@property (assign) double _atomicCursorScale;                                      //@synthesize _atomicCursorScale=__atomicCursorScale - In the implementation block
@property (assign) char _atomicKeepCursorImageSynchronizedWithSystem;              //@synthesize _atomicKeepCursorImageSynchronizedWithSystem=__atomicKeepCursorImageSynchronizedWithSystem - In the implementation block
@property (retain) AXFMouseCursorImage * cursorImage; 
@property (assign) char keepCursorImageSynchronizedWithSystem; 
@property (assign) CGPoint location; 
@property (assign) double cursorScale; 
@property (nonatomic,readonly) char visible; 
-(void)dealloc;
-(id)init;
-(CGPoint)location;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CALayer *)_imageLayer;
-(char)visible;
-(void)hide;
-(void)show;
-(AXVOverlayWindow *)_overlayWindow;
-(void)setLocation:(CGPoint)arg1 ;
-(void)set_overlayWindow:(AXVOverlayWindow *)arg1 ;
-(void)setKeepCursorImageSynchronizedWithSystem:(char)arg1 ;
-(void)_updateCursorScale;
-(AXFMouseCursorImage *)_atomicCursorImage;
-(void)set_atomicCursorImage:(AXFMouseCursorImage *)arg1 ;
-(double)cursorScale;
-(void)_updateImageLayerFrame;
-(char)_atomicKeepCursorImageSynchronizedWithSystem;
-(void)set_atomicKeepCursorImageSynchronizedWithSystem:(char)arg1 ;
-(void)setCursorImage:(AXFMouseCursorImage *)arg1 ;
-(CGPoint)_atomicLocation;
-(void)set_atomicLocation:(CGPoint)arg1 ;
-(double)_atomicCursorScale;
-(void)set_atomicCursorScale:(double)arg1 ;
-(AXFMouseCursorImage *)cursorImage;
-(void)setCursorScale:(double)arg1 ;
-(char)keepCursorImageSynchronizedWithSystem;
-(void)set_imageLayer:(CALayer *)arg1 ;
@end

