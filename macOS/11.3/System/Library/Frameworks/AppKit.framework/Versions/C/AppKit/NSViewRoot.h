/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSView;


@protocol NSViewRoot <NSObject>
@property (getter=isInKeyWindow,readonly) char inKeyWindow; 
@property (readonly) NSView * contentView; 
@property (getter=isVisible,readonly) char visible; 
@property (readonly) double _displayScale; 
@required
-(id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(char)arg4;
-(id)firstResponder;
-(void)sendEvent:(id)arg1;
-(NSView *)contentView;
-(char)isVisible;
-(id)nextEventMatchingMask:(unsigned long long)arg1;
-(char)hasKeyAppearance;
-(char)_controlAppearanceChangesOnKeyStateChange;
-(char)_hasActiveControls;
-(CGPoint*)_convertViewRootPointToScreen:(CGPoint)arg1;
-(char)_hasActiveAppearanceIgnoringKeyFocus;
-(long long)_setTrackingRect:(CGRect)arg1 inside:(char)arg2 owner:(id)arg3 userData:(void*)arg4 useTrackingNum:(long long)arg5;
-(void)_setTrackingAreasDirty;
-(void)_discardTrackingRects:(long long*)arg1 count:(long long)arg2;
-(void)_discardTrackingRect:(long long)arg1;
-(void)_disableTrackingRect:(long long)arg1;
-(void)_enableTrackingRect:(long long)arg1;
-(void)_disableTrackingArea:(id)arg1;
-(void)_enableTrackingArea:(id)arg1;
-(void)_moveTrackingArea:(id)arg1 toRect:(CGRect)arg2;
-(char)_shouldResetCursorRects;
-(id)_discardCursorRectsForView:(id)arg1;
-(char)_isViewRoot;
-(void)_setViewsNeedUpdateConstraints;
-(void)_setViewsNeedLayout;
-(void)_setViewsNeedBuildLayerTree;
-(void)_setViewsNeedDisplay;
-(void)_setNeedsDisplayInRegion:(id)arg1;
-(char)_allowsRootLayerBackingViews;
-(CGPoint*)_convertViewRootPointFromScreen:(CGPoint)arg1;
-(id)_rootViewForViewRoot;
-(void)trackEventsMatchingMask:(unsigned long long)arg1 timeout:(double)arg2 mode:(id)arg3 handler:(/*^block*/id)arg4;
-(void)_addMouseMovedListener:(id)arg1;
-(void)_removeMouseMovedListener:(id)arg1;
-(char)isInKeyWindow;
-(double)_displayScale;

@end

