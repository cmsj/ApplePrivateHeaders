/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@protocol _NSDatePickerOverlayPanelDelegate;
@interface _NSDatePickerOverlayPanel : NSPanel {

	id<_NSDatePickerOverlayPanelDelegate> _panelDelegate;
	id _closeEventMonitor;

}

@property (retain) id _closeEventMonitor;                                                                //@synthesize closeEventMonitor=_closeEventMonitor - In the implementation block
@property (setter=_setPanelDelegate:) id<_NSDatePickerOverlayPanelDelegate> _panelDelegate;              //@synthesize panelDelegate=_panelDelegate - In the implementation block
-(void)dealloc;
-(void)resignKeyWindow;
-(char)canBecomeKeyWindow;
-(void)applicationDidResignActive:(id)arg1 ;
-(void)_setVisible:(char)arg1 ;
-(char)hasKeyAppearance;
-(void)keyDown:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)selectKeyViewPrecedingView:(id)arg1 ;
-(void)selectKeyViewFollowingView:(id)arg1 ;
-(void)_setPanelDelegate:(id)arg1 ;
-(id<_NSDatePickerOverlayPanelDelegate>)_panelDelegate;
-(id)_closeEventMonitor;
-(char)closePopoverIfNecessaryForEvent:(id)arg1 ;
-(void)set_closeEventMonitor:(id)arg1 ;
@end
