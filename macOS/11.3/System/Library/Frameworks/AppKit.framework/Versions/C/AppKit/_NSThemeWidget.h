/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>

@interface _NSThemeWidget : NSButton {

	long long _trackingTagNum;
	id _eventMonitor;
	unsigned _ignoreRentry : 1;
	unsigned __themeWidgetReserved : 31;

}
+(void)initialize;
+(id)widgetInView:(id)arg1 withButtonID:(long long)arg2 action:(SEL)arg3 ;
-(void)update;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)viewDidMoveToWindow;
-(NSEdgeInsets)alignmentRectInsets;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(void)startMonitoringFlagsChanged;
-(void)stopMonitoringFlagsChanged;
-(void)setFrameOrigin:(CGPoint)arg1 ignoreRentry:(char)arg2 ;
-(id)initWithButtonID:(long long)arg1 ;
-(void)flagsChanged;
@end

