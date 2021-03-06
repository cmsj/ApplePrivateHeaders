/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/QLScrollable.h>
#import <libobjc.A.dylib/QLDrawingLayerDelegate.h>

@protocol QLPreviewPageNavigationDataSource;
@class NSObject, NSMapTable, CALayer, QLDrawingLayer, CAScrollLayer, QLScrollController, NSString;

@interface QLPreviewPageNavigationView : NSView <QLScrollable, QLDrawingLayerDelegate> {

	NSObject*<QLPreviewPageNavigationDataSource> _dataSource;
	char _enableUpdates;
	char _needsUpdate;
	NSMapTable* _pageLayers;
	CALayer* _rootLayer;
	QLDrawingLayer* _maskLayer;
	CAScrollLayer* _pagesLayer;
	QLScrollController* _scrollController;
	int _gradientPositions;
	double _deltas;
	double _scrollValue;

}

@property (assign) id<QLPreviewPageNavigationDataSource> dataSource; 
@property (assign) char enableUpdates; 
@property (assign) double verticalScrollValue; 
@property (readonly) double verticalKnobProportion; 
@property (assign) double horizontalScrollValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingVerticalScrollValue;
+(id)keyPathsForValuesAffectingVerticalKnobProportion;
-(char)mustHandleEvent:(id)arg1 ;
-(void)refreshThumbnails;
-(void)updateThumbnailForPage:(long long)arg1 ;
-(double)verticalScrollValue;
-(void)setVerticalScrollValue:(double)arg1 ;
-(double)verticalKnobProportion;
-(void)drawDrawingLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_updateWithUpdatedDataSource;
-(void)_updatePages;
-(char)_getFullHeight:(double*)arg1 visibleHeight:(double*)arg2 ;
-(void)_scrollToValue:(double)arg1 animate:(char)arg2 ;
-(void)_updatePageThumbnails;
-(int)_selectedHighlightMode;
-(void)_updateScroll;
-(void)_refreshPageThumbnailsReplacingExisting:(char)arg1 ;
-(void)_updateThumbnailForPage:(long long)arg1 replaceExisting:(char)arg2 ;
-(void)scaleFactorDidChange:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)enableUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)viewDidChangeEffectiveAppearance;
-(id<QLPreviewPageNavigationDataSource>)dataSource;
-(void)setDataSource:(id<QLPreviewPageNavigationDataSource>)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityChildren;
-(id)accessibilityRole;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)isAccessibilityElement;
-(id)accessibilitySelectedChildren;
-(char)mouseDownCanMoveWindow;
-(id)accessibilityIdentifier;
-(char)isAccessibilityEnabled;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(unsigned)_CAViewFlags;
-(CGSize)_pageSize;
-(id)_pageLayerForPage:(unsigned long long)arg1 ;
-(void)_setCurrentPage:(unsigned long long)arg1 ;
-(void)setEnableUpdates:(char)arg1 ;
@end

