/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTableCellView.h>

@class CalUIDelayedHoverButton, NSTrackingArea;

@interface CalUIDelayedHoverButtonTableCellView : NSTableCellView {

	char _cancelButtonTimer;
	CalUIDelayedHoverButton* _button;
	NSTrackingArea* _trackingArea;

}

@property (retain) CalUIDelayedHoverButton * button;              //@synthesize button=_button - In the implementation block
@property (assign) char cancelButtonTimer;                        //@synthesize cancelButtonTimer=_cancelButtonTimer - In the implementation block
@property (retain) NSTrackingArea * trackingArea;                 //@synthesize trackingArea=_trackingArea - In the implementation block
-(void)dealloc;
-(void)viewDidMoveToWindow;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(NSTrackingArea *)trackingArea;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)updateTrackingAreas;
-(CalUIDelayedHoverButton *)button;
-(void)addButton:(id)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)showButton;
-(void)setButton:(CalUIDelayedHoverButton *)arg1 ;
-(void)hideTransientButton;
-(char)buttonStateIsLocked;
-(void)showButtonAfterDelay;
-(void)setCancelButtonTimer:(char)arg1 ;
-(char)buttonShouldAlwaysBeShown;
-(void)hideButton;
-(CGPoint)currentMouseLocation;
-(void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)arg1 ;
-(char)cancelButtonTimer;
-(char)mouseInView;
@end
