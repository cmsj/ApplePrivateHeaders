/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSDatePickerOverlayPanelDelegate.h>

@protocol _NSDatePickerCalendarOverlayDelegate;
@class NSVisualEffectView, NSDate, NSDatePicker, _NSDatePickerOverlayPanel, NSBezierPath;

@interface _NSDatePickerCalendarOverlay : NSObject <_NSDatePickerOverlayPanelDelegate> {

	id<_NSDatePickerCalendarOverlayDelegate> _delegate;
	NSVisualEffectView* _visualEffectView;
	NSDate* _dateValue;
	NSDatePicker* _textDatePicker;
	NSDatePicker* _calendarDatePicker;
	NSDatePicker* _sourceDatePicker;
	_NSDatePickerOverlayPanel* _overlayPanel;
	NSBezierPath* _maskPath;

}

@property (retain) NSVisualEffectView * _visualEffectView;                          //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (retain) NSDatePicker * _textDatePicker;                                  //@synthesize textDatePicker=_textDatePicker - In the implementation block
@property (retain) NSDatePicker * _calendarDatePicker;                              //@synthesize calendarDatePicker=_calendarDatePicker - In the implementation block
@property (__weak) NSDatePicker * _sourceDatePicker;                                //@synthesize sourceDatePicker=_sourceDatePicker - In the implementation block
@property (retain) _NSDatePickerOverlayPanel * _overlayPanel;                       //@synthesize overlayPanel=_overlayPanel - In the implementation block
@property (retain) NSBezierPath * _maskPath;                                        //@synthesize maskPath=_maskPath - In the implementation block
@property (__weak) id<_NSDatePickerCalendarOverlayDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setDateValue:,retain) NSDate * _dateValue;                       //@synthesize dateValue=_dateValue - In the implementation block
-(void)dealloc;
-(void)close;
-(id<_NSDatePickerCalendarOverlayDelegate>)_delegate;
-(NSDate *)_dateValue;
-(void)_configureWithSourceDatePicker:(id)arg1 sourceWindow:(id)arg2 ;
-(void)set_delegate:(id<_NSDatePickerCalendarOverlayDelegate>)arg1 ;
-(void)show;
-(int)_selectedSubfieldElement;
-(void)set_visualEffectView:(NSVisualEffectView *)arg1 ;
-(void)set_sourceDatePicker:(NSDatePicker *)arg1 ;
-(void)set_calendarDatePicker:(NSDatePicker *)arg1 ;
-(void)set_textDatePicker:(NSDatePicker *)arg1 ;
-(void)_setDateValue:(id)arg1 ;
-(void)_setUpPanelWithSourceWindow:(id)arg1 ;
-(void)_sizeToFitAndArrangeForRTL:(char)arg1 ;
-(void)_positionOverlayPanelOverSourceDatePicker;
-(void)calcWindowMaskImage;
-(_NSDatePickerOverlayPanel *)_overlayPanel;
-(void)_positionOverlayWithSourceSubfieldsFrame:(CGRect)arg1 isRTL:(char)arg2 ;
-(NSVisualEffectView *)_visualEffectView;
-(NSDatePicker *)_textDatePicker;
-(NSDatePicker *)_calendarDatePicker;
-(void)set_overlayPanel:(_NSDatePickerOverlayPanel *)arg1 ;
-(NSDatePicker *)_sourceDatePicker;
-(id)_calcWindowMask;
-(void)set_maskPath:(NSBezierPath *)arg1 ;
-(id)_rtlMaskPath;
-(id)_ltrMaskPath;
-(NSBezierPath *)_maskPath;
-(void)_datePickerPanelShouldClose:(id)arg1 ;
-(void)_selectNextKeyViewHidingPanel:(id)arg1 ;
-(void)_selectPreviousKeyViewHidingPanel:(id)arg1 ;
-(char)_eventLocationIsContainedInMask:(id)arg1 ;
-(void)_showOverlayWithSourceSubfieldsFrame:(CGRect)arg1 elementFlags:(unsigned long long)arg2 locale:(id)arg3 calendar:(id)arg4 font:(id)arg5 sourceWindow:(id)arg6 ;
-(void)_setSelectedSubfieldElement:(int)arg1 ;
-(void)_setDatePickerElements:(unsigned long long)arg1 ;
-(unsigned long long)_datePickerElements;
@end

