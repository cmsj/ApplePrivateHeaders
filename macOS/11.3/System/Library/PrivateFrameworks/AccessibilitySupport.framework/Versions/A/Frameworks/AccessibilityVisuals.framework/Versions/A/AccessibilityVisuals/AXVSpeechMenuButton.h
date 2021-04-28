/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AppKit/NSButton.h>

@class NSColor;

@interface AXVSpeechMenuButton : NSButton {

	NSColor* __enterColor;
	NSColor* __exitColor;

}

@property (nonatomic,copy) NSColor * _enterColor;              //@synthesize _enterColor=__enterColor - In the implementation block
@property (nonatomic,copy) NSColor * _exitColor;               //@synthesize _exitColor=__exitColor - In the implementation block
+(id)buttonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)set_enterColor:(NSColor *)arg1 ;
-(void)set_exitColor:(NSColor *)arg1 ;
-(NSColor *)_enterColor;
-(NSColor *)_exitColor;
-(void)trackMouseWithBound:(CGRect)arg1 enterBorderColor:(id)arg2 exitBorderColor:(id)arg3 ;
@end
