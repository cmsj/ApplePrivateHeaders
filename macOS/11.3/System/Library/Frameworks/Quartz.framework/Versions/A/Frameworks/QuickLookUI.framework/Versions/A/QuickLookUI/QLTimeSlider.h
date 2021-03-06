/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/QLMediaUIScrubberDelegate.h>
#import <libobjc.A.dylib/QLAccessibilityUIElementDelegate.h>

@protocol QLTimeSliderDataSource;
@class NSObject, QLMediaUIScrubber, NSTimer, NSString, NSDictionary, QLAccessibilityUIElement;

@interface QLTimeSlider : NSView <QLMediaUIScrubberDelegate, QLAccessibilityUIElementDelegate> {

	NSObject*<QLTimeSliderDataSource> _dataSource;
	QLMediaUIScrubber* _scrubber;
	double _duration;
	NSTimer* _refreshTimer;
	double _lastDrawPercentage;
	NSString* _lastTimeString;
	char _autoUpdates;
	char _wasPlayingBeforeTracking;
	NSDictionary* _uiElements;
	QLAccessibilityUIElement* _timeFieldAXElement;
	CFDictionaryRef _timeAttributes;
	double _textHeight;
	double _positiveTextWidth;
	double _negativeTextWidth;
	char _willAutoplay;
	char _willHide;

}

@property (retain) QLAccessibilityUIElement * timeFieldAXElement;               //@synthesize timeFieldAXElement=_timeFieldAXElement - In the implementation block
@property (assign) char autoUpdates; 
@property (assign,nonatomic) char willHide;                                     //@synthesize willHide=_willHide - In the implementation block
@property (assign) char willAutoplay;                                           //@synthesize willAutoplay=_willAutoplay - In the implementation block
@property (readonly) char optimizedDrawing; 
@property (readonly) NSObject*<QLTimeSliderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)controlHeight;
+(Class)mediaUIScrubber;
+(id)timeStringFromTimeInterval:(double)arg1 longForm:(char)arg2 ;
+(double)buttonsInterspace;
+(id)soundOffImage;
+(id)soundOnImage;
+(void)initialize;
+(CGSize)buttonSize;
+(id)pauseImage;
+(id)playImage;
-(void)startControlWithDataSource:(id)arg1 ;
-(void)stopControl;
-(char)accessibilityPerformPress:(id)arg1 ;
-(CGRect)frameForUIElementInParentSpace:(id)arg1 ;
-(CGRect)frameForUIElement:(id)arg1 ;
-(id)accessibilityValueFor:(id)arg1 ;
-(char)optimizedDrawing;
-(void)scrubberFrameDidChange:(id)arg1 ;
-(void)setTimeFieldAXElement:(QLAccessibilityUIElement *)arg1 ;
-(void)setWillAutoplay:(char)arg1 ;
-(CGRect)_timeRect;
-(CGRect)_timebarRect;
-(CGRect)_buttonsRect;
-(id)_addButtonWithTag:(long long)arg1 inFrame:(CGRect*)arg2 ;
-(char)willAutoplay;
-(id)_buttonTitleForTag:(long long)arg1 ;
-(id)newButtonWithFrame:(CGRect)arg1 tag:(long long)arg2 title:(id)arg3 ;
-(void)getTimeColorGrayComponents:(double*)arg1 ;
-(QLAccessibilityUIElement *)timeFieldAXElement;
-(void)setWillHide:(char)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<QLTimeSliderDataSource>)dataSource;
-(id)accessibilityChildren;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)mouseUp:(id)arg1 ;
-(void)setNeedsUpdate:(char)arg1 ;
-(void)_updateButtons;
-(CGRect)_trackRect;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(unsigned)_CAViewFlags;
-(void)buttonClicked:(id)arg1 ;
-(void)_updateRefreshTimer;
-(char)willHide;
-(void)_setupButtons;
-(void)setAutoUpdates:(char)arg1 ;
-(char)autoUpdates;
-(void)_updateScrubber;
-(void)scrubberWillStartTracking:(id)arg1 ;
-(double)scrubber:(id)arg1 willChangeValue:(double)arg2 ;
-(void)scrubberDidStopTracking:(id)arg1 ;
@end

