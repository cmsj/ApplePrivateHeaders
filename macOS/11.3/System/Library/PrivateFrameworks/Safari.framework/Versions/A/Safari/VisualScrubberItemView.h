/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSScrubberItemView.h>

@protocol VisualScrubberItemViewAccessibilityDelegate;
@class NSView, _VisualScrubberItemViewAccessibilityWrapper, NSString;

@interface VisualScrubberItemView : NSScrubberItemView {

	NSView* _lighteningLayerView;
	NSView* _tintOverlayView;
	_VisualScrubberItemViewAccessibilityWrapper* _accessibilityWrapper;
	NSView* _innerView;
	NSString* _contentSizeObservationKey;
	id<VisualScrubberItemViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (nonatomic,retain) NSView * innerView;                                                                        //@synthesize innerView=_innerView - In the implementation block
@property (nonatomic,copy) NSString * contentSizeObservationKey;                                                        //@synthesize contentSizeObservationKey=_contentSizeObservationKey - In the implementation block
@property (assign,nonatomic,__weak) id<VisualScrubberItemViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(void)dealloc;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInnerView:(NSView *)arg1 ;
-(NSView *)innerView;
-(id<VisualScrubberItemViewAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<VisualScrubberItemViewAccessibilityDelegate>)arg1 ;
-(void)_clearInnerViewObservers;
-(CGSize)_innerViewSizeForBounds:(CGRect)arg1 ;
-(void)_addInnerViewObservers;
-(void)setInnerView:(id)arg1 contentSizeObservationKey:(id)arg2 ;
-(void)_updateTint;
-(void)setContentSizeObservationKey:(NSString *)arg1 ;
-(void)setAcccessibilityDelegate:(id)arg1 ;
-(NSString *)contentSizeObservationKey;
@end
