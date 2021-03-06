/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalUIAXMiniMonthProxyDelegate;
#import <CalendarUI/CalendarUI-Structs.h>
@class NSView;

@interface CalUIAXMiniMonthProxy : NSObject {

	NSView*<CalUIAXMiniMonthProxyDelegate> _delegate;

}

@property (__weak) NSView*<CalUIAXMiniMonthProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSView*<CalUIAXMiniMonthProxyDelegate>)delegate;
-(void)setDelegate:(NSView*<CalUIAXMiniMonthProxyDelegate>)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)axChildren;
-(id)axSelectedChildren;
@end

