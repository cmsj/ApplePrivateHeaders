/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVCGMagicZoomWindow.h>
#import <libobjc.A.dylib/AXEEventTapListener.h>

@protocol AXVBorderedZoomWindowDelegate;
@class NSColor, AXVOverlayWindow, AXVBorderedLayer, NSString;

@interface AXVBorderedZoomWindow : AXVCGMagicZoomWindow <AXEEventTapListener> {

	char _showBorder;
	char __inResizeMode;
	id<AXVBorderedZoomWindowDelegate> _delegate;
	unsigned long long _borderStyle;
	double _borderThickness;
	NSColor* _borderColor;
	double _highlightRatio;
	NSColor* _highlightColor;
	double _cornerRadius;
	unsigned long long _allowedResizeTargets;
	AXVOverlayWindow* __overlayWindow;
	AXVBorderedLayer* __borderedLayer;
	AXVBorderedLayer* __resizeModeOKButtonLayer;
	/*^block*/id __customPlacementBlock;
	unsigned long long __mouseOverRegion;
	unsigned long long __mouseDownRegion;
	CGPoint __mouseLocationAtDragStart;
	CGPoint __previousDragMouseLocation;
	CGRect __zoomWindowFrameAtDragStart;

}

@property (nonatomic,retain) AXVOverlayWindow * _overlayWindow;                              //@synthesize _overlayWindow=__overlayWindow - In the implementation block
@property (nonatomic,retain) AXVBorderedLayer * _borderedLayer;                              //@synthesize _borderedLayer=__borderedLayer - In the implementation block
@property (nonatomic,retain) AXVBorderedLayer * _resizeModeOKButtonLayer;                    //@synthesize _resizeModeOKButtonLayer=__resizeModeOKButtonLayer - In the implementation block
@property (assign,setter=_setInResizeMode:,nonatomic) char _inResizeMode;                    //@synthesize _inResizeMode=__inResizeMode - In the implementation block
@property (nonatomic,copy) id _customPlacementBlock;                                         //@synthesize _customPlacementBlock=__customPlacementBlock - In the implementation block
@property (assign,nonatomic) CGPoint _mouseLocationAtDragStart;                              //@synthesize _mouseLocationAtDragStart=__mouseLocationAtDragStart - In the implementation block
@property (assign,nonatomic) CGPoint _previousDragMouseLocation;                             //@synthesize _previousDragMouseLocation=__previousDragMouseLocation - In the implementation block
@property (assign,nonatomic) CGRect _zoomWindowFrameAtDragStart;                             //@synthesize _zoomWindowFrameAtDragStart=__zoomWindowFrameAtDragStart - In the implementation block
@property (assign,nonatomic) unsigned long long _mouseOverRegion;                            //@synthesize _mouseOverRegion=__mouseOverRegion - In the implementation block
@property (assign,nonatomic) unsigned long long _mouseDownRegion;                            //@synthesize _mouseDownRegion=__mouseDownRegion - In the implementation block
@property (assign,nonatomic,__weak) id<AXVBorderedZoomWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showBorder;                                                //@synthesize showBorder=_showBorder - In the implementation block
@property (assign,nonatomic) unsigned long long borderStyle;                                 //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) double borderThickness;                                         //@synthesize borderThickness=_borderThickness - In the implementation block
@property (nonatomic,readonly) double totalBorderThickness; 
@property (nonatomic,copy) NSColor * borderColor;                                            //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double highlightRatio;                                          //@synthesize highlightRatio=_highlightRatio - In the implementation block
@property (nonatomic,copy) NSColor * highlightColor;                                         //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long allowedResizeTargets;                        //@synthesize allowedResizeTargets=_allowedResizeTargets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_resizeModeWindowBackgroundColor;
+(id)_resizeModeOKButtonBackgroundColor;
+(unsigned long long)_mouseOverRegionForZoomWindowFrame:(CGRect)arg1 resizeModeOKButtonFrame:(CGRect)arg2 mouseLocation:(CGPoint)arg3 resizeHandleHalfThickness:(double)arg4 ;
+(char)_draggingAllowedForMouseOverRegion:(unsigned long long)arg1 allowedResizeTargets:(unsigned long long)arg2 ;
+(id)_resizeModeOKButtonMouseDownBackgroundColor;
+(int)_mouseCursorTypeForMouseOverRegion:(unsigned long long)arg1 mouseButtonDown:(char)arg2 ;
+(id)_resizeModeOKButtonMouseOverBackgroundColor;
+(CGRect)_frameFromOriginalFrame:(CGRect)arg1 mouseDownRegion:(unsigned long long)arg2 dragDelta:(CGPoint)arg3 minimumSize:(CGSize)arg4 ;
+(id)reservedSystemZoomWindow0;
+(id)reservedSystemZoomWindow1;
-(void)dealloc;
-(id)init;
-(id<AXVBorderedZoomWindowDelegate>)delegate;
-(void)setDelegate:(id<AXVBorderedZoomWindowDelegate>)arg1 ;
-(NSColor *)borderColor;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(NSColor *)arg1 ;
-(double)cornerRadius;
-(NSColor *)highlightColor;
-(void)hide;
-(void)show;
-(AXVOverlayWindow *)_overlayWindow;
-(void)setHighlightColor:(NSColor *)arg1 ;
-(unsigned long long)borderStyle;
-(void)setBorderStyle:(unsigned long long)arg1 ;
-(double)borderThickness;
-(void)setShowBorder:(char)arg1 ;
-(id)initWithZoomWindowNumber:(long long)arg1 referenceWindow:(id)arg2 ;
-(void)setMaxZoomedWindowLevel:(long long)arg1 ;
-(void)levelDidChange;
-(void)frameDidChange;
-(id)initWithReferenceWindow:(id)arg1 ;
-(CGEventRef)eventTapManager:(id)arg1 activelyTappedMouseEvent:(id)arg2 cgEvent:(CGEventRef)arg3 withProxy:(CGEventTapProxyRef)arg4 ;
-(void)setBorderThickness:(double)arg1 ;
-(void)setHighlightRatio:(double)arg1 ;
-(AXVBorderedLayer *)_borderedLayer;
-(double)highlightRatio;
-(void)set_borderedLayer:(AXVBorderedLayer *)arg1 ;
-(void)set_overlayWindow:(AXVOverlayWindow *)arg1 ;
-(char)_inResizeMode;
-(void)_setInResizeMode:(char)arg1 ;
-(void)set_resizeModeOKButtonLayer:(AXVBorderedLayer *)arg1 ;
-(void)set_customPlacementBlock:(id)arg1 ;
-(AXVBorderedLayer *)_resizeModeOKButtonLayer;
-(unsigned long long)_mouseDownRegion;
-(unsigned long long)allowedResizeTargets;
-(void)set_mouseDownRegion:(unsigned long long)arg1 ;
-(void)_setResizeModeOKButtonBackgroundColor:(id)arg1 ;
-(void)set_mouseLocationAtDragStart:(CGPoint)arg1 ;
-(void)set_zoomWindowFrameAtDragStart:(CGRect)arg1 ;
-(void)_exitResizeMode;
-(CGPoint)_mouseLocationAtDragStart;
-(double)totalBorderThickness;
-(CGRect)_zoomWindowFrameAtDragStart;
-(id)_customPlacementBlock;
-(CGPoint)_previousDragMouseLocation;
-(void)set_mouseOverRegion:(unsigned long long)arg1 ;
-(void)set_previousDragMouseLocation:(CGPoint)arg1 ;
-(char)showBorder;
-(void)enterResizeModeWithCustomPlacementBlock:(/*^block*/id)arg1 ;
-(void)setAllowedResizeTargets:(unsigned long long)arg1 ;
-(unsigned long long)_mouseOverRegion;
@end
